// FUN_000929f4 @ 000929f4  size=116  callers=0
// program: bmminer


undefined4 FUN_000929f4(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0008c090(*(undefined4 *)(DAT_012a29e4 + 0x2440),
                       *(undefined4 *)(*(int *)(param_2 + 8) + 0x124));
  uVar2 = FUN_0009774c(param_3,iVar1 + 4,*(undefined4 *)(iVar1 + 0x808));
  return uVar2;
}

