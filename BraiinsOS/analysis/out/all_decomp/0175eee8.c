// FUN_0175eee8 @ 0175eee8 size=1524 calls_out=4 calls_in=1
// strings: 

undefined4 FUN_0175eee8(undefined4 param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar4;
  uint *puVar3;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint auStack_7ffffffc [536865713];
  undefined1 auStack_5100 [220];
  undefined4 auStack_5024 [969];
  uint auStack_4100 [1023];
  uint uStack_3104;
  uint local_3100 [1024];
  undefined1 local_2100 [1020];
  uint auStack_1d04 [769];
  uint local_1100 [255];
  uint auStack_d04 [769];
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
  } while (puVar8 != auStack_5024);
  local_2c = DAT_018ddaf8;
  FUN_0170a770(auStack_60,&local_c0,auStack_80,local_3100);
  puVar3 = auStack_d04;
  uVar9 = 0;
  do {
    uVar1 = 0;
    puVar2 = puVar3 + -0x100;
    do {
      puVar4 = puVar2;
      puVar2 = puVar4 + 1;
      uVar7 = *puVar2;
      uVar7 = 2 - ((-uVar7 ^ uVar7) & (uVar7 >> 0x1f | ((int)uVar7 >> 0x1f) << 1) ^ uVar7);
      uVar1 = uVar1 | uVar7 >> 0x1f | ((int)uVar7 >> 0x1f) << 1;
    } while (puVar2 != puVar3);
    puVar3 = puVar4 + 0x101;
    uVar9 = uVar9 | uVar1;
  } while (puVar3 != (uint *)((int)register0x00000054 + 0x2fc));
  uVar1 = 0;
  puVar3 = auStack_1d04;
  do {
    puVar2 = puVar3 + -0x100;
    uVar7 = 0;
    do {
      puVar2 = puVar2 + 1;
      uVar5 = *puVar2;
      uVar5 = 2 - ((-uVar5 ^ uVar5) & (uVar5 >> 0x1f | ((int)uVar5 >> 0x1f) << 1) ^ uVar5);
      uVar7 = uVar7 | uVar5 >> 0x1f | ((int)uVar5 >> 0x1f) << 1;
    } while (puVar3 != puVar2);
    puVar3 = puVar3 + 0x100;
    uVar1 = uVar1 | uVar7;
  } while (puVar3 != auStack_d04);
  FUN_0175e324(auStack_4100,auStack_5100,&local_100,param_1);
  uVar7 = 0;
  puVar2 = &uStack_3104;
  puVar3 = auStack_4100;
  do {
    puVar4 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    uVar7 = uVar7 | *puVar2 ^ *puVar3;
    puVar3 = puVar4;
  } while (puVar4 != local_3100);
  uVar5 = local_bc ^ local_fc | local_c0 ^ local_100 | local_b8 ^ local_f8 | local_b4 ^ local_f4 |
          local_f0 ^ local_b0 | local_ac ^ local_ec | local_a8 ^ local_e8 | local_a4 ^ local_e4 |
          local_a0 ^ local_e0 | local_9c ^ local_dc | local_d8 ^ local_98 | local_d4 ^ local_94 |
          local_d0 ^ local_90 | local_cc ^ local_8c | local_c8 ^ local_88 | local_c4 ^ local_84;
  if (((-(uint)((((uVar7 & 0xff) != 0 || (uVar7 & 0xffff) >> 8 != 0) ||
                (uVar7 & 0xffffff) >> 0x10 != 0) || uVar7 >> 0x18 != 0) | uVar9 | uVar1 |
       -(uint)((((uVar5 & 0xff) != 0 || (uVar5 & 0xffff) >> 8 != 0) ||
               (uVar5 & 0xffffff) >> 0x10 != 0) || uVar5 >> 0x18 != 0)) & 0xff) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0xffffffff;
    FUN_0177aaa0(param_1,0x520);
  }
  FUN_0177aaa0(auStack_5100,0x1000);
  FUN_0177aaa0(auStack_4100,0x1000);
  FUN_0177aaa0(local_3100,0x1000);
  FUN_0177aaa0(local_2100,0x1000);
  FUN_0177aaa0(local_1100,0x1000);
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

