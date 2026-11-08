// FUN_01af4638 @ 01af4638 size=2752 calls_out=5 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01af4638(undefined4 *param_1,int *param_2,undefined4 *param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  int *******pppppppiVar8;
  int iVar9;
  undefined1 *puVar10;
  int *******extraout_r1;
  byte *pbVar11;
  int *******pppppppiVar12;
  undefined4 uVar13;
  int *******pppppppiVar14;
  int *******pppppppiVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  int *******pppppppiVar19;
  int *******pppppppiVar20;
  int *******pppppppiVar21;
  byte *pbVar22;
  int *******pppppppiVar23;
  char *pcVar24;
  int *******pppppppiVar25;
  int *******pppppppiVar26;
  undefined1 *unaff_r11;
  int *******local_1ac;
  int *******local_1a0;
  int *******local_19c;
  int *******local_198;
  int *******local_190;
  int *******local_18c;
  undefined1 *local_188;
  byte local_184;
  undefined4 local_180;
  byte *local_17c;
  undefined1 *local_178;
  undefined2 local_15c;
  undefined1 local_15a;
  undefined4 local_158;
  undefined1 local_154;
  int *******local_138;
  int *******local_134;
  int *******local_130;
  int *******local_12c;
  int *******local_128;
  undefined4 local_124;
  int *******local_120;
  int *******local_11c;
  undefined4 local_118;
  byte *local_114;
  int *******local_110;
  int *******local_f8;
  int *******pppppppiStack_f4;
  int *******pppppppiStack_f0;
  int *******pppppppiStack_ec;
  int *******local_e8;
  undefined4 uStack_e4;
  int *******pppppppiStack_e0;
  int *******pppppppiStack_dc;
  undefined2 local_d4;
  undefined1 local_d2;
  int *******local_d0;
  int *******local_cc;
  int *******local_c8;
  int *******local_c4;
  int *******local_c0;
  byte local_bc;
  undefined2 local_bb;
  undefined1 local_b9;
  int *******local_b8;
  int *******pppppppiStack_b4;
  undefined4 local_b0;
  byte *local_ac;
  int *******local_a8;
  byte *local_90;
  int *******local_8c;
  int *******local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined4 local_78 [9];
  int *******local_54;
  int *******local_50;
  int *******local_4c;
  int *******local_48;
  int *******local_44;
  int *******local_40;
  int *******local_3c;
  int *******local_38;
  byte local_34;
  undefined2 local_33;
  undefined1 local_31;
  int *******local_30;
  int *******local_2c;
  
  pppppppiVar14 = (int *******)param_2[1];
  pppppppiVar25 = (int *******)param_2[2];
  if (pppppppiVar25 < pppppppiVar14) {
    iVar9 = *param_2;
    pppppppiVar21 = (int *******)((int)pppppppiVar25 + 1);
    param_2[2] = (int)pppppppiVar21;
    bVar2 = *(byte *)(iVar9 + (int)pppppppiVar25);
    if (((~bVar2 & 0x1f) == 0) || (pppppppiVar14 <= pppppppiVar21)) goto switchD_01af4c64_default;
    cVar3 = *(char *)(iVar9 + (int)pppppppiVar21);
    pppppppiVar21 = (int *******)((int)pppppppiVar25 + 2);
    param_2[2] = (int)pppppppiVar21;
    uVar18 = (uint)cVar3;
    if ((int)uVar18 < 0) {
      switch(cVar3) {
      case -0x7f:
        if (pppppppiVar21 < pppppppiVar14) {
          pcVar24 = (char *)(iVar9 + (int)pppppppiVar21);
          pppppppiVar21 = (int *******)((int)pppppppiVar25 + 3);
          param_2[2] = (int)pppppppiVar21;
          uVar18 = (uint)*pcVar24;
          if ((int)uVar18 < 0) goto LAB_01af4698;
        }
        break;
      case -0x7e:
        if (pppppppiVar21 < pppppppiVar14) {
          cVar3 = *(char *)(iVar9 + (int)pppppppiVar21);
          pppppppiVar21 = (int *******)((int)pppppppiVar25 + 3);
          param_2[2] = (int)pppppppiVar21;
          if (pppppppiVar21 < pppppppiVar14) {
            uVar7 = *(undefined1 *)(iVar9 + (int)pppppppiVar21);
            pppppppiVar21 = pppppppiVar25 + 1;
            param_2[2] = (int)pppppppiVar21;
            if (cVar3 != '\0') {
              unaff_r11 = (undefined1 *)(uint)CONCAT11(cVar3,uVar7);
LAB_01af4d90:
              if (unaff_r11 < (undefined1 *)0xffff) goto LAB_01af469c;
            }
          }
        }
        break;
      case -0x7d:
        if (pppppppiVar21 < pppppppiVar14) {
          bVar4 = *(byte *)(iVar9 + (int)pppppppiVar21);
          pppppppiVar21 = (int *******)((int)pppppppiVar25 + 3);
          param_2[2] = (int)pppppppiVar21;
          if (pppppppiVar21 < pppppppiVar14) {
            bVar5 = *(byte *)(iVar9 + (int)pppppppiVar21);
            pppppppiVar21 = pppppppiVar25 + 1;
            param_2[2] = (int)pppppppiVar21;
            if (pppppppiVar21 < pppppppiVar14) {
              bVar6 = *(byte *)(iVar9 + (int)pppppppiVar21);
              pppppppiVar21 = (int *******)((int)pppppppiVar25 + 5);
              param_2[2] = (int)pppppppiVar21;
              if (bVar4 != 0) {
                unaff_r11 = (undefined1 *)((uint)bVar5 << 8 | (uint)bVar4 << 0x10 | (uint)bVar6);
                goto LAB_01af4d90;
              }
            }
          }
        }
        break;
      case -0x7c:
        if (pppppppiVar21 < pppppppiVar14) {
          bVar4 = *(byte *)(iVar9 + (int)pppppppiVar21);
          pppppppiVar21 = (int *******)((int)pppppppiVar25 + 3);
          param_2[2] = (int)pppppppiVar21;
          if (pppppppiVar21 < pppppppiVar14) {
            bVar5 = *(byte *)(iVar9 + (int)pppppppiVar21);
            pppppppiVar21 = pppppppiVar25 + 1;
            param_2[2] = (int)pppppppiVar21;
            if (pppppppiVar21 < pppppppiVar14) {
              bVar6 = *(byte *)(iVar9 + (int)pppppppiVar21);
              pppppppiVar21 = (int *******)((int)pppppppiVar25 + 5);
              param_2[2] = (int)pppppppiVar21;
              if (pppppppiVar21 < pppppppiVar14) {
                unaff_r11 = (undefined1 *)(uint)*(byte *)(iVar9 + (int)pppppppiVar21);
                pppppppiVar21 = (int *******)((int)pppppppiVar25 + 6);
                param_2[2] = (int)pppppppiVar21;
                if (bVar4 != 0) {
                  unaff_r11 = (undefined1 *)
                              ((uint)bVar5 << 0x10 | (uint)bVar4 << 0x18 | (uint)bVar6 << 8 |
                              (uint)unaff_r11);
                  goto LAB_01af4d90;
                }
              }
            }
          }
        }
      }
      goto switchD_01af4c64_default;
    }
LAB_01af4698:
    unaff_r11 = (undefined1 *)(uVar18 & 0xff);
LAB_01af469c:
    pppppppiVar19 = (int *******)(unaff_r11 + (int)pppppppiVar21);
    if ((CARRY4((uint)unaff_r11,(uint)pppppppiVar21)) || (pppppppiVar14 < pppppppiVar19))
    goto switchD_01af4c64_default;
    param_2[2] = (int)pppppppiVar19;
    if (bVar2 == 0xa3) {
      pbVar22 = (byte *)(iVar9 + (int)pppppppiVar21);
      local_180 = 0x8000002d;
      local_158 = 0x8000001d;
      local_154 = 0xb;
      local_17c = pbVar22;
      local_178 = unaff_r11;
      FUN_01aeb7ac(&local_138,&local_158);
      if (unaff_r11 == (undefined1 *)0x0) {
        puVar10 = (undefined1 *)0x0;
switchD_01af4ed8_default:
        local_114 = (byte *)0x0;
        local_188 = puVar10;
        local_110 = pppppppiVar19;
LAB_01af4dfc:
        local_118 = 0x80000000;
        local_15c = local_124._1_2_;
        local_184 = (byte)local_124;
        local_18c = local_128;
        local_190 = local_130;
        local_15a = local_124._3_1_;
        FUN_01aeb5f4(&local_118);
        local_198 = local_134;
        local_1a0 = local_120;
        local_19c = local_12c;
        local_1ac = local_138;
      }
      else {
        puVar10 = (undefined1 *)0x1;
        if (((~*pbVar22 & 0x1f) == 0) || (unaff_r11 == (undefined1 *)0x1))
        goto switchD_01af4ed8_default;
        uVar18 = (uint)(char)pbVar22[1];
        if ((int)uVar18 < 0) {
          puVar10 = (undefined1 *)0x2;
          switch(pbVar22[1]) {
          case 0x81:
            pppppppiVar19 = (int *******)&switchD_01af4ed8::switchdataD_01af4edc;
            if ((undefined1 *)0x2 < unaff_r11) {
              uVar18 = (uint)(char)pbVar22[2];
              puVar10 = (undefined1 *)0x3;
              if ((int)uVar18 < 0) goto LAB_01af4728;
            }
            break;
          case 0x82:
            pppppppiVar19 = (int *******)&switchD_01af4ed8::switchdataD_01af4edc;
            if ((undefined1 *)0x2 < unaff_r11) {
              if (unaff_r11 == (undefined1 *)0x3) {
LAB_01af4f94:
                puVar10 = (undefined1 *)0x3;
                pppppppiVar19 = (int *******)&switchD_01af4ed8::switchdataD_01af4edc;
              }
              else {
                puVar10 = (undefined1 *)0x4;
                if (pbVar22[2] != 0) {
                  pppppppiVar19 = (int *******)(uint)CONCAT11(pbVar22[2],pbVar22[3]);
LAB_01af4fbc:
                  if (pppppppiVar19 < (int *******)0xffff) goto LAB_01af472c;
                }
              }
            }
            break;
          case 0x83:
            pppppppiVar19 = (int *******)&switchD_01af4ed8::switchdataD_01af4edc;
            if ((undefined1 *)0x2 < unaff_r11) {
              if (unaff_r11 == (undefined1 *)0x3) goto LAB_01af4f94;
              if (unaff_r11 < (undefined1 *)0x5) {
LAB_01af4f9c:
                puVar10 = (undefined1 *)0x4;
                pppppppiVar19 = (int *******)&switchD_01af4ed8::switchdataD_01af4edc;
              }
              else {
                puVar10 = (undefined1 *)0x5;
                if (pbVar22[2] != 0) {
                  pppppppiVar19 =
                       (int *******)
                       ((uint)pbVar22[3] << 8 | (uint)pbVar22[2] << 0x10 | (uint)pbVar22[4]);
                  goto LAB_01af4fbc;
                }
              }
            }
            break;
          case 0x84:
            pppppppiVar19 = (int *******)&switchD_01af4ed8::switchdataD_01af4edc;
            if ((undefined1 *)0x2 < unaff_r11) {
              if (unaff_r11 == (undefined1 *)0x3) goto LAB_01af4f94;
              if (unaff_r11 < (undefined1 *)0x5) goto LAB_01af4f9c;
              if (unaff_r11 == (undefined1 *)0x5) {
                puVar10 = (undefined1 *)0x5;
              }
              else {
                puVar10 = (undefined1 *)0x6;
                if (pbVar22[2] != 0) {
                  pppppppiVar19 =
                       (int *******)
                       ((uint)pbVar22[3] << 0x10 | (uint)pbVar22[2] << 0x18 | (uint)pbVar22[4] << 8
                       | (uint)pbVar22[5]);
                  goto LAB_01af4fbc;
                }
              }
            }
          }
          goto switchD_01af4ed8_default;
        }
        puVar10 = (undefined1 *)0x2;
LAB_01af4728:
        pppppppiVar19 = (int *******)(uVar18 & 0xff);
LAB_01af472c:
        local_188 = (undefined1 *)((int)pppppppiVar19 + (int)puVar10);
        if ((CARRY4((uint)pppppppiVar19,(uint)puVar10)) || (unaff_r11 < local_188))
        goto switchD_01af4ed8_default;
        if (*pbVar22 != 0x30) goto LAB_01af4dfc;
        pbVar22 = pbVar22 + (int)puVar10;
        local_118 = 0x8000002d;
        pppppppiVar14 = (int *******)&local_128;
        local_f8 = local_138;
        pppppppiStack_f4 = local_134;
        pppppppiStack_f0 = local_130;
        pppppppiStack_ec = local_12c;
        local_e8 = local_128;
        uStack_e4 = local_124;
        pppppppiStack_e0 = local_120;
        pppppppiStack_dc = local_11c;
        pppppppiVar21 = local_11c;
        local_114 = pbVar22;
        local_110 = pppppppiVar19;
        if (pppppppiVar19 != (int *******)0x0) {
          local_190 = (int *******)&local_bb;
          pppppppiVar26 = (int *******)0x0;
          bVar2 = local_184;
          do {
            FUN_01aeb7ac(&local_d0,&local_158);
            local_18c = pppppppiStack_b4;
            local_184 = local_bc;
            pppppppiVar20 = local_c0;
            pppppppiVar14 = local_c8;
            local_1ac = local_d0;
            pppppppiVar21 = extraout_r1;
            pppppppiVar23 = pppppppiVar26;
            if (pppppppiVar19 <= pppppppiVar26) goto LAB_01af4aac;
            pppppppiVar21 = (int *******)((int)pppppppiVar26 + 1);
            pbVar1 = pbVar22 + (int)pppppppiVar26;
            if (((~*pbVar1 & 0x1f) == 0) || (pppppppiVar19 <= pppppppiVar21)) goto LAB_01af4aa8;
            pbVar11 = pbVar22 + (int)pppppppiVar21;
            pppppppiVar15 = (int *******)((int)pppppppiVar26 + 2);
            pppppppiVar21 = (int *******)(uint)*pbVar11;
            pppppppiVar23 = pppppppiVar15;
            if ((char)*pbVar11 < '\0') {
              pppppppiVar12 = (int *******)((int)pppppppiVar21 + -0x81);
              pppppppiVar21 = pppppppiVar12;
              if (pppppppiVar12 <= &DAT_00000003) {
                pppppppiVar21 =
                     (int *******)(&switchD_01af4904::switchdataD_01af4908)[(int)pppppppiVar12];
                switch(pppppppiVar12) {
                case (int *******)0x0:
                  if (pppppppiVar15 < pppppppiVar19) {
                    pppppppiVar23 = (int *******)((int)pppppppiVar26 + 3);
                    pppppppiVar21 = (int *******)(int)(char)pbVar22[(int)pppppppiVar15];
                    if ((int *******)0x7fffffff < pppppppiVar21) {
                      pppppppiVar21 = (int *******)(uint)pbVar22[(int)pppppppiVar15];
                      goto LAB_01af483c;
                    }
                  }
                  break;
                case (int *******)0x1:
                  if (pppppppiVar15 < pppppppiVar19) {
                    pppppppiVar21 = (int *******)((int)pppppppiVar26 + 3);
                    if (pppppppiVar21 < pppppppiVar19) {
                      pppppppiVar23 = pppppppiVar26 + 1;
                      pppppppiVar8 = pppppppiVar23;
                      if (pbVar22[(int)pppppppiVar15] == 0) {
LAB_01af4c40:
                        pppppppiVar23 = pppppppiVar8;
                        pppppppiVar21 = (int *******)((int)pppppppiVar26 + 3);
                      }
                      else {
                        pppppppiVar21 =
                             (int *******)
                             (uint)CONCAT11(pbVar22[(int)pppppppiVar15],pbVar22[(int)pppppppiVar21])
                        ;
LAB_01af4a90:
                        if (pppppppiVar21 < (int *******)0xffff) goto LAB_01af483c;
                      }
                    }
                    else {
LAB_01af4aa8:
                      pppppppiVar23 = pppppppiVar21;
                    }
                  }
                  break;
                case (int *******)0x2:
                  if (pppppppiVar15 < pppppppiVar19) {
                    pppppppiVar21 = (int *******)((int)pppppppiVar26 + 3);
                    if (pppppppiVar19 <= pppppppiVar21) goto LAB_01af4aa8;
                    pppppppiVar23 = pppppppiVar26 + 1;
                    if (pppppppiVar23 < pppppppiVar19) {
                      pppppppiVar8 = (int *******)((int)pppppppiVar26 + 5);
                      if (pbVar22[(int)pppppppiVar15] == 0) goto LAB_01af4c40;
                      pppppppiVar21 =
                           (int *******)
                           ((uint)pbVar22[(int)pppppppiVar21] << 8 |
                            (uint)pbVar22[(int)pppppppiVar15] << 0x10 |
                           (uint)pbVar22[(int)pppppppiVar23]);
                      pppppppiVar23 = (int *******)((int)pppppppiVar26 + 5);
                      goto LAB_01af4a90;
                    }
                  }
                  break;
                case (int *******)0x3:
                  if (pppppppiVar15 < pppppppiVar19) {
                    pppppppiVar21 = (int *******)((int)pppppppiVar26 + 3);
                    if (pppppppiVar19 <= pppppppiVar21) goto LAB_01af4aa8;
                    pppppppiVar12 = pppppppiVar26 + 1;
                    pppppppiVar23 = pppppppiVar12;
                    if ((pppppppiVar12 < pppppppiVar19) &&
                       (pppppppiVar23 = (int *******)((int)pppppppiVar26 + 5),
                       pppppppiVar23 < pppppppiVar19)) {
                      pppppppiVar8 = (int *******)((int)pppppppiVar26 + 6);
                      if (pbVar22[(int)pppppppiVar15] == 0) goto LAB_01af4c40;
                      pppppppiVar21 =
                           (int *******)
                           ((uint)pbVar22[(int)pppppppiVar21] << 0x10 |
                            (uint)pbVar22[(int)pppppppiVar15] << 0x18 |
                            (uint)pbVar22[(int)pppppppiVar12] << 8 |
                           (uint)pbVar22[(int)pppppppiVar23]);
                      pppppppiVar23 = (int *******)((int)pppppppiVar26 + 6);
                      goto LAB_01af4a90;
                    }
                  }
                }
              }
LAB_01af4aac:
              local_ac = (byte *)((uint)local_ac & 0xffffff00);
              *(undefined1 *)((undefined2 *)((uint)&local_b0 | 5) + 1) = 0;
              *(undefined2 *)((uint)&local_b0 | 5) = 0;
              pppppppiVar26 = pppppppiVar23;
              local_a8 = pppppppiVar21;
LAB_01af4ac8:
              local_b0 = 0x80000000;
              local_1a0 = local_b8;
              local_198 = local_cc;
              local_d2 = local_b9;
              local_19c = local_c4;
              local_d4 = local_bb;
              FUN_01aeb5f4(&local_b0);
              pppppppiVar21 = local_1ac;
LAB_01af4b20:
              if (local_1ac != (int *******)0x8000002d) {
LAB_01af5068:
                local_15a = local_d2;
                local_15c = local_d4;
                pppppppiVar25 = local_18c;
                local_190 = pppppppiVar14;
                local_18c = pppppppiVar20;
                goto LAB_01af5094;
              }
            }
            else {
LAB_01af483c:
              pppppppiVar26 = (int *******)((int)pppppppiVar21 + (int)pppppppiVar23);
              if ((CARRY4((uint)pppppppiVar21,(uint)pppppppiVar23)) ||
                 (pppppppiVar19 < pppppppiVar26)) goto LAB_01af4aac;
              if (*pbVar1 != 0x30) {
                goto LAB_01af4ac8;
              }
              local_ac = pbVar22 + (int)pppppppiVar23;
              local_88 = (int *******)0x0;
              local_a8 = pppppppiVar21;
              local_90 = local_ac;
              local_8c = pppppppiVar21;
              FUN_01aefedc(&local_48,&local_90);
              local_184 = local_34;
              if (local_48 != (int *******)0x8000002d) {
                local_1a0 = local_30;
                local_198 = local_44;
                local_18c = local_2c;
                local_1ac = local_48;
                local_19c = local_3c;
                pppppppiVar20 = local_38;
                pppppppiVar14 = local_40;
                local_84 = local_33;
                local_82 = local_31;
LAB_01af5044:
                local_d2 = local_82;
                local_d4 = local_84;
                FUN_01aeb5f4(&local_d0);
                goto LAB_01af5068;
              }
              pppppppiVar20 = local_44;
              pppppppiVar21 = local_40;
              pppppppiVar14 = pppppppiVar26;
              local_184 = bVar2;
              if ((local_40 == (int *******)&DAT_00000003) && (*(short *)local_44 == 0x1d55)) {
                if ((byte *)((int)local_44 + 2) == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0cc(&DAT_01d30578);
                }
                bVar2 = *(byte *)((int)local_44 + 2);
                pppppppiVar21 = local_38;
                pppppppiVar25 = pppppppiVar26;
                if (bVar2 < 0x1e) {
                  pppppppiVar20 = (int *******)(param_4 + 0x54);
                  if (((bVar2 != 0xf) &&
                      (pppppppiVar20 = (int *******)(param_4 + 0x6c), bVar2 != 0x11)) &&
                     (pppppppiVar20 = (int *******)(param_4 + 0x4c), bVar2 != 0x13))
                  goto LAB_01af48c8;
                }
                else {
                  pppppppiVar20 = (int *******)(param_4 + 100);
                  if ((bVar2 != 0x1e) &&
                     (pppppppiVar20 = (int *******)(param_4 + 0x74), bVar2 != 0x1f)) {
                    if (bVar2 != 0x25) goto LAB_01af48c8;
                    pppppppiVar20 = (int *******)(param_4 + 0x5c);
                  }
                }
                if (*pppppppiVar20 != (int ******)0x0) {
                  local_1ac = (int *******)&DAT_80000009;
                  goto LAB_01af5040;
                }
                local_78[0] = 0x80000000;
                local_4c = (int *******)0x0;
                local_50 = local_38;
                local_54 = local_3c;
                pppppppiVar25 = local_3c;
                if (bVar2 != 0xf) {
                  FUN_01af347c(&local_48,&local_54,0x30);
                  local_1ac = local_48;
                  if (local_48 == (int *******)0x8000002d) {
                    pppppppiVar21 = local_40;
                    pppppppiVar25 = local_44;
                    if (local_4c == local_50) goto LAB_01af4c28;
                    local_1ac = (int *******)&DAT_80000000;
                    local_38 = pppppppiVar20;
                    local_40 = pppppppiVar26;
                    local_18c = (int *******)&local_b8;
                  }
                  else {
                    local_19c = local_3c;
                    local_184 = local_34;
                    local_7a = local_31;
                    local_1a0 = local_30;
                    local_18c = local_2c;
                    local_7c = local_33;
                    FUN_01aeb5f4(local_78);
                    local_198 = local_44;
                  }
                  local_82 = local_7a;
                  local_84 = local_7c;
                  pppppppiVar20 = local_38;
                  pppppppiVar14 = local_40;
                  goto LAB_01af5044;
                }
LAB_01af4c28:
                FUN_01aeb5f4(local_78);
                *pppppppiVar20 = (int ******)pppppppiVar25;
                pppppppiVar20[1] = (int ******)pppppppiVar21;
                local_18c = pppppppiVar26;
              }
              else {
LAB_01af48c8:
                local_18c = pppppppiVar25;
                if ((local_34 & 1) != 0) {
                  local_1ac = (int *******)0x80000021;
LAB_01af5040:
                  local_18c = (int *******)&local_b8;
                  goto LAB_01af5044;
                }
              }
              if (local_88 != local_8c) {
                local_1a0 = local_b8;
                local_198 = local_cc;
                local_19c = local_c4;
                local_d2 = local_b9;
                local_d4 = local_bb;
                local_1ac = local_d0;
                pppppppiVar20 = local_c0;
                pppppppiVar14 = local_c8;
                local_18c = pppppppiStack_b4;
                local_184 = local_bc;
                goto LAB_01af4b20;
              }
              FUN_01aeb5f4(&local_d0);
            }
            pppppppiVar25 = local_18c;
            local_18c = (int *******)&local_b8;
            bVar2 = local_184;
          } while (pppppppiVar26 != pppppppiVar19);
        }
        local_1ac = (int *******)0x8000002d;
        local_198 = pppppppiVar19;
        local_1a0 = pppppppiVar21;
        local_19c = pppppppiVar14;
LAB_01af5094:
        FUN_01aeb5f4(&local_f8);
        local_11c = pppppppiVar25;
      }
      FUN_01aeb5f4(&local_158);
      if (local_1ac == (int *******)0x8000002d) {
        if (local_188 != unaff_r11) {
          uVar13 = param_3[1];
          uVar16 = param_3[2];
          uVar17 = param_3[3];
          *param_1 = *param_3;
          param_1[1] = uVar13;
          param_1[2] = uVar16;
          param_1[3] = uVar17;
          uVar13 = param_3[5];
          uVar16 = param_3[6];
          uVar17 = param_3[7];
          param_1[4] = param_3[4];
          param_1[5] = uVar13;
          param_1[6] = uVar16;
          param_1[7] = uVar17;
          return;
        }
        *param_1 = 0x8000002d;
      }
      else {
        *(undefined1 *)((int)param_1 + 0x17) = local_15a;
        param_1[2] = local_190;
        param_1[6] = local_1a0;
        *(byte *)(param_1 + 5) = local_184;
        *(undefined2 *)((int)param_1 + 0x15) = local_15c;
        param_1[7] = local_11c;
        *param_1 = local_1ac;
        param_1[1] = local_198;
        param_1[3] = local_19c;
        param_1[4] = local_18c;
      }
      goto LAB_01af4dd0;
    }
  }
  else {
switchD_01af4c64_default:
    local_17c = (byte *)0x0;
    local_178 = unaff_r11;
  }
  local_180 = 0x80000000;
  uVar13 = param_3[1];
  uVar16 = param_3[2];
  uVar17 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar13;
  param_1[2] = uVar16;
  param_1[3] = uVar17;
  uVar13 = param_3[5];
  uVar16 = param_3[6];
  uVar17 = param_3[7];
  param_1[4] = param_3[4];
  param_1[5] = uVar13;
  param_1[6] = uVar16;
  param_1[7] = uVar17;
  param_3 = &local_180;
LAB_01af4dd0:
  FUN_01aeb5f4(param_3);
  return;
}

