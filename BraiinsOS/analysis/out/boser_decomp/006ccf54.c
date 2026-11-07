// FUN_006ccf54 @ 006ccf54 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_006ccf54(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_2;
  iVar1 = FUN_01965c98(uVar2);
  if (iVar1 == 0) {
    FUN_006df61c(param_1,uVar2);
    return;
  }
  *param_1 = iVar1;
  param_1[4] = -0x7ffffff9;
  return;
}

