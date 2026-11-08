// FUN_0143d280 @ 0143d280 size=240 calls_out=3 calls_in=0
// strings: 

void FUN_0143d280(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int local_58;
  int local_54;
  int local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  
  iVar1 = param_2[0xe];
  uVar4 = FUN_0144347c(param_2[6],param_2[7]);
  FUN_0141b5e8(&local_58,param_2[9],param_2[10]);
  FUN_01497d1c(&local_48,param_2[0xc],param_2[0xd]);
  iVar2 = *param_2;
  iVar3 = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else if (iVar2 == 1) {
    iVar2 = 1;
  }
  else {
    iVar3 = param_2[1];
    local_38 = param_2[2];
    iStack_34 = param_2[3];
    iStack_30 = param_2[4];
    local_2c = param_2[5];
  }
  *(short *)(param_1 + 0xe) = (short)iVar1;
  param_1[10] = local_50;
  param_1[2] = local_38;
  param_1[3] = iStack_34;
  param_1[4] = iStack_30;
  param_1[8] = local_58;
  param_1[9] = local_54;
  param_1[0xb] = local_48;
  param_1[0xc] = local_44;
  param_1[0xd] = local_40;
  *param_1 = iVar2;
  param_1[1] = iVar3;
  param_1[5] = local_2c;
  *(undefined8 *)(param_1 + 6) = uVar4;
  return;
}

