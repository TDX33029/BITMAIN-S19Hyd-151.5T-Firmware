// FUN_0160f880 @ 0160f880 size=112 calls_out=2 calls_in=1
// strings: 

void FUN_0160f880(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
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
  iVar5 = param_2[5];
  *param_1 = *param_2;
  param_1[1] = iVar1;
  param_1[2] = iVar2;
  param_1[3] = iVar3;
  param_1[4] = iVar4;
  param_1[5] = iVar5;
  FUN_0134bd64(*param_3,param_3[1]);
  return;
}

