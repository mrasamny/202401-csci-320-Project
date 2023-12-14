#define NUM_OF_FRAMES 256;
#define TLB_SIZE 16;
#define PAGE_TABLE_SIZE 256;
#define NUM_OF_PAGES NUM_OF_FRAMES;
#define MEMORY_SIZE 65536

typedef struct {
    int isValid;
    int frameNumber;
} PageTableEntry;

typedef struct {
    int pageNumber;
    int frameNumber;
    int isValid;
} TLBEntry;


typedef struct{
    int pageNumber;
    int pageOffset;
} Page;

// TLB functions
void add_tlb_entry();

int check_tlb();

// Page table function 
void add_to_page_table();
int check_page_table();


// pages functions 


int* read_addresses();

int get_page_number(int logical_address);

int get_offsef(int logical_address);

Page* convert_addresses(int* addresses);

// frames functions 

void read_from_backing_store();








