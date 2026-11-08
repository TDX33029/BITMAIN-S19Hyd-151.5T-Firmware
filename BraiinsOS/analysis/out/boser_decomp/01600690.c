// FUN_01600690 @ 01600690 size=156 calls_out=1 calls_in=0
// strings: 

void FUN_01600690(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_30;
  int local_2c;
  int local_28;
  
  local_28 = 0;
  local_2c = 1;
  local_30 = 0;
  FUN_01af7b44(&local_30,0,3,1,1);
  *(undefined2 *)(local_2c + local_28) = 0x5455;
  *(undefined1 *)((undefined2 *)(local_2c + local_28) + 1) = 0x43;
  param_1[3] = local_30;
  param_1[4] = local_2c;
  param_1[5] = local_28 + 3;
  param_1[0xc] = param_2;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[6] = 0;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  uVar4 = param_4[4];
  param_1[7] = *param_4;
  param_1[8] = uVar1;
  param_1[9] = uVar2;
  param_1[10] = uVar3;
  param_1[0xb] = uVar4;
  return;
}

