// FUN_009432f8 @ 009432f8 size=96 calls_out=3 calls_in=2
// strings: 

void FUN_009432f8(int param_1)

{
  int iVar1;
  uint local_b8 [42];
  
  while (FUN_01854aa0(local_b8,param_1 + 0x50,param_1), (local_b8[0] & 6) != 4) {
    FUN_0093e6a8(local_b8);
  }
  iVar1 = *(int *)(param_1 + 0x54);
  do {
    iVar1 = *(int *)(iVar1 + 0xa84);
    thunk_FUN_01be4678();
  } while (iVar1 != 0);
  return;
}

