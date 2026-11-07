// FUN_00092628 @ 00092628  size=76  callers=0
// program: bmminer


undefined4 FUN_00092628(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_2 + 8) + 0x120);
  uVar1 = FUN_000970d0(param_3,0,iVar2,iVar2 >> 0x1f,0);
  return uVar1;
}

