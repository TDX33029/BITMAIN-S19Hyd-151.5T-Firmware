// FUN_0002ff80 @ 0002ff80  size=132  callers=0
// program: bmminer


void FUN_0002ff80(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_2010 [8196];
  
  iVar1 = DAT_000c70a0;
  if (4 < DAT_000be63c) {
    snprintf(acStack_2010,0x2000,"error_code = %d\n",DAT_000c70a0);
    FUN_0004948c(4,acStack_2010,0);
  }
  uVar2 = FUN_00080784(iVar1,iVar1 >> 0x1f);
  FUN_0007ec50(param_1,"error_code",uVar2);
  return;
}

