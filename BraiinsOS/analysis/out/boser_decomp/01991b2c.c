// FUN_01991b2c @ 01991b2c size=4912 calls_out=10 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01991b2c(char *param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  short sVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint *puVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined1 uVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint *puVar18;
  undefined4 uVar19;
  bool bVar20;
  char cVar21;
  undefined2 uVar22;
  uint uVar23;
  uint extraout_r3;
  uint extraout_r3_00;
  undefined4 uVar24;
  byte *pbVar25;
  int iVar26;
  int iVar27;
  byte *unaff_r6;
  uint uVar28;
  uint *puVar29;
  uint *puVar30;
  uint uVar31;
  uint uVar32;
  byte *pbVar33;
  undefined4 *puVar34;
  byte *pbVar35;
  byte *pbVar36;
  byte bVar37;
  int iVar38;
  int iVar39;
  undefined8 uVar40;
  uint *local_15c;
  uint local_158;
  uint *local_154;
  uint *local_150;
  uint *local_14c;
  uint *local_148;
  uint *local_144;
  uint *local_140;
  uint *local_13c;
  uint *local_138;
  uint *local_134;
  uint *local_130;
  uint *local_12c;
  uint *local_128;
  uint *local_124;
  uint *local_120;
  undefined4 local_108;
  uint local_104;
  byte *local_fc;
  byte *local_f8;
  uint *local_f0;
  uint *local_ec;
  uint *local_e8;
  uint *local_e4;
  int local_dc;
  uint *local_ac;
  byte *local_a0;
  undefined4 local_88;
  uint *local_84;
  uint *local_80;
  uint *local_7c;
  char local_78 [4];
  uint *local_74;
  uint *local_70;
  uint *puStack_6c;
  undefined4 local_68;
  byte *local_64;
  byte *local_60;
  uint *local_5c;
  uint *local_58;
  uint *local_54;
  byte *local_50;
  int local_4c;
  undefined1 local_48;
  undefined2 local_47;
  undefined1 local_45;
  uint local_40;
  uint local_3c;
  uint *local_38;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  
  pbVar8 = param_2 + 0x18;
LAB_01991ba8:
  do {
    iVar9 = *(int *)(param_2 + 0x28);
    if (iVar9 <= param_3) {
      *param_1 = 'R';
      return;
    }
    iVar39 = *(int *)(param_2 + 0x1c);
    pbVar35 = *(byte **)(param_2 + 0x18);
    if (iVar39 == 0) {
      bVar37 = 0;
LAB_01992f24:
      cVar21 = '\x13';
      unaff_r6 = pbVar35;
      pbVar36 = pbVar35;
      uVar31 = 0;
LAB_01992f30:
      param_1[1] = bVar37;
      *param_1 = cVar21;
      *(byte **)(param_1 + 4) = unaff_r6;
      *(byte **)(param_1 + 8) = pbVar36;
      *(uint *)(param_1 + 0xc) = uVar31;
      return;
    }
    local_a0 = *(byte **)(param_2 + 0x20);
    pbVar36 = (byte *)0x0;
    iVar11 = *(int *)(local_a0 + 0x18);
    uVar31 = 0;
    iVar10 = *(int *)(local_a0 + 0x1c);
    uVar28 = 0;
    iVar12 = *(int *)(local_a0 + 0x24);
    bVar1 = local_a0[0x21];
    pbVar33 = pbVar35;
    iVar26 = iVar39;
    while( true ) {
      iVar26 = iVar26 + -1;
      pbVar25 = pbVar33 + 1;
      bVar37 = *pbVar33;
      if ((uVar28 == 0x3f) && (1 < bVar37)) {
        cVar21 = '\x06';
        bVar37 = 0;
        *(byte **)(param_2 + 0x18) = pbVar25;
        *(int *)(param_2 + 0x1c) = iVar26;
        unaff_r6 = param_2;
        uVar31 = 0;
        goto LAB_01992f30;
      }
      uVar16 = uVar28 & 0x3f;
      uVar23 = bVar37 & 0x7f;
      uVar32 = uVar16 - 0x20;
      uVar13 = uVar23 << uVar16;
      if (-1 < (int)uVar32) {
        uVar13 = 0;
      }
      pbVar36 = (byte *)(uVar13 | (uint)pbVar36);
      uVar13 = uVar23 >> (0x20 - uVar16 & 0xff);
      if (-1 < (int)uVar32) {
        uVar13 = uVar23 << (uVar32 & 0xff);
      }
      uVar31 = uVar13 | uVar31;
      if ((uint)(int)(char)bVar37 < 0x80000000) break;
      uVar28 = uVar28 + 7;
      pbVar33 = pbVar25;
      if (iVar26 == 0) {
        pbVar35 = pbVar35 + iVar39;
        *(byte **)(param_2 + 0x18) = pbVar35;
        param_2[0x1c] = 0;
        param_2[0x1d] = 0;
        param_2[0x1e] = 0;
        param_2[0x1f] = 0;
        goto LAB_01992f24;
      }
    }
    *(byte **)(param_2 + 0x18) = pbVar25;
    *(int *)(param_2 + 0x1c) = iVar26;
    if (!(pbVar36 != (byte *)0x0 || uVar31 != 0)) {
      unaff_r6 = (byte *)0x0;
      *(int *)(param_2 + 0x28) = iVar9 + -1;
      goto LAB_01991ba8;
    }
    iVar39 = *(int *)(param_2 + 0x24);
    if ((uVar31 == 0) && (pbVar36 + -1 < *(byte **)(iVar39 + 8))) {
      puVar17 = (undefined4 *)&DAT_00000068;
      unaff_r6 = (byte *)((int)(pbVar36 + -1) * 0x68 + *(int *)(iVar39 + 4));
    }
    else {
      puVar17 = *(undefined4 **)(iVar39 + 0xc);
      cVar21 = '\x12';
      bVar37 = 0;
      if (puVar17 == (undefined4 *)0x0) {
        bVar37 = 0;
        goto LAB_01992f30;
      }
      local_dc = *(int *)(iVar39 + 0x10);
      while( true ) {
        uVar13 = 0xffffffff;
        uVar28 = (uint)*(ushort *)((int)puVar17 + 0x4d6);
        iVar39 = uVar28 << 3;
        puVar34 = puVar17;
        do {
          if (iVar39 == 0) goto LAB_01991d3c;
          pbVar33 = (byte *)*puVar34;
          iVar39 = iVar39 + -8;
          uVar16 = puVar34[1];
          uVar13 = uVar13 + 1;
          puVar34 = puVar34 + 2;
          uVar23 = (int)pbVar33 - (int)pbVar36;
          uVar16 = (uint)(uVar16 <= uVar31 && (uint)(pbVar36 <= pbVar33) <= uVar16 - uVar31) -
                   (uint)(uVar31 <= uVar16 && (uint)(pbVar33 <= pbVar36) <= uVar31 - uVar16);
        } while (uVar16 == 1);
        uVar28 = uVar13;
        if ((uVar16 & 0xff) == 0) break;
LAB_01991d3c:
        if (local_dc == 0) {
          cVar21 = '\x12';
          goto LAB_01992f30;
        }
        local_dc = local_dc + -1;
        puVar17 = (undefined4 *)puVar17[uVar28 + 0x136];
      }
      unaff_r6 = (byte *)(puVar17 + uVar13 * 0x1a + 0x16);
    }
    if (unaff_r6[0x62] == 1) {
      *(int *)(param_2 + 0x28) = iVar9 + 1;
    }
    sVar2 = *(short *)(unaff_r6 + 0x60);
    if (sVar2 == 0x2e) {
      uVar40 = FUN_0134bd24(unaff_r6,0x2e,puVar17,uVar23);
      FUN_01995c3c(&local_68,pbVar8,*(undefined4 *)(local_a0 + 0x20),(int)uVar40,
                   (int)((ulonglong)uVar40 >> 0x20));
      if ((char)local_68 != 'R') {
LAB_01992fd4:
        local_a0 = local_64;
        puVar29 = local_5c;
        pbVar36 = local_60;
LAB_01992f98:
        *(undefined2 *)(param_1 + 2) = local_68._2_2_;
        param_1[1] = local_68._1_1_;
        *param_1 = (char)local_68;
        *(byte **)(param_1 + 4) = local_a0;
        *(byte **)(param_1 + 8) = pbVar36;
        *(uint **)(param_1 + 0xc) = puVar29;
        return;
      }
      iVar39 = *(int *)(param_2 + 0x28);
      uVar31 = extraout_r3;
      uVar28 = local_68;
      while (local_68 = uVar28, iVar9 < iVar39) {
        pbVar35 = *(byte **)(param_2 + 0x18);
        iVar26 = *(int *)(param_2 + 0x1c);
        puVar30 = (uint *)0x0;
        if (iVar26 == 0) {
          local_68._1_1_ = 0;
LAB_01992f8c:
          local_68._2_2_ = (undefined2)uVar31;
          local_68._0_1_ = '\x13';
          local_a0 = pbVar35;
          puVar29 = (uint *)0x0;
          pbVar36 = pbVar35;
          goto LAB_01992f98;
        }
        pbVar36 = (byte *)0x0;
        puVar29 = (uint *)0x0;
        uVar13 = 0;
        pbVar33 = pbVar35;
        iVar10 = iVar26;
        while( true ) {
          local_68._2_2_ = (undefined2)uVar31;
          iVar10 = iVar10 + -1;
          pbVar25 = pbVar33 + 1;
          local_68._1_1_ = *pbVar33;
          if ((uVar13 == 0x3f) && (1 < local_68._1_1_)) {
            local_68._0_1_ = '\x06';
            local_68._1_1_ = 0;
            *(byte **)(param_2 + 0x18) = pbVar25;
            *(int *)(param_2 + 0x1c) = iVar10;
            local_a0 = pbVar36;
            puVar29 = puVar30;
            pbVar36 = pbVar35;
            goto LAB_01992f98;
          }
          uVar16 = uVar13 & 0x3f;
          puVar30 = (uint *)(local_68._1_1_ & 0x7f);
          uVar23 = uVar16 - 0x20;
          uVar31 = (int)puVar30 << uVar16;
          if (-1 < (int)uVar23) {
            uVar31 = 0;
          }
          pbVar36 = (byte *)(uVar31 | (uint)pbVar36);
          uVar16 = (uint)puVar30 >> (0x20 - uVar16 & 0xff);
          if (-1 < (int)uVar23) {
            uVar16 = (int)puVar30 << (uVar23 & 0xff);
          }
          puVar29 = (uint *)(uVar16 | (uint)puVar29);
          if ((uint)(int)(char)local_68._1_1_ < 0x80000000) break;
          uVar13 = uVar13 + 7;
          pbVar33 = pbVar25;
          if (iVar10 == 0) {
            pbVar35 = pbVar35 + iVar26;
            *(byte **)(param_2 + 0x18) = pbVar35;
            param_2[0x1c] = 0;
            param_2[0x1d] = 0;
            param_2[0x1e] = 0;
            param_2[0x1f] = 0;
            goto LAB_01992f8c;
          }
        }
        *(byte **)(param_2 + 0x18) = pbVar25;
        *(int *)(param_2 + 0x1c) = iVar10;
        if (pbVar36 == (byte *)0x0 && puVar29 == (uint *)0x0) {
          iVar39 = iVar39 + -1;
          *(int *)(param_2 + 0x28) = iVar39;
          local_a0 = (byte *)0x0;
        }
        else {
          puVar17 = *(undefined4 **)(param_2 + 0x24);
          if ((puVar29 == (uint *)0x0) && (pbVar36 + -1 < (byte *)puVar17[2])) {
            local_a0 = (byte *)((int)(pbVar36 + -1) * 0x68 + puVar17[1]);
          }
          else {
            puVar34 = (undefined4 *)puVar17[3];
            local_68._0_1_ = '\x12';
            local_68._1_1_ = 0;
            if (puVar34 == (undefined4 *)0x0) {
LAB_0199300c:
              local_68._2_2_ = SUB42(puVar17,0);
              goto LAB_01992f98;
            }
            iVar26 = puVar17[4];
            while( true ) {
              uVar28 = 0xffffffff;
              uVar31 = (uint)*(ushort *)((int)puVar34 + 0x4d6);
              iVar10 = uVar31 << 3;
              puVar17 = puVar34;
              do {
                if (iVar10 == 0) goto LAB_01991f7c;
                pbVar35 = (byte *)*puVar17;
                puVar30 = (uint *)puVar17[1];
                iVar10 = iVar10 + -8;
                uVar28 = uVar28 + 1;
                puVar17 = puVar17 + 2;
                uVar13 = (uint)(puVar30 <= puVar29 &&
                               (uint)(pbVar36 <= pbVar35) <= (uint)((int)puVar30 - (int)puVar29)) -
                         (uint)(puVar29 <= puVar30 &&
                               (uint)(pbVar35 <= pbVar36) <= (uint)((int)puVar29 - (int)puVar30));
              } while (uVar13 == 1);
              uVar31 = uVar28;
              if ((uVar13 & 0xff) == 0) break;
LAB_01991f7c:
              if (iVar26 == 0) goto LAB_0199300c;
              iVar26 = iVar26 + -1;
              puVar34 = (undefined4 *)puVar34[uVar31 + 0x136];
            }
            local_a0 = (byte *)(puVar34 + uVar28 * 0x1a + 0x16);
          }
          if (local_a0[0x62] == 1) {
            *(int *)(param_2 + 0x28) = iVar39 + 1;
          }
          uVar40 = FUN_0134bd24(local_a0);
          FUN_01995c3c(&local_68,pbVar8,*(undefined4 *)(*(int *)(param_2 + 0x20) + 0x20),(int)uVar40
                       ,(int)((ulonglong)uVar40 >> 0x20));
          if ((char)local_68 != 'R') goto LAB_01992fd4;
          iVar39 = *(int *)(param_2 + 0x28);
          uVar31 = extraout_r3_00;
          uVar28 = local_68;
        }
      }
    }
    else if (sVar2 == 0x1d) {
      iVar39 = *(int *)(param_2 + 0x30);
      iVar27 = *(int *)(param_2 + 0x2c);
      iVar26 = 4;
      if (bVar1 == 8) {
        iVar26 = 0xc;
      }
      uVar40 = FUN_0134bd24(unaff_r6,0x1d,puVar17,uVar23);
      iVar38 = (int)((ulonglong)uVar40 >> 0x20);
      puVar30 = (uint *)uVar40;
      if (iVar38 == 0) {
        bVar5 = false;
        bVar4 = false;
        bVar6 = false;
        bVar20 = false;
        local_108 = 0;
        local_f8 = (byte *)0x0;
        local_fc = (byte *)0x0;
        local_ac = (uint *)0x0;
      }
      else {
        local_ac = (uint *)0x0;
        iVar38 = iVar38 << 4;
        local_fc = (byte *)0x0;
        local_f8 = (byte *)0x0;
        local_108 = 0;
        bVar20 = false;
        bVar6 = false;
        bVar4 = false;
        bVar5 = false;
        do {
          local_40 = *puVar30;
          local_3c = puVar30[1];
          local_38 = (uint *)puVar30[2];
          local_34 = (uint *)puVar30[3];
          FUN_019901d0(&local_68,pbVar8,*(undefined4 *)(*(int *)(param_2 + 0x20) + 0x20),&local_40);
          if (local_68 == 0x2e && local_64 == (byte *)0x0) {
            local_88 = local_60;
            local_84 = local_5c;
            local_80 = local_58;
            local_7c = local_54;
            goto LAB_01992ec8;
          }
          uVar31 = (uint)local_58 & 0xffff;
          puVar29 = local_138;
          switch(uVar31) {
          case 3:
            if (local_ac == (uint *)0x0) {
              FUN_01993028(&local_40,&local_68);
              FUN_0198d46c(local_78,iVar27,*(undefined1 *)(iVar39 + 0xd9),
                           *(undefined4 *)(iVar39 + 0x104),&local_40);
              puVar29 = local_70;
              local_f0 = local_70;
              local_ac = local_74;
              if (local_78[0] != 'R') {
                local_ac = (uint *)0x0;
                puVar29 = local_138;
                local_f0 = local_138;
              }
            }
            break;
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
          case 10:
          case 0xb:
          case 0xc:
          case 0xd:
          case 0xe:
          case 0xf:
          case 0x10:
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x1a:
          case 0x1b:
          case 0x1c:
          case 0x1d:
          case 0x1e:
          case 0x1f:
          case 0x20:
          case 0x21:
          case 0x22:
          case 0x23:
          case 0x24:
          case 0x25:
          case 0x26:
          case 0x27:
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x2b:
          case 0x2c:
          case 0x2d:
          case 0x2e:
          case 0x2f:
          case 0x30:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
          case 0x3a:
          case 0x3b:
          case 0x3c:
          case 0x3d:
          case 0x3e:
          case 0x3f:
          case 0x40:
          case 0x41:
          case 0x42:
          case 0x43:
          case 0x44:
          case 0x45:
          case 0x46:
          case 0x48:
          case 0x49:
          case 0x4a:
          case 0x4b:
          case 0x4c:
          case 0x4d:
          case 0x4e:
          case 0x4f:
          case 0x50:
          case 0x51:
          case 0x52:
          case 0x53:
          case 0x54:
          case 0x56:
            break;
          case 0x11:
            FUN_01993028(&local_40,&local_68);
            if ((local_40 & 0x3f) == 0) {
              local_130 = local_38;
              local_134 = local_34;
              bVar4 = true;
            }
            else if (local_40 == 0xc) {
              puVar18 = *(uint **)(iVar27 + 8);
              uVar31 = *(uint *)(iVar39 + 0x108);
              if (*(uint *)(iVar27 + 0xc) < uVar31) {
LAB_01992ddc:
LAB_01992e48:
                local_ec = (uint *)0x0;
                uVar15 = 0x13;
                uVar28 = local_104;
                local_e4 = puVar18;
              }
              else {
                uVar28 = (uint)*(byte *)(iVar39 + 0xd8);
                uVar13 = (uint)((ulonglong)uVar28 * ZEXT48(local_38));
                if ((int)((ulonglong)uVar28 * ZEXT48(local_38) >> 0x20) != 0) {
                  uVar15 = 0x38;
                  uVar28 = local_104;
                  goto switchD_01992510_caseD_3;
                }
                uVar16 = *(uint *)(iVar27 + 0xc) - uVar31;
                puVar18 = (uint *)((int)puVar18 + uVar31);
                if (uVar16 < uVar13) goto LAB_01992ddc;
                uVar15 = 0x19;
                if (uVar28 - 1 < 8) {
                  puVar18 = (uint *)((int)puVar18 + uVar13);
                  uVar31 = uVar16 - uVar13;
                  uVar15 = 0x19;
                  switch(uVar28) {
                  case 1:
                    if (uVar16 != uVar13) {
                      local_e4 = (uint *)(uint)(byte)*puVar18;
                      local_134 = (uint *)0x0;
                      bVar4 = true;
                      local_ec = (uint *)0x0;
                      local_130 = local_e4;
                      goto switchD_0199211c_caseD_4;
                    }
                    break;
                  case 2:
                    if (1 < uVar31) {
                      local_e4 = (uint *)(uint)(ushort)*puVar18;
LAB_019928ec:
                      local_134 = (uint *)0x0;
LAB_019928f8:
                      bVar4 = true;
                      local_ec = local_134;
                      local_130 = local_e4;
                      goto switchD_0199211c_caseD_4;
                    }
                    break;
                  default:
                    goto switchD_01992510_caseD_3;
                  case 4:
                    if (3 < uVar31) {
                      local_e4 = (uint *)*puVar18;
                      goto LAB_019928ec;
                    }
                    break;
                  case 8:
                    if (7 < uVar31) {
                      local_134 = (uint *)(*(uint *)((int)puVar18 + 3) >> 8 |
                                          (uint)*(byte *)((int)puVar18 + 7) << 0x18);
                      local_e4 = (uint *)((uint)(uint3)*puVar18 |
                                         *(uint *)((int)puVar18 + 3) << 0x18);
                      goto LAB_019928f8;
                    }
                  }
                  local_13c = puVar18;
                  goto LAB_01992e48;
                }
              }
switchD_01992510_caseD_3:
              local_104 = uVar28;
              local_80 = local_e4;
              local_7c = local_ec;
              local_84 = local_13c;
              local_88 = (byte *)CONCAT31(CONCAT21(local_88._2_2_,(char)local_104),uVar15);
              goto LAB_01992ec8;
            }
            break;
          case 0x12:
            FUN_01993028(&local_40,&local_68);
            if ((local_40 & 0x3f) == 0) {
              local_144 = local_38;
              local_140 = local_34;
              bVar5 = true;
            }
            else if (local_40 == 7) {
              local_14c = local_38;
              local_150 = local_34;
              bVar6 = true;
            }
            else if (local_40 == 0xc) {
              puVar18 = *(uint **)(iVar27 + 8);
              uVar31 = *(uint *)(iVar39 + 0x108);
              if (*(uint *)(iVar27 + 0xc) < uVar31) {
LAB_01992df0:
LAB_01992e90:
                local_e8 = (uint *)0x0;
                uVar15 = 0x13;
                uVar28 = local_158;
                local_154 = puVar18;
              }
              else {
                uVar28 = (uint)*(byte *)(iVar39 + 0xd8);
                uVar13 = (uint)((ulonglong)uVar28 * ZEXT48(local_38));
                if ((int)((ulonglong)uVar28 * ZEXT48(local_38) >> 0x20) != 0) {
                  uVar15 = 0x38;
                  uVar28 = local_158;
                  goto switchD_01992438_caseD_3;
                }
                puVar18 = (uint *)((int)puVar18 + uVar31);
                uVar31 = *(uint *)(iVar27 + 0xc) - uVar31;
                if (uVar31 < uVar13) goto LAB_01992df0;
                uVar15 = 0x19;
                if (uVar28 - 1 < 8) {
                  puVar18 = (uint *)((int)puVar18 + uVar13);
                  uVar16 = uVar31 - uVar13;
                  switch(uVar28) {
                  case 1:
                    if (uVar31 != uVar13) {
                      local_140 = (uint *)0x0;
                      local_154 = (uint *)(uint)(byte)*puVar18;
LAB_01992958:
                      bVar5 = true;
                      local_e8 = local_140;
                      local_144 = local_154;
                      goto switchD_0199211c_caseD_4;
                    }
                    break;
                  case 2:
                    if (1 < uVar16) {
                      local_154 = (uint *)(uint)(ushort)*puVar18;
LAB_01992984:
                      local_140 = (uint *)0x0;
                      bVar5 = true;
                      local_e8 = (uint *)0x0;
                      local_144 = local_154;
                      goto switchD_0199211c_caseD_4;
                    }
                    break;
                  default:
                    goto switchD_01992438_caseD_3;
                  case 4:
                    if (3 < uVar16) {
                      local_154 = (uint *)*puVar18;
                      goto LAB_01992984;
                    }
                    break;
                  case 8:
                    if (7 < uVar16) {
                      local_140 = (uint *)(*(uint *)((int)puVar18 + 3) >> 8 |
                                          (uint)*(byte *)((int)puVar18 + 7) << 0x18);
                      local_154 = (uint *)((uint)(uint3)*puVar18 |
                                          *(uint *)((int)puVar18 + 3) << 0x18);
                      goto LAB_01992958;
                    }
                  }
                  local_15c = puVar18;
                  goto LAB_01992e90;
                }
              }
switchD_01992438_caseD_3:
              local_80 = local_154;
              local_84 = local_15c;
              local_88._0_2_ = CONCAT11((char)uVar28,uVar15);
              local_158 = uVar28;
              local_7c = local_e8;
              goto LAB_01992ec8;
            }
            break;
          case 0x31:
          case 0x47:
            if (local_ac == (uint *)0x0) {
              FUN_01993028(&local_40,&local_68);
              FUN_01993a74(local_78,param_2[0x38],local_40,local_3c,local_38,param_2[0x38],iVar27,
                           iVar39,*(undefined4 *)(param_2 + 0x34),0x10);
              if (local_78[0] != 'R') {
                uVar15 = *(undefined1 *)((undefined2 *)((uint)local_78 | 1) + 1);
                *(undefined2 *)((uint)&local_88 | 1) = *(undefined2 *)((uint)local_78 | 1);
                *(undefined1 *)((undefined2 *)((uint)&local_88 | 1) + 1) = uVar15;
                local_84 = local_74;
                local_80 = local_70;
                local_7c = puStack_6c;
                local_88 = (byte *)CONCAT31(local_88._1_3_,local_78[0]);
                goto LAB_01992ec8;
              }
              local_ac = local_74;
              local_f0 = local_70;
            }
            break;
          case 0x55:
            FUN_01993028(&local_40,&local_68);
            if ((local_40 & 0x3f) == 0x18) {
              local_120 = *(uint **)(iVar27 + 0x70);
              uVar31 = *(uint *)(iVar39 + 0x110);
              if (*(uint *)(iVar27 + 0x74) < uVar31) {
LAB_01992dd0:
                uVar15 = 0x13;
              }
              else {
                lVar3 = (ulonglong)((*(uint *)(iVar39 + 0xd8) & 0xffff) >> 8) * ZEXT48(local_38);
                uVar28 = (uint)lVar3;
                uVar15 = 0x38;
                if ((int)((ulonglong)lVar3 >> 0x20) == 0) {
                  uVar13 = *(uint *)(iVar27 + 0x74) - uVar31;
                  local_120 = (uint *)((int)local_120 + uVar31);
                  if (uVar28 <= uVar13) {
                    local_120 = (uint *)((int)local_120 + uVar28);
                    uVar13 = uVar13 - uVar28;
                    if ((*(uint *)(iVar39 + 0xd8) & 0xff00) == 0x800) {
                      if (uVar13 < 8) goto LAB_01992e14;
                      if (*(byte *)((int)local_120 + 7) != 0 ||
                          *(uint *)((int)local_120 + 3) >> 8 != 0) goto LAB_01992e18;
                      uVar28 = *(uint *)((int)local_120 + 3) << 0x18 | (uint)(uint3)*local_120;
                    }
                    else {
                      if (uVar13 < 4) {
LAB_01992e14:
                        uVar15 = 0x13;
                        goto LAB_01992e18;
                      }
                      uVar28 = *local_120;
                    }
                    local_124 = (uint *)(uVar28 + uVar31);
                    goto LAB_019927fc;
                  }
                  goto LAB_01992dd0;
                }
              }
LAB_01992e18:
              local_80 = local_120;
              local_7c = (uint *)0x0;
              local_84 = local_120;
              local_88 = (byte *)CONCAT31(local_88._1_3_,uVar15);
              goto LAB_01992ec8;
            }
            bVar20 = false;
            local_124 = local_120;
            if (local_40 == 0x16) {
              local_124 = local_38;
              if (*(ushort *)(iVar39 + 0xda) < 5) {
                local_124 = (uint *)((int)local_38 + *(int *)(iVar39 + 0x110));
              }
              if (*(char *)(iVar27 + 0x88) == '\0') {
                local_124 = local_38;
              }
LAB_019927fc:
              bVar20 = true;
              local_120 = local_124;
            }
            break;
          case 0x57:
            local_f8 = local_60;
            switch(local_68 & 0x3f) {
            case 2:
              local_f8 = (byte *)((uint)local_60 & 0xff);
              break;
            case 3:
              local_f8 = (byte *)((uint)local_60 & 0xffff);
              break;
            case 4:
              break;
            case 5:
            case 7:
              break;
            case 6:
              if ((int)local_5c < 0) {
                local_f8 = (byte *)0x0;
              }
              break;
            default:
              local_f8 = (byte *)0x0;
            }
            break;
          case 0x58:
            FUN_01993028(&local_40,&local_68);
            if (local_40 == 0x2c && local_3c == 0) {
              if (!(local_38 != (uint *)0x0 || local_34 != (uint *)0x0)) {
                if (*(ushort *)(iVar39 + 0xda) < 5) break;
              }
              local_108 = 1;
              local_12c = local_34;
              local_128 = local_38;
            }
            break;
          case 0x59:
            switch(local_68 & 0x3f) {
            case 2:
              local_fc = (byte *)((uint)local_60 & 0xff);
              break;
            case 3:
              local_fc = (byte *)((uint)local_60 & 0xffff);
              break;
            case 4:
              local_fc = local_60;
              break;
            case 5:
            case 7:
              local_fc = local_60;
              break;
            case 6:
              local_fc = local_60;
              if ((int)local_5c < 0) {
                local_fc = (byte *)0x0;
              }
              break;
            default:
              local_fc = (byte *)0x0;
            }
            break;
          default:
            uVar28 = local_68;
            if (uVar31 != 0x6e) {
              uVar28 = 0x2007;
            }
            if (uVar31 == 0x6e || uVar31 == uVar28) {
              FUN_01993028(&local_40,&local_68);
              FUN_0198d46c(local_78,iVar27,*(undefined1 *)(iVar39 + 0xd9),
                           *(undefined4 *)(iVar39 + 0x104),&local_40);
              if (local_78[0] == 'R') {
                local_f0 = local_70;
                local_ac = local_74;
              }
            }
          }
switchD_0199211c_caseD_4:
          local_138 = puVar29;
          iVar38 = iVar38 + -0x10;
          puVar30 = puVar30 + 4;
        } while (iVar38 != 0);
      }
      iVar38 = *(int *)(param_2 + 8);
      if (iVar38 == *(int *)param_2) {
        FUN_01996570(param_2);
      }
      *(int *)(param_2 + 8) = iVar38 + 1;
      puVar17 = (undefined4 *)(*(int *)(param_2 + 4) + iVar38 * 0x28);
      *puVar17 = local_108;
      puVar17[1] = 0;
      puVar17[2] = local_128;
      puVar17[3] = local_12c;
      puVar17[4] = local_ac;
      puVar17[5] = local_f0;
      puVar17[7] = local_fc;
      puVar17[6] = pbVar35 + ((iVar26 + iVar12) - (iVar10 + iVar11));
      puVar17[8] = local_f8;
      if (bVar20) {
        iVar26 = 4;
        puVar17 = (undefined4 *)(iVar27 + 0x68);
        uVar31 = (uint)*(uint **)(iVar39 + 0xd8) >> 0x10;
        if (4 < uVar31) {
          iVar26 = 0xc;
        }
        puVar34 = (undefined4 *)((int)puVar17 + iVar26);
        if (4 < uVar31) {
          puVar17 = (undefined4 *)(iVar27 + 0x70);
        }
        if ((uint *)*puVar34 < local_124) {
          uVar22 = 0;
          uVar15 = 0;
          local_80 = (uint *)*puVar17;
          local_7c = (uint *)0x0;
          puVar30 = (uint *)&DAT_00000013;
        }
        else {
          local_50 = (byte *)((int)*puVar17 + (int)local_124);
          local_60 = *(byte **)(iVar27 + 8);
          local_4c = (int)*puVar34 - (int)local_124;
          local_5c = *(uint **)(iVar27 + 0xc);
          local_45 = 0;
          local_47 = 0;
          local_68 = *(uint *)(iVar39 + 0xf8);
          local_64 = *(byte **)(iVar39 + 0xfc);
          local_58 = *(uint **)(iVar39 + 0x108);
          local_48 = 4 < uVar31;
          local_54 = *(uint **)(iVar39 + 0xd8);
          while( true ) {
            FUN_019965d8(&local_40,&local_68);
            puVar7 = local_2c;
            puVar18 = local_30;
            puVar29 = local_34;
            puVar30 = local_38;
            if (local_40 == 2 && local_3c == 0) break;
            if ((local_40 & 1) == 0) goto LAB_01992d10;
            if (local_34 <= local_2c &&
                (uint)(local_30 <= local_38) <= (uint)((int)local_34 - (int)local_2c)) {
              iVar39 = *(int *)(param_2 + 0x14);
              if (iVar39 == *(int *)(param_2 + 0xc)) {
                FUN_0199800c(param_2 + 0xc);
              }
              *(int *)(param_2 + 0x14) = iVar39 + 1;
              puVar17 = (undefined4 *)(*(int *)(param_2 + 0x10) + iVar39 * 0x18);
              *puVar17 = puVar30;
              puVar17[1] = puVar29;
              puVar17[2] = puVar18;
              puVar17[3] = puVar7;
              puVar17[4] = param_4;
              puVar17[5] = iVar38;
            }
          }
          local_148 = local_34;
          if (((uint)local_38 & 0xff) == 0x52) goto LAB_01992d10;
          uVar22 = (undefined2)((uint)local_38 >> 0x10);
          uVar15 = (undefined1)((uint)local_38 >> 8);
          local_80 = local_30;
          local_7c = local_2c;
          local_148 = local_34;
        }
        local_84 = local_148;
        local_88._0_2_ = CONCAT11(uVar15,(char)puVar30);
        local_88 = (byte *)CONCAT22(uVar22,(undefined2)local_88);
      }
      else {
        if (bVar4) {
          if (bVar5) {
            if (local_134 <= local_140 &&
                (uint)(local_144 <= local_130) <= (uint)((int)local_134 - (int)local_140)) {
              iVar39 = *(int *)(param_2 + 0x14);
              if (iVar39 == *(int *)(param_2 + 0xc)) {
                FUN_0199800c(param_2 + 0xc);
              }
              *(int *)(param_2 + 0x14) = iVar39 + 1;
              puVar17 = (undefined4 *)(*(int *)(param_2 + 0x10) + iVar39 * 0x18);
              *puVar17 = local_130;
              puVar17[1] = local_134;
              puVar17[2] = local_144;
              puVar17[3] = local_140;
              puVar17[4] = param_4;
              puVar17[5] = iVar38;
            }
          }
          else if (bVar6) {
            puVar30 = (uint *)((byte *)((int)local_150 + (int)local_134) +
                              CARRY4((uint)local_14c,(uint)local_130));
            if (local_134 <= puVar30 &&
                (uint)((uint *)((int)local_14c + (int)local_130) <= local_130) <=
                (uint)((int)local_134 - (int)puVar30)) {
              iVar39 = *(int *)(param_2 + 0x14);
              if (iVar39 == *(int *)(param_2 + 0xc)) {
                FUN_0199800c(param_2 + 0xc);
              }
              *(int *)(param_2 + 0x14) = iVar39 + 1;
              puVar17 = (undefined4 *)(*(int *)(param_2 + 0x10) + iVar39 * 0x18);
              *puVar17 = local_130;
              puVar17[5] = iVar38;
              puVar17[1] = local_134;
              puVar17[2] = (uint *)((int)local_14c + (int)local_130);
              puVar17[3] = puVar30;
              puVar17[4] = param_4;
            }
          }
        }
LAB_01992d10:
        FUN_01991b2c(&local_88,param_2,iVar9,param_4 + 1);
      }
LAB_01992ec8:
      if ((char)local_88 != 'R') {
        puVar17 = &local_88;
LAB_01992ff0:
        uVar14 = puVar17[1];
        uVar19 = puVar17[2];
        uVar24 = puVar17[3];
        *(undefined4 *)param_1 = *puVar17;
        *(undefined4 *)(param_1 + 4) = uVar14;
        *(undefined4 *)(param_1 + 8) = uVar19;
        *(undefined4 *)(param_1 + 0xc) = uVar24;
        return;
      }
    }
    else {
      uVar40 = FUN_0134bd24(unaff_r6,sVar2,puVar17,uVar23);
      FUN_01995c3c(&local_68,pbVar8,*(undefined4 *)(*(int *)(param_2 + 0x20) + 0x20),(int)uVar40,
                   (int)((ulonglong)uVar40 >> 0x20));
      if ((char)local_68 != 'R') {
        puVar17 = &local_68;
        goto LAB_01992ff0;
      }
    }
  } while( true );
}

