// FUN_017d2d2c @ 017d2d2c size=96 calls_out=3 calls_in=2
// strings: 

void FUN_017d2d2c(int param_1)

{
  int iVar1;
  uint local_b8 [42];
  
  while (FUN_017c52b8(local_b8,param_1 + 0x50,param_1), (local_b8[0] & 6) != 4) {
    FUN_017d0cf0(local_b8);
  }
  iVar1 = *(int *)(param_1 + 0x54);
  do {
    iVar1 = *(int *)(iVar1 + 0xa84);
    thunk_FUN_01be4678();
  } while (iVar1 != 0);
  return;
}

