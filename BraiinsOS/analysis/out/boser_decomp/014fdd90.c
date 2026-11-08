// FUN_014fdd90 @ 014fdd90 size=76 calls_out=3 calls_in=1
// strings: 

void FUN_014fdd90(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_014fdb74(iVar1 + 0x1f8);
  FUN_014fd998(iVar1 + 0x150);
  if (*(int *)(iVar1 + 0x98) != -0x80000000) {
    FUN_014fd998(iVar1);
  }
  if (*(int *)(iVar1 + 0x140) != -0x80000000) {
    FUN_014fd998(iVar1 + 0xa8);
  }
  thunk_FUN_01be4678(iVar1);
  return;
}

