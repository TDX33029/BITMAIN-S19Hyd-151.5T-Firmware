// FUN_00b20684 @ 00b20684 size=1648 calls_out=6 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b20684(undefined4 *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined1 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined1 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined *local_28c;
  undefined *local_288;
  int local_284;
  undefined1 auStack_278 [80];
  int local_228;
  int iStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 local_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_170;
  undefined3 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined1 auStack_158 [88];
  int local_100;
  int local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int local_b0;
  int local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined3 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  
  puVar3 = *(undefined **)(param_2 + 8);
  uVar4 = 0;
  iVar1 = (int)puVar3 * 0x180;
  if (&UNK_00555555 < puVar3) {
LAB_00b206bc:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,iVar1);
  }
  if (iVar1 == 0) {
    local_284 = 8;
    local_288 = (undefined *)0x0;
  }
  else {
    iVar8 = *(int *)(param_2 + 4);
    uVar4 = 8;
    local_284 = FUN_01298504(iVar1,8);
    if (local_284 == 0) goto LAB_00b206bc;
    local_288 = puVar3;
    if (puVar3 != (undefined *)0x0) {
      iVar6 = 0;
      local_28c = (undefined *)0x0;
      do {
        if (iVar1 == iVar6) break;
        iVar11 = iVar8 + iVar6;
        FUN_006666fc(&local_168,*(undefined4 *)(iVar11 + 0x15c),*(undefined4 *)(iVar11 + 0x160));
        uVar14 = *(undefined8 *)(iVar11 + 0xf0);
        FUN_01bed4e2(auStack_158,iVar11 + 0xf8,0x58);
        iVar5 = *(int *)(iVar8 + iVar6);
        iVar7 = *(int *)(iVar11 + 4);
        uVar13 = *(undefined8 *)(iVar11 + 0x150);
        if (iVar5 == 2 && iVar7 == 0) {
          local_fc = 0;
          local_100 = 2;
        }
        else {
          uVar10 = *(undefined4 *)(iVar11 + 0x10);
          uVar9 = *(undefined4 *)(iVar11 + 0x14);
          uVar4 = *(undefined4 *)(iVar11 + 0x20);
          uVar12 = *(undefined4 *)(iVar11 + 0x24);
          uVar16 = *(undefined8 *)(iVar11 + 8);
          uVar15 = *(undefined8 *)(iVar11 + 0x18);
          if (*(int *)(iVar11 + 0x28) == -0x80000000) {
            local_68 = 0x80000000;
          }
          else {
            FUN_006666fc(&local_68,*(undefined4 *)(iVar11 + 0x2c),*(undefined4 *)(iVar11 + 0x30));
          }
          if (*(int *)(iVar11 + 0x34) == -0x80000000) {
            local_b0 = -0x80000000;
          }
          else {
            FUN_006666fc(&local_b0,*(undefined4 *)(iVar11 + 0x38),*(undefined4 *)(iVar11 + 0x3c));
          }
          if (*(int *)(iVar11 + 0x40) == -0x80000000) {
            local_1c8 = 0x80000000;
          }
          else {
            FUN_006666fc(&local_1c8,*(undefined4 *)(iVar11 + 0x44),*(undefined4 *)(iVar11 + 0x48));
          }
          uStack_d8 = local_68;
          uStack_d4 = uStack_64;
          uStack_d0 = uStack_60;
          iStack_cc = local_b0;
          iStack_c8 = local_ac;
          uStack_c4 = (undefined4)local_a8;
          uStack_c0 = local_1c8;
          uStack_bc = local_1c4;
          uStack_b8 = uStack_1c0;
          local_100 = iVar5;
          local_fc = iVar7;
          local_f8 = uVar16;
          local_e8 = uVar15;
          local_e0 = uVar4;
          local_dc = uVar12;
          local_f0 = uVar10;
          local_ec = uVar9;
        }
        iVar5 = *(int *)(iVar11 + 0x50);
        iVar7 = *(int *)(iVar11 + 0x54);
        if (iVar5 == 2 && iVar7 == 0) {
          local_ac = 0;
          local_b0 = 2;
        }
        else {
          uVar4 = *(undefined4 *)(iVar11 + 0x8c);
          uVar9 = *(undefined4 *)(iVar11 + 0x88);
          if (*(int *)(iVar11 + 0x70) == -0x80000000) {
            local_68 = 0x80000000;
          }
          else {
            FUN_006666fc(&local_68,*(undefined4 *)(iVar11 + 0x74),*(undefined4 *)(iVar11 + 0x78));
          }
          if (*(int *)(iVar11 + 0x7c) == -0x80000000) {
            local_1c8 = 0x80000000;
          }
          else {
            FUN_006666fc(&local_1c8,*(undefined4 *)(iVar11 + 0x80),*(undefined4 *)(iVar11 + 0x84));
          }
          local_a8 = *(undefined8 *)(iVar11 + 0x58);
          local_98 = *(undefined8 *)(iVar11 + 0x68);
          local_a0 = *(undefined4 *)(iVar11 + 0x60);
          local_9c = *(undefined4 *)(iVar11 + 100);
          uStack_90 = local_68;
          uStack_8c = uStack_64;
          local_88 = uStack_60;
          uStack_84 = local_1c8;
          uStack_80 = local_1c4;
          uStack_7c = uStack_1c0;
          local_b0 = iVar5;
          local_ac = iVar7;
          local_78 = uVar9;
          local_74 = uVar4;
        }
        iVar5 = *(int *)(iVar11 + 0x90);
        iVar7 = *(int *)(iVar11 + 0x94);
        if (iVar5 != 2 || iVar7 != 0) {
          local_2dc = *(undefined4 *)(iVar11 + 0xa0);
          local_2e0 = *(undefined4 *)(iVar11 + 0xa4);
          local_2d8 = *(undefined4 *)(iVar11 + 0xb0);
          local_2d4 = *(undefined4 *)(iVar11 + 0xb4);
          local_2d0 = *(undefined4 *)(iVar11 + 0xb8);
          local_2cc = *(undefined4 *)(iVar11 + 0xbc);
          local_2c8 = *(undefined4 *)(iVar11 + 0xc0);
          unaff_d9 = *(undefined8 *)(iVar11 + 0x98);
          unaff_d8 = *(undefined8 *)(iVar11 + 0xa8);
          local_2c4 = *(undefined4 *)(iVar11 + 0xc4);
        }
        cVar2 = *(char *)(iVar11 + 0xcf);
        if (cVar2 != '\x02') {
          local_2a8 = *(undefined4 *)(iVar11 + 0xd0);
          local_2bc = *(undefined4 *)(iVar11 + 0xd4);
          local_2a4 = *(undefined4 *)(iVar11 + 0xd8);
          local_2b8 = *(undefined4 *)(iVar11 + 0xdc);
          local_2a0 = *(undefined4 *)(iVar11 + 0xe0);
          local_2b4 = *(undefined4 *)(iVar11 + 0xe4);
          local_2ac = *(undefined1 *)(iVar11 + 0xed);
          local_2b0 = *(undefined4 *)(iVar11 + 0xe8);
          local_2c0 = *(undefined1 *)(iVar11 + 0xec);
          local_70._0_3_ = (undefined3)*(undefined4 *)(iVar11 + 200);
          local_70._3_1_ = (undefined1)*(undefined4 *)(iVar11 + 0xcb);
          uStack_6c = (undefined3)((uint)*(undefined4 *)(iVar11 + 0xcb) >> 8);
        }
        if (*(int *)(iVar11 + 0x164) == -0x80000000) {
          local_68 = 0x80000000;
        }
        else {
          FUN_00b20dbc(&local_68,*(undefined4 *)(iVar11 + 0x168),*(undefined4 *)(iVar11 + 0x16c));
        }
        uVar4 = 0x80000000;
        if (*(int *)(iVar11 + 0x170) != -0x80000000) {
          FUN_00b20684(&local_1c8,(int *)(iVar11 + 0x170));
          local_2e4 = local_1c4;
          local_2e8 = uStack_1c0;
          uVar4 = local_1c8;
        }
        local_28c = local_28c + 1;
        local_1d8 = local_168;
        uStack_1d4 = uStack_164;
        uStack_1d0 = uStack_160;
        FUN_01bed4e2(&local_1c8,auStack_158,0x58);
        FUN_01bed4e2(auStack_278,&local_100,0x50);
        local_228 = local_b0;
        iStack_224 = local_ac;
        uStack_220 = (undefined4)local_a8;
        uStack_21c = local_a8._4_4_;
        uStack_218 = local_a0;
        local_214 = local_9c;
        uStack_210 = (undefined4)local_98;
        uStack_20c = local_98._4_4_;
        uStack_208 = uStack_90;
        uStack_204 = uStack_8c;
        local_200 = local_88;
        uStack_1fc = uStack_84;
        uStack_1f8 = uStack_80;
        uStack_1f4 = uStack_7c;
        uStack_1f0 = local_78;
        uStack_1ec = local_74;
        uStack_16c = uStack_6c;
        uStack_170 = local_70;
        local_1e8 = local_68;
        uStack_1e4 = uStack_64;
        uStack_1e0 = uStack_60;
        iVar11 = local_284 + iVar6;
        FUN_01bed4e2(iVar11,auStack_278,0x90);
        *(undefined4 *)(iVar11 + 0xa0) = local_2dc;
        *(undefined4 *)(iVar11 + 0xa4) = local_2e0;
        *(undefined1 *)(iVar11 + 0xed) = local_2ac;
        *(undefined1 *)(iVar11 + 0xec) = local_2c0;
        *(undefined4 *)(iVar11 + 0xd0) = local_2a8;
        *(undefined4 *)(iVar11 + 0xd4) = local_2bc;
        *(undefined4 *)(iVar11 + 0xd8) = local_2a4;
        *(undefined4 *)(iVar11 + 0xdc) = local_2b8;
        *(undefined4 *)(iVar11 + 0xe0) = local_2a0;
        *(undefined4 *)(iVar11 + 0xb0) = local_2d8;
        *(undefined4 *)(iVar11 + 0xe4) = local_2b4;
        *(undefined4 *)(iVar11 + 0xb4) = local_2d4;
        *(undefined4 *)(iVar11 + 0xe8) = local_2b0;
        *(undefined4 *)(iVar11 + 0xb8) = local_2d0;
        *(char *)(iVar11 + 0xcf) = cVar2;
        *(undefined4 *)(iVar11 + 0xbc) = local_2cc;
        *(undefined4 *)(iVar11 + 200) = uStack_170;
        *(undefined4 *)(iVar11 + 0xc0) = local_2c8;
        *(uint *)(iVar11 + 0xcb) = CONCAT31(uStack_16c,uStack_170._3_1_);
        *(undefined4 *)(iVar11 + 0xc4) = local_2c4;
        *(int *)(iVar11 + 0x90) = iVar5;
        *(int *)(iVar11 + 0x94) = iVar7;
        *(undefined8 *)(iVar11 + 0xa8) = unaff_d8;
        *(undefined8 *)(iVar11 + 0x98) = unaff_d9;
        *(undefined8 *)(iVar11 + 0xf0) = uVar14;
        FUN_01bed4e2(iVar11 + 0xf8,&local_1c8,0x58);
        *(undefined8 *)(iVar11 + 0x150) = uVar13;
        iVar6 = iVar6 + 0x180;
        *(undefined4 *)(iVar11 + 0x158) = local_1d8;
        *(undefined4 *)(iVar11 + 0x15c) = uStack_1d4;
        *(undefined4 *)(iVar11 + 0x160) = uStack_1d0;
        *(undefined4 *)(iVar11 + 0x164) = local_1e8;
        *(undefined4 *)(iVar11 + 0x168) = uStack_1e4;
        *(undefined4 *)(iVar11 + 0x16c) = uStack_1e0;
        *(undefined4 *)(iVar11 + 0x170) = uVar4;
        *(undefined4 *)(iVar11 + 0x174) = local_2e4;
        *(undefined4 *)(iVar11 + 0x178) = local_2e8;
      } while (puVar3 != local_28c);
    }
  }
  *param_1 = local_288;
  param_1[1] = local_284;
  param_1[2] = puVar3;
  return;
}

