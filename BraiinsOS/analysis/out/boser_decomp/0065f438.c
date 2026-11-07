// FUN_0065f438 @ 0065f438 size=112 calls_out=1 calls_in=3
// strings: 

void FUN_0065f438(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  if ((uint)(*param_1 - iVar2) < param_3) {
    FUN_006520b4(param_1,iVar2,param_3,4,4);
    iVar2 = param_1[2];
  }
  else if (param_3 == 0) {
    return;
  }
  iVar1 = param_1[1];
  do {
    *(undefined4 *)(iVar1 + iVar2 * 4) = param_2;
    iVar2 = iVar2 + 1;
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  param_1[2] = iVar2;
  return;
}

