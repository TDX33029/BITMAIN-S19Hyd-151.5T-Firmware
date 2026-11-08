// FUN_014dfdf0 @ 014dfdf0 size=3124 calls_out=30 calls_in=1
// strings: unexpected map keystruct Metadata with 5 elementsstruct Metadata with 6 elementsstruct Metadata with 7 elementsstruct IndexVariant with 4 elementsstruct Assets with 5 elementsstruct Metadata with 3 elements | MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014dfdf0(int *param_1,undefined4 *param_2)

{
  char cVar1;
  int **ppiVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  int ******ppppppiVar7;
  int ******ppppppiVar8;
  int ******extraout_r1;
  undefined *puVar9;
  int *piVar10;
  int iVar11;
  undefined *puVar12;
  int ******ppppppiVar13;
  int *****pppppiVar14;
  int iVar15;
  int *****pppppiVar16;
  int ******ppppppiVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  bool bVar20;
  int iVar21;
  bool bVar22;
  int ******ppppppiVar23;
  undefined2 *puVar24;
  bool bVar25;
  undefined8 uVar26;
  undefined2 *local_1a0;
  int ******local_18c;
  int *local_188;
  int ******local_184;
  int *local_180;
  undefined **local_17c;
  int *local_178;
  int ******local_174;
  int local_170;
  undefined *local_16c;
  int local_168;
  undefined2 *local_164;
  int *local_160;
  int ******local_15c;
  int ******local_158;
  undefined4 local_154;
  int ******local_150;
  int local_14c;
  int local_148;
  int iStack_144;
  int iStack_140;
  int ******local_138;
  int local_134;
  int ******local_130;
  int **local_128;
  undefined2 *puStack_124;
  undefined1 local_120;
  undefined2 local_11c;
  undefined1 local_11a;
  int **local_118;
  undefined2 *puStack_114;
  undefined1 local_110;
  undefined2 local_10c;
  undefined1 local_10a;
  int ******local_108;
  int local_104;
  int local_100;
  undefined *local_f8;
  undefined *local_f4;
  int local_f0 [2];
  int local_e8;
  int local_e4;
  int ******local_e0;
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
  int local_98;
  undefined4 uStack_94;
  undefined *puStack_90;
  undefined *puStack_8c;
  undefined *puStack_88;
  undefined4 uStack_84;
  int *local_7c;
  int **local_78;
  undefined2 *local_74;
  int local_70;
  undefined4 uStack_6c;
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
  int local_40;
  int iStack_3c;
  undefined8 local_34;
  undefined1 auStack_29 [5];
  
  if ((undefined1 *)*param_2 != &DAT_80000014) {
    iVar21 = FUN_014c8278(param_2,auStack_29,&DAT_01cf9c94);
    *param_1 = -0x80000000;
    param_1[1] = iVar21;
    return;
  }
  local_154 = param_2[1];
  ppppppiVar13 = (int ******)param_2[2];
  iVar21 = 0;
  ppppppiVar7 = (int ******)param_2[3];
  local_14c = 0;
  ppppppiVar23 = ppppppiVar13 + (int)ppppppiVar7 * 4;
  ppppppiVar17 = (int ******)0xaaaa;
  if (ppppppiVar7 < (int ******)0xaaaa) {
    ppppppiVar17 = ppppppiVar7;
  }
  local_15c = ppppppiVar13;
  local_158 = ppppppiVar13;
  local_150 = ppppppiVar23;
  if (ppppppiVar7 == (int ******)0x0) {
    local_134 = 4;
    ppppppiVar17 = (int ******)0x0;
  }
  else {
    local_134 = FUN_01298504((int)ppppppiVar17 * 0x18,4);
    if (local_134 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,(int)ppppppiVar17 * 0x18);
    }
  }
  local_160 = &local_70;
  puVar3 = (undefined4 *)((uint)&local_a0 | 4);
  puVar4 = (undefined4 *)((uint)&local_78 | 4);
  local_17c = &local_60;
  local_180 = local_f0;
  local_178 = &local_98;
  puVar24 = (undefined2 *)((uint)&local_78 | 1);
  local_188 = (int *)((uint)&local_108 | 4);
  ppppppiVar7 = (int ******)&local_138;
  ppppppiVar8 = (int ******)&local_18c;
  local_130 = (int ******)0x0;
  local_18c = ppppppiVar7;
  local_184 = ppppppiVar23;
  local_138 = ppppppiVar17;
  while( true ) {
    if (ppppppiVar13 != ppppppiVar23) {
      ppppppiVar8 = ppppppiVar13 + 4;
      ppppppiVar7 = (int ******)*ppppppiVar13;
      local_158 = ppppppiVar8;
    }
    if (ppppppiVar13 == ppppppiVar23 || ppppppiVar7 == (int ******)0x80000015) {
      pppppiVar14 = local_18c[1];
      pppppiVar16 = local_18c[2];
      *param_1 = (int)*local_18c;
      param_1[1] = (int)pppppiVar14;
      param_1[2] = (int)pppppiVar16;
      if (*param_1 != -0x80000000) {
        local_148 = *param_1;
        iStack_144 = param_1[1];
        iStack_140 = param_1[2];
        iVar21 = FUN_014ca838(&local_15c);
        if (iVar21 == 0) {
          return;
        }
        *param_1 = -0x80000000;
        param_1[1] = iVar21;
        FUN_014ca9c8(&local_148);
        return;
      }
      goto LAB_014e0848;
    }
    local_14c = iVar21 + 1;
    pppppiVar14 = ppppppiVar13[2];
    pppppiVar16 = ppppppiVar13[3];
    *local_188 = (int)ppppppiVar13[1];
    local_188[1] = (int)pppppiVar14;
    local_188[2] = (int)pppppiVar16;
    local_174 = ppppppiVar8;
    local_108 = ppppppiVar7;
    if ((int)ppppppiVar7 < 0) {
      puVar6 = (undefined2 *)FUN_014c8278(&local_108,auStack_29,&DAT_01cf9c34);
      goto LAB_014e0838;
    }
    bVar22 = false;
    local_f8 = (undefined *)0x80000015;
    local_dc = local_104 + local_100 * 0x20;
    bVar20 = false;
    local_16c = (undefined *)0x8;
    local_e4 = local_104;
    local_e8 = local_104;
    local_168 = 0;
    local_d8 = 0;
    local_b4 = 0;
    local_b8 = (undefined *)0x8;
    local_bc = 0;
    local_170 = local_14c;
    local_e0 = ppppppiVar7;
    while( true ) {
      while( true ) {
        FUN_014c96ec(&local_78,&local_f8);
        ppiVar2 = local_78;
        puVar9 = local_f8;
        iVar21 = local_168;
        puVar6 = local_74;
        if (local_78 == (int **)0x80000017) goto LAB_014e0828;
        if (local_78 != (int **)0x80000015) break;
        if (bVar20) {
          local_9c = (undefined2 *)0x4;
          local_a0 = (int **)&DAT_0056d618;
          local_74 = &DAT_0132b6a0;
          local_78 = (int **)&local_a0;
          puVar6 = (undefined2 *)FUN_019676ac(&DAT_005ab34f,&local_78);
          goto LAB_014e0828;
        }
        FUN_014c9a5c(&local_78,&local_f8);
        if (((uint)local_78 & 1) != 0) {
          puVar6 = local_74;
          goto LAB_014e0828;
        }
        local_be = *(undefined1 *)(puVar24 + 1);
        bVar20 = true;
        local_c0 = *puVar24;
        bVar22 = true;
        local_164 = local_74;
        local_d0 = (int **)*local_160;
        puStack_cc = (undefined2 *)local_160[1];
        local_c8 = (undefined1)local_160[2];
        local_98 = CONCAT31(local_98._1_3_,local_c8);
        local_a0 = local_d0;
        local_9c = puStack_cc;
      }
      if (local_78 == (int **)&DAT_80000016) break;
      local_9c = local_74;
      iVar11 = local_160[1];
      *local_178 = *local_160;
      local_178[1] = iVar11;
      bVar25 = local_f8 == (undefined *)0x80000015;
      local_f8 = (undefined *)0x80000015;
      local_a0 = ppiVar2;
      if (bVar25) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements"
                     ,0x2c,&DAT_01cfa02c);
      }
      puVar12 = (undefined *)local_180[1];
      local_70 = local_98;
      uStack_6c = uStack_94;
      local_64 = local_f4;
      *local_17c = (undefined *)*local_180;
      local_17c[1] = puVar12;
      local_68 = puVar9;
      local_78 = ppiVar2;
      if (local_168 == local_bc) {
        FUN_00a20ed0(&local_bc);
        local_16c = local_b8;
      }
      puVar5 = (undefined4 *)(local_16c + iVar21 * 0x20);
      local_168 = iVar21 + 1;
      *puVar5 = local_78;
      puVar5[1] = local_74;
      puVar5[2] = local_70;
      puVar5[3] = uStack_6c;
      puVar5[4] = local_68;
      puVar5[5] = local_64;
      puVar5[6] = local_60;
      puVar5[7] = local_5c;
      local_b4 = local_168;
    }
    if (!bVar22) break;
    local_a2 = local_be;
    local_a4 = local_c0;
    local_b0 = local_d0;
    puStack_ac = puStack_cc;
    local_a8 = local_c8;
    local_68 = local_16c;
    local_64 = local_16c + local_168 * 0x20;
    local_5c = 2;
    local_60 = &DAT_01cfa50c;
    local_78 = (int **)0x80000015;
    local_4c = (undefined *)0x8;
    local_50 = &DAT_0056fe10;
    local_54 = (undefined *)0x10;
    local_58 = &DAT_00567828;
    FUN_014dc6c8(&local_a0,&local_78,&local_58);
    ppiVar2 = local_78;
    iVar21 = local_170;
    ppppppiVar23 = local_184;
    if ((char)local_a0 == '\x01') goto LAB_014e0184;
    if (local_a0._1_1_ == '\x02') {
      local_34._4_4_ = 0x10;
      local_34._0_4_ = (int *)&DAT_00567828;
      local_9c = &DAT_0132b6a0;
      local_a0 = (int **)&local_34;
      local_1a0 = (undefined2 *)FUN_019676ac(&DAT_0057cd64,&local_a0);
LAB_014e0600:
      iVar11 = 2;
LAB_014e05b8:
      if (local_78 != (int **)0x80000015) {
LAB_014e0198:
        FUN_014e5d78(&local_78);
      }
      puVar9 = local_16c;
      if (iVar11 == 2) goto LAB_014e01f4;
    }
    else {
      if (((uint)local_a0 & 0x100) == 0) {
        FUN_014dc9d4(&local_a0,&local_78);
        if ((char)local_a0 == '\0') {
          cVar1 = local_a0._1_1_;
          FUN_014dc6c8(&local_a0,&local_78,&local_58);
          ppiVar2 = local_78;
          if ((char)local_a0 != '\x01') {
            if (local_a0._1_1_ == '\x02') {
              if (cVar1 == '\0') {
                uVar26 = FUN_014e2b4c();
                iVar11 = (int)uVar26 << 1;
                local_1a0 = (undefined2 *)((ulonglong)uVar26 >> 0x20);
              }
              else {
                uVar26 = FUN_014e2b4c();
                iVar11 = (int)uVar26 + 1;
                local_1a0 = (undefined2 *)((ulonglong)uVar26 >> 0x20);
              }
              goto LAB_014e05b8;
            }
            if (((uint)local_a0 & 0x100) == 0) {
              local_34._4_4_ = 0x10;
              local_34._0_4_ = (int *)&DAT_00567828;
              local_9c = &DAT_0132b6a0;
              local_a0 = (int **)&local_34;
              local_1a0 = (undefined2 *)FUN_019676ac(&DAT_005ab34f,&local_a0);
              goto LAB_014e0600;
            }
            local_78 = (int **)0x80000015;
            if (ppiVar2 == (int **)0x80000015) {
              local_1a0 = (undefined2 *)FUN_019678c0(&DAT_0056ad38,0x10);
            }
            else {
              uVar18 = puVar4[1];
              uVar19 = puVar4[2];
              *puVar3 = *puVar4;
              puVar3[1] = uVar18;
              puVar3[2] = uVar19;
              local_a0 = ppiVar2;
              if (cVar1 == '\0') {
                uVar26 = FUN_014e4c84(&local_a0);
                puVar6 = (undefined2 *)((ulonglong)uVar26 >> 0x20);
                iVar11 = (int)uVar26 << 1;
              }
              else {
                uVar26 = FUN_014e2c00(&local_a0);
                puVar6 = (undefined2 *)((ulonglong)uVar26 >> 0x20);
                iVar11 = (int)uVar26 + 1;
              }
              local_1a0 = puVar6;
              if (iVar11 != 2) {
                FUN_014dc6c8(&local_a0,&local_78,&local_58);
                local_1a0 = local_9c;
                if ((char)local_a0 == '\0') {
                  if (local_a0._1_1_ == '\x02') {
                    local_1a0 = puVar6;
                  }
                  else {
                    if (((uint)local_a0 & 0x100) == 0) {
                      local_34._4_4_ = 0x10;
                      local_34._0_4_ = (int *)&DAT_00567828;
                      local_9c = &DAT_0132b6a0;
                      local_a0 = (int **)&local_34;
                      local_1a0 = (undefined2 *)FUN_019676ac(&DAT_005ab34f,&local_a0);
                    }
                    else {
                      local_34._4_4_ = 8;
                      local_34._0_4_ = (int *)&DAT_0056fe10;
                      local_9c = &DAT_0132b6a0;
                      local_a0 = (int **)&local_34;
                      local_1a0 = (undefined2 *)FUN_019676ac(&DAT_005ab34f,&local_a0);
                    }
                    FUN_014e5e98(iVar11,puVar6);
                    iVar11 = 2;
                    iVar21 = local_170;
                    ppppppiVar23 = local_184;
                  }
                  goto LAB_014e05b8;
                }
                FUN_014e5e98(iVar11,puVar6);
              }
            }
            goto LAB_014e0188;
          }
        }
LAB_014e0184:
        local_1a0 = local_9c;
LAB_014e0188:
        iVar11 = 2;
        if (local_78 != (int **)0x80000015) goto LAB_014e0198;
      }
      else {
        local_78 = (int **)0x80000015;
        if (ppiVar2 != (int **)0x80000015) {
          local_40 = *local_160;
          iStack_3c = local_160[1];
          local_44 = local_74;
          local_48 = ppiVar2;
          FUN_014dc6c8(&local_a0,&local_78,&local_58);
          if ((char)local_a0 != '\x01') {
            if (local_a0._1_1_ == '\x02') {
              local_34._4_4_ = 0x10;
              local_34._0_4_ = (int *)&DAT_00567828;
              local_9c = &DAT_0132b6a0;
              local_a0 = (int **)&local_34;
              local_1a0 = (undefined2 *)FUN_019676ac(&DAT_0057cd64,&local_a0);
            }
            else {
              if (((uint)local_a0 & 0x100) == 0) {
                FUN_014dc9d4(&local_a0,&local_78);
                if ((char)local_a0 == '\0') {
                  if (local_a0._1_1_ == '\x01') {
                    uVar26 = FUN_014e2c00(&local_48);
                    puVar6 = (undefined2 *)((ulonglong)uVar26 >> 0x20);
                    iVar15 = (int)uVar26 + 1;
                  }
                  else {
                    uVar26 = FUN_014e4c84(&local_48);
                    puVar6 = (undefined2 *)((ulonglong)uVar26 >> 0x20);
                    iVar15 = (int)uVar26 << 1;
                  }
                  local_1a0 = puVar6;
                  if (iVar15 != 2) {
                    FUN_014dc6c8(&local_a0,&local_78,&local_58);
                    local_1a0 = local_9c;
                    if ((char)local_a0 == '\0') {
                      if (local_a0._1_1_ == '\x02') {
                        local_1a0 = puVar6;
                        iVar11 = iVar15;
                      }
                      else {
                        if (((uint)local_a0 & 0x100) == 0) {
                          local_34._4_4_ = 0x10;
                          local_34._0_4_ = (int *)&DAT_00567828;
                          local_9c = &DAT_0132b6a0;
                          local_a0 = (int **)&local_34;
                          local_1a0 = (undefined2 *)FUN_019676ac(&DAT_005ab34f,&local_a0);
                        }
                        else {
                          local_34._4_4_ = 8;
                          local_34._0_4_ = (int *)&DAT_0056fe10;
                          local_9c = &DAT_0132b6a0;
                          local_a0 = (int **)&local_34;
                          local_1a0 = (undefined2 *)FUN_019676ac(&DAT_005ab34f,&local_a0);
                        }
                        iVar11 = 2;
                        FUN_014e5e98(iVar15,puVar6);
                        iVar21 = local_170;
                        ppppppiVar23 = local_184;
                      }
                      goto LAB_014e05b8;
                    }
                    FUN_014e5e98(iVar15,puVar6);
                  }
                  goto LAB_014e0188;
                }
                goto LAB_014e0434;
              }
              local_34._4_4_ = 8;
              local_34._0_4_ = (int *)&DAT_0056fe10;
              local_9c = &DAT_0132b6a0;
              local_a0 = (int **)&local_34;
              local_1a0 = (undefined2 *)FUN_019676ac(&DAT_005ab34f,&local_a0);
            }
            iVar11 = 2;
            FUN_014e5d78(&local_48);
            iVar21 = local_170;
            ppppppiVar23 = local_184;
            goto LAB_014e05b8;
          }
LAB_014e0434:
          local_1a0 = local_9c;
          FUN_014e5d78(&local_48);
          goto LAB_014e0188;
        }
        local_1a0 = (undefined2 *)FUN_019678c0(&DAT_0056ad38,0x10);
      }
      iVar11 = 2;
LAB_014e01f4:
      FUN_00d47b64(local_1a0);
      local_168 = local_b4;
      puVar9 = local_b8;
    }
    local_4c = puVar9 + local_168 * 0x20;
    local_50 = (undefined *)local_bc;
    local_168 = iVar11;
    local_58 = puVar9;
    local_54 = puVar9;
    FUN_014ddf5c(&local_78,&local_58);
    if (local_78 == (int **)&DAT_80000016) {
      local_a0 = (int **)&DAT_80000016;
    }
    else {
      local_a0 = local_78;
      local_9c = local_74;
      local_98 = local_70;
      uStack_94 = uStack_6c;
      puStack_90 = local_68;
      puStack_8c = local_64;
      puStack_88 = local_60;
      uStack_84 = local_5c;
      if ((undefined *)0x1 < (undefined *)((int)local_78 + 0x7fffffeb)) {
        uVar26 = FUN_01962cb0(&local_a0);
        if ((int)uVar26 == 0) {
          puVar6 = (undefined2 *)
                   FUN_019676ac("unexpected map keystruct Metadata with 5 elementsstruct Metadata with 6 elementsstruct Metadata with 7 elementsstruct IndexVariant with 4 elementsstruct Assets with 5 elementsstruct Metadata with 3 elements"
                                ,0x25);
        }
        else {
          local_7c = (int *)&local_34;
          local_78 = &local_7c;
          local_74 = (undefined2 *)&LAB_01963050;
          local_34 = uVar26;
          puVar6 = (undefined2 *)FUN_019676ac(&DAT_005bc768,&local_78);
        }
        FUN_014c81b0(&local_a0);
        FUN_014c81b0(&puStack_90);
        FUN_014debf8(&local_58);
        FUN_014c9da8(local_168,local_1a0);
        goto LAB_014e0830;
      }
    }
    FUN_014debf8(&local_58);
    local_10a = local_a2;
    local_10c = local_a4;
    local_118 = local_b0;
    puStack_114 = puStack_ac;
    local_110 = local_a8;
    puVar6 = (undefined2 *)FUN_014c9cac(&local_f8);
    ppppppiVar7 = local_130;
    if (puVar6 != (undefined2 *)0x0) {
      FUN_014c9da8(local_168,local_1a0);
      goto LAB_014e0838;
    }
    if (local_168 != 3) {
      local_11a = local_10a;
      local_11c = local_10c;
      local_128 = local_118;
      puStack_124 = puStack_114;
      local_120 = local_110;
    }
    if (local_168 == 3 || local_168 == 4) {
      puVar6 = local_1a0;
LAB_014e0838:
      *param_1 = -0x80000000;
      param_1[1] = (int)puVar6;
      FUN_014ca9c8(&local_138);
LAB_014e0848:
      FUN_014deb6c(&local_15c);
      return;
    }
    if (local_130 == local_138) {
      FUN_014f8acc(&local_138);
    }
    piVar10 = (int *)(local_134 + (int)ppppppiVar7 * 0x18);
    *piVar10 = local_168;
    *(undefined2 *)(piVar10 + 2) = local_11c;
    *(undefined1 *)((int)piVar10 + 10) = local_11a;
    *(undefined2 **)((int)piVar10 + 0xb) = local_164;
    piVar10[1] = (int)local_1a0;
    FUN_01bed4e2((int)piVar10 + 0xf,&local_128,9);
    ppppppiVar7 = (int ******)((int)ppppppiVar7 + 1);
    ppppppiVar8 = extraout_r1;
    ppppppiVar13 = local_174;
    local_130 = ppppppiVar7;
  }
  local_9c = (undefined2 *)0x4;
  local_a0 = (int **)&DAT_0056d618;
  local_74 = &DAT_0132b6a0;
  local_78 = (int **)&local_a0;
  puVar6 = (undefined2 *)FUN_019676ac(&DAT_0057cd64,&local_78);
LAB_014e0828:
  FUN_014c9bdc(&local_bc);
LAB_014e0830:
  FUN_014c9c60(&local_f8);
  goto LAB_014e0838;
}

