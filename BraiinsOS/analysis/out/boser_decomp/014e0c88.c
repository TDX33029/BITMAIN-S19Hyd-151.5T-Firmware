// FUN_014e0c88 @ 014e0c88 size=2908 calls_out=29 calls_in=1
// strings: unexpected map keystruct Metadata with 5 elementsstruct Metadata with 6 elementsstruct Metadata with 7 elementsstruct IndexVariant with 4 elementsstruct Assets with 5 elementsstruct Metadata with 3 elements | MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014e0c88(uint *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  int **ppiVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 ******ppppppuVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint *unaff_r5;
  undefined4 ******ppppppuVar12;
  uint uVar13;
  int iVar14;
  undefined2 *puVar15;
  undefined4 uVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  bool bVar19;
  uint *puVar20;
  bool bVar21;
  bool bVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  undefined *local_170;
  undefined2 *local_168;
  uint *local_164;
  uint *local_160;
  undefined4 local_15c;
  uint *local_158;
  int local_154;
  uint local_150;
  uint uStack_14c;
  uint uStack_148;
  undefined4 ******local_140;
  uint local_13c;
  undefined4 ******local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  int **local_120;
  undefined2 *puStack_11c;
  undefined1 local_118;
  undefined2 local_110;
  undefined1 uStack_10e;
  undefined2 *puStack_10d;
  undefined4 ******local_108;
  int local_104;
  int local_100;
  undefined *local_f8;
  undefined *local_f4;
  undefined *local_f0;
  undefined4 uStack_ec;
  int local_e8;
  int local_e4;
  undefined4 ******local_e0;
  int local_dc;
  undefined4 local_d8;
  int **local_d0;
  undefined2 *puStack_cc;
  undefined1 local_c8;
  undefined2 local_c0;
  undefined1 local_be;
  int local_bc;
  undefined *local_b8;
  int local_b4;
  int **local_b0;
  undefined2 *puStack_ac;
  undefined1 local_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined4 local_a0;
  undefined2 *local_9c;
  int **local_98;
  undefined2 *local_94;
  undefined *puStack_90;
  undefined *puStack_8c;
  undefined *puStack_88;
  undefined4 uStack_84;
  int *local_7c;
  int **local_78;
  undefined2 *local_74;
  int **local_70;
  undefined2 *local_6c;
  undefined *local_68;
  undefined *local_64;
  undefined *local_60;
  undefined4 local_5c;
  undefined *local_58;
  undefined *local_54;
  undefined *local_50;
  undefined *local_4c;
  int **local_48;
  undefined2 *local_44;
  int **local_40;
  undefined2 *puStack_3c;
  undefined8 local_34;
  undefined1 auStack_29 [5];
  
  if ((undefined1 *)*param_2 != &DAT_80000014) {
    uVar11 = FUN_014c8278(param_2,auStack_29,&DAT_01cf9c64);
    *param_1 = 0x80000000;
    param_1[1] = uVar11;
    return;
  }
  local_15c = param_2[1];
  puVar10 = (uint *)param_2[2];
  ppppppuVar8 = (undefined4 ******)param_2[3];
  iVar14 = 0;
  local_154 = 0;
  puVar20 = puVar10 + (int)ppppppuVar8 * 4;
  ppppppuVar12 = (undefined4 ******)0xcccc;
  if (ppppppuVar8 < (undefined4 ******)0xcccc) {
    ppppppuVar12 = ppppppuVar8;
  }
  local_164 = puVar10;
  local_160 = puVar10;
  local_158 = puVar20;
  if (ppppppuVar8 == (undefined4 ******)0x0) {
    local_13c = 4;
    ppppppuVar12 = (undefined4 ******)0x0;
  }
  else {
    unaff_r5 = (uint *)((int)ppppppuVar12 * 0x14);
    local_13c = FUN_01298504(unaff_r5,4);
    if (local_13c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,unaff_r5);
    }
  }
  puVar3 = (undefined4 *)((uint)&local_a0 | 4);
  puVar4 = (undefined4 *)((uint)&local_78 | 4);
  puVar18 = (undefined2 *)((uint)&local_78 | 1);
  puVar9 = (uint *)((uint)&local_108 | 4);
  ppppppuVar8 = &local_140;
  local_138 = (undefined4 ******)0x0;
  local_140 = ppppppuVar12;
  while( true ) {
    if (puVar10 != puVar20) {
      unaff_r5 = puVar10 + 4;
      ppppppuVar8 = (undefined4 ******)*puVar10;
      local_160 = unaff_r5;
    }
    if (puVar10 == puVar20 || ppppppuVar8 == (undefined4 ******)0x80000015) {
      *param_1 = (uint)local_140;
      param_1[1] = local_13c;
      param_1[2] = (uint)local_138;
      if (*param_1 != 0x80000000) {
        local_150 = *param_1;
        uStack_14c = param_1[1];
        uStack_148 = param_1[2];
        uVar11 = FUN_014ca838(&local_164);
        if (uVar11 == 0) {
          return;
        }
        *param_1 = 0x80000000;
        param_1[1] = uVar11;
        FUN_014ca88c(&local_150);
        return;
      }
      goto LAB_014e1618;
    }
    iVar14 = iVar14 + 1;
    uVar11 = puVar10[2];
    uVar13 = puVar10[3];
    *puVar9 = puVar10[1];
    puVar9[1] = uVar11;
    puVar9[2] = uVar13;
    local_154 = iVar14;
    local_108 = ppppppuVar8;
    if ((int)ppppppuVar8 < 0) {
      uVar7 = FUN_014c8278(&local_108,auStack_29,&DAT_01cf9c44);
      local_110 = (undefined2)uVar7;
      uStack_10e = (undefined1)((uint)uVar7 >> 0x10);
      puStack_10d._0_1_ = (undefined1)((uint)uVar7 >> 0x18);
      goto LAB_014e1604;
    }
    local_f8 = (undefined *)0x80000015;
    local_dc = local_104 + local_100 * 0x20;
    local_170 = (undefined *)0x8;
    local_e4 = local_104;
    local_e8 = local_104;
    bVar19 = false;
    bVar22 = false;
    local_d8 = 0;
    local_b4 = 0;
    local_b8 = (undefined *)0x8;
    local_bc = 0;
    local_e0 = ppppppuVar8;
    while( true ) {
      iVar6 = local_b4;
      while( true ) {
        FUN_014c96ec(&local_78,&local_f8);
        puVar1 = local_f8;
        if (local_78 == (int **)0x80000017) {
          local_110 = SUB42(local_74,0);
          uStack_10e = (undefined1)((uint)local_74 >> 0x10);
          puStack_10d._0_1_ = (undefined1)((uint)local_74 >> 0x18);
          goto LAB_014e15f4;
        }
        if (local_78 != (int **)0x80000015) break;
        if (bVar19) {
          local_9c = (undefined2 *)0x4;
          local_a0 = (int **)&DAT_0056d618;
          local_74 = &DAT_0132b6a0;
          local_78 = (int **)&local_a0;
          puVar18 = (undefined2 *)FUN_019676ac(&DAT_005ab34f,&local_78);
          goto LAB_014e15f0;
        }
        FUN_014c9a5c(&local_78,&local_f8);
        if (((uint)local_78 & 1) != 0) {
          puVar18 = local_74;
          goto LAB_014e15f0;
        }
        local_be = *(undefined1 *)(puVar18 + 1);
        bVar19 = true;
        local_c0 = *puVar18;
        bVar22 = true;
        local_168 = local_74;
        local_d0 = local_70;
        puStack_cc = local_6c;
        local_c8 = local_68._0_1_;
        local_98 = (int **)CONCAT31(local_98._1_3_,local_68._0_1_);
        local_a0 = local_d0;
        local_9c = puStack_cc;
      }
      if (local_78 == (int **)&DAT_80000016) break;
      local_9c = local_74;
      local_98 = local_70;
      bVar21 = local_f8 == (undefined *)0x80000015;
      local_94 = local_6c;
      local_f8 = (undefined *)0x80000015;
      local_a0 = local_78;
      if (bVar21) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements"
                     ,0x2c,&DAT_01cfa02c);
      }
      local_60 = local_f0;
      local_5c = uStack_ec;
      local_64 = local_f4;
      local_68 = puVar1;
      if (iVar6 == local_bc) {
        FUN_00a20ed0(&local_bc);
        local_170 = local_b8;
      }
      puVar5 = (undefined4 *)(local_170 + iVar6 * 0x20);
      local_b4 = iVar6 + 1;
      *puVar5 = local_78;
      puVar5[1] = local_74;
      puVar5[2] = local_70;
      puVar5[3] = local_6c;
      puVar5[4] = local_68;
      puVar5[5] = local_64;
      puVar5[6] = local_60;
      puVar5[7] = local_5c;
    }
    if (!bVar22) break;
    local_a2 = local_be;
    local_a4 = local_c0;
    local_b0 = local_d0;
    puStack_ac = puStack_cc;
    local_a8 = local_c8;
    local_68 = local_170;
    local_64 = local_170 + iVar6 * 0x20;
    local_5c = 2;
    local_60 = &DAT_01cfa50c;
    local_78 = (int **)0x80000015;
    local_4c = (undefined *)0x8;
    local_50 = &DAT_0056fe10;
    local_54 = (undefined *)0x10;
    local_58 = &DAT_00567828;
    FUN_014dc6c8(&local_a0,&local_78,&local_58);
    ppiVar2 = local_78;
    if ((char)local_a0 == '\x01') {
LAB_014e104c:
      puVar15 = local_9c;
      goto LAB_014e1158;
    }
    if (local_a0._1_1_ == '\x02') {
      local_34._4_4_ = 0x10;
      local_34._0_4_ = (int *)&DAT_00567828;
      local_9c = &DAT_0132b6a0;
      local_a0 = (int **)&local_34;
      uVar7 = FUN_019676ac(&DAT_0057cd64,&local_a0);
      goto LAB_014e14f8;
    }
    if (((uint)local_a0 & 0x100) == 0) {
      puVar15 = (undefined2 *)FUN_014dda50(&local_78);
      if (puVar15 != (undefined2 *)0x0) goto LAB_014e1158;
      FUN_014dc6c8(&local_a0,&local_78,&local_58);
      ppiVar2 = local_78;
      if ((char)local_a0 == '\x01') goto LAB_014e104c;
      if (local_a0._1_1_ == '\x02') {
        uVar23 = FUN_014e2b4c();
      }
      else {
        if (((uint)local_a0 & 0x100) != 0) {
          local_78 = (int **)0x80000015;
          if (ppiVar2 == (int **)0x80000015) {
            uVar7 = FUN_019678c0(&DAT_0056ad38,0x10);
            uVar23 = CONCAT44(uVar7,1);
          }
          else {
            uVar7 = puVar4[1];
            uVar16 = puVar4[2];
            *puVar3 = *puVar4;
            puVar3[1] = uVar7;
            puVar3[2] = uVar16;
            local_a0 = ppiVar2;
            uVar23 = FUN_014e39e0(&local_a0);
          }
          puVar17 = (undefined2 *)(uVar23 >> 0x20);
          puVar15 = puVar17;
          if ((uVar23 & 1) == 0) {
            FUN_014dc6c8(&local_a0,&local_78,&local_58);
            puVar15 = local_9c;
            if ((char)local_a0 == '\0') {
              uVar23 = ZEXT48(puVar17) << 0x20;
              if (local_a0._1_1_ == '\x02') goto LAB_014e10dc;
              bVar22 = ((uint)local_a0 & 0x100) != 0;
              local_34._4_4_ = 0x10;
              if (bVar22) {
                local_34._4_4_ = 8;
              }
              local_34._0_4_ = (int *)&DAT_00567828;
              if (bVar22) {
                local_34._0_4_ = (int *)&DAT_0056fe10;
              }
              local_9c = &DAT_0132b6a0;
              local_a0 = (int **)&local_34;
              uVar7 = FUN_019676ac(&DAT_005ab34f,&local_a0);
              FUN_014f3694(puVar17);
              goto LAB_014e14f8;
            }
            FUN_014f3694(puVar17);
          }
          goto LAB_014e1158;
        }
        local_34._4_4_ = 0x10;
        local_34._0_4_ = (int *)&DAT_00567828;
        local_9c = &DAT_0132b6a0;
        local_a0 = (int **)&local_34;
        uVar7 = FUN_019676ac(&DAT_005ab34f,&local_a0);
LAB_014e14f8:
        uVar23 = CONCAT44(uVar7,1);
      }
LAB_014e10dc:
      if (local_78 != (int **)0x80000015) {
LAB_014e116c:
        FUN_014f1f78(&local_78);
      }
      puVar15 = (undefined2 *)(uVar23 >> 0x20);
      if ((uVar23 & 1) != 0) goto LAB_014e1188;
    }
    else {
      local_78 = (int **)0x80000015;
      if (ppiVar2 != (int **)0x80000015) {
        local_44 = local_74;
        local_48 = ppiVar2;
        local_40 = local_70;
        puStack_3c = local_6c;
        FUN_014dc6c8(&local_a0,&local_78,&local_58);
        if ((char)local_a0 != '\x01') {
          if (local_a0._1_1_ == '\x02') {
            local_34._4_4_ = 0x10;
            local_34._0_4_ = (int *)&DAT_00567828;
            local_9c = &DAT_0132b6a0;
            local_a0 = (int **)&local_34;
            uVar7 = FUN_019676ac(&DAT_0057cd64,&local_a0);
          }
          else {
            if (((uint)local_a0 & 0x100) == 0) {
              puVar15 = (undefined2 *)FUN_014dda50(&local_78);
              if (puVar15 == (undefined2 *)0x0) {
                uVar23 = FUN_014e39e0(&local_48);
                puVar15 = (undefined2 *)(uVar23 >> 0x20);
                if ((uVar23 & 1) == 0) {
                  FUN_014dc6c8(&local_a0,&local_78,&local_58);
                  puVar17 = local_9c;
                  if ((char)local_a0 == '\0') {
                    uVar23 = ZEXT48(puVar15) << 0x20;
                    if (local_a0._1_1_ == '\x02') goto LAB_014e10dc;
                    bVar22 = ((uint)local_a0 & 0x100) != 0;
                    local_34._4_4_ = 0x10;
                    if (bVar22) {
                      local_34._4_4_ = 8;
                    }
                    local_34._0_4_ = (int *)&DAT_00567828;
                    if (bVar22) {
                      local_34._0_4_ = (int *)&DAT_0056fe10;
                    }
                    local_9c = &DAT_0132b6a0;
                    local_a0 = (int **)&local_34;
                    uVar7 = FUN_019676ac(&DAT_005ab34f,&local_a0);
                    FUN_014f3694(puVar15);
                    goto LAB_014e14f8;
                  }
                  FUN_014f3694(puVar15);
                  puVar15 = puVar17;
                }
                goto LAB_014e1158;
              }
              goto LAB_014e1150;
            }
            local_34._4_4_ = 8;
            local_34._0_4_ = (int *)&DAT_0056fe10;
            local_9c = &DAT_0132b6a0;
            local_a0 = (int **)&local_34;
            uVar7 = FUN_019676ac(&DAT_005ab34f,&local_a0);
          }
          uVar23 = CONCAT44(uVar7,1);
          FUN_014f1f78(&local_48);
          goto LAB_014e10dc;
        }
        puVar15 = local_9c;
LAB_014e1150:
        FUN_014f1f78(&local_48);
LAB_014e1158:
        uVar23 = CONCAT44(puVar15,1);
        if (local_78 == (int **)0x80000015) goto LAB_014e1188;
        goto LAB_014e116c;
      }
      puVar15 = (undefined2 *)FUN_019678c0(&DAT_0056ad38,0x10);
LAB_014e1188:
      FUN_00d47b64(puVar15);
      puVar15 = (undefined2 *)0x0;
      iVar6 = local_b4;
      local_170 = local_b8;
    }
    local_4c = local_170 + iVar6 * 0x20;
    local_50 = (undefined *)local_bc;
    local_58 = local_170;
    local_54 = local_170;
    FUN_014ddf5c(&local_78,&local_58);
    if (local_78 == (int **)&DAT_80000016) {
      local_a0 = (int **)&DAT_80000016;
    }
    else {
      local_a0 = local_78;
      local_9c = local_74;
      local_98 = local_70;
      local_94 = local_6c;
      puStack_90 = local_68;
      puStack_8c = local_64;
      puStack_88 = local_60;
      uStack_84 = local_5c;
      if ((undefined *)0x1 < (undefined *)((int)local_78 + 0x7fffffeb)) {
        uVar24 = FUN_01962cb0(&local_a0);
        if ((int)uVar24 == 0) {
          uVar7 = FUN_019676ac("unexpected map keystruct Metadata with 5 elementsstruct Metadata with 6 elementsstruct Metadata with 7 elementsstruct IndexVariant with 4 elementsstruct Assets with 5 elementsstruct Metadata with 3 elements"
                               ,0x25);
        }
        else {
          local_7c = (int *)&local_34;
          local_78 = &local_7c;
          local_74 = (undefined2 *)&LAB_01963050;
          local_34 = uVar24;
          uVar7 = FUN_019676ac(&DAT_005bc768,&local_78);
        }
        local_110 = (undefined2)uVar7;
        uStack_10e = (undefined1)((uint)uVar7 >> 0x10);
        puStack_10d._0_1_ = (undefined1)((uint)uVar7 >> 0x18);
        FUN_014c81b0(&local_a0);
        FUN_014c81b0(&puStack_90);
        FUN_014debf8(&local_58);
        FUN_014c9e80(puVar15);
        goto LAB_014e15fc;
      }
    }
    FUN_014debf8(&local_58);
    local_110 = local_a4;
    uStack_10e = local_a2;
    local_120 = local_b0;
    puStack_11c = puStack_ac;
    local_118 = local_a8;
    puStack_10d = local_168;
    iVar6 = FUN_014c9cac(&local_f8);
    if (iVar6 != 0) {
      local_110 = (undefined2)iVar6;
      uStack_10e = (undefined1)((uint)iVar6 >> 0x10);
      puStack_10d._0_1_ = (undefined1)((uint)iVar6 >> 0x18);
      FUN_014c9e80(puVar15);
LAB_014e1604:
      *param_1 = 0x80000000;
      param_1[1] = CONCAT13(puStack_10d._0_1_,CONCAT12(uStack_10e,local_110));
      FUN_014ca88c(&local_140);
LAB_014e1618:
      FUN_014deb6c(&local_164);
      return;
    }
    uVar7 = CONCAT13(puStack_10d._0_1_,CONCAT12(uStack_10e,local_110));
    local_130 = CONCAT13(local_130._3_1_,puStack_10d._1_3_);
    FUN_01bed4e2((uint)&local_130 | 3,&local_120,9);
    ppppppuVar8 = local_138;
    if (local_138 == local_140) {
      FUN_014f8a6c(&local_140);
    }
    puVar5 = (undefined4 *)(local_13c + (int)ppppppuVar8 * 0x14);
    *puVar5 = uVar7;
    puVar5[1] = local_130;
    puVar5[2] = uStack_12c;
    puVar5[3] = uStack_128;
    puVar5[4] = puVar15;
    ppppppuVar8 = (undefined4 ******)((int)ppppppuVar8 + 1);
    puVar10 = unaff_r5;
    unaff_r5 = param_1;
    local_138 = ppppppuVar8;
  }
  local_9c = (undefined2 *)0x4;
  local_a0 = (int **)&DAT_0056d618;
  local_74 = &DAT_0132b6a0;
  local_78 = (int **)&local_a0;
  puVar18 = (undefined2 *)FUN_019676ac(&DAT_0057cd64,&local_78);
LAB_014e15f0:
  local_110 = SUB42(puVar18,0);
  uStack_10e = (undefined1)((uint)puVar18 >> 0x10);
  puStack_10d._0_1_ = (undefined1)((uint)puVar18 >> 0x18);
LAB_014e15f4:
  FUN_014c9bdc(&local_bc);
LAB_014e15fc:
  FUN_014c9c60(&local_f8);
  goto LAB_014e1604;
}

