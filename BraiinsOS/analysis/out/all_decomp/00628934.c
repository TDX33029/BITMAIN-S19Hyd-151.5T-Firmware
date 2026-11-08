// FUN_00628934 @ 00628934 size=4928 calls_out=11 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x006299b8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00628934(uint *param_1,int *param_2,int param_3,int param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *piVar11;
  uint *puVar12;
  int iVar13;
  undefined2 *puVar14;
  uint uVar15;
  int iVar16;
  undefined1 uVar17;
  uint uVar18;
  int iVar19;
  ushort *puVar20;
  uint *puVar21;
  ushort *puVar22;
  undefined4 *puVar23;
  byte *pbVar24;
  undefined1 uVar25;
  undefined2 uVar26;
  int iVar27;
  byte *pbVar28;
  byte *pbVar29;
  ushort *puVar30;
  ushort *puVar31;
  char cVar32;
  uint uVar33;
  int iVar34;
  uint unaff_lr;
  uint uVar35;
  uint uVar36;
  ushort *local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  ushort *local_160;
  uint local_15c;
  ushort *local_158;
  ushort *local_154;
  ushort *local_150;
  ushort *local_14c;
  ushort *local_148;
  ushort *local_144;
  uint local_140;
  ushort *local_13c;
  uint local_134;
  undefined4 local_12c;
  ushort *local_120;
  ushort *local_118;
  ushort *local_114;
  ushort *local_108;
  ushort *local_100;
  uint local_fc;
  ushort *local_f8;
  uint local_f4;
  ushort *local_f0;
  byte *local_ec;
  byte *local_e8;
  ushort *local_a8;
  ushort *local_9c;
  byte *local_94;
  undefined4 local_90;
  ushort *local_8c;
  ushort *local_88;
  uint local_84;
  undefined2 local_7a;
  char local_78 [4];
  ushort *local_74;
  ushort *local_70;
  uint local_6c;
  undefined4 local_68;
  ushort *local_64;
  ushort *local_60;
  ushort *local_5c;
  ushort *local_58;
  uint local_54;
  byte *local_50;
  int local_4c;
  undefined1 local_48;
  undefined2 local_47;
  undefined1 local_45;
  uint local_40;
  uint local_3c;
  ushort *local_38;
  uint local_34;
  ushort *local_30;
  uint uStack_2c;
  
  piVar11 = param_2 + 6;
  puVar14 = (undefined2 *)((uint)&local_90 | 1);
  puVar12 = (uint *)((uint)&local_90 | 2);
LAB_006289b0:
  do {
    while( true ) {
      iVar6 = param_2[10];
      if (iVar6 <= param_3) {
        *(char *)param_1 = 'O';
        return;
      }
      iVar13 = param_2[8];
      uVar33 = 0;
      iVar7 = *(int *)(iVar13 + 0x1c);
      pbVar28 = (byte *)param_2[6];
      iVar27 = *(int *)(iVar13 + 0x18);
      iVar8 = *(int *)(iVar13 + 0x24);
      local_a8 = (ushort *)(uint)*(byte *)(iVar13 + 0x21);
      uVar35 = 0;
      local_94 = (byte *)0x0;
      puVar20 = (ushort *)0x0;
      pbVar29 = pbVar28;
      iVar19 = param_2[7];
      do {
        pbVar24 = pbVar29;
        puVar22 = puVar20;
        if (iVar19 == 0) {
          uVar35 = 0;
          cVar32 = '\x13';
          pbVar29 = pbVar24;
          goto LAB_00629d08;
        }
        param_2[7] = iVar19 + -1;
        pbVar29 = pbVar24 + 1;
        bVar1 = *pbVar24;
        puVar20 = (ushort *)(uint)bVar1;
        param_2[6] = (int)pbVar29;
        if ((uVar33 == 0x3f) && (&DAT_00000001 < puVar20)) {
          cVar32 = '\x06';
          pbVar24 = local_e8;
          uVar35 = unaff_lr;
          goto LAB_00629d08;
        }
        uVar15 = uVar33 & 0x3f;
        uVar18 = (uint)puVar20 & 0x7f;
        uVar9 = uVar15 - 0x20;
        uVar36 = uVar18 << uVar15;
        if (-1 < (int)uVar9) {
          uVar36 = 0;
        }
        uVar15 = uVar18 >> (0x20 - uVar15 & 0xff);
        pbVar24 = (byte *)(uVar36 | (uint)local_94);
        if (-1 < (int)uVar9) {
          uVar15 = uVar18 << (uVar9 & 0xff);
        }
        uVar35 = uVar15 | uVar35;
        uVar33 = uVar33 + 7;
        iVar19 = iVar19 + -1;
        local_94 = pbVar24;
      } while (0x7fffffff < (uint)(int)(char)bVar1);
      unaff_lr = uVar35;
      local_e8 = pbVar24;
      if (pbVar24 != (byte *)0x0 || uVar35 != 0) break;
      param_2[10] = iVar6 + -1;
      local_ec = (byte *)0x0;
    }
    iVar19 = param_2[9];
    if ((uVar35 == 0) && (pbVar24 + -1 < *(byte **)(iVar19 + 8))) {
      local_ec = (byte *)((int)(pbVar24 + -1) * 0x68 + *(int *)(iVar19 + 4));
    }
    else {
      puVar10 = *(undefined4 **)(iVar19 + 0xc);
      cVar32 = '\x12';
      if (puVar10 == (undefined4 *)0x0) {
LAB_00629d3c:
        pbVar29 = local_ec;
LAB_00629d08:
        *(char *)((int)param_1 + 1) = (char)puVar22;
        *(char *)param_1 = cVar32;
        param_1[1] = (uint)pbVar29;
        param_1[2] = (uint)pbVar24;
        param_1[3] = uVar35;
        return;
      }
      local_9c = *(ushort **)(iVar19 + 0x10);
      while( true ) {
        uVar36 = 0xffffffff;
        uVar33 = (uint)*(ushort *)((int)puVar10 + 0x4d6);
        iVar19 = uVar33 << 3;
        puVar23 = puVar10;
        do {
          if (iVar19 == 0) goto LAB_00628b50;
          pbVar29 = (byte *)*puVar23;
          uVar9 = puVar23[1];
          iVar19 = iVar19 + -8;
          uVar36 = uVar36 + 1;
          puVar23 = puVar23 + 2;
          uVar9 = (uint)(uVar9 <= uVar35 && (uint)(pbVar24 <= pbVar29) <= uVar9 - uVar35) -
                  (uint)(uVar35 <= uVar9 && (uint)(pbVar29 <= pbVar24) <= uVar35 - uVar9);
        } while (uVar9 == 1);
        uVar33 = uVar36;
        if ((uVar9 & 0xff) == 0) break;
LAB_00628b50:
        if (local_9c == (ushort *)0x0) goto LAB_00629d3c;
        local_9c = (ushort *)((int)local_9c + -1);
        puVar10 = (undefined4 *)puVar10[uVar33 + 0x136];
      }
      local_ec = (byte *)(puVar10 + uVar36 * 0x1a + 0x16);
    }
    if (local_ec[0x62] == 1) {
      param_2[10] = iVar6 + 1;
    }
    if (*(short *)(local_ec + 0x60) != 0x2e) {
      if (*(short *)(local_ec + 0x60) != 0x1d) {
        if (*(int *)local_ec == 1) {
          pbVar29 = *(byte **)(local_ec + 8);
          uVar35 = *(uint *)(local_ec + 0xc);
        }
        else {
          uVar35 = *(uint *)(local_ec + 4);
          if (5 < uVar35) goto LAB_00629dc4;
          pbVar29 = local_ec + 8;
        }
        FUN_00607efc(&local_68,piVar11,*(undefined4 *)(iVar13 + 0x20),pbVar29,uVar35);
        if ((char)local_68 != 'O') {
          *param_1 = local_68;
          param_1[1] = (uint)local_64;
          param_1[2] = (uint)local_60;
          param_1[3] = (uint)local_5c;
          return;
        }
        goto LAB_006289b0;
      }
      iVar13 = param_2[0xb];
      iVar16 = 4;
      iVar19 = param_2[0xc];
      if (local_a8 == (ushort *)&DAT_00000008) {
        iVar16 = 0xc;
      }
      if (*(int *)local_ec == 1) {
        puVar21 = *(uint **)(local_ec + 8);
        uVar35 = *(uint *)(local_ec + 0xc);
      }
      else {
        uVar35 = *(uint *)(local_ec + 4);
        if (5 < uVar35) {
LAB_00629e28:
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar35,5,&DAT_01882304);
        }
        puVar21 = (uint *)(local_ec + 8);
      }
      if (uVar35 == 0) {
        local_120 = (ushort *)0x0;
        bVar4 = false;
        local_12c = 0;
        bVar3 = false;
        bVar2 = false;
        local_114 = (ushort *)0x0;
        local_118 = (ushort *)0x0;
        local_9c = (ushort *)0x0;
      }
      else {
        local_120 = (ushort *)0x0;
        iVar34 = uVar35 << 4;
        bVar4 = false;
        bVar3 = false;
        bVar2 = false;
        local_9c = (ushort *)0x0;
        local_118 = (ushort *)0x0;
        local_114 = (ushort *)0x0;
        local_12c = 0;
        do {
          local_40 = *puVar21;
          local_3c = puVar21[1];
          local_38 = (ushort *)puVar21[2];
          local_34 = puVar21[3];
          FUN_006067fc(&local_68,piVar11,*(undefined4 *)(param_2[8] + 0x20),&local_40);
          if (local_68 == 0x2e && local_64 == (ushort *)0x0) {
            local_90 = local_60;
            local_8c = local_5c;
            local_88 = local_58;
            local_84 = local_54;
            goto LAB_006299f0;
          }
          uVar35 = (uint)local_58 & 0xffff;
          puVar20 = local_148;
          switch(uVar35) {
          case 3:
            if (local_9c == (ushort *)0x0) {
              FUN_0060872c(&local_40,&local_68);
              FUN_00611d9c(local_78,iVar13,*(undefined1 *)(iVar19 + 0xd9),
                           *(undefined4 *)(iVar19 + 0x104),&local_40);
              puVar20 = local_70;
              local_a8 = local_70;
              local_9c = local_74;
              if (local_78[0] != 'O') {
                local_9c = (ushort *)0x0;
                puVar20 = local_148;
                local_a8 = local_148;
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
            FUN_0060872c(&local_40,&local_68);
            if ((local_40 & 0x3f) == 0) {
              local_144 = local_38;
              local_140 = local_34;
              bVar2 = true;
            }
            else if (local_40 == 0xc) {
              puVar22 = *(ushort **)(iVar13 + 8);
              uVar35 = *(uint *)(iVar19 + 0x108);
              if (*(uint *)(iVar13 + 0xc) < uVar35) {
                uVar25 = 0x13;
                local_fc = 0;
LAB_00629c30:
                uVar33 = local_168;
                local_154 = puVar22;
              }
              else {
                uVar33 = (uint)*(byte *)(iVar19 + 0xd8);
                uVar36 = (uint)((ulonglong)uVar33 * ZEXT48(local_38));
                if ((int)((ulonglong)uVar33 * ZEXT48(local_38) >> 0x20) != 0) {
                  uVar25 = 0x38;
                  puVar22 = local_154;
                  goto LAB_00629c30;
                }
                uVar9 = *(uint *)(iVar13 + 0xc) - uVar35;
                if (uVar9 < uVar36) {
                  uVar25 = 0x13;
                  local_fc = 0;
                  puVar22 = (ushort *)((int)puVar22 + uVar35);
                  goto LAB_00629c30;
                }
                uVar25 = 0x19;
                if (uVar33 - 1 < 8) {
                  puVar22 = (ushort *)((int)((int)puVar22 + uVar35) + uVar36);
                  uVar35 = uVar9 - uVar36;
                  switch(uVar33) {
                  case 1:
                    if (uVar9 != uVar36) {
                      local_154 = (ushort *)(uint)(byte)*puVar22;
LAB_00629738:
                      local_fc = 0;
                      bVar2 = true;
                      local_140 = 0;
                      local_144 = local_154;
                      goto switchD_00629028_caseD_4;
                    }
                    break;
                  case 2:
                    if (1 < uVar35) {
                      local_154 = (ushort *)(uint)*puVar22;
                      goto LAB_00629738;
                    }
                    break;
                  default:
                    goto switchD_00629424_caseD_3;
                  case 4:
                    if (3 < uVar35) {
                      local_154 = *(ushort **)puVar22;
                      goto LAB_00629738;
                    }
                    break;
                  case 8:
                    if (7 < uVar35) {
                      local_154 = *(ushort **)puVar22;
                      local_fc = *(uint *)(puVar22 + 2);
                      bVar2 = true;
                      local_144 = local_154;
                      local_140 = local_fc;
                      goto switchD_00629028_caseD_4;
                    }
                  }
                  uVar25 = 0x13;
                  local_fc = 0;
                  local_14c = puVar22;
                  goto LAB_00629c30;
                }
              }
switchD_00629424_caseD_3:
              local_84 = local_fc;
              local_90 = (ushort *)CONCAT31(CONCAT21(local_90._2_2_,(char)uVar33),uVar25);
              local_168 = uVar33;
              local_8c = local_14c;
              local_88 = local_154;
              goto LAB_006299f0;
            }
            break;
          case 0x12:
            FUN_0060872c(&local_40,&local_68);
            if ((local_40 & 0x3f) == 0) {
              local_158 = local_38;
              local_15c = local_34;
              bVar3 = true;
            }
            else if (local_40 == 7) {
              local_160 = local_38;
              local_164 = local_34;
              bVar4 = true;
            }
            else if (local_40 == 0xc) {
              uVar35 = *(uint *)(iVar19 + 0x108);
              if (*(uint *)(iVar13 + 0xc) < uVar35) {
                local_f4 = 0;
                uVar25 = 0x13;
                local_f8 = *(ushort **)(iVar13 + 8);
LAB_00629c98:
                uVar33 = local_16c;
              }
              else {
                uVar33 = (uint)*(byte *)(iVar19 + 0xd8);
                uVar36 = (uint)((ulonglong)uVar33 * ZEXT48(local_38));
                if ((int)((ulonglong)uVar33 * ZEXT48(local_38) >> 0x20) != 0) {
                  uVar25 = 0x38;
                  goto LAB_00629c98;
                }
                uVar9 = *(uint *)(iVar13 + 0xc) - uVar35;
                puVar22 = (ushort *)((int)*(ushort **)(iVar13 + 8) + uVar35);
                if (uVar9 < uVar36) {
                  local_f4 = 0;
                  uVar25 = 0x13;
                  local_f8 = puVar22;
                  goto LAB_00629c98;
                }
                uVar25 = 0x19;
                if (uVar33 - 1 < 8) {
                  puVar22 = (ushort *)((int)puVar22 + uVar36);
                  uVar35 = uVar9 - uVar36;
                  switch(uVar33) {
                  case 1:
                    if (uVar9 != uVar36) {
                      local_f8 = (ushort *)(uint)(byte)*puVar22;
LAB_006297bc:
                      local_f4 = 0;
                      bVar3 = true;
                      local_15c = 0;
                      local_158 = local_f8;
                      goto switchD_00629028_caseD_4;
                    }
                    break;
                  case 2:
                    if (1 < uVar35) {
                      local_f8 = (ushort *)(uint)*puVar22;
                      goto LAB_006297bc;
                    }
                    break;
                  default:
                    goto switchD_00629358_caseD_3;
                  case 4:
                    if (3 < uVar35) {
                      local_f8 = *(ushort **)puVar22;
                      goto LAB_006297bc;
                    }
                    break;
                  case 8:
                    if (7 < uVar35) {
                      local_f8 = *(ushort **)puVar22;
                      local_f4 = *(uint *)(puVar22 + 2);
                      bVar3 = true;
                      local_15c = local_f4;
                      local_158 = local_f8;
                      goto switchD_00629028_caseD_4;
                    }
                  }
                  local_f4 = 0;
                  uVar25 = 0x13;
                  local_170 = puVar22;
                  local_f8 = puVar22;
                  goto LAB_00629c98;
                }
              }
switchD_00629358_caseD_3:
              local_88 = local_f8;
              local_8c = local_170;
              local_90 = (ushort *)CONCAT31(CONCAT21(local_90._2_2_,(char)uVar33),uVar25);
              local_16c = uVar33;
              local_84 = local_f4;
              goto LAB_006299f0;
            }
            break;
          case 0x31:
          case 0x47:
            if (local_9c == (ushort *)0x0) {
              FUN_0060872c(&local_40,&local_68);
              FUN_00629e48(local_78,(char)param_2[0xe],local_40,local_3c,local_38,(char)param_2[0xe]
                           ,iVar13,iVar19,param_2[0xd],0x10);
              if (local_78[0] != 'O') goto LAB_00629ba0;
              local_9c = local_74;
              local_a8 = local_70;
            }
            break;
          case 0x55:
            FUN_0060872c(&local_40,&local_68);
            FUN_00612130(local_78,iVar13,iVar19);
            if (local_78[0] != 'O') {
LAB_00629ba0:
              uVar26 = *(undefined2 *)((uint)local_78 | 1);
              *(undefined1 *)(puVar14 + 1) = *(undefined1 *)((undefined2 *)((uint)local_78 | 1) + 1)
              ;
              *puVar14 = uVar26;
              local_84 = local_6c;
              local_88 = local_70;
              local_8c = local_74;
              local_90 = (ushort *)CONCAT31(local_90._1_3_,local_78[0]);
              goto LAB_006299f0;
            }
            local_120 = local_74;
            local_100 = local_70;
            break;
          case 0x57:
            local_114 = local_60;
            switch(local_68 & 0x3f) {
            case 2:
              local_114 = (ushort *)((uint)local_60 & 0xff);
              break;
            case 3:
              local_114 = (ushort *)((uint)local_60 & 0xffff);
              break;
            case 4:
              break;
            case 5:
            case 7:
              break;
            case 6:
              if ((int)local_5c < 0) {
                local_114 = (ushort *)0x0;
              }
              break;
            default:
              local_114 = (ushort *)0x0;
            }
            break;
          case 0x58:
            FUN_0060872c(&local_40,&local_68);
            if (local_40 == 0x2c && local_3c == 0) {
              if (!(local_38 != (ushort *)0x0 || local_34 != 0)) {
                if (*(ushort *)(iVar19 + 0xda) < 5) break;
              }
              local_12c = 1;
              local_13c = local_38;
              local_134 = local_34;
            }
            break;
          case 0x59:
            switch(local_68 & 0x3f) {
            case 2:
              local_118 = (ushort *)((uint)local_60 & 0xff);
              break;
            case 3:
              local_118 = (ushort *)((uint)local_60 & 0xffff);
              break;
            case 4:
              local_118 = local_60;
              break;
            case 5:
            case 7:
              local_118 = local_60;
              break;
            case 6:
              local_118 = local_60;
              if ((int)local_5c < 0) {
                local_118 = (ushort *)0x0;
              }
              break;
            default:
              local_118 = (ushort *)0x0;
            }
            break;
          default:
            uVar33 = local_68;
            if (uVar35 != 0x6e) {
              uVar33 = 0x2007;
            }
            if (uVar35 == 0x6e || uVar35 == uVar33) {
              FUN_0060872c(&local_40,&local_68);
              FUN_00611d9c(local_78,iVar13,*(undefined1 *)(iVar19 + 0xd9),
                           *(undefined4 *)(iVar19 + 0x104),&local_40);
              if (local_78[0] == 'O') {
                local_a8 = local_70;
                local_9c = local_74;
              }
            }
          }
switchD_00629028_caseD_4:
          local_148 = puVar20;
          iVar34 = iVar34 + -0x10;
          puVar21 = puVar21 + 4;
        } while (iVar34 != 0);
        puVar22 = local_13c;
      }
      iVar34 = param_2[2];
      if (iVar34 == *param_2) {
        FUN_0061ce1c(param_2);
        local_13c = puVar22;
      }
      puVar10 = (undefined4 *)(param_2[1] + iVar34 * 0x28);
      *puVar10 = local_12c;
      puVar10[3] = local_134;
      puVar10[4] = local_9c;
      puVar10[5] = local_a8;
      puVar10[7] = local_118;
      puVar10[1] = 0;
      puVar10[2] = puVar22;
      puVar10[6] = pbVar28 + ((iVar16 + iVar8) - (iVar7 + iVar27));
      puVar10[8] = local_114;
      param_2[2] = iVar34 + 1;
      if (((uint)local_120 & 1) == 0) {
        if (bVar2) {
          if (bVar3) {
            if (local_140 <= local_15c && (uint)(local_158 <= local_144) <= local_140 - local_15c) {
              iVar19 = param_2[5];
              if (iVar19 == param_2[3]) {
                FUN_0061cd58(param_2 + 3);
              }
              puVar10 = (undefined4 *)(param_2[4] + iVar19 * 0x18);
              *puVar10 = local_144;
              puVar10[1] = local_140;
              puVar10[2] = local_158;
              puVar10[4] = param_4;
              puVar10[3] = local_15c;
              puVar10[5] = iVar34;
              param_2[5] = iVar19 + 1;
            }
          }
          else if (bVar4) {
            uVar35 = local_164 + local_140 + (uint)CARRY4((uint)local_160,(uint)local_144);
            if (local_140 <= uVar35 &&
                (uint)((ushort *)((int)local_160 + (int)local_144) <= local_144) <=
                local_140 - uVar35) {
              iVar19 = param_2[5];
              if (iVar19 == param_2[3]) {
                FUN_0061cd58(param_2 + 3);
              }
              puVar10 = (undefined4 *)(param_2[4] + iVar19 * 0x18);
              *puVar10 = local_144;
              puVar10[4] = param_4;
              puVar10[1] = local_140;
              puVar10[2] = (ushort *)((int)local_160 + (int)local_144);
              puVar10[3] = uVar35;
              puVar10[5] = iVar34;
              param_2[5] = iVar19 + 1;
            }
          }
        }
LAB_006299dc:
        FUN_00628934(&local_90,param_2,iVar6,param_4 + 1);
LAB_006299f0:
        if ((char)local_90 == 'O') {
          goto LAB_006289b0;
        }
      }
      else {
        iVar7 = 4;
        local_54 = *(uint *)(iVar19 + 0xd8);
        puVar10 = (undefined4 *)(iVar13 + 0x58);
        uVar35 = local_54 >> 0x10;
        if (4 < uVar35) {
          iVar7 = 0xc;
        }
        puVar23 = (undefined4 *)((int)puVar10 + iVar7);
        if (4 < uVar35) {
          puVar10 = (undefined4 *)(iVar13 + 0x60);
        }
        if ((ushort *)*puVar23 < local_100) {
          uStack_2c = 0;
          uVar25 = 0;
          uVar35 = (int)local_150 << 0x10;
          uVar26 = (undefined2)((uint)local_150 >> 0x10);
          uVar17 = 0x13;
          local_30 = (ushort *)*puVar10;
        }
        else {
          local_60 = *(ushort **)(iVar13 + 8);
          local_68 = *(uint *)(iVar19 + 0xf8);
          local_150 = *(ushort **)(iVar19 + 0xfc);
          local_48 = 4 < uVar35;
          local_5c = *(ushort **)(iVar13 + 0xc);
          local_58 = *(ushort **)(iVar19 + 0x108);
          local_50 = (byte *)((int)*puVar10 + (int)local_100);
          local_4c = (int)*puVar23 - (int)local_100;
          local_45 = 0;
          local_47 = 0;
          local_64 = local_150;
          while( true ) {
            FUN_00616550(&local_40,&local_68);
            uVar33 = uStack_2c;
            puVar22 = local_30;
            uVar35 = local_34;
            puVar20 = local_38;
            if (!(local_40 != 2 || local_3c != 0)) break;
            if ((local_40 & 1) == 0) goto LAB_006299dc;
            if (local_34 <= uStack_2c && (uint)(local_30 <= local_38) <= local_34 - uStack_2c) {
              iVar19 = param_2[5];
              if (iVar19 == param_2[3]) {
                FUN_0061cd58(param_2 + 3);
              }
              puVar10 = (undefined4 *)(param_2[4] + iVar19 * 0x18);
              *puVar10 = puVar20;
              puVar10[4] = param_4;
              puVar10[1] = uVar35;
              puVar10[2] = puVar22;
              puVar10[3] = uVar33;
              puVar10[5] = iVar34;
              param_2[5] = iVar19 + 1;
            }
          }
          uVar25 = (undefined1)((uint)local_38 >> 8);
          uVar35 = (uint)local_38 >> 0x10 | local_34 << 0x10;
          uVar17 = SUB41(local_38,0);
          uVar26 = (undefined2)(local_34 >> 0x10);
          if (((uint)local_38 & 0xff) == 0x4f) goto LAB_006299dc;
        }
        local_90 = (ushort *)CONCAT31(CONCAT21(local_90._2_2_,uVar25),uVar17);
        *(undefined2 *)(puVar12 + 1) = uVar26;
        *puVar12 = uVar35;
        *(ushort **)((int)puVar12 + 6) = local_30;
        *(uint *)((int)puVar12 + 10) = uStack_2c;
      }
      *param_1 = (uint)local_90;
      param_1[1] = (uint)local_8c;
      param_1[2] = (uint)local_88;
      param_1[3] = local_84;
      return;
    }
    if (*(int *)local_ec == 1) {
      uVar35 = *(uint *)(local_ec + 0xc);
      pbVar29 = *(byte **)(local_ec + 8);
    }
    else {
      uVar35 = *(uint *)(local_ec + 4);
      if (5 < uVar35) {
LAB_00629dc4:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar35,5,&DAT_01882304);
      }
      pbVar29 = local_ec + 8;
    }
    FUN_00607efc(&local_68,piVar11,*(undefined4 *)(iVar13 + 0x20),pbVar29,uVar35);
    if ((char)local_68 != 'O') {
LAB_00629d44:
      local_7a = local_68._2_2_;
      puVar22 = local_5c;
      puVar31 = local_64;
LAB_00629da0:
      *(char *)((int)param_1 + 1) = local_68._1_1_;
      *(char *)param_1 = (char)local_68;
      *(undefined2 *)((int)param_1 + 2) = local_7a;
      param_1[1] = (uint)puVar31;
      param_1[2] = (uint)local_60;
      param_1[3] = (uint)puVar22;
      return;
    }
    iVar19 = param_2[10];
    if (iVar6 < iVar19) {
      do {
        puVar20 = local_f0;
        iVar7 = param_2[7];
        uVar35 = 0;
        uVar33 = 0;
        puVar22 = (ushort *)0x0;
        local_f0 = (ushort *)0x0;
        puVar31 = (ushort *)param_2[6];
        do {
          cVar32 = (char)uVar35;
          iVar7 = iVar7 + -1;
          local_68._1_1_ = cVar32;
          if (iVar7 == -1) {
            puVar22 = (ushort *)0x0;
            local_68._0_1_ = '\x13';
            local_60 = puVar31;
            goto LAB_00629da0;
          }
          param_2[7] = iVar7;
          puVar30 = (ushort *)((int)puVar31 + 1);
          uVar5 = *puVar31;
          uVar35 = (uint)(byte)uVar5;
          param_2[6] = (int)puVar30;
          puVar31 = puVar30;
          if ((uVar33 == 0x3f) && (1 < uVar35)) {
            local_68._0_1_ = '\x06';
            puVar22 = local_108;
            local_60 = puVar20;
            goto LAB_00629da0;
          }
          uVar9 = uVar33 & 0x3f;
          uVar15 = uVar35 & 0x7f;
          uVar18 = uVar9 - 0x20;
          uVar36 = uVar15 << uVar9;
          if (-1 < (int)uVar18) {
            uVar36 = 0;
          }
          uVar9 = uVar15 >> (0x20 - uVar9 & 0xff);
          local_f0 = (ushort *)(uVar36 | (uint)local_f0);
          if (-1 < (int)uVar18) {
            uVar9 = uVar15 << (uVar18 & 0xff);
          }
          puVar22 = (ushort *)(uVar9 | (uint)puVar22);
          uVar33 = uVar33 + 7;
        } while (0x7fffffff < (uint)(int)(char)(byte)uVar5);
        if (local_f0 == (ushort *)0x0 && puVar22 == (ushort *)0x0) {
          local_a8 = (ushort *)0x0;
          iVar19 = iVar19 + -1;
          param_2[10] = iVar19;
        }
        else {
          iVar7 = param_2[9];
          if ((puVar22 == (ushort *)0x0) && ((byte *)((int)local_f0 + -1) < *(byte **)(iVar7 + 8)))
          {
            local_a8 = (ushort *)(((int)local_f0 + -1) * 0x68 + *(int *)(iVar7 + 4));
          }
          else {
            puVar10 = *(undefined4 **)(iVar7 + 0xc);
            puVar31 = local_a8;
            local_68._1_1_ = '\0';
            local_68._0_1_ = '\x12';
            if (puVar10 == (undefined4 *)0x0) {
              local_60 = local_f0;
              goto LAB_00629da0;
            }
            iVar7 = *(int *)(iVar7 + 0x10);
            while( true ) {
              uVar33 = 0xffffffff;
              uVar35 = (uint)*(ushort *)((int)puVar10 + 0x4d6);
              iVar8 = uVar35 << 3;
              puVar23 = puVar10;
              do {
                if (iVar8 == 0) goto LAB_00628de8;
                puVar20 = (ushort *)*puVar23;
                puVar30 = (ushort *)puVar23[1];
                iVar8 = iVar8 + -8;
                uVar33 = uVar33 + 1;
                puVar23 = puVar23 + 2;
                uVar36 = (uint)(puVar30 <= puVar22 &&
                               (uint)(local_f0 <= puVar20) <= (uint)((int)puVar30 - (int)puVar22)) -
                         (uint)(puVar22 <= puVar30 &&
                               (uint)(puVar20 <= local_f0) <= (uint)((int)puVar22 - (int)puVar30));
              } while (uVar36 == 1);
              uVar35 = uVar33;
              if ((uVar36 & 0xff) == 0) break;
LAB_00628de8:
              if (iVar7 == 0) {
                local_60 = local_f0;
                goto LAB_00629da0;
              }
              iVar7 = iVar7 + -1;
              puVar10 = (undefined4 *)puVar10[uVar35 + 0x136];
            }
            local_a8 = (ushort *)(puVar10 + uVar33 * 0x1a + 0x16);
          }
          if ((byte)local_a8[0x31] == 1) {
            param_2[10] = iVar19 + 1;
          }
          if (*(int *)local_a8 == 1) {
            puVar20 = *(ushort **)(local_a8 + 4);
            uVar35 = *(uint *)(local_a8 + 6);
          }
          else {
            uVar35 = *(uint *)(local_a8 + 2);
            if (5 < uVar35) goto LAB_00629e28;
            puVar20 = local_a8 + 4;
          }
          FUN_00607efc(&local_68,piVar11,*(undefined4 *)(param_2[8] + 0x20),puVar20,uVar35);
          if ((char)local_68 != 'O') goto LAB_00629d44;
          iVar19 = param_2[10];
        }
        local_108 = puVar22;
      } while (iVar6 < iVar19);
    }
  } while( true );
}

