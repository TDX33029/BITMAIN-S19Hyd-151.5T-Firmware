// FUN_0137604c @ 0137604c size=152 calls_out=1 calls_in=3
// strings: 

void FUN_0137604c(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_34 [2];
  undefined4 *local_2c;
  undefined4 local_28;
  
  local_34[0] = 0;
  if (param_3[10] == 0) {
    local_34[0] = 2;
  }
  local_28 = 0;
  local_2c = param_3;
  uVar1 = FUN_0137c00c(local_34);
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[4];
  *param_1 = *param_3;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  uVar2 = param_3[6];
  uVar3 = param_3[7];
  uVar4 = param_3[8];
  uVar5 = param_3[9];
  param_1[5] = param_3[5];
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  param_1[8] = uVar4;
  param_1[9] = uVar5;
  uVar2 = param_3[0xb];
  uVar3 = param_3[0xc];
  uVar4 = param_3[0xd];
  uVar5 = param_3[0xe];
  uVar6 = param_3[0xf];
  param_1[10] = param_3[10];
  param_1[0xb] = uVar2;
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar4;
  param_1[0xe] = uVar5;
  param_1[0xf] = uVar6;
  *(undefined1 *)((int)param_1 + 0xa5) = 2;
  param_1[0x26] = uVar1;
  param_1[0x2a] = param_2;
  *(undefined1 *)(param_1 + 0x2b) = 5;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined2 *)(param_1 + 0x25) = 0;
  param_1[0x21] = 0;
  param_1[0x1d] = 0;
  param_1[0x19] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0xb;
  return;
}

