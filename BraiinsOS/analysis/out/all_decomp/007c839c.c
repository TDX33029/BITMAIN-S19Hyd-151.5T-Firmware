// FUN_007c839c @ 007c839c size=600 calls_out=3 calls_in=1
// strings: Braiins Mini Miner BMM 101 | Braiins Mini Miner BMM 101 | Braiins Mini Miner BMM 100 | a Display implementation returned an error unexpectedly

void FUN_007c839c(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [96];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *local_38;
  undefined *local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  local_34 = &DAT_0185eb10;
  local_38 = &local_48;
  local_40 = 0;
  local_48 = 0;
  local_2c = 0;
  local_44 = 1;
  pcVar4 = "Braiins Mini Miner BMM 100";
  if (param_2 != '\x02') {
    pcVar4 = "Braiins Mini Miner BMM 101";
  }
  local_30 = &DAT_60000020;
  iVar1 = FUN_00faace8(&local_38,pcVar4,0x1a);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_25,
                 &DAT_0185eb38,&DAT_018af130);
  }
  param_1[0x36] = local_48;
  param_1[0x37] = local_44;
  param_1[0x38] = local_40;
  FUN_016dd1aa(auStack_a8,param_4,0x60);
  local_c0 = 4;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0x3ff80000;
  uStack_b0 = 0;
  uStack_ac = 0;
  param_1[7] = 0x4050c000;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  param_1[9] = 0x40540000;
  uVar7 = *param_3;
  uVar6 = param_3[1];
  uVar5 = param_3[2];
  param_1[0x4a] = uVar2;
  param_1[0xd] = 0x405b8000;
  uVar2 = *param_5;
  param_1[0xb] = 0x40568000;
  param_1[0x4b] = uVar3;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[4] = 1;
  param_1[5] = 0x42340000;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0x46] = uVar7;
  param_1[0x47] = uVar6;
  param_1[0x48] = uVar5;
  param_1[0x49] = uVar2;
  FUN_016dd1aa(param_1 + 0xe,&local_c0,0x78);
  *(undefined2 *)(param_1 + 0x44) = 0;
  param_1[0x32] = 10;
  param_1[0x33] = 0;
  param_1[0x2f] = 0xbfc33333;
  param_1[0x2e] = 0x33333333;
  param_1[0x4d] = 4;
  param_1[0x4e] = 0;
  param_1[0x4f] = 1;
  param_1[0x43] = 0x28;
  param_1[0x3c] = 4;
  param_1[0x40] = 0x100;
  *(undefined2 *)((int)param_1 + 0x143) = 0x3400;
  param_1[0x31] = 0xc0590000;
  *(undefined1 *)((int)param_1 + 0x142) = 0xf;
  param_1[0x42] = 0x14;
  *(undefined2 *)(param_1 + 0x50) = 0x101;
  param_1[0x3e] = 2;
  param_1[0x30] = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0xc014000000000000;
  param_1[0x4c] = 0;
  param_1[0x41] = 1;
  param_1[0x39] = 1;
  param_1[0x3a] = 200;
  param_1[0x3b] = 0x32;
  param_1[0x3d] = 1;
  param_1[0x3f] = 1;
  param_1[0x34] = 0;
  *(undefined1 *)((int)param_1 + 0x145) = 0;
  FUN_016dd1aa(param_1 + 0x52,param_6,0x98);
  return;
}

