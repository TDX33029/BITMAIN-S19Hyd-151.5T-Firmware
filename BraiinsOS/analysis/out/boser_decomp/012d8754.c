// FUN_012d8754 @ 012d8754 size=524 calls_out=10 calls_in=2
// strings: 

void FUN_012d8754(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 *local_b0;
  undefined2 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  FUN_019adae8(&local_80);
  if ((local_80 & 0xff) != 4) {
    FUN_0069263c(local_80 & 0xff,local_7c);
  }
  local_b4 = 0x1b6;
  local_b8 = 0;
  local_b0 = &LAB_01000100;
  local_ac = 1;
  FUN_019a581c(&local_80,&local_b8,param_2,param_3,param_5);
  if (((char)local_80 == '\x04') || ((local_80 & 0xff) == 4)) {
    local_a4 = 0xffffffff;
    local_a8 = 0xffffffff;
    local_94 = 1;
    local_90 = CONCAT31(local_90._1_3_,1);
    local_98 = 0;
    local_9c = 4;
    local_a0 = 0;
    FUN_012ea3a4(&uStack_38,4,0);
    local_40 = 0xffffffff;
    local_2c = 1;
    local_28 = CONCAT31(local_28._1_3_,1);
    local_3c = 0xffffffff;
    local_78 = 0xffffffff;
    local_74 = 0xffffffff;
    local_70 = uStack_38;
    uStack_6c = uStack_34;
    local_68 = local_30;
    uStack_64 = 1;
    uStack_60 = local_28;
    uStack_5c = uStack_24;
    local_80 = 0;
    FUN_012db54c(&local_88,&local_80,local_7c);
    if ((char)local_88 == '\x04') {
      FUN_012d8460(&local_80);
      param_1[8] = 0;
      param_1[9] = 4;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 1;
      param_1[0xd] = 0;
      param_1[0xe] = local_7c;
      *param_1 = 0xffffffff;
      param_1[1] = 0xffffffff;
      param_1[2] = 0;
      param_1[3] = 4;
      param_1[4] = 0;
      param_1[5] = local_94;
      param_1[6] = local_90;
      param_1[7] = uStack_8c;
      return;
    }
    FUN_012d8460(&local_80);
    FUN_012d858c(&local_a8);
    FUN_01bf01d6(local_7c);
    local_80 = 0x80000001;
    local_78 = local_84;
    local_7c = local_88;
    uVar1 = FUN_012ee6cc(&local_80);
  }
  else {
    uVar1 = FUN_012ecc28(&local_80);
  }
  *param_1 = uVar1;
  param_1[2] = 0x80000000;
  return;
}

