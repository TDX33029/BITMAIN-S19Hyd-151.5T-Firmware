// FUN_00022a8c @ 00022a8c  size=132  callers=0
// program: bmminer


void FUN_00022a8c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_810 [2052];
  
  iVar1 = DAT_00089210;
  if (4 < DAT_00087bbc) {
    snprintf(acStack_810,0x800,"error_code = %d\n",DAT_00089210);
    FUN_00032218(4,acStack_810,0);
  }
  uVar2 = FUN_00056130(iVar1,iVar1 >> 0x1f);
  FUN_00056774(param_1,"error_code",uVar2);
  return;
}

