// FUN_015d6fa8 @ 015d6fa8 size=5092 calls_out=11 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015d6fa8(uint *param_1,byte *param_2,int param_3,int param_4)

{
  longlong lVar1;
  byte *pbVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined2 uVar13;
  byte *pbVar14;
  uint uVar15;
  byte *pbVar16;
  undefined1 uVar17;
  uint *puVar18;
  uint uVar19;
  bool bVar20;
  byte *pbVar21;
  byte *pbVar22;
  undefined4 *puVar23;
  byte *pbVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  uint *puVar29;
  byte *unaff_r8;
  byte *pbVar30;
  byte *pbVar31;
  char cVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  undefined8 uVar39;
  uint *local_154;
  uint *local_150;
  uint local_14c;
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
  uint *local_11c;
  uint *local_118;
  uint *local_114;
  uint *local_110;
  undefined4 local_fc;
  uint local_f8;
  byte *local_f0;
  byte *local_ec;
  uint *local_e0;
  uint *local_a8;
  uint *local_98;
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
  
  pbVar9 = param_2 + 0x18;
  pbVar21 = local_64;
LAB_015d7024:
  do {
    local_64 = pbVar21;
    iVar28 = *(int *)(param_2 + 0x28);
    if (iVar28 <= param_3) {
      *(char *)param_1 = 'R';
      return;
    }
    iVar33 = *(int *)(param_2 + 0x1c);
    uVar35 = 0;
    pbVar21 = *(byte **)(param_2 + 0x18);
    if (iVar33 == 0) {
      bVar8 = 0;
      pbVar31 = pbVar21;
LAB_015d843c:
      cVar32 = '\x13';
      pbVar16 = pbVar31;
LAB_015d8444:
      param_1[1] = (uint)pbVar16;
      param_1[2] = (uint)pbVar31;
      param_1[3] = uVar35;
      *(byte *)((int)param_1 + 1) = bVar8;
      *(char *)param_1 = cVar32;
      return;
    }
    puVar18 = *(uint **)(param_2 + 0x20);
    uVar27 = 0;
    iVar10 = *(int *)((int)puVar18 + 0x1c);
    uVar36 = 0;
    iVar11 = *(int *)((int)puVar18 + 0x24);
    pbVar14 = *(byte **)((int)puVar18 + 0x18);
    local_a8 = (uint *)(uint)*(byte *)((int)puVar18 + 0x21);
    pbVar16 = pbVar14;
    pbVar22 = pbVar21;
    pbVar30 = (byte *)0x0;
    pbVar2 = pbVar21;
    iVar25 = iVar33;
    while( true ) {
      pbVar31 = pbVar22;
      iVar25 = iVar25 + -1;
      pbVar24 = pbVar2 + 1;
      bVar8 = *pbVar2;
      if ((uVar36 == 0x3f) && (1 < bVar8)) {
        cVar32 = '\x06';
        *(byte **)(param_2 + 0x18) = pbVar24;
        *(int *)(param_2 + 0x1c) = iVar25;
        bVar8 = 0;
        goto LAB_015d8444;
      }
      uVar15 = uVar36 & 0x3f;
      uVar19 = bVar8 & 0x7f;
      uVar38 = uVar15 - 0x20;
      pbVar22 = (byte *)(uVar19 << uVar15);
      if (-1 < (int)uVar38) {
        pbVar22 = (byte *)0x0;
      }
      pbVar31 = (byte *)((uint)pbVar22 | (uint)pbVar30);
      uVar15 = uVar19 >> (0x20 - uVar15 & 0xff);
      if (-1 < (int)uVar38) {
        uVar15 = uVar19 << (uVar38 & 0xff);
      }
      uVar27 = uVar15 | uVar27;
      pbVar16 = (byte *)(int)(char)bVar8;
      if (pbVar16 < &DAT_80000000) break;
      uVar36 = uVar36 + 7;
      pbVar30 = pbVar31;
      pbVar2 = pbVar24;
      if (iVar25 == 0) {
        *(byte **)(param_2 + 0x18) = pbVar21 + iVar33;
        param_2[0x1c] = 0;
        param_2[0x1d] = 0;
        param_2[0x1e] = 0;
        param_2[0x1f] = 0;
        pbVar31 = pbVar21 + iVar33;
        goto LAB_015d843c;
      }
    }
    *(byte **)(param_2 + 0x18) = pbVar24;
    *(int *)(param_2 + 0x1c) = iVar25;
    if (!(pbVar31 != (byte *)0x0 || uVar27 != 0)) {
      *(int *)(param_2 + 0x28) = iVar28 + -1;
      unaff_r8 = (byte *)0x0;
      pbVar21 = local_64;
      goto LAB_015d7024;
    }
    iVar33 = *(int *)(param_2 + 0x24);
    if ((uVar27 == 0) && (pbVar31 + -1 < *(byte **)(iVar33 + 8))) {
      unaff_r8 = (byte *)((int)(pbVar31 + -1) * 0x68 + *(int *)(iVar33 + 4));
    }
    else {
      puVar12 = *(undefined4 **)(iVar33 + 0xc);
      cVar32 = '\x12';
      bVar8 = 0;
      if (puVar12 == (undefined4 *)0x0) {
LAB_015d84c8:
        pbVar16 = unaff_r8;
        uVar35 = uVar27;
        goto LAB_015d8444;
      }
      iVar33 = *(int *)(iVar33 + 0x10);
      while( true ) {
        uVar36 = 0xffffffff;
        uVar35 = (uint)*(ushort *)((int)puVar12 + 0x4d6);
        iVar25 = uVar35 << 3;
        puVar23 = puVar12;
        do {
          if (iVar25 == 0) goto LAB_015d71b0;
          pbVar22 = (byte *)*puVar23;
          uVar15 = puVar23[1];
          iVar25 = iVar25 + -8;
          uVar36 = uVar36 + 1;
          puVar23 = puVar23 + 2;
          uVar15 = (uint)(uVar15 <= uVar27 && (uint)(pbVar31 <= pbVar22) <= uVar15 - uVar27) -
                   (uint)(uVar27 <= uVar15 && (uint)(pbVar22 <= pbVar31) <= uVar27 - uVar15);
        } while (uVar15 == 1);
        uVar35 = uVar36;
        if ((uVar15 & 0xff) == 0) break;
LAB_015d71b0:
        if (iVar33 == 0) goto LAB_015d84c8;
        iVar33 = iVar33 + -1;
        puVar12 = (undefined4 *)puVar12[uVar35 + 0x136];
      }
      unaff_r8 = (byte *)(puVar12 + uVar36 * 0x1a + 0x16);
    }
    if (unaff_r8[0x62] == 1) {
      *(int *)(param_2 + 0x28) = iVar28 + 1;
    }
    if (*(short *)(unaff_r8 + 0x60) == 0x2e) {
      if (*(int *)unaff_r8 == 1) {
        pbVar21 = *(byte **)(unaff_r8 + 8);
        uVar35 = *(uint *)(unaff_r8 + 0xc);
      }
      else {
        uVar35 = *(uint *)(unaff_r8 + 4);
        if (5 < uVar35) goto LAB_015d852c;
        pbVar21 = unaff_r8 + 8;
      }
      FUN_015db29c(&local_68,pbVar9,*(undefined4 *)((int)puVar18 + 0x20),pbVar21,uVar35);
      if ((char)local_68 != 'R') {
LAB_015d84f0:
LAB_015d84ac:
        *(undefined2 *)((int)param_1 + 2) = local_68._2_2_;
        *(byte *)((int)param_1 + 1) = local_68._1_1_;
        *(char *)param_1 = (char)local_68;
        param_1[1] = (uint)local_64;
        param_1[2] = (uint)local_60;
        param_1[3] = (uint)local_5c;
        return;
      }
      uVar35 = *(uint *)(param_2 + 0x28);
      uVar27 = local_68;
      pbVar21 = local_64;
      pbVar31 = local_60;
      puVar29 = local_5c;
      while( true ) {
        local_64 = (byte *)puVar18;
        local_68 = uVar27;
        local_60 = pbVar31;
        local_5c = puVar29;
        if ((int)uVar35 <= iVar28) break;
        iVar33 = *(int *)(param_2 + 0x1c);
        pbVar22 = *(byte **)(param_2 + 0x18);
        if (iVar33 == 0) {
          local_68._1_1_ = 0;
          local_64 = pbVar22;
LAB_015d84a0:
          local_68._2_2_ = (undefined2)uVar35;
          local_68._0_1_ = '\x13';
          local_60 = local_64;
LAB_015d84a8:
          local_5c = (uint *)0x0;
          goto LAB_015d84ac;
        }
        local_60 = (byte *)0x0;
        local_5c = (uint *)0x0;
        uVar15 = 0;
        uVar36 = uVar35;
        pbVar2 = pbVar22;
        iVar25 = iVar33;
        while( true ) {
          local_68._2_2_ = (undefined2)uVar36;
          iVar25 = iVar25 + -1;
          pbVar16 = pbVar2 + 1;
          local_68._1_1_ = *pbVar2;
          if ((uVar15 == 0x3f) && (1 < local_68._1_1_)) {
            local_68._0_1_ = '\x06';
            local_68._1_1_ = 0;
            *(byte **)(param_2 + 0x18) = pbVar16;
            *(int *)(param_2 + 0x1c) = iVar25;
            local_64 = param_2;
            local_60 = pbVar22;
            goto LAB_015d84a8;
          }
          uVar38 = uVar15 & 0x3f;
          uVar36 = local_68._1_1_ & 0x7f;
          uVar37 = uVar38 - 0x20;
          uVar19 = uVar36 << uVar38;
          if (-1 < (int)uVar37) {
            uVar19 = 0;
          }
          local_60 = (byte *)(uVar19 | (uint)local_60);
          uVar19 = uVar36 >> (0x20 - uVar38 & 0xff);
          if (-1 < (int)uVar37) {
            uVar19 = uVar36 << (uVar37 & 0xff);
          }
          local_5c = (uint *)(uVar19 | (uint)local_5c);
          if ((uint)(int)(char)local_68._1_1_ < 0x80000000) break;
          uVar15 = uVar15 + 7;
          pbVar2 = pbVar16;
          if (iVar25 == 0) {
            uVar35 = 0;
            *(byte **)(param_2 + 0x18) = pbVar22 + iVar33;
            param_2[0x1c] = 0;
            param_2[0x1d] = 0;
            param_2[0x1e] = 0;
            param_2[0x1f] = 0;
            local_64 = pbVar22 + iVar33;
            goto LAB_015d84a0;
          }
        }
        *(byte **)(param_2 + 0x18) = pbVar16;
        *(int *)(param_2 + 0x1c) = iVar25;
        if (local_60 == (byte *)0x0 && local_5c == (uint *)0x0) {
          uVar35 = uVar35 - 1;
          *(uint *)(param_2 + 0x28) = uVar35;
          local_98 = (uint *)0x0;
          puVar18 = local_98;
        }
        else {
          uVar27 = *(uint *)(param_2 + 0x24);
          if ((local_5c == (uint *)0x0) && (local_60 + -1 < *(byte **)(uVar27 + 8))) {
            puVar18 = (uint *)((int)(local_60 + -1) * 0x68 + *(int *)(uVar27 + 4));
          }
          else {
            puVar12 = *(undefined4 **)(uVar27 + 0xc);
            local_68._0_1_ = '\x12';
            local_68._1_1_ = 0;
            if (puVar12 == (undefined4 *)0x0) {
LAB_015d850c:
              local_68._2_2_ = (undefined2)uVar27;
              goto LAB_015d84ac;
            }
            iVar33 = *(int *)(uVar27 + 0x10);
            while( true ) {
              uVar15 = 0xffffffff;
              uVar36 = (uint)*(ushort *)((int)puVar12 + 0x4d6);
              iVar25 = uVar36 << 3;
              puVar23 = puVar12;
              do {
                if (iVar25 == 0) goto LAB_015d7414;
                pbVar22 = (byte *)*puVar23;
                puVar18 = (uint *)puVar23[1];
                iVar25 = iVar25 + -8;
                uVar15 = uVar15 + 1;
                puVar23 = puVar23 + 2;
                uVar27 = (uint)(puVar18 <= local_5c &&
                               (uint)(local_60 <= pbVar22) <= (uint)((int)puVar18 - (int)local_5c))
                         - (uint)(local_5c <= puVar18 &&
                                 (uint)(pbVar22 <= local_60) <= (uint)((int)local_5c - (int)puVar18)
                                 );
              } while (uVar27 == 1);
              uVar36 = uVar15;
              if ((uVar27 & 0xff) == 0) break;
LAB_015d7414:
              if (iVar33 == 0) goto LAB_015d850c;
              iVar33 = iVar33 + -1;
              puVar12 = (undefined4 *)puVar12[uVar36 + 0x136];
            }
            puVar18 = puVar12 + uVar15 * 0x1a + 0x16;
          }
          if (*(byte *)((int)puVar18 + 0x62) == 1) {
            *(uint *)(param_2 + 0x28) = uVar35 + 1;
          }
          local_64 = pbVar21;
          local_60 = pbVar31;
          local_5c = puVar29;
          uVar39 = FUN_01010b0c(puVar18);
          FUN_015db29c(&local_68,pbVar9,*(undefined4 *)(*(int *)(param_2 + 0x20) + 0x20),(int)uVar39
                       ,(int)((ulonglong)uVar39 >> 0x20));
          if ((char)local_68 != 'R') goto LAB_015d84f0;
          uVar35 = *(uint *)(param_2 + 0x28);
          uVar27 = local_68;
          pbVar21 = local_64;
          pbVar31 = local_60;
          puVar29 = local_5c;
        }
      }
    }
    else if (*(short *)(unaff_r8 + 0x60) == 0x1d) {
      iVar25 = *(int *)(param_2 + 0x2c);
      iVar26 = 4;
      iVar33 = *(int *)(param_2 + 0x30);
      if (local_a8 == (uint *)&DAT_00000008) {
        iVar26 = 0xc;
      }
      if (*(int *)unaff_r8 == 1) {
        puVar18 = *(uint **)(unaff_r8 + 8);
        uVar35 = *(uint *)(unaff_r8 + 0xc);
      }
      else {
        uVar35 = *(uint *)(unaff_r8 + 4);
        if (5 < uVar35) goto LAB_015d852c;
        puVar18 = (uint *)(unaff_r8 + 8);
      }
      if (uVar35 == 0) {
        bVar4 = false;
        bVar3 = false;
        bVar5 = false;
        bVar20 = false;
        local_fc = 0;
        local_ec = (byte *)0x0;
        local_f0 = (byte *)0x0;
        local_98 = (uint *)0x0;
      }
      else {
        iVar34 = uVar35 << 4;
        local_98 = (uint *)0x0;
        local_f0 = (byte *)0x0;
        local_ec = (byte *)0x0;
        local_fc = 0;
        bVar20 = false;
        bVar5 = false;
        bVar3 = false;
        bVar4 = false;
        do {
          local_40 = *puVar18;
          local_3c = puVar18[1];
          local_38 = (uint *)puVar18[2];
          local_34 = (uint *)puVar18[3];
          FUN_015d5608(&local_68,pbVar9,*(undefined4 *)(*(int *)(param_2 + 0x20) + 0x20),&local_40);
          if (local_68 == 0x2e && local_64 == (byte *)0x0) {
            local_88 = local_60;
            local_84 = local_5c;
            local_80 = local_58;
            local_7c = local_54;
            goto LAB_015d8234;
          }
          uVar35 = (uint)local_58 & 0xffff;
          switch(uVar35) {
          case 3:
            if (local_98 == (uint *)0x0) {
              FUN_015d855c(&local_40,&local_68);
              FUN_015d2860(local_78,iVar25,*(undefined1 *)(iVar33 + 0xd9),
                           *(undefined4 *)(iVar33 + 0x104),&local_40);
              if (local_78[0] == 'R') {
                local_124 = local_70;
                local_98 = local_74;
              }
              else {
                local_98 = (uint *)0x0;
              }
              local_a8 = local_124;
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
            FUN_015d855c(&local_40,&local_68);
            if ((local_40 & 0x3f) == 0) {
              local_11c = local_38;
              local_120 = local_34;
              bVar3 = true;
            }
            else if (local_40 == 0xc) {
              puVar29 = *(uint **)(iVar25 + 8);
              uVar35 = *(uint *)(iVar33 + 0x108);
              if (*(uint *)(iVar25 + 0xc) < uVar35) {
LAB_015d82ec:
LAB_015d833c:
                local_13c = (uint *)0x0;
                uVar17 = 0x13;
                uVar27 = local_f8;
                local_140 = puVar29;
              }
              else {
                uVar27 = (uint)*(byte *)(iVar33 + 0xd8);
                uVar36 = (uint)((ulonglong)uVar27 * ZEXT48(local_38));
                if ((int)((ulonglong)uVar27 * ZEXT48(local_38) >> 0x20) != 0) {
                  uVar17 = 0x38;
                  uVar27 = local_f8;
                  goto switchD_015d7a20_caseD_3;
                }
                uVar15 = *(uint *)(iVar25 + 0xc) - uVar35;
                puVar29 = (uint *)((int)puVar29 + uVar35);
                if (uVar15 < uVar36) goto LAB_015d82ec;
                uVar17 = 0x19;
                if (uVar27 - 1 < 8) {
                  puVar29 = (uint *)((int)puVar29 + uVar36);
                  uVar35 = uVar15 - uVar36;
                  uVar17 = 0x19;
                  switch(uVar27) {
                  case 1:
                    if (uVar15 != uVar36) {
                      local_120 = (uint *)0x0;
                      local_140 = (uint *)(uint)(byte)*puVar29;
                      bVar3 = true;
                      local_13c = (uint *)0x0;
                      local_11c = local_140;
                      goto switchD_015d7618_caseD_4;
                    }
                    break;
                  case 2:
                    if (1 < uVar35) {
                      local_140 = (uint *)(uint)(ushort)*puVar29;
LAB_015d7e00:
                      local_120 = (uint *)0x0;
                      bVar3 = true;
                      local_13c = (uint *)0x0;
                      local_11c = local_140;
                      goto switchD_015d7618_caseD_4;
                    }
                    break;
                  default:
                    goto switchD_015d7a20_caseD_3;
                  case 4:
                    if (3 < uVar35) {
                      local_140 = (uint *)*puVar29;
                      goto LAB_015d7e00;
                    }
                    break;
                  case 8:
                    if (7 < uVar35) {
                      local_13c = (uint *)(*(uint *)((int)puVar29 + 3) >> 8 |
                                          (uint)*(byte *)((int)puVar29 + 7) << 0x18);
                      local_140 = (uint *)((uint)(uint3)*puVar29 |
                                          *(uint *)((int)puVar29 + 3) << 0x18);
                      bVar3 = true;
                      local_120 = local_13c;
                      local_11c = local_140;
                      goto switchD_015d7618_caseD_4;
                    }
                  }
                  local_150 = puVar29;
                  goto LAB_015d833c;
                }
              }
switchD_015d7a20_caseD_3:
              local_f8 = uVar27;
              local_80 = local_140;
              local_7c = local_13c;
              local_84 = local_150;
              local_88 = (byte *)CONCAT31(CONCAT21(local_88._2_2_,(char)local_f8),uVar17);
              goto LAB_015d8238;
            }
            break;
          case 0x12:
            FUN_015d855c(&local_40,&local_68);
            if ((local_40 & 0x3f) == 0) {
              local_12c = local_38;
              local_128 = local_34;
              bVar4 = true;
            }
            else if (local_40 == 7) {
              local_134 = local_38;
              local_138 = local_34;
              bVar5 = true;
            }
            else if (local_40 == 0xc) {
              uVar35 = *(uint *)(iVar33 + 0x108);
              if (*(uint *)(iVar25 + 0xc) < uVar35) {
                uVar17 = 0x13;
                local_144 = (uint *)0x0;
                uVar27 = local_14c;
                local_148 = *(uint **)(iVar25 + 8);
              }
              else {
                uVar27 = (uint)*(byte *)(iVar33 + 0xd8);
                uVar36 = (uint)((ulonglong)uVar27 * ZEXT48(local_38));
                if ((int)((ulonglong)uVar27 * ZEXT48(local_38) >> 0x20) == 0) {
                  uVar15 = *(uint *)(iVar25 + 0xc) - uVar35;
                  puVar29 = (uint *)((int)*(uint **)(iVar25 + 8) + uVar35);
                  if (uVar15 < uVar36) {
                  }
                  else {
                    uVar17 = 0x19;
                    if (7 < uVar27 - 1) goto switchD_015d7940_caseD_3;
                    puVar29 = (uint *)((int)puVar29 + uVar36);
                    uVar35 = uVar15 - uVar36;
                    switch(uVar27) {
                    case 1:
                      if (uVar15 != uVar36) {
                        local_128 = (uint *)0x0;
                        local_148 = (uint *)(uint)(byte)*puVar29;
                        bVar4 = true;
                        local_144 = (uint *)0x0;
                        local_12c = local_148;
                        goto switchD_015d7618_caseD_4;
                      }
                      break;
                    case 2:
                      if (1 < uVar35) {
                        local_148 = (uint *)(uint)(ushort)*puVar29;
LAB_015d7e8c:
                        local_128 = (uint *)0x0;
                        bVar4 = true;
                        local_144 = (uint *)0x0;
                        local_12c = local_148;
                        goto switchD_015d7618_caseD_4;
                      }
                      break;
                    default:
                      goto switchD_015d7940_caseD_3;
                    case 4:
                      if (3 < uVar35) {
                        local_148 = (uint *)*puVar29;
                        goto LAB_015d7e8c;
                      }
                      break;
                    case 8:
                      if (7 < uVar35) {
                        local_144 = (uint *)(*(uint *)((int)puVar29 + 3) >> 8 |
                                            (uint)*(byte *)((int)puVar29 + 7) << 0x18);
                        local_148 = (uint *)((uint)(uint3)*puVar29 |
                                            *(uint *)((int)puVar29 + 3) << 0x18);
                        bVar4 = true;
                        local_12c = local_148;
                        local_128 = local_144;
                        goto switchD_015d7618_caseD_4;
                      }
                    }
                    local_154 = puVar29;
                  }
                  local_144 = (uint *)0x0;
                  uVar17 = 0x13;
                  uVar27 = local_14c;
                  local_148 = puVar29;
                }
                else {
                  uVar17 = 0x38;
                  uVar27 = local_14c;
                }
              }
switchD_015d7940_caseD_3:
              local_80 = local_148;
              local_7c = local_144;
              local_84 = local_154;
              local_88 = (byte *)CONCAT31(CONCAT21(local_88._2_2_,(char)uVar27),uVar17);
              local_14c = uVar27;
              goto LAB_015d8238;
            }
            break;
          case 0x31:
          case 0x47:
            if (local_98 == (uint *)0x0) {
              FUN_015d855c(&local_40,&local_68);
              FUN_015d9074(local_78,param_2[0x38],local_40,local_3c,local_38,param_2[0x38],iVar25,
                           iVar33,*(undefined4 *)(param_2 + 0x34),0x10);
              if (local_78[0] != 'R') {
                uVar17 = *(undefined1 *)((undefined2 *)((uint)local_78 | 1) + 1);
                *(undefined2 *)((uint)&local_88 | 1) = *(undefined2 *)((uint)local_78 | 1);
                *(undefined1 *)((undefined2 *)((uint)&local_88 | 1) + 1) = uVar17;
                local_84 = local_74;
                local_80 = local_70;
                local_7c = puStack_6c;
                local_88 = (byte *)CONCAT31(local_88._1_3_,local_78[0]);
                goto LAB_015d8234;
              }
              local_98 = local_74;
              local_a8 = local_70;
            }
            break;
          case 0x55:
            FUN_015d855c(&local_40,&local_68);
            if ((local_40 & 0x3f) == 0x18) {
              local_e0 = *(uint **)(iVar25 + 0x70);
              uVar35 = *(uint *)(iVar33 + 0x110);
              if (*(uint *)(iVar25 + 0x74) < uVar35) {
LAB_015d82b4:
                uVar17 = 0x13;
              }
              else {
                lVar1 = (ulonglong)((*(uint *)(iVar33 + 0xd8) & 0xffff) >> 8) * ZEXT48(local_38);
                uVar27 = (uint)lVar1;
                uVar17 = 0x38;
                if ((int)((ulonglong)lVar1 >> 0x20) == 0) {
                  uVar36 = *(uint *)(iVar25 + 0x74) - uVar35;
                  local_e0 = (uint *)((int)local_e0 + uVar35);
                  if (uVar27 <= uVar36) {
                    local_e0 = (uint *)((int)local_e0 + uVar27);
                    uVar36 = uVar36 - uVar27;
                    if ((*(uint *)(iVar33 + 0xd8) & 0xff00) == 0x800) {
                      if (7 < uVar36) {
                        if (*(byte *)((int)local_e0 + 7) != 0 ||
                            *(uint *)((int)local_e0 + 3) >> 8 != 0) goto LAB_015d830c;
                        uVar27 = *(uint *)((int)local_e0 + 3) << 0x18 | (uint)(uint3)*local_e0;
                        goto LAB_015d7cf8;
                      }
                    }
                    else if (3 < uVar36) {
                      uVar27 = *local_e0;
LAB_015d7cf8:
                      local_e0 = (uint *)(uVar27 + uVar35);
                      goto LAB_015d7cfc;
                    }
                  }
                  goto LAB_015d82b4;
                }
              }
LAB_015d830c:
              local_7c = (uint *)0x0;
              local_88 = (byte *)CONCAT31(local_88._1_3_,uVar17);
              local_84 = local_e0;
              local_80 = local_e0;
              goto LAB_015d8234;
            }
            bVar20 = false;
            if (local_40 == 0x16) {
              local_e0 = local_38;
              if (*(ushort *)(iVar33 + 0xda) < 5) {
                local_e0 = (uint *)((int)local_38 + *(int *)(iVar33 + 0x110));
              }
              if (*(char *)(iVar25 + 0x88) == '\0') {
                local_e0 = local_38;
              }
LAB_015d7cfc:
              bVar20 = true;
            }
            local_110 = local_e0;
            break;
          case 0x57:
            local_ec = local_60;
            switch(local_68 & 0x3f) {
            case 2:
              local_ec = (byte *)((uint)local_60 & 0xff);
              break;
            case 3:
              local_ec = (byte *)((uint)local_60 & 0xffff);
              break;
            case 4:
              break;
            case 5:
            case 7:
              break;
            case 6:
              if ((int)local_5c < 0) {
                local_ec = (byte *)0x0;
              }
              break;
            default:
              local_ec = (byte *)0x0;
            }
            break;
          case 0x58:
            FUN_015d855c(&local_40,&local_68);
            if (local_40 == 0x2c && local_3c == 0) {
              if (!(local_38 != (uint *)0x0 || local_34 != (uint *)0x0)) {
                if (*(ushort *)(iVar33 + 0xda) < 5) break;
              }
              local_fc = 1;
              local_118 = local_34;
              local_114 = local_38;
            }
            break;
          case 0x59:
            switch(local_68 & 0x3f) {
            case 2:
              local_f0 = (byte *)((uint)local_60 & 0xff);
              break;
            case 3:
              local_f0 = (byte *)((uint)local_60 & 0xffff);
              break;
            case 4:
              local_f0 = local_60;
              break;
            case 5:
            case 7:
              local_f0 = local_60;
              break;
            case 6:
              local_f0 = local_60;
              if ((int)local_5c < 0) {
                local_f0 = (byte *)0x0;
              }
              break;
            default:
              local_f0 = (byte *)0x0;
            }
            break;
          default:
            uVar27 = local_68;
            if (uVar35 != 0x6e) {
              uVar27 = 0x2007;
            }
            if (!(uVar35 != 0x6e && uVar35 != uVar27)) {
              FUN_015d855c(&local_40,&local_68);
              FUN_015d2860(local_78,iVar25,*(undefined1 *)(iVar33 + 0xd9),
                           *(undefined4 *)(iVar33 + 0x104),&local_40);
              if (local_78[0] == 'R') {
                local_a8 = local_70;
                local_98 = local_74;
              }
            }
          }
switchD_015d7618_caseD_4:
          puVar18 = puVar18 + 4;
          iVar34 = iVar34 + -0x10;
        } while (iVar34 != 0);
      }
      iVar34 = *(int *)(param_2 + 8);
      if (iVar34 == *(int *)param_2) {
        FUN_015dbc3c(param_2);
      }
      *(int *)(param_2 + 8) = iVar34 + 1;
      puVar12 = (undefined4 *)(*(int *)(param_2 + 4) + iVar34 * 0x28);
      *puVar12 = local_fc;
      puVar12[1] = 0;
      puVar12[2] = local_114;
      puVar12[3] = local_118;
      puVar12[4] = local_98;
      puVar12[5] = local_a8;
      puVar12[7] = local_f0;
      puVar12[6] = pbVar21 + ((iVar26 + iVar11) - (int)(pbVar14 + iVar10));
      puVar12[8] = local_ec;
      if (bVar20) {
        iVar10 = 4;
        puVar12 = (undefined4 *)(iVar25 + 0x68);
        uVar35 = (uint)*(uint **)(iVar33 + 0xd8) >> 0x10;
        if (4 < uVar35) {
          iVar10 = 0xc;
        }
        puVar23 = (undefined4 *)((int)puVar12 + iVar10);
        if (4 < uVar35) {
          puVar12 = (undefined4 *)(iVar25 + 0x70);
        }
        if ((uint *)*puVar23 < local_110) {
          uVar13 = 0;
          uVar17 = 0;
          local_80 = (uint *)*puVar12;
          local_7c = (uint *)0x0;
          puVar18 = (uint *)&DAT_00000013;
        }
        else {
          local_60 = *(byte **)(iVar25 + 8);
          local_5c = *(uint **)(iVar25 + 0xc);
          local_4c = (int)*puVar23 - (int)local_110;
          local_68 = *(uint *)(iVar33 + 0xf8);
          local_48 = 4 < uVar35;
          local_45 = 0;
          local_47 = 0;
          local_64 = *(byte **)(iVar33 + 0xfc);
          local_58 = *(uint **)(iVar33 + 0x108);
          local_50 = (byte *)((int)*puVar12 + (int)local_110);
          local_54 = *(uint **)(iVar33 + 0xd8);
          while( true ) {
            FUN_015dbca4(&local_40,&local_68);
            puVar7 = local_2c;
            puVar6 = local_30;
            puVar29 = local_34;
            puVar18 = local_38;
            if (local_40 == 2 && local_3c == 0) break;
            if ((local_40 & 1) == 0) goto LAB_015d8220;
            if (local_34 <= local_2c &&
                (uint)(local_30 <= local_38) <= (uint)((int)local_34 - (int)local_2c)) {
              iVar33 = *(int *)(param_2 + 0x14);
              if (iVar33 == *(int *)(param_2 + 0xc)) {
                FUN_015dd640(param_2 + 0xc);
              }
              *(int *)(param_2 + 0x14) = iVar33 + 1;
              puVar12 = (undefined4 *)(*(int *)(param_2 + 0x10) + iVar33 * 0x18);
              *puVar12 = puVar18;
              puVar12[1] = puVar29;
              puVar12[2] = puVar6;
              puVar12[3] = puVar7;
              puVar12[4] = param_4;
              puVar12[5] = iVar34;
            }
          }
          local_130 = local_34;
          if (((uint)local_38 & 0xff) == 0x52) goto LAB_015d8220;
          uVar13 = (undefined2)((uint)local_38 >> 0x10);
          uVar17 = (undefined1)((uint)local_38 >> 8);
          local_80 = local_30;
          local_7c = local_2c;
          local_130 = local_34;
        }
        cVar32 = (char)puVar18;
        local_88 = (byte *)CONCAT22(uVar13,CONCAT11(uVar17,cVar32));
        local_84 = local_130;
      }
      else {
        if (bVar3) {
          if (bVar4) {
            if (local_120 <= local_128 &&
                (uint)(local_12c <= local_11c) <= (uint)((int)local_120 - (int)local_128)) {
              iVar33 = *(int *)(param_2 + 0x14);
              if (iVar33 == *(int *)(param_2 + 0xc)) {
                FUN_015dd640(param_2 + 0xc);
              }
              *(int *)(param_2 + 0x14) = iVar33 + 1;
              puVar12 = (undefined4 *)(*(int *)(param_2 + 0x10) + iVar33 * 0x18);
              *puVar12 = local_11c;
              puVar12[1] = local_120;
              puVar12[2] = local_12c;
              puVar12[3] = local_128;
              puVar12[4] = param_4;
              puVar12[5] = iVar34;
            }
          }
          else if (bVar5) {
            puVar18 = (uint *)((byte *)((int)local_138 + (int)local_120) +
                              CARRY4((uint)local_134,(uint)local_11c));
            if (local_120 <= puVar18 &&
                (uint)((uint *)((int)local_134 + (int)local_11c) <= local_11c) <=
                (uint)((int)local_120 - (int)puVar18)) {
              iVar33 = *(int *)(param_2 + 0x14);
              if (iVar33 == *(int *)(param_2 + 0xc)) {
                FUN_015dd640(param_2 + 0xc);
              }
              *(int *)(param_2 + 0x14) = iVar33 + 1;
              puVar12 = (undefined4 *)(*(int *)(param_2 + 0x10) + iVar33 * 0x18);
              *puVar12 = local_11c;
              puVar12[5] = iVar34;
              puVar12[1] = local_120;
              puVar12[2] = (uint *)((int)local_134 + (int)local_11c);
              puVar12[3] = puVar18;
              puVar12[4] = param_4;
            }
          }
        }
LAB_015d8220:
        FUN_015d6fa8(&local_88,param_2,iVar28,param_4 + 1);
LAB_015d8234:
LAB_015d8238:
        cVar32 = (char)local_88;
      }
      if (cVar32 != 'R') {
        *param_1 = (uint)local_88;
        param_1[1] = (uint)local_84;
        param_1[2] = (uint)local_80;
        param_1[3] = (uint)local_7c;
        return;
      }
      pbVar21 = local_64;
    }
    else {
      if (*(int *)unaff_r8 == 1) {
        uVar35 = *(uint *)(unaff_r8 + 0xc);
        pbVar21 = *(byte **)(unaff_r8 + 8);
      }
      else {
        uVar35 = *(uint *)(unaff_r8 + 4);
        if (5 < uVar35) {
LAB_015d852c:
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar35,5,&DAT_018822e4);
        }
        pbVar21 = unaff_r8 + 8;
      }
      FUN_015db29c(&local_68,pbVar9,*(undefined4 *)((int)puVar18 + 0x20),pbVar21,uVar35);
      if ((char)local_68 != 'R') {
        *param_1 = local_68;
        param_1[1] = (uint)local_64;
        param_1[2] = (uint)local_60;
        param_1[3] = (uint)local_5c;
        return;
      }
      pbVar21 = local_64;
    }
  } while( true );
}

