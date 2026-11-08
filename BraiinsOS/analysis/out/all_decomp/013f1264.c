// FUN_013f1264 @ 013f1264 size=268 calls_out=3 calls_in=0
// strings: 

void FUN_013f1264(int *param_1,undefined4 param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  
  if (*param_5 != -0x80000000) {
    iVar2 = *param_5;
    iVar1 = param_5[1];
    iVar3 = param_5[2];
    iVar4 = param_5[3];
    *param_1 = -0x80000000;
    param_1[1] = iVar2;
    param_1[2] = iVar1;
    param_1[3] = iVar3;
    param_1[4] = iVar4;
    return;
  }
  if ((char)param_5[1] == '\0') {
    if (param_3 < 0) goto LAB_013f130c;
    uVar6 = 3;
  }
  else if ((char)param_5[1] == '\x01') {
    if (param_3 < 0) goto LAB_013f130c;
    uVar6 = 4;
  }
  else {
    if (param_3 < 0) {
LAB_013f130c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,param_3);
    }
    uVar6 = 5;
  }
  if (param_3 == 0) {
    iVar2 = 1;
    iVar1 = 0;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(param_3);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_3);
    }
    iVar1 = param_3;
  }
  FUN_016dd1aa(iVar2,param_2);
  *param_1 = iVar1;
  param_1[1] = iVar2;
  param_1[2] = param_3;
  iVar2 = param_4[1];
  iVar1 = param_4[2];
  iVar3 = param_4[3];
  iVar4 = param_4[4];
  iVar5 = param_4[5];
  param_1[3] = *param_4;
  param_1[4] = iVar2;
  param_1[5] = iVar1;
  param_1[6] = iVar3;
  param_1[7] = iVar4;
  param_1[8] = iVar5;
  *(undefined1 *)(param_1 + 9) = uVar6;
  return;
}

