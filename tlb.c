#include "final_proj.h"

TLBEntry tlb[TLB_SIZE];
int tlbIndex = 0;

void init_tlb() {
    for (int i = 0; i < TLB_SIZE; i++) {
        tlb[i].isValid = 0;
    }
}

void add_tlb_entry(int pageNumber, int frameNumber) {
    tlb[tlbIndex].pageNumber = pageNumber;
    tlb[tlbIndex].frameNumber = frameNumber;
    tlb[tlbIndex].isValid = 1;

    tlbIndex = (tlbIndex + 1) % TLB_SIZE;
}

int check_tlb(int pageNumber){
    for (int i = 0; i < TLB_SIZE; i++) {
        if (tlb[i].isValid && tlb[i].pageNumber == pageNumber){
            return tlb[i].frameNumber;
        }
    }
    return -1;
}
