// FUN_0068d3bc @ 0068d3bc size=120 calls_out=3 calls_in=2
// strings: 

void FUN_0068d3bc(int param_1)

{
  int iVar1;
  uint local_60;
  int iStack_5c;
  int local_58 [16];
  
  while (FUN_0069b5a4(&local_60,param_1 + 0x50,param_1), (local_60 & 1) != 0 && local_58[0] != 0) {
    FUN_0067e38c(local_58);
  }
  if ((local_60 != 0 || iStack_5c != 0) && local_58[0] != 0) {
    FUN_0067e38c(local_58);
  }
  iVar1 = *(int *)(param_1 + 0x54);
  do {
    iVar1 = *(int *)(iVar1 + 0x404);
    thunk_FUN_01be4678();
  } while (iVar1 != 0);
  return;
}

