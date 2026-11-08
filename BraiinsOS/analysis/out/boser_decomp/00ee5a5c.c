// FUN_00ee5a5c @ 00ee5a5c size=3996 calls_out=27 calls_in=1
// strings: load_balance_strategy | pools | pools | pools | pools | load_balance_strategy

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ee5a5c(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int *extraout_r1;
  int *extraout_r1_00;
  int *extraout_r2;
  int *extraout_r3;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  int *unaff_r8;
  int *piVar13;
  int *extraout_r12;
  int *piVar14;
  bool bVar15;
  int *local_184;
  int *local_170;
  int *local_164;
  int *local_160;
  int *local_15c;
  int *local_158;
  int *local_14c;
  int *local_148;
  int *local_144;
  int *local_140;
  int *local_13c;
  int *local_138;
  int *local_134;
  int *local_130;
  int *local_12c;
  int *local_128;
  int *local_124;
  int local_120;
  int iStack_11c;
  int local_118;
  int local_114;
  int iStack_110;
  int *local_108;
  int *local_104;
  int *local_100;
  int *piStack_fc;
  int *piStack_f8;
  int *local_f0;
  int *piStack_ec;
  int *piStack_e8;
  int *local_e0;
  int *local_dc;
  int *local_d8;
  int *local_d4;
  int *local_d0;
  int *local_cc;
  int *local_c8;
  int *local_c4;
  int *piStack_c0;
  int *piStack_bc;
  int *local_b8;
  int *local_b4;
  int *local_b0;
  int *local_a8 [2];
  undefined4 local_a0;
  int *local_9c;
  int *local_98;
  int *local_94;
  int *local_90;
  int *local_8c;
  int *local_88;
  int *local_84;
  int *piStack_80;
  int *piStack_7c;
  int *local_78;
  int *local_74;
  int *local_70;
  int *local_68;
  int *piStack_64;
  int *piStack_60;
  int *local_58;
  int *piStack_54;
  int *piStack_50;
  int *local_48;
  int *local_44;
  int *local_40;
  undefined4 local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  
  local_108 = &local_120;
  local_120 = *param_2;
  iStack_11c = param_2[1];
  local_118 = param_2[2];
  local_114 = param_2[3];
  iStack_110 = param_2[4];
  piVar10 = (int *)param_2[5];
  piVar13 = (int *)param_2[6];
  uVar9 = piVar10[5];
  local_104 = piVar13;
  if (uVar9 < (uint)piVar10[4]) {
    do {
      uVar11 = (uint)*(byte *)(piVar10[3] + uVar9);
      if ((0x17 < uVar11 - 9) || ((1 << (uVar11 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar11 != 0x5b) {
          if (uVar11 != 0x7b) {
            piVar7 = (int *)FUN_012c7788(piVar10,&local_108,&DAT_01c1d018);
            goto LAB_00ee6850;
          }
          cVar2 = (char)piVar10[7] + -1;
          *(char *)(piVar10 + 7) = cVar2;
          if (cVar2 != '\0') {
            piVar10[5] = uVar9 + 1;
            local_d0 = (int *)CONCAT31(local_d0._1_3_,1);
            local_170 = (int *)&DAT_00000003;
            local_14c = (int *)&DAT_80000001;
            local_48 = (int *)0x80000000;
            local_e0 = (int *)&DAT_80000000;
            local_184 = (int *)0x49e84f;
            local_144 = local_40;
            local_164 = (int *)&DAT_80000000;
            local_148 = local_44;
            local_124 = (int *)&DAT_80000000;
            local_12c = (int *)&DAT_80000000;
            piVar4 = piVar13;
            piVar7 = local_108;
            local_d4 = piVar10;
            local_cc = local_108;
            local_c8 = piVar13;
            goto LAB_00ee5be4;
          }
          local_e0 = (int *)&DAT_00000018;
          uVar3 = FUN_012c6b30(piVar10,&local_e0);
          goto LAB_00ee5ae4;
        }
        cVar2 = (char)piVar10[7] + -1;
        *(char *)(piVar10 + 7) = cVar2;
        if (cVar2 == '\0') {
          local_e0 = (int *)&DAT_00000018;
          uVar3 = FUN_012c6b30(piVar10,&local_e0);
          goto LAB_00ee5ae4;
        }
        piVar10[5] = uVar9 + 1;
        local_90 = (int *)CONCAT31(local_90._1_3_,1);
        local_9c = &local_120;
        local_a0 = (int *)0x0;
        local_98 = piVar13;
        local_94 = piVar10;
        FUN_00e62f5c(&local_e0,&local_a0);
        local_130 = local_d8;
        piVar7 = local_dc;
        piVar4 = local_e0;
        local_12c = local_e0;
        if (local_e0 == (int *)0x80000002) {
          local_138 = local_dc;
          local_130 = unaff_r8;
LAB_00ee65d8:
          local_e0 = local_138;
          FUN_0196bf0c(piVar13,&local_120);
          piVar14 = extraout_r1_00;
          local_13c = local_138;
          local_124 = piVar4;
          local_140 = piVar13;
          piVar7 = (int *)&DAT_00000003;
          local_30 = (int *)0xee65ec;
        }
        else {
          if (local_e0 == (int *)&DAT_80000001) {
            local_138 = (int *)FUN_012cc2c0(0,&DAT_01c16804,&DAT_01d064b8);
            local_130 = unaff_r8;
            goto LAB_00ee65d8;
          }
          FUN_00e62e98(&local_e0,&local_a0);
          piVar8 = local_98;
          piVar12 = local_9c;
          local_140 = local_d8;
          piVar14 = local_dc;
          local_124 = local_e0;
          if (local_e0 == (int *)&DAT_80000001) {
            local_138 = local_dc;
LAB_00ee65c4:
            local_130 = piVar7;
            if (piVar4 != (int *)&DAT_80000000) {
              FUN_019bb7e0(piVar4,piVar7);
            }
            goto LAB_00ee65d8;
          }
          local_128 = piVar7;
          if (local_e0 == (int *)&DAT_80000000) {
            local_138 = (int *)FUN_012cc2c0(1,&DAT_01c16804,&DAT_01d064b8);
            goto LAB_00ee65c4;
          }
          local_dc = local_a0;
          local_cc = local_98;
          local_d8 = local_9c;
          local_e0 = (int *)&DAT_00000001;
          local_a0 = (int *)((int)local_a0 + 1);
          FUN_014db6fc(&local_38,&local_94);
          if ((char)local_38 == '\x01') {
LAB_00ee60cc:
            local_138 = local_34;
            FUN_0196bf0c(piVar8,piVar12);
LAB_00ee65ac:
            FUN_019bb7e0(local_124,piVar14);
            goto LAB_00ee65c4;
          }
          if (local_38._1_1_ == '\0') {
            local_138 = (int *)FUN_012cc2c0(2,&DAT_01c16804,&DAT_01d064b8);
            goto LAB_00ee65ac;
          }
          FUN_00e73ab0(&local_38,&local_e0,local_94);
          piVar1 = local_98;
          piVar5 = local_9c;
          if (local_38 == &DAT_80000000) goto LAB_00ee60cc;
          local_68 = (int *)local_38;
          piStack_64 = local_34;
          piStack_60 = local_30;
          local_cc = local_98;
          local_d8 = local_9c;
          local_dc = local_a0;
          local_e0 = (int *)&DAT_00000001;
          local_a0 = (int *)((int)local_a0 + 1);
          FUN_014db6fc(&local_38,&local_94);
          if ((char)local_38 == '\x01') {
LAB_00ee6158:
            local_138 = local_34;
            FUN_0196bf0c(piVar1,piVar5);
LAB_00ee65a4:
            FUN_00b0db90(&local_68);
            goto LAB_00ee65ac;
          }
          if (local_38._1_1_ != '\x01') {
            local_138 = (int *)FUN_012cc2c0(3,&DAT_01c16804,&DAT_01d064b8);
            goto LAB_00ee65a4;
          }
          FUN_00e75388(&local_38,&local_e0,local_94);
          if (local_38 == &DAT_00000003) goto LAB_00ee6158;
          local_138 = local_34;
          local_f0 = local_68;
          piStack_ec = piStack_64;
          piStack_e8 = piStack_60;
          local_13c = local_2c;
          piVar7 = (int *)local_38;
        }
        *(char *)(piVar10 + 7) = (char)piVar10[7] + '\x01';
        local_9c = local_138;
        local_84 = local_f0;
        piStack_80 = piStack_ec;
        piStack_7c = piStack_e8;
        local_74 = local_128;
        local_78 = piVar4;
        local_a0 = piVar7;
        local_98 = local_30;
        local_94 = local_13c;
        local_90 = local_124;
        local_8c = piVar14;
        local_88 = local_140;
        local_70 = local_130;
        piVar8 = (int *)FUN_014d9568(piVar10);
        local_dc = local_138;
        local_c4 = local_f0;
        piStack_c0 = piStack_ec;
        piStack_bc = piStack_e8;
        local_b4 = local_128;
        local_b8 = piVar4;
        local_e0 = piVar7;
        local_d8 = local_30;
        local_d4 = local_13c;
        local_d0 = local_124;
        local_cc = piVar14;
        local_c8 = local_140;
        local_b0 = local_130;
        local_a8[0] = piVar8;
        if (piVar7 == (int *)&DAT_00000003) {
          piVar12 = (int *)&DAT_00000003;
          if (piVar8 != (int *)0x0) {
            FUN_00f80260(local_a8);
            piVar14 = (int *)0xee66e8;
            goto LAB_00ee6710;
          }
          piVar7 = local_138;
          goto LAB_00ee6718;
        }
        if (piVar8 == (int *)0x0) goto LAB_00ee6794;
        FUN_014883e8(&local_e0);
        local_138 = piVar8;
        piVar14 = (int *)0xee670c;
        goto LAB_00ee6710;
      }
      uVar9 = uVar9 + 1;
      piVar10[5] = uVar9;
    } while (piVar10[4] != uVar9);
  }
  local_e0 = (int *)&DAT_00000005;
  uVar3 = FUN_012c6b30(piVar10,&local_e0);
  goto LAB_00ee5ae4;
LAB_00ee5be4:
  FUN_01278730(&local_a0,&local_d4);
  if ((char)local_a0 == '\x01') goto LAB_00ee618c;
  if (local_a0._1_1_ != '\x01') {
    local_44 = local_148;
    local_40 = local_144;
    local_48 = local_12c;
    piVar7 = local_14c;
    if (local_14c == (int *)&DAT_80000001) {
      piVar7 = (int *)&DAT_80000000;
    }
    piVar4 = (int *)(uint)(local_14c == (int *)&DAT_80000001);
    if (local_124 == (int *)&DAT_80000000) {
      local_9c = (int *)&LAB_018a13b8;
      local_a0 = &local_38;
      local_34 = (int *)&SUB_00000004;
      local_38 = &DAT_0056ee18;
      local_138 = (int *)FUN_019676ac(&DAT_0057cd64,&local_a0);
    }
    else {
      if (local_164 != (int *)&DAT_80000000) {
        local_58 = local_12c;
        piStack_54 = local_148;
        piStack_50 = local_144;
        if (local_170 == (int *)&DAT_00000003) {
          local_170 = (int *)0x2;
        }
        if (local_e0 != (int *)&DAT_80000000) {
          FUN_019bb7e0(local_e0,local_dc);
        }
        local_12c = piVar7;
        goto LAB_00ee6390;
      }
      local_9c = (int *)&DAT_0132b6a0;
      local_a0 = &local_38;
      local_34 = (int *)&DAT_00000005;
      local_38 = "pools";
      local_138 = (int *)FUN_019676ac(&DAT_0057cd64,&local_a0);
      FUN_019bb7e0(local_124,local_134);
    }
    local_13c = (int *)(uint)(local_124 == (int *)&DAT_80000000);
    local_12c = piVar7;
    if (piVar7 != (int *)&DAT_80000000) {
      FUN_019bb7e0(piVar7,local_128);
    }
    goto LAB_00ee6318;
  }
  local_d4[2] = 0;
  local_d4[5] = local_d4[5] + 1;
  FUN_01968828(&local_a0,local_d4 + 3);
  piVar12 = local_98;
  piVar14 = local_9c;
  if (local_a0 == (int *)0x2) goto LAB_00ee618c;
  uVar3 = 0;
  piVar7 = piVar12;
  if (((uint)local_a0 & 1) == 0) {
    piVar4 = local_160;
    if ((int)local_98 < 0) goto LAB_00ee69d8;
    if (local_98 == (int *)0x0) {
      piVar4 = (int *)&DAT_00000001;
      piVar7 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_01298504(local_98,1);
      if (piVar4 == (int *)0x0) goto LAB_00ee69d4;
    }
    FUN_01bed4e2(piVar4,piVar14,piVar12);
    local_160 = piVar4;
  }
  else {
    piVar4 = local_15c;
    if ((int)local_98 < 0) goto LAB_00ee69d8;
    if (local_98 == (int *)0x0) {
      piVar4 = (int *)&DAT_00000001;
      piVar7 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_01298504(local_98,1);
      if (piVar4 == (int *)0x0) {
LAB_00ee69d4:
        uVar3 = 1;
        piVar4 = piVar12;
LAB_00ee69d8:
        local_44 = local_148;
        local_40 = local_144;
        local_48 = local_12c;
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar3,piVar4);
      }
    }
    FUN_01bed4e2(piVar4,piVar14,piVar12);
    local_15c = piVar4;
  }
  if (local_e0 != (int *)&DAT_80000000) {
    FUN_019bb7e0(local_e0,local_dc);
  }
  local_d8 = piVar12;
  local_e0 = piVar7;
  local_dc = piVar4;
  if ((int)piVar12 < 5) {
    if (piVar12 == (int *)&DAT_00000003) {
      iVar6 = thunk_FUN_01bed842(piVar14,"uid",3);
      if (iVar6 != 0) goto LAB_00ee5efc;
      if (local_14c != (int *)&DAT_80000001) {
        local_34 = (int *)&DAT_00000003;
        goto LAB_00ee6970;
      }
      FUN_00e618c8(&local_a0,&local_e0);
      local_14c = local_a0;
      if (local_a0 != (int *)&DAT_80000001) {
        local_130 = local_98;
        local_128 = local_9c;
        goto LAB_00ee5f14;
      }
      local_44 = local_148;
      local_40 = local_144;
      local_48 = local_12c;
      local_14c = (int *)&DAT_80000001;
      piVar14 = local_9c;
      goto LAB_00ee6314;
    }
    if ((piVar12 != (int *)&SUB_00000004) || (*piVar14 != 0x656d616e)) goto LAB_00ee5efc;
    if (local_124 != (int *)&DAT_80000000) {
      local_34 = (int *)&SUB_00000004;
      local_184 = (int *)&DAT_0056ee18;
      goto LAB_00ee6970;
    }
    FUN_00e62398(&local_a0,&local_e0);
    local_124 = local_a0;
    if (local_a0 == (int *)&DAT_80000000) {
      local_44 = local_148;
      local_40 = local_144;
      local_48 = local_12c;
      local_124 = (int *)&DAT_80000000;
      piVar14 = local_9c;
      goto LAB_00ee6314;
    }
    local_140 = local_98;
    local_134 = local_9c;
  }
  else {
    if (piVar12 == (int *)&DAT_00000005) {
      iVar6 = thunk_FUN_01bed842(piVar14,"pools",5);
      piVar8 = local_c8;
      piVar12 = local_cc;
      piVar14 = local_d4;
      piVar4 = local_dc;
      piVar7 = local_e0;
      if (iVar6 == 0) {
        if (local_164 == (int *)&DAT_80000000) {
          bVar15 = local_e0 == (int *)&DAT_80000000;
          local_e0 = (int *)&DAT_80000000;
          local_94 = local_dc;
          local_90 = local_d8;
          local_a0 = (int *)0x2;
          if (bVar15) {
            local_a0 = (int *)&DAT_00000008;
          }
          local_98 = piVar7;
          local_9c = local_cc;
          local_8c = local_c8;
          piVar5 = (int *)FUN_0167459c(local_d4);
          if (piVar5 == (int *)0x0) {
            FUN_00e73ab0(&local_38,&local_a0,piVar14);
            if (local_38 != &DAT_80000000) {
              local_144 = local_30;
              local_148 = local_34;
              local_164 = (int *)local_38;
              local_12c = (int *)local_38;
              goto LAB_00ee5f14;
            }
          }
          else {
            local_38 = &DAT_80000000;
            local_34 = piVar5;
            if (piVar7 != (int *)&DAT_80000000) {
              FUN_019bb7e0(piVar7,piVar4);
            }
          }
          piVar14 = local_34;
          local_44 = local_148;
          local_40 = local_144;
          local_48 = local_12c;
          FUN_0196bf0c(piVar8,piVar12);
        }
        else {
          local_34 = (int *)&DAT_00000005;
          local_184 = (int *)0x49e84a;
LAB_00ee6970:
          local_40 = local_144;
          local_38 = (char *)local_184;
          local_a0 = &local_38;
          local_44 = local_148;
          local_48 = local_12c;
          local_9c = (int *)&DAT_0132b6a0;
          piVar14 = (int *)FUN_019676ac(&DAT_005ab34f,&local_a0);
        }
        goto LAB_00ee6314;
      }
    }
    else if (piVar12 == (int *)&DAT_00000015) {
      iVar6 = thunk_FUN_01bed842(piVar14,"load_balance_strategy",0x15);
      piVar4 = local_c8;
      piVar7 = local_cc;
      piVar8 = local_d4;
      piVar12 = local_dc;
      piVar14 = local_e0;
      if (iVar6 == 0) {
        if (local_170 != (int *)&DAT_00000003) {
          local_34 = (int *)&DAT_00000015;
          local_184 = (int *)0x49eaa0;
          goto LAB_00ee6970;
        }
        bVar15 = local_e0 == (int *)&DAT_80000000;
        local_e0 = (int *)&DAT_80000000;
        local_94 = local_dc;
        local_90 = local_d8;
        local_a0 = (int *)0x2;
        if (bVar15) {
          local_a0 = (int *)&DAT_00000008;
        }
        local_98 = piVar14;
        local_9c = local_cc;
        local_8c = local_c8;
        piVar5 = (int *)FUN_0167459c(local_d4);
        if (piVar5 == (int *)0x0) {
          FUN_00e75388(&local_38,&local_a0,piVar8);
          local_138 = local_34;
          local_170 = (int *)local_38;
          if (local_38 != &DAT_00000003) {
            local_158 = local_30;
            local_13c = local_2c;
            goto LAB_00ee5be4;
          }
        }
        else {
          local_38 = &DAT_00000003;
          local_34 = piVar5;
          if (piVar14 != (int *)&DAT_80000000) {
            FUN_019bb7e0(piVar14,piVar12);
          }
        }
        piVar14 = local_34;
        local_40 = local_144;
        local_44 = local_148;
        local_48 = local_12c;
        FUN_0196bf0c(piVar4,piVar7);
        goto LAB_00ee6314;
      }
    }
LAB_00ee5efc:
    piVar14 = (int *)FUN_00e620c0(&local_e0);
    if (piVar14 != (int *)0x0) {
      local_44 = local_148;
      local_40 = local_144;
      local_48 = local_12c;
      goto LAB_00ee6314;
    }
  }
LAB_00ee5f14:
  piVar4 = local_c8;
  piVar7 = local_cc;
  goto LAB_00ee5be4;
LAB_00ee618c:
  piVar14 = local_9c;
  piVar12 = local_e0;
  local_44 = local_148;
  local_40 = local_144;
  bVar15 = local_e0 != (int *)&DAT_80000000;
  local_48 = local_12c;
  local_e0 = (int *)&DAT_80000000;
  local_a0 = (int *)&DAT_00000008;
  if (bVar15) {
    local_98 = piVar12;
    local_94 = local_dc;
    local_90 = local_d8;
    local_a0 = (int *)0x2;
  }
  local_9c = piVar7;
  FUN_0196bf0c(piVar4,&local_a0);
  if (piVar12 != (int *)&DAT_80000000) {
    FUN_019bb7e0(piVar12,local_94);
  }
LAB_00ee6314:
  piVar4 = (int *)&DAT_00000001;
  local_13c = (int *)&DAT_00000001;
  local_138 = piVar14;
LAB_00ee6318:
  if (local_48 != (int *)&DAT_80000000) {
    FUN_00b0db90(&local_48);
  }
  if (((uint)local_13c & (uint)(local_124 != (int *)&DAT_80000000)) != 0) {
    FUN_019bb7e0(local_124,local_134);
  }
  if (((uint)piVar4 & (uint)(-0x7fffffff < (int)local_14c)) != 0) {
    FUN_019bb7e0(local_14c,local_128);
  }
  if (local_e0 != (int *)&DAT_80000000) {
    FUN_019bb7e0(local_e0,local_dc);
  }
  local_130 = (int *)0xee638c;
  local_e0 = local_138;
  FUN_0196bf0c(piVar13,&local_120);
  local_170 = (int *)&DAT_00000003;
  local_124 = extraout_r1;
  local_140 = extraout_r2;
  local_158 = extraout_r3;
  local_134 = piVar4;
  local_128 = extraout_r12;
LAB_00ee6390:
  *(char *)(piVar10 + 7) = (char)piVar10[7] + '\x01';
  local_84 = local_58;
  piStack_80 = piStack_54;
  piStack_7c = piStack_50;
  local_78 = local_12c;
  local_a0 = local_170;
  local_9c = local_138;
  local_98 = local_158;
  local_94 = local_13c;
  local_90 = local_124;
  local_8c = local_134;
  local_88 = local_140;
  local_74 = local_128;
  local_70 = local_130;
  piVar7 = (int *)FUN_012c7b64(piVar10);
  local_c4 = local_58;
  piStack_c0 = piStack_54;
  piStack_bc = piStack_50;
  local_b8 = local_12c;
  piVar4 = local_140;
  local_e0 = local_170;
  local_dc = local_138;
  local_d8 = local_158;
  local_d4 = local_13c;
  local_d0 = local_124;
  local_cc = local_134;
  local_c8 = local_140;
  local_b4 = local_128;
  local_b0 = local_130;
  local_a8[0] = piVar7;
  if (local_170 == (int *)&DAT_00000003) {
    piVar14 = local_134;
    if (piVar7 != (int *)0x0) {
      piVar14 = (int *)0xee6498;
      FUN_00f80260(local_a8);
    }
LAB_00ee6710:
    piVar12 = (int *)&DAT_00000003;
    piVar7 = local_138;
  }
  else if (piVar7 == (int *)0x0) {
LAB_00ee6794:
    piVar12 = local_e0;
    piVar4 = local_d8;
    piVar7 = local_dc;
    piVar14 = local_cc;
    local_140 = local_c8;
    local_13c = local_d4;
    local_130 = local_b0;
    local_128 = local_b4;
    local_124 = local_d0;
    local_100 = local_c4;
    piStack_fc = piStack_c0;
    piStack_f8 = piStack_bc;
    local_b8 = local_12c;
  }
  else {
    FUN_014883e8(&local_e0);
    piVar12 = (int *)&DAT_00000003;
    piVar14 = (int *)0xee64ac;
  }
LAB_00ee6718:
  if (piVar12 != (int *)&DAT_00000003) {
    local_e0 = local_100;
    local_dc = piStack_fc;
    local_d8 = piStack_f8;
    param_1[3] = local_13c;
    param_1[4] = local_124;
    param_1[6] = local_140;
    *param_1 = piVar12;
    param_1[1] = piVar7;
    param_1[2] = piVar4;
    param_1[5] = piVar14;
    param_1[7] = local_100;
    param_1[8] = piStack_fc;
    param_1[9] = piStack_f8;
    param_1[10] = local_12c;
    param_1[0xb] = local_128;
    param_1[0xc] = local_130;
    goto LAB_00ee5afc;
  }
LAB_00ee6850:
  uVar3 = FUN_0127dee8(piVar7,piVar10);
LAB_00ee5ae4:
  FUN_0196bf0c(piVar13,&local_120);
  *param_1 = 3;
  param_1[1] = uVar3;
LAB_00ee5afc:
  if (local_120 == 4 || local_120 == 2) {
    FUN_019bb7e0(local_118,local_114);
  }
  return;
}

