// FUN_016c47d4 @ 016c47d4 size=100 calls_out=0 calls_in=4
// strings: 

int FUN_016c47d4(int param_1)

{
  return *(int *)(param_1 + 0xc) * 0xc + *(int *)(param_1 + 0x94) * 8 +
         (*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x54) +
         *(int *)(param_1 + 0x60)) * 4 + *(int *)(param_1 + 0xa4) + *(int *)(param_1 + 0x68) +
         (*(int *)(param_1 + 0x88) + *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x98)) * 4;
}

