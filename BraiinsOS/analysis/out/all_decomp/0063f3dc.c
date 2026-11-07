// FUN_0063f3dc @ 0063f3dc size=160 calls_out=2 calls_in=1
// strings: 

void FUN_0063f3dc(undefined4 *param_1,int param_2,undefined4 param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  
  if (&LAB_00888888 < param_4) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  iVar1 = (int)param_4 * 0xf0;
  if (param_2 == 0) {
    if (iVar1 == 0) {
      iVar2 = 8;
      goto LAB_0063f464;
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
LAB_0063f464:
  param_1[1] = iVar2;
  param_1[2] = iVar1;
  *param_1 = 0;
  return;
}

