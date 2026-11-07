// FUN_0160f798 @ 0160f798 size=120 calls_out=2 calls_in=1
// strings: 

void FUN_0160f798(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_38;
  int iStack_34;
  int iStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if (*param_2 == 1) {
    local_38 = param_2[1];
    iStack_34 = param_2[2];
    iStack_30 = param_2[3];
    local_28 = *param_3;
    uStack_24 = param_3[1];
    uStack_20 = param_3[2];
    FUN_01640430(param_1 + 1,&local_38,&local_28);
    *param_1 = 1;
    return;
  }
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  iVar4 = param_2[4];
  *param_1 = *param_2;
  param_1[1] = iVar1;
  param_1[2] = iVar2;
  param_1[3] = iVar3;
  param_1[4] = iVar4;
  iVar1 = param_2[6];
  iVar2 = param_2[7];
  iVar3 = param_2[8];
  iVar4 = param_2[9];
  param_1[5] = param_2[5];
  param_1[6] = iVar1;
  param_1[7] = iVar2;
  param_1[8] = iVar3;
  param_1[9] = iVar4;
  FUN_0134bd64(*param_3,param_3[1]);
  return;
}

