// FUN_007c7134 @ 007c7134 size=536 calls_out=3 calls_in=1
// strings: Testboard braiins 1362-1x1 | a Display implementation returned an error unexpectedly

void FUN_007c7134(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 param_6,undefined4 *param_7,undefined4 *param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
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
  local_44 = 1;
  local_40 = 0;
  local_48 = 0;
  local_2c = 0;
  local_30 = &DAT_60000020;
  iVar1 = FUN_00faace8(&local_38,(&PTR_s_Testboard_braiins_1362_1x1_018afad0)[param_2 & 0xff],
                       *(undefined4 *)(&DAT_0041df0c + (param_2 & 0xff) * 4));
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_25,
                 &DAT_0185eb38,&DAT_018af130);
  }
  param_1[0x36] = local_48;
  param_1[0x37] = local_44;
  param_1[0x38] = local_40;
  FUN_016dd1aa(param_1 + 0x14,param_6,0x60);
  uVar2 = param_7[2];
  param_1[0xb] = 0x40570000;
  param_1[0x4b] = uVar2;
  uVar2 = param_5[2];
  *(undefined2 *)(param_1 + 0x44) = 0;
  uVar6 = *param_5;
  uVar3 = *param_7;
  param_1[0xd] = 0x405b8000;
  param_1[0x48] = uVar2;
  param_1[0xe] = 5;
  param_1[0xf] = 0;
  param_1[0x49] = uVar3;
  param_1[0x46] = uVar6;
  param_1[0x32] = 10;
  param_1[0x33] = 0;
  param_1[0x40] = 0x100;
  param_1[0x30] = 0;
  param_1[0x31] = 0xc072c000;
  param_1[0x41] = 1;
  param_1[0x42] = 0x14;
  param_1[0x43] = 100;
  uVar5 = param_5[1];
  uVar2 = param_7[1];
  param_1[0x4d] = 4;
  param_1[0x4a] = uVar2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[4] = 0;
  param_1[0x34] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 2;
  uVar2 = *param_8;
  uVar3 = param_8[1];
  uVar6 = param_8[2];
  uVar4 = param_8[3];
  *(undefined2 *)(param_1 + 0x50) = 0x101;
  param_1[0x3d] = 1;
  *(undefined2 *)((int)param_1 + 0x143) = 0x3400;
  param_1[0x3f] = 1;
  *(undefined1 *)((int)param_1 + 0x145) = 1;
  param_1[7] = 0x4052c000;
  param_1[9] = 0x40548000;
  param_1[0x47] = uVar5;
  *(undefined8 *)(param_1 + 0x2c) = 0xc024000000000000;
  *(undefined8 *)(param_1 + 0x2e) = 0xbfd0000000000000;
  param_1[0x3c] = param_3;
  param_1[0x3e] = param_4;
  *(undefined1 *)((int)param_1 + 0x142) = 0xf;
  param_1[0x52] = uVar2;
  param_1[0x53] = uVar3;
  param_1[0x54] = uVar6;
  param_1[0x55] = uVar4;
  return;
}

