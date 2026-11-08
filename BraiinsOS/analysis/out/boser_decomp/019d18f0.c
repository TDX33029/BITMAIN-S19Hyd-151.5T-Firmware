// FUN_019d18f0 @ 019d18f0 size=92 calls_out=2 calls_in=2
// strings: 

void FUN_019d18f0(int param_1)

{
  int iVar1;
  uint local_20;
  int iStack_1c;
  
  do {
    FUN_019cfff0(&local_20,param_1 + 0x50,param_1);
    if (local_20 == 2 && iStack_1c == 0) break;
  } while ((local_20 & 1) == 0);
  iVar1 = *(int *)(param_1 + 0x54);
  do {
    iVar1 = *(int *)(iVar1 + 0x84);
    thunk_FUN_01be4678();
  } while (iVar1 != 0);
  return;
}

