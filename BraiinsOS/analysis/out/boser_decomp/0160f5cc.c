// FUN_0160f5cc @ 0160f5cc size=112 calls_out=2 calls_in=2
// strings: 

void FUN_0160f5cc(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_30;
  int iStack_2c;
  int iStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (*param_2 == 1) {
    local_30 = param_2[1];
    iStack_2c = param_2[2];
    iStack_28 = param_2[3];
    local_20 = *param_3;
    uStack_1c = param_3[1];
    uStack_18 = param_3[2];
    FUN_01640430(param_1 + 1,&local_30,&local_20);
    *param_1 = 1;
    return;
  }
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = iVar1;
  param_1[2] = iVar2;
  param_1[3] = iVar3;
  FUN_0134bd64(*param_3,param_3[1]);
  return;
}

