// FUN_015b836c @ 015b836c size=1168 calls_out=5 calls_in=1
// strings: 

void FUN_015b836c(undefined4 *param_1,byte *param_2,uint param_3,int param_4,uint param_5,
                 undefined4 param_6,uint param_7)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 *puVar11;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 local_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (0x40 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_0040f9bf,0x2f,&DAT_018aa708);
  }
  FUN_016dd606(&local_1a8,0x36,0x80);
  FUN_016dd606(&local_128,0x5c,0x80);
  pbVar3 = (byte *)&local_1a8;
  pbVar4 = (byte *)&local_128;
  for (; param_3 != 0; param_3 = param_3 - 1) {
    bVar1 = *param_2;
    bVar2 = *pbVar4;
    *pbVar3 = *pbVar3 ^ bVar1;
    *pbVar4 = bVar2 ^ bVar1;
    pbVar3 = pbVar3 + 1;
    pbVar4 = pbVar4 + 1;
    param_2 = param_2 + 1;
  }
  param_1[7] = 0x5be0cd19;
  param_1[6] = 0x1f83d9ab;
  param_1[3] = 0xa54ff53a;
  param_1[5] = 0x9b05688c;
  param_1[2] = 0x3c6ef372;
  puVar10 = param_1 + 8;
  puVar6 = param_1 + 4;
  *puVar6 = 0x510e527f;
  param_1[1] = 0xbb67ae85;
  *param_1 = 0x6b08e647;
  FUN_016dd606(puVar10,0,0x49);
  puVar11 = param_1 + 10;
  *puVar11 = local_1a8;
  param_1[0xb] = uStack_1a4;
  param_1[0xc] = uStack_1a0;
  param_1[0xd] = uStack_19c;
  param_1[0xe] = uStack_198;
  param_1[0xf] = local_194;
  param_1[0x10] = uStack_190;
  param_1[0x11] = uStack_18c;
  param_1[0x12] = uStack_188;
  param_1[0x13] = uStack_184;
  param_1[0x14] = local_180;
  param_1[0x15] = uStack_17c;
  param_1[0x16] = uStack_178;
  param_1[0x17] = uStack_174;
  param_1[0x18] = uStack_170;
  param_1[0x19] = uStack_16c;
  *(undefined1 *)(param_1 + 0x1a) = 0x40;
  if (param_5 == 0) {
    FUN_016dd1aa(param_1 + 0x1a,param_4,0);
    *puVar10 = 0x40;
    param_1[9] = 0;
  }
  else {
    *puVar10 = 0x40;
    param_1[9] = 0;
    FUN_00636768(param_1,puVar11,0);
    uVar9 = param_5 & 0x3f;
    uVar5 = param_5 >> 6;
    if (uVar9 == 0) {
      uVar5 = (param_5 >> 6) - 1;
      uVar9 = 0x40;
    }
    iVar8 = param_4 + uVar5 * 0x40;
    if (uVar5 != 0) {
      iVar7 = uVar5 << 6;
      do {
        uVar5 = *puVar10;
        *puVar10 = uVar5 + 0x40;
        param_1[9] = param_1[9] + (uint)(0xffffffbf < uVar5);
        FUN_00636768(param_1,param_4,0);
        param_4 = param_4 + 0x40;
        iVar7 = iVar7 + -0x40;
      } while (iVar7 != 0);
    }
    FUN_016dd1aa(puVar11,iVar8,uVar9);
    uVar5 = *puVar10;
    *puVar10 = uVar5 + uVar9;
    param_1[9] = param_1[9] + (uint)CARRY4(uVar5,uVar9);
    if (uVar9 != 0x40) {
      FUN_016dd606((int)puVar11 + uVar9,0,0x40 - uVar9);
    }
  }
  *(undefined1 *)(param_1 + 0x1a) = 0;
  FUN_00636768(param_1,puVar11,0xffffffff);
  uStack_a4 = param_1[1];
  uStack_a0 = param_1[2];
  uStack_9c = param_1[3];
  uStack_94 = param_1[5];
  uStack_90 = param_1[6];
  uStack_8c = param_1[7];
  local_98 = *puVar6;
  local_a8 = *param_1;
  *param_1 = 0x6b08e647;
  param_1[1] = 0xbb67ae85;
  param_1[2] = 0x3c6ef372;
  param_1[3] = 0xa54ff53a;
  param_1[4] = 0x510e527f;
  param_1[5] = 0x9b05688c;
  param_1[6] = 0x1f83d9ab;
  param_1[7] = 0x5be0cd19;
  local_68 = local_a8;
  uStack_64 = uStack_a4;
  uStack_60 = uStack_a0;
  uStack_5c = uStack_9c;
  local_58 = local_98;
  uStack_54 = uStack_94;
  uStack_50 = uStack_90;
  uStack_4c = uStack_8c;
  local_48 = local_a8;
  local_44 = uStack_a4;
  uStack_40 = uStack_a0;
  uStack_3c = uStack_9c;
  local_38 = local_98;
  local_34 = uStack_94;
  local_30 = uStack_90;
  local_2c = uStack_8c;
  FUN_016dd606(puVar10,0,0x49);
  *puVar11 = local_128;
  param_1[0xb] = uStack_124;
  param_1[0xc] = uStack_120;
  param_1[0xd] = uStack_11c;
  param_1[0xe] = uStack_118;
  param_1[0xf] = local_114;
  param_1[0x10] = uStack_110;
  param_1[0x11] = uStack_10c;
  param_1[0x12] = uStack_108;
  param_1[0x13] = uStack_104;
  param_1[0x14] = local_100;
  param_1[0x15] = uStack_fc;
  param_1[0x16] = uStack_f8;
  param_1[0x17] = uStack_f4;
  param_1[0x18] = uStack_f0;
  param_1[0x19] = uStack_ec;
  *puVar10 = 0x40;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0x40;
  FUN_00636768(param_1,puVar11,0);
  uVar5 = *puVar10;
  *puVar11 = local_a8;
  param_1[0xb] = uStack_a4;
  param_1[0xc] = uStack_a0;
  param_1[0xd] = uStack_9c;
  param_1[0xe] = local_98;
  param_1[0xf] = uStack_94;
  param_1[0x10] = uStack_90;
  param_1[0x11] = uStack_8c;
  *puVar10 = uVar5 + 0x20;
  param_1[9] = param_1[9] + (uint)(0xffffffdf < uVar5);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  FUN_00636768(param_1,puVar11,0xffffffff);
  local_88 = *param_1;
  uStack_84 = param_1[1];
  uStack_80 = param_1[2];
  uStack_7c = param_1[3];
  local_78 = *puVar6;
  uStack_74 = param_1[5];
  uStack_70 = param_1[6];
  uStack_6c = param_1[7];
  *param_1 = 0x6b08e647;
  param_1[1] = 0xbb67ae85;
  param_1[2] = 0x3c6ef372;
  *puVar10 = 0;
  param_1[3] = 0xa54ff53a;
  param_1[9] = 0;
  param_1[4] = 0x510e527f;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[5] = 0x9b05688c;
  param_1[6] = 0x1f83d9ab;
  param_1[7] = 0x5be0cd19;
  local_68 = local_88;
  uStack_64 = uStack_84;
  uStack_60 = uStack_80;
  uStack_5c = uStack_7c;
  local_58 = local_78;
  uStack_54 = uStack_74;
  uStack_50 = uStack_70;
  uStack_4c = uStack_6c;
  local_48 = local_88;
  local_44 = uStack_84;
  uStack_40 = uStack_80;
  uStack_3c = uStack_7c;
  local_38 = local_78;
  local_34 = uStack_74;
  local_30 = uStack_70;
  local_2c = uStack_6c;
  if (param_7 < 0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,0x20,param_7,&DAT_018aa2cc);
  }
  FUN_016dd1aa(param_6,&local_88,0x20);
  return;
}

