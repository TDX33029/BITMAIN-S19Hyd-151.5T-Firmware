// FUN_015b89b0 @ 015b89b0 size=520 calls_out=5 calls_in=1
// strings: 

void FUN_015b89b0(undefined4 *param_1,byte *param_2,uint param_3,int param_4,uint param_5,
                 undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  byte local_168 [128];
  byte local_e8 [128];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (0x80 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_0040f9bf,0x2f,&DAT_018aa708);
  }
  FUN_016dd606(local_168,0x36,0x80);
  FUN_016dd606(local_e8,0x5c,0x80);
  pbVar4 = local_168;
  pbVar5 = local_e8;
  for (; param_3 != 0; param_3 = param_3 - 1) {
    bVar2 = *param_2;
    bVar3 = *pbVar5;
    *pbVar4 = *pbVar4 ^ bVar2;
    *pbVar5 = bVar3 ^ bVar2;
    pbVar4 = pbVar4 + 1;
    pbVar5 = pbVar5 + 1;
    param_2 = param_2 + 1;
  }
  puVar10 = param_1 + 0x10;
  *param_1 = 0xf3bcc908;
  param_1[1] = 0x6a09e667;
  param_1[2] = 0x84caa73b;
  param_1[3] = 0xbb67ae85;
  param_1[4] = 0xfe94f82b;
  param_1[5] = 0x3c6ef372;
  param_1[6] = 0x5f1d36f1;
  param_1[7] = 0xa54ff53a;
  param_1[8] = 0xade682d1;
  param_1[9] = 0x510e527f;
  param_1[10] = 0x2b3e6c1f;
  param_1[0xb] = 0x9b05688c;
  param_1[0xc] = 0xfb41bd6b;
  param_1[0xd] = 0x1f83d9ab;
  param_1[0xe] = 0x137e2179;
  param_1[0xf] = 0x5be0cd19;
  FUN_016dd606(puVar10,0,0x91);
  param_1[0x10] = 1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_01587654(param_1,local_168,1);
  *(undefined1 *)(param_1 + 0x34) = 0;
  uVar7 = param_5 >> 7;
  if (uVar7 != 0) {
    uVar6 = *puVar10;
    uVar8 = param_1[0x11];
    uVar9 = param_1[0x12];
    bVar1 = CARRY4(uVar8,(uint)CARRY4(uVar6,uVar7));
    *puVar10 = uVar6 + uVar7;
    param_1[0x11] = uVar8 + CARRY4(uVar6,uVar7);
    param_1[0x12] = uVar9 + bVar1;
    param_1[0x13] = param_1[0x13] + (uint)CARRY4(uVar9,(uint)bVar1);
    FUN_01587654(param_1,param_4);
    uVar7 = param_5 & 0x7fffff80;
    param_5 = param_5 & 0x7f;
    param_4 = param_4 + uVar7;
  }
  FUN_016dd1aa(param_1 + 0x14,param_4,param_5);
  *(char *)(param_1 + 0x34) = (char)param_5;
  FUN_016dd606(&local_68,0,0x40);
  FUN_015b5894(param_1,&local_68,0x40);
  *param_1 = 0xf3bcc908;
  param_1[1] = 0x6a09e667;
  param_1[2] = 0x84caa73b;
  param_1[3] = 0xbb67ae85;
  param_1[4] = 0xfe94f82b;
  param_1[5] = 0x3c6ef372;
  param_1[6] = 0x5f1d36f1;
  param_1[7] = 0xa54ff53a;
  param_1[8] = 0xade682d1;
  param_1[9] = 0x510e527f;
  param_1[10] = 0x2b3e6c1f;
  param_1[0xb] = 0x9b05688c;
  param_1[0xc] = 0xfb41bd6b;
  param_1[0xd] = 0x1f83d9ab;
  param_1[0xe] = 0x137e2179;
  param_1[0xf] = 0x5be0cd19;
  FUN_016dd606(puVar10,0,0x91);
  *puVar10 = 1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_01587654(param_1,local_e8,1);
  param_1[0x14] = local_68;
  param_1[0x15] = uStack_64;
  param_1[0x16] = uStack_60;
  param_1[0x17] = uStack_5c;
  param_1[0x18] = uStack_58;
  param_1[0x19] = local_54;
  param_1[0x1a] = uStack_50;
  param_1[0x1b] = uStack_4c;
  param_1[0x1c] = uStack_48;
  param_1[0x1d] = uStack_44;
  param_1[0x1e] = local_40;
  param_1[0x1f] = uStack_3c;
  param_1[0x20] = uStack_38;
  param_1[0x21] = uStack_34;
  param_1[0x22] = uStack_30;
  param_1[0x23] = uStack_2c;
  *(undefined1 *)(param_1 + 0x34) = 0x40;
  FUN_015b5894(param_1,param_6,param_7);
  return;
}

