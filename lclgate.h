#define AND(a, b) ((a) && (b))
#define OR(a, b) ((a) || (b))
#define NOT(a) (~(b))
#define XOR(a, b) ((a) ^ (b))

#define NAND(a, b) NOT(AND(a, b))
#define NOR(a, b) NOT(OR(a, b))
#define NXOR(a, b) NOT(XOR(a, b))

typedef struct __bit {
	unsigned int onebit : 1;
} bit_t;

#define bitv(b) ((b).onebit)
#define bitvptr(bp) ((bp)->onebit)

typedef struct __byte {
	bit_t onebyte[8];
} byte_t;

#define bytev(bt, ll) ((b)t.onebyte)[ll]
#define bytevptr(btp, ll) ((btp)->onebyte)[ll]
