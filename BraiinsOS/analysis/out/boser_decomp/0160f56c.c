// FUN_0160f56c @ 0160f56c size=96 calls_out=2 calls_in=14
// strings: 

void FUN_0160f56c(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int local_30;
  int iStack_2c;
  int iStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (*param_2 == -0x80000000) {
    iVar1 = param_2[1];
    iVar2 = param_2[2];
    *param_1 = *param_2;
    param_1[1] = iVar1;
    param_1[2] = iVar2;
    FUN_0134bd64(*param_3,param_3[1]);
    return;
  }
  local_30 = *param_2;
  iStack_2c = param_2[1];
  iStack_28 = param_2[2];
  local_20 = *param_3;
  uStack_1c = param_3[1];
  uStack_18 = param_3[2];
  FUN_01640430(param_1,&local_30,&local_20);
  return;
}

