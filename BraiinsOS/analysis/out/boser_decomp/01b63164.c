// FUN_01b63164 @ 01b63164 size=1328 calls_out=15 calls_in=2
// strings: 

undefined8 FUN_01b63164(undefined1 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  ushort *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  ushort *puVar5;
  int iVar6;
  byte *pbVar7;
  ushort *puVar9;
  ushort *puVar8;
  ushort *local_4a84;
  undefined1 auStack_4a80 [2652];
  undefined1 *local_4024;
  undefined1 *local_3024;
  ushort auStack_2a80 [1024];
  undefined1 auStack_2280 [512];
  undefined1 auStack_2080 [92];
  undefined1 *local_2024;
  undefined1 auStack_1e80 [512];
  undefined1 auStack_1c80 [512];
  undefined1 auStack_1a80 [2048];
  undefined1 auStack_1280 [512];
  undefined1 auStack_1080 [92];
  undefined1 *local_1024;
  undefined1 auStack_e80 [512];
  undefined1 auStack_c80 [512];
  undefined1 auStack_a80 [1024];
  undefined1 auStack_680 [512];
  undefined1 auStack_480 [512];
  ushort auStack_280 [256];
  undefined1 auStack_80 [60];
  ushort local_44 [4];
  ushort local_3c;
  ushort local_3a;
  ushort local_38;
  ushort local_36;
  byte local_34 [8];
  int local_2c;
  
  local_2c = DAT_01d53560;
  local_4024 = param_1;
  local_3024 = param_1;
  local_2024 = param_1;
  local_1024 = param_1;
  FUN_01b1e5fc(auStack_1a80,param_3,&PTR_01d3b2b0,0);
  FUN_01b269d8(auStack_80,param_3 + 0x600,0x20);
  iVar6 = 0;
  FUN_01b1dfe0(auStack_480,param_2);
  FUN_01b627a8(auStack_4a80,auStack_80,1);
  FUN_01b62ad4(auStack_1280,auStack_1080,auStack_e80,auStack_c80,param_4,0,1,2,3);
  FUN_01b62ad4(auStack_2280,auStack_2080,auStack_1e80,auStack_1c80,param_4,4,5,6,7);
  puVar5 = auStack_2a80;
  FUN_01b5b8f0(auStack_680,param_4,8);
  FUN_01b29398(auStack_1280);
  FUN_01b29628(auStack_a80,auStack_1280);
  puVar1 = puVar5;
  puVar2 = auStack_4a80;
  do {
    iVar6 = iVar6 + 1;
    FUN_01b1e64c(puVar1,puVar2,auStack_1280,auStack_a80);
    puVar1 = puVar1 + 0x100;
    puVar2 = puVar2 + 0x800;
  } while (iVar6 != 4);
  iVar6 = 0;
  FUN_01b1e64c(auStack_280,auStack_1a80,auStack_1280,auStack_a80);
  do {
    iVar6 = iVar6 + 1;
    FUN_01b293d8();
  } while (iVar6 != 4);
  FUN_01b293d8(auStack_280);
  iVar6 = 0;
  do {
    iVar3 = iVar6;
    FUN_01b1e118((int)puVar5 + iVar3,auStack_2280 + iVar3);
    iVar6 = iVar3 + 0x200;
  } while (iVar3 + 0x200 != 0x800);
  FUN_01b1e118(auStack_280,auStack_680);
  FUN_01b1e118(auStack_280,auStack_480);
  FUN_01b28c50(auStack_2a80);
  FUN_01b2898c(auStack_280);
  puVar2 = param_1;
  do {
    iVar6 = 0;
    puVar1 = puVar5;
    puVar4 = puVar2;
    do {
      puVar8 = puVar1;
      local_4a84 = local_44;
      do {
        puVar9 = puVar8 + 1;
        *local_4a84 = (ushort)(((uint)*puVar8 +
                                (int)((ulonglong)(iVar3 + 0x3afb7200) * (ulonglong)(uint)*puVar8 >>
                                     0x20) + 1 & 0xfff) >> 1);
        puVar8 = puVar9;
        local_4a84 = local_4a84 + 1;
      } while (puVar1 + 8 != puVar9);
      iVar6 = iVar6 + 8;
      *puVar4 = (char)local_44[0];
      puVar4[1] = (char)local_44[1] << 3 | (byte)(local_44[0] >> 8);
      puVar4[2] = (char)local_44[2] << 6 | (byte)(local_44[1] >> 5);
      puVar4[3] = (char)(local_44[2] >> 2);
      puVar4[4] = (char)local_44[3] << 1 | (byte)(local_44[2] >> 10);
      puVar4[5] = (char)local_3c << 4 | (byte)(local_44[3] >> 7);
      puVar4[6] = (char)local_3a << 7 | (byte)(local_3c >> 4);
      puVar4[7] = (char)(local_3a >> 1);
      puVar4[8] = (char)local_38 << 2 | (byte)(local_3a >> 9);
      puVar4[10] = (char)(local_36 >> 3);
      puVar4[9] = (char)local_36 << 5 | (byte)(local_38 >> 6);
      puVar1 = puVar1 + 8;
      puVar4 = puVar4 + 0xb;
    } while (iVar6 != 0x100);
    puVar2 = puVar2 + 0x160;
    puVar5 = puVar5 + 0x100;
  } while (param_1 + 0x580 != puVar2);
  iVar6 = 0;
  puVar1 = auStack_280;
  do {
    iVar3 = 0;
    local_34[0] = 0;
    local_34[1] = 0;
    local_34[2] = 0;
    local_34[3] = 0;
    local_34[4] = 0;
    local_34[5] = 0;
    local_34[6] = 0;
    local_34[7] = 0;
    pbVar7 = local_34;
    puVar5 = puVar1;
    do {
      iVar3 = iVar3 + 1;
      *pbVar7 = (byte)((uint)*puVar5 * 0x13afc0 + 0x4000000 >> 0x1b);
      pbVar7 = pbVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar3 != 8);
    iVar6 = iVar6 + 8;
    puVar1 = puVar1 + 8;
    param_1[0x580] = local_34[0] | local_34[1] << 5;
    param_1[0x581] = local_34[1] >> 3 | local_34[2] << 2 | local_34[3] << 7;
    param_1[0x582] = local_34[4] << 4 | local_34[3] >> 1;
    param_1[0x583] = local_34[4] >> 4 | local_34[5] << 1 | local_34[6] << 6;
    param_1[0x584] = local_34[6] >> 2 | local_34[7] << 3;
    param_1 = param_1 + 5;
  } while (iVar6 != 0x100);
  FUN_01b6b174(auStack_80,0x20);
  FUN_01b6b174(auStack_1280,0x800);
  FUN_01b6b174(auStack_a80,0x400);
  FUN_01b6b174(auStack_2a80,0x800);
  FUN_01b6b174(auStack_280,0x200);
  FUN_01b6b174(auStack_4a80,0x2000);
  FUN_01b6b174(auStack_480,0x200);
  FUN_01b6b174(auStack_2280,0x800);
  FUN_01b6b174(auStack_680,0x200);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

