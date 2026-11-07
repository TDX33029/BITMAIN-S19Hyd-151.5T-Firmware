// FUN_01768e44 @ 01768e44 size=1568 calls_out=4 calls_in=1
// strings: 

undefined4 FUN_01768e44(undefined4 param_1)

{
  uint *puVar1;
  uint *puVar3;
  uint *puVar2;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint auStack_7ffffffc [536860847];
  undefined1 auStack_9d00 [3292];
  undefined4 auStack_9024 [1225];
  uint auStack_7d00 [2047];
  uint uStack_5d04;
  uint local_5d00 [2048];
  undefined1 local_3d00 [1020];
  uint auStack_3904 [1793];
  uint local_1d00 [255];
  uint auStack_1904 [1537];
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [52];
  int local_2c;
  undefined4 uStack_28;
  
  puVar8 = (undefined4 *)(auStack_60 + 0x3c);
  do {
    puVar8 = puVar8 + -0x400;
    *puVar8 = param_1;
  } while (puVar8 != auStack_9024);
  local_2c = DAT_018ddaf8;
  FUN_0170a928(auStack_60,&local_c0,auStack_80,local_5d00);
  puVar2 = auStack_1904;
  uVar4 = 0;
  do {
    uVar9 = 0;
    puVar1 = puVar2 + -0x100;
    do {
      puVar3 = puVar1;
      puVar1 = puVar3 + 1;
      uVar5 = *puVar1;
      uVar5 = 2 - ((-uVar5 ^ uVar5) & (uVar5 >> 0x1f | ((int)uVar5 >> 0x1f) << 1) ^ uVar5);
      uVar9 = uVar9 | uVar5 >> 0x1f | ((int)uVar5 >> 0x1f) << 1;
    } while (puVar1 != puVar2);
    puVar2 = puVar3 + 0x101;
    uVar4 = uVar4 | uVar9;
  } while (puVar2 != (uint *)((int)register0x00000054 + 0x2fc));
  uVar9 = 0;
  puVar2 = auStack_3904;
  do {
    puVar1 = puVar2 + -0x100;
    uVar5 = 0;
    do {
      puVar1 = puVar1 + 1;
      uVar6 = *puVar1;
      uVar6 = 2 - ((-uVar6 ^ uVar6) & (uVar6 >> 0x1f | ((int)uVar6 >> 0x1f) << 1) ^ uVar6);
      uVar5 = uVar5 | uVar6 >> 0x1f | ((int)uVar6 >> 0x1f) << 1;
    } while (puVar2 != puVar1);
    puVar2 = puVar2 + 0x100;
    uVar9 = uVar9 | uVar5;
  } while (puVar2 != auStack_1904);
  FUN_017681f0(auStack_7d00,auStack_9d00,&local_100,param_1);
  uVar5 = 0;
  puVar1 = &uStack_5d04;
  puVar2 = auStack_7d00;
  do {
    puVar3 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    uVar5 = uVar5 | *puVar1 ^ *puVar2;
    puVar2 = puVar3;
  } while (puVar3 != local_5d00);
  uVar6 = local_bc ^ local_fc | local_c0 ^ local_100 | local_b8 ^ local_f8 | local_b4 ^ local_f4 |
          local_f0 ^ local_b0 | local_ac ^ local_ec | local_a8 ^ local_e8 | local_a4 ^ local_e4 |
          local_a0 ^ local_e0 | local_9c ^ local_dc | local_d8 ^ local_98 | local_d4 ^ local_94 |
          local_d0 ^ local_90 | local_cc ^ local_8c | local_c8 ^ local_88 | local_84 ^ local_c4;
  if (((-(uint)((((uVar5 & 0xff) != 0 || (uVar5 & 0xffff) >> 8 != 0) ||
                (uVar5 & 0xffffff) >> 0x10 != 0) || uVar5 >> 0x18 != 0) | uVar4 | uVar9 |
       -(uint)((((uVar6 & 0xff) != 0 || (uVar6 & 0xffff) >> 8 != 0) ||
               (uVar6 & 0xffffff) >> 0x10 != 0) || uVar6 >> 0x18 != 0)) & 0xff) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0xffffffff;
    FUN_0177aaa0(param_1,0xa20);
  }
  FUN_0177aaa0(auStack_9d00,0x2000);
  FUN_0177aaa0(auStack_7d00,0x2000);
  FUN_0177aaa0(local_5d00,0x2000);
  FUN_0177aaa0(local_3d00,0x2000);
  FUN_0177aaa0(local_1d00,0x1c00);
  FUN_0177aaa0(auStack_80,0x20);
  FUN_0177aaa0(&local_100,0x40);
  FUN_0177aaa0(&local_c0,0x40);
  FUN_0177aaa0(auStack_60,0x20);
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar7;
}

