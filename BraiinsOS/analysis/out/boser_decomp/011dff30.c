// FUN_011dff30 @ 011dff30 size=112 calls_out=3 calls_in=2
// strings: 

void FUN_011dff30(int param_1)

{
  int iVar1;
  uint local_40;
  undefined1 auStack_3c [36];
  
  while( true ) {
    FUN_01194b1c(&local_40,param_1 + 0x50,param_1);
    if ((local_40 & 6) == 4) break;
    if (1 < local_40 - 1) {
      FUN_00f58dd0(auStack_3c);
    }
  }
  iVar1 = *(int *)(param_1 + 0x54);
  do {
    iVar1 = *(int *)(iVar1 + 0x284);
    thunk_FUN_01be4678();
  } while (iVar1 != 0);
  return;
}

