// FUN_00fa8f9c @ 00fa8f9c size=160 calls_out=2 calls_in=2
// strings: 

void FUN_00fa8f9c(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  if (0x3333333 < param_4) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  iVar1 = param_4 * 0x28;
  if (param_2 == 0) {
    if (iVar1 == 0) {
      iVar2 = 8;
      goto LAB_00fa9024;
    }
    iVar2 = thunk_FUN_016d4a50(iVar1);
  }
  else {
    iVar2 = thunk_FUN_016d4ea4(param_3,iVar1);
  }
  if (iVar2 == 0) {
    param_1[1] = 8;
    param_1[2] = iVar1;
    *param_1 = 1;
    return;
  }
LAB_00fa9024:
  param_1[1] = iVar2;
  param_1[2] = iVar1;
  *param_1 = 0;
  return;
}

