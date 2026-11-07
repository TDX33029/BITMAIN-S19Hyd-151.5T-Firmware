// FUN_010113fc @ 010113fc size=164 calls_out=2 calls_in=2
// strings: 

void FUN_010113fc(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  if (0xaaaaaaa < param_4) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  iVar1 = param_4 * 0xc;
  if (param_2 == 0) {
    if (iVar1 == 0) {
      iVar2 = 4;
      goto LAB_01011488;
    }
    iVar2 = thunk_FUN_016d4a50(iVar1);
  }
  else {
    iVar2 = thunk_FUN_016d4ea4(param_3,iVar1);
  }
  if (iVar2 == 0) {
    param_1[1] = 4;
    param_1[2] = iVar1;
    *param_1 = 1;
    return;
  }
LAB_01011488:
  param_1[1] = iVar2;
  param_1[2] = iVar1;
  *param_1 = 0;
  return;
}

