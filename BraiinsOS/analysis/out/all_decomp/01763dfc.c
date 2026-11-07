// FUN_01763dfc @ 01763dfc size=1552 calls_out=4 calls_in=1
// strings: 

undefined4 FUN_01763dfc(undefined4 param_1)

{
  uint *puVar1;
  uint *puVar3;
  uint *puVar2;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint auStack_7ffffffc [536863407];
  undefined1 auStack_7500 [1244];
  undefined4 auStack_7024 [1225];
  uint auStack_5d00 [1535];
  uint uStack_4504;
  uint local_4500 [1536];
  undefined1 local_2d00 [1020];
  uint auStack_2904 [1281];
  uint local_1500 [255];
  uint auStack_1104 [1025];
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
  
  puVar9 = (undefined4 *)(auStack_60 + 0x3c);
  do {
    puVar9 = puVar9 + -0x400;
    *puVar9 = param_1;
  } while (puVar9 != auStack_7024);
  local_2c = DAT_018ddaf8;
  FUN_0170aec8(auStack_60,&local_c0,auStack_80,local_4500);
  puVar2 = auStack_1104;
  uVar4 = 0;
  do {
    uVar8 = 0;
    puVar1 = puVar2 + -0x100;
    do {
      puVar3 = puVar1;
      puVar1 = puVar3 + 1;
      uVar5 = *puVar1;
      uVar5 = 4 - ((-uVar5 ^ uVar5) & (uVar5 >> 0x1f | ((int)uVar5 >> 0x1f) << 1) ^ uVar5);
      uVar8 = uVar8 | uVar5 >> 0x1f | ((int)uVar5 >> 0x1f) << 1;
    } while (puVar1 != puVar2);
    puVar2 = puVar3 + 0x101;
    uVar4 = uVar4 | uVar8;
  } while (puVar2 != (uint *)((int)register0x00000054 + 0x2fc));
  uVar8 = 0;
  puVar2 = auStack_2904;
  do {
    puVar1 = puVar2 + -0x100;
    uVar5 = 0;
    do {
      puVar1 = puVar1 + 1;
      uVar7 = *puVar1;
      uVar7 = 4 - ((-uVar7 ^ uVar7) & (uVar7 >> 0x1f | ((int)uVar7 >> 0x1f) << 1) ^ uVar7);
      uVar5 = uVar5 | uVar7 >> 0x1f | ((int)uVar7 >> 0x1f) << 1;
    } while (puVar2 != puVar1);
    puVar2 = puVar2 + 0x100;
    uVar8 = uVar8 | uVar5;
  } while (puVar2 != auStack_1104);
  FUN_017631d8(auStack_5d00,auStack_7500,&local_100,param_1);
  uVar5 = 0;
  puVar1 = &uStack_4504;
  puVar2 = auStack_5d00;
  do {
    puVar3 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    uVar5 = uVar5 | *puVar1 ^ *puVar2;
    puVar2 = puVar3;
  } while (puVar3 != local_4500);
  uVar7 = local_bc ^ local_fc | local_c0 ^ local_100 | local_b8 ^ local_f8 | local_b4 ^ local_f4 |
          local_f0 ^ local_b0 | local_ac ^ local_ec | local_a8 ^ local_e8 | local_a4 ^ local_e4 |
          local_a0 ^ local_e0 | local_9c ^ local_dc | local_d8 ^ local_98 | local_d4 ^ local_94 |
          local_d0 ^ local_90 | local_cc ^ local_8c | local_c8 ^ local_88 | local_84 ^ local_c4;
  if (((-(uint)((((uVar5 & 0xff) != 0 || (uVar5 & 0xffff) >> 8 != 0) ||
                (uVar5 & 0xffffff) >> 0x10 != 0) || uVar5 >> 0x18 != 0) | uVar4 | uVar8 |
       -(uint)((((uVar7 & 0xff) != 0 || (uVar7 & 0xffff) >> 8 != 0) ||
               (uVar7 & 0xffffff) >> 0x10 != 0) || uVar7 >> 0x18 != 0)) & 0xff) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0xffffffff;
    FUN_0177aaa0(param_1,0x7a0);
  }
  FUN_0177aaa0(auStack_7500,0x1800);
  FUN_0177aaa0(auStack_5d00,0x1800);
  FUN_0177aaa0(local_4500,0x1800);
  FUN_0177aaa0(local_2d00,0x1800);
  FUN_0177aaa0(local_1500,0x1400);
  FUN_0177aaa0(auStack_80,0x20);
  FUN_0177aaa0(&local_100,0x40);
  FUN_0177aaa0(&local_c0,0x40);
  FUN_0177aaa0(auStack_60,0x20);
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar6;
}

