// FUN_01ac9b64 @ 01ac9b64 size=156 calls_out=2 calls_in=2
// strings: 

void FUN_01ac9b64(int *param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = param_1[6];
  if (*param_1 == 1) {
    param_1[1] = (iVar1 - param_2) + param_1[1];
  }
  if (param_1[2] == 1) {
    param_1[3] = (iVar1 - param_2) + param_1[3];
  }
  if ((uint)(param_1[4] - iVar1) < param_4) {
    FUN_01af7b44(param_1 + 4,iVar1,param_4,1,1);
    iVar1 = param_1[6];
  }
  FUN_01bed4e2(param_1[5] + iVar1,param_3,param_4);
  param_1[6] = iVar1 + param_4;
  return;
}

