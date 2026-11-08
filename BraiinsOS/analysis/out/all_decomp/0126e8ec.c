// FUN_0126e8ec @ 0126e8ec size=164 calls_out=2 calls_in=1
// strings: 

void FUN_0126e8ec(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  if (0x2762762 < param_4) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  iVar2 = param_4 * 0x34;
  if (param_2 == 0) {
    if (iVar2 == 0) {
      iVar1 = 4;
      goto LAB_0126e978;
    }
    iVar1 = thunk_FUN_016d4a50(iVar2);
  }
  else {
    iVar1 = thunk_FUN_016d4ea4(param_3,iVar2);
  }
  if (iVar1 == 0) {
    param_1[1] = 4;
    param_1[2] = iVar2;
    *param_1 = 1;
    return;
  }
LAB_0126e978:
  param_1[1] = iVar1;
  param_1[2] = iVar2;
  *param_1 = 0;
  return;
}

