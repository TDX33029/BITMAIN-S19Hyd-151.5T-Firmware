// FUN_0071ef90 @ 0071ef90 size=256 calls_out=1 calls_in=2
// strings: 

void FUN_0071ef90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char local_38;
  undefined4 uStack_37;
  undefined3 uStack_33;
  undefined4 local_30;
  undefined4 local_2c;
  
  FUN_00719bb8(&local_38);
  uVar3 = local_2c;
  uVar1 = local_30;
  if (((local_38 == 'O') &&
      (FUN_00719bb8(&local_38,param_2), uVar4 = local_2c, uVar2 = local_30, local_38 == 'O')) &&
     (FUN_00719bb8(&local_38,param_2), local_38 == 'O')) {
    *param_1 = 0x1f;
    param_1[8] = uVar1;
    param_1[9] = uVar3;
    param_1[10] = uVar2;
    param_1[0xb] = uVar4;
    param_1[1] = 0;
    param_1[0xc] = local_30;
    param_1[0xd] = local_2c;
    param_1[4] = 0x2e;
    param_1[5] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[3] = param_4;
    param_1[2] = param_3;
    return;
  }
  param_1[3] = CONCAT31(uStack_33,uStack_37._3_1_);
  *(undefined4 *)((int)param_1 + 9) = uStack_37;
  param_1[4] = local_30;
  param_1[5] = local_2c;
  *param_1 = 0x2e;
  param_1[1] = 0;
  *(char *)(param_1 + 2) = local_38;
  return;
}

