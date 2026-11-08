// FUN_01337af0 @ 01337af0 size=144 calls_out=2 calls_in=2
// strings: 

void FUN_01337af0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (9 < param_2) {
    FUN_01337af0(param_1,param_2 / 10);
    param_2 = param_2 % 10;
  }
  iVar2 = param_1[2];
  iVar1 = iVar2;
  if (*param_1 == iVar2) {
    FUN_006520b4(param_1,iVar2,1,1,1);
    iVar1 = param_1[2];
  }
  *(byte *)(param_1[1] + iVar1) = (byte)param_2 | 0x30;
  param_1[2] = iVar2 + 1;
  return;
}

