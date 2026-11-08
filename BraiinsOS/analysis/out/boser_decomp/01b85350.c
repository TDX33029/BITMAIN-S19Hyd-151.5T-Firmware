// FUN_01b85350 @ 01b85350 size=280 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_01b85350(int *param_1,int *param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = iVar1;
  param_1[2] = iVar2;
  param_1[3] = iVar3;
  iVar4 = *param_2;
  iVar1 = param_2[5];
  iVar2 = param_2[6];
  iVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = iVar1;
  param_1[6] = iVar2;
  param_1[7] = iVar3;
  iVar4 = iVar4 + param_3 * 8;
  iVar1 = param_2[9];
  iVar2 = param_2[10];
  param_1[8] = param_2[8];
  param_1[9] = iVar1;
  param_1[10] = iVar2;
  if (param_3 != 0) {
    param_1[1] = iVar4;
    iVar1 = FUN_01b852cc(param_1);
    param_1[2] = param_1[2] + iVar1;
  }
  if (param_2[9] != 0) {
    if (param_4 < (uint)param_2[10] || (uint)param_2[10] < param_3) {
      param_1[9] = 0;
    }
    else {
      param_1[10] = param_1[10] - param_3;
    }
  }
  *param_1 = iVar4;
  iVar1 = *param_2;
  param_1[1] = iVar1 + param_4 * 8;
  if (param_4 != param_2[1] - iVar1 >> 3) {
    iVar1 = FUN_01b852cc(param_1);
    param_1[3] = param_1[2] + iVar1;
  }
  param_1[4] = param_1[4] + param_3;
  param_1[5] = param_1[5] + param_3;
  param_1[6] = param_1[6] + param_3;
  return 0;
}

