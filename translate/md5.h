#include <bits/stdc++.h>
using namespace std;
void H_getMD5(const unsigned long Message[16]);
static unsigned long State[4]; /* MD5ֵ����4��32bit������ɵģ�Ҳ����4��4Byte�����޷������� */

static unsigned long Count[2]; /* MD5�㷨����Ҫ��ԭ�ַ�����bit���1��0֮�⣬����Ҫ��ĩβ����64bit
                           ��ֵ��ֵ�����ַ�����bit���� mod 2^64������������8byte����64bit */

static unsigned char buffer[64]; /* MD5��ÿ 512bit һ�����������������ÿ��� 512bit */


/* Left_Shift��ʾ����x����ѭ������ n λ */
#define Left_Shift(x,n) (((x)<<(n))|((x)>>(32-(n))))

/* F��G��H��I 4��������MD5��4�������ķ����Ժ��� */
#define F(x,y,z) (((x)&(y))|((~x)&(z)))
#define G(x,y,z) (((x)&(z))|((y)&(~z)))
#define H(x,y,z) ((x)^(y)^(z))
#define I(x,y,z) ((y)^((x)|(~z)))



/* MD5���ֺ���һ��64�Σ�ÿһ�ηֱ�ʹ�ö�Ӧ��λ��������ѭ������ */
const int shift_bit[64] = { 7 ,12,17,22, 7 ,12,17,22, 7 ,12,17,22, 7 ,12,17,22,
                            5 ,9 ,14,20, 5 ,9 ,14,20, 5 ,9 ,14,20, 5 ,9 ,14,20,
                            4 ,11,16,23, 4 ,11,16,23, 4 ,11,16,23, 4 ,11,16,23,
                            6 ,10,15,21, 6 ,10,15,21, 6 ,10,15,21, 6 ,10,15,21 };



/* 
** K_Sin����������sin(i)*2^32���������ֵľ���ֵ��
** ��ǰ����������Ч�ʡ�
*/
const unsigned long K_Sin[64] = {
    0xd76aa478l, 0xe8c7b756l, 0x242070dbl, 0xc1bdceeel,
    0xf57c0fafl, 0x4787c62al, 0xa8304613l, 0xfd469501l,
    0x698098d8l, 0x8b44f7afl, 0xffff5bb1l, 0x895cd7bel,
    0x6b901122l, 0xfd987193l, 0xa679438el, 0x49b40821l,
    0xf61e2562l, 0xc040b340l, 0x265e5a51l, 0xe9b6c7aal,
    0xd62f105dl, 0x02441453l, 0xd8a1e681l, 0xe7d3fbc8l,
    0x21e1cde6l, 0xc33707d6l, 0xf4d50d87l, 0x455a14edl,
    0xa9e3e905l, 0xfcefa3f8l, 0x676f02d9l, 0x8d2a4c8al,
    0xfffa3942l, 0x8771f681l, 0x6d9d6122l, 0xfde5380cl,
    0xa4beea44l, 0x4bdecfa9l, 0xf6bb4b60l, 0xbebfbc70l,
    0x289b7ec6l, 0xeaa127fal, 0xd4ef3085l, 0x04881d05l,
    0xd9d4d039l, 0xe6db99e5l, 0x1fa27cf8l, 0xc4ac5665l,
    0xf4292244l, 0x432aff97l, 0xab9423a7l, 0xfc93a039l,
    0x655b59c3l, 0x8f0ccc92l, 0xffeff47dl, 0x85845dd1l,
    0x6fa87e4fl, 0xfe2ce6e0l, 0xa3014314l, 0x4e0811a1l,
    0xf7537e82l, 0xbd3af235l, 0x2ad7d2bbl, 0xeb86d391l,
};

/*
** Ҫ���ַ�����bitλ���һ��1��Ȼ����������ɸ�0��
** ʹ������bit���� % 512 == 448�������Ҫƴ��512bit��
** Ҳ���� 64 �ֽ�
*/
const unsigned char PADDING[64] = {
    0x80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0,    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0,    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
    0,    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };


void Encode(unsigned char* str_out, const unsigned long* ulong_in, int char_len)
{
/**************************************************
@brief      : ��ΪX86��ϵ�ṹ��С��ģʽ��������Ҫ�������unsigned long��������ֽ��������
                ��������԰�unsigned longΪ��λ����4�ֽ�Ϊ��λ)��ȡ��
@param[out] : ��
@param[in]  : const unsigned long* ulong_in ��Ҫ�����ֽ����unsigned long����
@param[in]  : unsigned char* str_out �ѵ������ֽ�����ַ�����
@param[in]  : int char_len ���ַ�λ��λ������ĳ���
**************************************************/

    //��Ϊ������ַ�����4�ı��������Կ϶��ܱ�4����
    // circle_time��ѭ���Ĵ�����Ҳ����
    int circle_time = char_len / 4;
    
    for (int i = 0; i < circle_time; i++)
    {
        //ȡunsigned long�����λ��1�ֽ�
        str_out[i*4] = (unsigned char)(ulong_in[i] & 0xff);
        
        //ȡunsigned long�Ĵε�λ��1�ֽ�
        str_out[i * 4 + 1] = (unsigned char)((ulong_in[i] >> 8) & 0xff);

        //ȡunsigned long�Ĵθ�λ��1�ֽ�
        str_out[i * 4 + 2] = (unsigned char)((ulong_in[i] >> 16) & 0xff);

        //ȡunsigned long�����λ��1�ֽ�
        str_out[i * 4 + 3] = (unsigned char)((ulong_in[i] >> 24) & 0xff);
    }
}



void Decode(unsigned long* ulong_out, const unsigned char* str_in, int char_len)
{
/**************************************************
@brief      : ��ΪX86��ϵ�ṹ��С��ģʽ��������Ҫ�������unsigned char��������ֽ��������
                ��������԰�unsigned longΪ��λ����4�ֽ�Ϊ��λ)��ȡ��
@param[out] : ��
@param[in]  : const unsigned char* str_in ��Ҫ�����ֽ����unsigned char����
@param[in]  : unsigned long* ulong_out �ѵ������ֽ����unsigned long����
@param[in]  : int char_len ���ַ�λ��λ������ĳ���
**************************************************/

    //��Ϊ������ַ���Ҳ�϶���4�ı��������Կ϶��ܱ�4����
    // circle_time��ѭ���Ĵ�����Ҳ����
    int circle_time = char_len / 4;

    for (int i = 0; i < circle_time; i++)
    {
        ulong_out[i] = ((unsigned long)str_in[i * 4]) |
                      (((unsigned long)str_in[i * 4 + 1]) << 8) |
                      (((unsigned long)str_in[i * 4 + 2]) << 16) | 
                      (((unsigned long)str_in[i * 4 + 3]) << 24);
    }

}


void Transform_64(const unsigned char block[64])
{
/**************************************************
@brief      : ��512bitת���ɿ��ԣ���С��ģʽ�£�����64bitΪ��λ��ȷ��ȡ���ֽ���
@param[out] : ��
@param[in]  : const unsigned char block[64] ���������ֽ�Ϊ��λ�����512bit
**************************************************/
    
    //�½�һ��512bit���������Ա�������õ��ֽ���
    unsigned long Message[16];

    //���е���
    Decode(Message, block, 64);

    //�Ե�������ֽ���������ֺ�����ÿһ���ֺ�������64�����㣩
    H_getMD5(Message);

}


void H_getMD5(const unsigned long Message[16])
{
/**************************************************
@brief      : ����һ��512bit�����ݣ�����64�����㣬����State[0]~State[3]
@param[out] : ��
@param[in]  : unsigned long Message[16]��4�ֽ�*16=64�ֽڣ�����512bit
**************************************************/
    unsigned long   A = State[0], B = State[1], C = State[2], D = State[3];

    unsigned long Func;
    int g;
    for (int i = 0; i < 64; i++) {
        //64�����㣬ÿ��16��
        if (i < 16) {
            //��һ��
            Func = F(B, C, D);
            g = i;
        }
        else if (i < 32) {
            //�ڶ���
            Func = G(B, C, D);
            g = (5 * i + 1) % 16;
        }
        else if (i < 48) {
            //������
            Func = H(B, C, D);
            g = (3 * i + 5) % 16;
        }
        else {
            //������
            Func = I(B, C, D);
            g = (7 * i) % 16;
        }
        unsigned long temp = D;
        D = C;
        C = B;
        B = B + Left_Shift(A + Func + K_Sin[i] + Message[g], shift_bit[i]);
        A = temp;
    }

    State[0] += A;
    State[1] += B;
    State[2] += C;
    State[3] += D;
}



void Init_State()
/**************************************************
@brief      : ��ʼ��MD5��State[0]��State[1]��State[2]��State[3]����Count[0]��Count[1]
@param[out] : ��
@param[in]  : ��
**************************************************/
{
    Count[0] = 0;
    Count[1] = 0;
    /* ��ʼ��State[]Ϊ���Զ�Ӧ��4������ */
    State[0] = 0x67452301;
    State[1] = 0xefcdab89;
    State[2] = 0x98badcfe;
    State[3] = 0x10325476;
}

void Update(const unsigned char* input, int inputLen)
/**************************************************
@brief      : ���һ�ε�512bit���㣬Ҫ���ַ���׷��100...00��������64bit���ȣ�
              �ټ������㼴�����MD5ֵ
@param[out] : ��
@param[in]  : const unsigned char* input ��ʾҪ����buffer[64]��������ַ���
@param[in]  : int inputLen ��ʾҪ����buffer[64]��������ַ����ĳ���
**************************************************/
{
    int i,index, partLen;

    /* �� index ����δ����ǰ��Count[0]���¼���ֽ��� */
    index = (unsigned int)((Count[0] >> 3) & 0xFF);

    /* 
     * ����Count[0],��ΪҪƴ����inputLen���ȵ��ֽ�
     */
    Count[0] += ((unsigned long)inputLen << 3);
    if (Count[0] < ((unsigned long)inputLen << 3))
    {
        //���С�ڣ�˵��Count[0]����ˣ�����Count[1]��Ҫ��1
        Count[1]++;
    }

    /*
     * Count[1]��Count[0]����4�ֽ�32bit���ģ������Ƿ���һ�𿴣�����һ��64bit�ĳ��ȣ�
     * Count[1] ��1����ʾ�ַ�����bit����Ҫ���� 1*2^32�η���inputLen��Ҫ���ַ�������
     * ���ӵ��ַ����ֽڳ��ȣ�inputLen��<<3����>>32������Count[1]Ҫ���ӵ���Ŀ��
     */
    Count[1] += ((unsigned long)inputLen >> 29);

    // partLen��ʾ��ȱ���ٸ��ֽڣ��Ź�512bit��һ�飩
    partLen = 64 - index;

    /* Transform as many times as possible.  */
    if (inputLen >= partLen)
    //���inputLen��Ҫ���µ��ֽ��������ڵ���ȱ���ֽ�������Ҳ��ζĿǰ��512bit��һ�飩��
    {
        //�ֽ׶ΰ���������buffer���Ϊbufferֻ��512bit������Ҫ����
        memcpy(&buffer[index], input, partLen);
        Transform_64(buffer);

        for (i = partLen; i + 63 <= inputLen; i += 64) 
        {
            Transform_64(&(input[i]));
        }
        index = 0;
    }
    else 
    {
        i = 0;
    }

    /* 
     * ����Ķ��ǰ���һ����һ����������ģ�
     * �п���ʣ�µģ�����һ���飬��Ҫ��ʣ�µĵ������� 
     */
    if ((inputLen - i) != 0)
    {
        memcpy(&buffer[index], &input[i], inputLen - i);
    }
}


void Final(unsigned char digest[16])
/**************************************************
@brief      : ���һ�ε�512bit���㣬Ҫ���ַ���׷��100...00��������64bit���ȣ�
              �ټ������㼴�����MD5ֵ
@param[out] : ��
@param[in]  : unsigned char digest[16] ��ʾ�����������MD5ֵ���ַ�����
**************************************************/
{
    unsigned char ulong2uchar[8];
    int char_len, padLen;

    /** ��unsigned long���͵�Count�������ֵ��ת������С��ģʽ�£�
     ** ʹ����usnigned charΪ��λ��Ҳ��������ȡ��
     **/
    Encode(ulong2uchar, Count, 8);

    /** ���100000..000�ı�������ʹ���ַ�����bit���� % 512 == 448
     ** Ҳ�����ֽڵĳ��� % 64 == 56
     **/

    //Count�������ַ�����bit���ȣ�>>3�Ľ�����ֽڳ���
    char_len = (int)((Count[0] >> 3) & 0x3f);

    //padLen��ʾҪ�����ֽڵĳ��ȣ����char_len��56��ֻ��Ҫ���뵽56�ֽھ���
    //���char_len �� 56����ô�ܹ���������Ҫ�ٶ�һ�飨512bit���ˣ�
    //Ҫ�����ֽ����ǣ�64-��char_len - 56������Ҳ���ǣ�120 - char_len��
    padLen = (char_len < 56) ? (56 - char_len) : (120 - char_len);
    
    /**
     ** ���ַ�������Ҫ����100..000��bit��ֻ�ǰ����ֽڵ���ʽ�����ѣ�
     ** padLen�� Ҫ����bit���� ���� 8��Ҳ����Ҫ�����ֽڳ���
     **/
    Update(PADDING, padLen);

    /**
     ** ���ַ�������64bit��Ҳ����8�ֽڣ��ĳ��ȣ�
     ** ������ȴ���2^64��ֻȡ���ȵĵ�64λ
     **/
    Update(ulong2uchar, 8);
    
    
    /* 
     ** ��������������յ�State���飬�����digest��
     ** ͬʱ������С��ģʽ�£����ֽ�Ϊ��λ��Ҳ����ȷ��ȡ����
     */
    Encode(digest, State, 16);
}



void Data(const unsigned char* data, int len, unsigned char digest[16])
/**************************************************
@brief      : ����MD5�����㷨
@param[out] : ��
@param[in]  : const char* data ��ʾҪ����MD5������ַ���
@param[in]  : int len ��ʾҪ����MD5������ַ����ĳ���
@param[in]  : unsigned char digest[16] ��ʾ�����������MD5ֵ���ַ�����
**************************************************/
{
    Init_State(); //��ʼ��State�����Count����
    Update(data, len); //��Ҫ����MD5������ַ�������д��buffer[64]������
    Final(digest);   //���һ�����ֺ�����Ҫ���ַ���׷��100...00��������64bit���ȣ�
                     //�ټ������㼴�����MD5ֵ
}

char* getMD5(const char* data, int len, char* buf)
{

/**************************************************
@brief      : �õ��ַ�����MD5ֵ
@param[out] : char*  ����һ��ָ��32��Сд�ַ����ַ�ָ�룬ÿ���ַ��ķ�Χ�ǣ�0~f��
@param[in]  : const char* data ��ʾҪ����MD5������ַ���
@param[in]  : int len ��ʾҪ����MD5������ַ����ĳ���
@param[in]  : char* buf ��ʾ�����������MD5ֵ���ַ�ָ��
**************************************************/

    unsigned char digest[16];

    Data((const unsigned char*)data, len, digest);
    char* p = buf;
    for (int i = 0; i < 16; i++) {
        *p = "0123456789abcdef"[digest[i] >> 4];
        p++;
        *p = "0123456789abcdef"[digest[i] & 0x0f];
        p++;
    }
    *p = 0;

    return  buf;
}
string getmd5(char* in,char* out)
{
	return getMD5(in,strlen(in),out);
	delete[] out;
}
