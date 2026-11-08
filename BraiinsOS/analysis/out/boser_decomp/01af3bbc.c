// FUN_01af3bbc @ 01af3bbc size=2564 calls_out=5 calls_in=1
// strings: 

void FUN_01af3bbc(int *param_1,int *param_2,int *param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  int iVar8;
  uint extraout_r1;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  byte *pbVar16;
  char *pcVar17;
  uint uVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint unaff_r11;
  uint local_1c0;
  int *local_1bc;
  int local_1b8;
  int local_1a4;
  uint local_198;
  uint local_194;
  int *local_190;
  int local_18c;
  int local_188;
  uint local_184;
  int local_180;
  byte *local_17c;
  uint local_178;
  undefined2 local_15c;
  undefined1 local_15a;
  undefined4 local_158;
  undefined1 local_154;
  undefined1 *local_138;
  int *local_134;
  uint local_130;
  int local_12c;
  uint local_128;
  undefined4 local_124;
  int local_120;
  int local_11c;
  undefined4 local_118;
  byte *local_114;
  uint local_110;
  undefined1 *local_f8;
  int *piStack_f4;
  uint uStack_f0;
  int iStack_ec;
  uint local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined2 local_d4;
  undefined1 local_d2;
  undefined1 *local_d0;
  int *local_cc;
  uint local_c8;
  int local_c4;
  uint local_c0;
  byte local_bc;
  undefined2 local_bb;
  undefined1 local_b9;
  int local_b8;
  int iStack_b4;
  undefined4 local_b0;
  byte *local_ac;
  uint local_a8;
  byte *local_8c;
  uint local_88;
  uint local_84;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 *local_78;
  int *local_74;
  uint local_70;
  int local_6c;
  uint local_68;
  byte local_64;
  undefined2 local_63;
  undefined1 local_61;
  int local_60;
  int local_5c;
  int local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  int *local_44;
  uint local_40;
  
  uVar11 = param_2[1];
  uVar18 = param_2[2];
  if (uVar18 < uVar11) {
    iVar8 = *param_2;
    uVar15 = uVar18 + 1;
    param_2[2] = uVar15;
    bVar2 = *(byte *)(iVar8 + uVar18);
    if (((~bVar2 & 0x1f) == 0) || (uVar11 <= uVar15)) goto switchD_01af419c_default;
    cVar3 = *(char *)(iVar8 + uVar15);
    uVar19 = uVar18 + 2;
    param_2[2] = uVar19;
    uVar15 = (uint)cVar3;
    if ((int)uVar15 < 0) {
      switch(cVar3) {
      case -0x7f:
        if (uVar19 < uVar11) {
          pcVar17 = (char *)(iVar8 + uVar19);
          uVar19 = uVar18 + 3;
          param_2[2] = uVar19;
          uVar15 = (uint)*pcVar17;
          if ((int)uVar15 < 0) goto LAB_01af3c1c;
        }
        break;
      case -0x7e:
        if (uVar19 < uVar11) {
          cVar3 = *(char *)(iVar8 + uVar19);
          uVar15 = uVar18 + 3;
          param_2[2] = uVar15;
          if (uVar15 < uVar11) {
            uVar7 = *(undefined1 *)(iVar8 + uVar15);
            uVar19 = uVar18 + 4;
            param_2[2] = uVar19;
            if (cVar3 != '\0') {
              unaff_r11 = (uint)CONCAT11(cVar3,uVar7);
LAB_01af42c8:
              if (unaff_r11 < 0xffff) goto LAB_01af3c20;
            }
          }
        }
        break;
      case -0x7d:
        if (uVar19 < uVar11) {
          bVar4 = *(byte *)(iVar8 + uVar19);
          uVar15 = uVar18 + 3;
          param_2[2] = uVar15;
          if (uVar15 < uVar11) {
            bVar5 = *(byte *)(iVar8 + uVar15);
            uVar15 = uVar18 + 4;
            param_2[2] = uVar15;
            if (uVar15 < uVar11) {
              bVar6 = *(byte *)(iVar8 + uVar15);
              uVar19 = uVar18 + 5;
              param_2[2] = uVar19;
              if (bVar4 != 0) {
                unaff_r11 = (uint)bVar5 << 8 | (uint)bVar4 << 0x10 | (uint)bVar6;
                goto LAB_01af42c8;
              }
            }
          }
        }
        break;
      case -0x7c:
        if (uVar19 < uVar11) {
          bVar4 = *(byte *)(iVar8 + uVar19);
          uVar15 = uVar18 + 3;
          param_2[2] = uVar15;
          if (uVar15 < uVar11) {
            bVar5 = *(byte *)(iVar8 + uVar15);
            uVar15 = uVar18 + 4;
            param_2[2] = uVar15;
            if (uVar15 < uVar11) {
              bVar6 = *(byte *)(iVar8 + uVar15);
              uVar15 = uVar18 + 5;
              param_2[2] = uVar15;
              if (uVar15 < uVar11) {
                unaff_r11 = (uint)*(byte *)(iVar8 + uVar15);
                uVar19 = uVar18 + 6;
                param_2[2] = uVar19;
                if (bVar4 != 0) {
                  unaff_r11 = (uint)bVar5 << 0x10 | (uint)bVar4 << 0x18 | (uint)bVar6 << 8 |
                              unaff_r11;
                  goto LAB_01af42c8;
                }
              }
            }
          }
        }
      }
      goto switchD_01af419c_default;
    }
LAB_01af3c1c:
    unaff_r11 = uVar15 & 0xff;
LAB_01af3c20:
    uVar18 = unaff_r11 + uVar19;
    if ((CARRY4(unaff_r11,uVar19)) || (uVar11 < uVar18)) goto switchD_01af419c_default;
    param_2[2] = uVar18;
    if (bVar2 == 0xa0) {
      pbVar16 = (byte *)(iVar8 + uVar19);
      local_180 = -0x7fffffd3;
      local_158 = 0x8000001d;
      local_154 = 6;
      local_17c = pbVar16;
      local_178 = unaff_r11;
      FUN_01aeb7ac(&local_138,&local_158);
      if (unaff_r11 == 0) {
        uVar11 = 0;
switchD_01af440c_default:
        local_114 = (byte *)0x0;
        uVar15 = uVar11;
        local_110 = uVar18;
LAB_01af432c:
        local_118 = 0x80000000;
        local_190 = local_134;
        local_184 = local_130;
        local_15c = local_124._1_2_;
        local_18c = local_11c;
        local_188 = local_120;
        local_15a = local_124._3_1_;
        FUN_01aeb5f4(&local_118);
        local_198 = local_128;
        param_4 = local_12c;
      }
      else {
        uVar11 = 1;
        if (((~*pbVar16 & 0x1f) == 0) || (unaff_r11 == 1)) goto switchD_01af440c_default;
        uVar15 = (uint)(char)pbVar16[1];
        if ((int)uVar15 < 0) {
          uVar11 = 2;
          switch(pbVar16[1]) {
          case 0x81:
            if (2 < unaff_r11) {
              uVar15 = (uint)(char)pbVar16[2];
              uVar11 = 3;
              if ((int)uVar15 < 0) goto LAB_01af3cac;
            }
            break;
          case 0x82:
            if (2 < unaff_r11) {
              if (unaff_r11 == 3) {
LAB_01af44c4:
                uVar11 = 3;
              }
              else {
                uVar11 = 4;
                if (pbVar16[2] != 0) {
                  uVar18 = (uint)CONCAT11(pbVar16[2],pbVar16[3]);
LAB_01af44ec:
                  if (uVar18 < 0xffff) goto LAB_01af3cb0;
                }
              }
            }
            break;
          case 0x83:
            if (2 < unaff_r11) {
              if (unaff_r11 == 3) goto LAB_01af44c4;
              if (unaff_r11 < 5) {
LAB_01af44cc:
                uVar11 = 4;
              }
              else {
                if (pbVar16[2] != 0) {
                  uVar11 = 5;
                  uVar18 = (uint)pbVar16[3] << 8 | (uint)pbVar16[2] << 0x10 | (uint)pbVar16[4];
                  goto LAB_01af44ec;
                }
                uVar11 = 5;
              }
            }
            break;
          case 0x84:
            if (2 < unaff_r11) {
              if (unaff_r11 == 3) goto LAB_01af44c4;
              if (unaff_r11 < 5) goto LAB_01af44cc;
              if (unaff_r11 == 5) {
                uVar11 = 5;
              }
              else {
                if (pbVar16[2] != 0) {
                  uVar11 = 6;
                  uVar18 = (uint)pbVar16[3] << 0x10 | (uint)pbVar16[2] << 0x18 |
                           (uint)pbVar16[4] << 8 | (uint)pbVar16[5];
                  goto LAB_01af44ec;
                }
                uVar11 = 6;
              }
            }
          }
          goto switchD_01af440c_default;
        }
        uVar11 = 2;
LAB_01af3cac:
        uVar18 = uVar15 & 0xff;
LAB_01af3cb0:
        uVar15 = uVar18 + uVar11;
        if ((CARRY4(uVar18,uVar11)) || (unaff_r11 < uVar15)) goto switchD_01af440c_default;
        if (*pbVar16 != 0x30) {
          goto LAB_01af432c;
        }
        pbVar16 = pbVar16 + uVar11;
        local_f8 = local_138;
        piStack_f4 = local_134;
        uStack_f0 = local_130;
        iStack_ec = local_12c;
        local_e8 = local_128;
        uStack_e4 = local_124;
        iStack_e0 = local_120;
        iStack_dc = local_11c;
        local_1b8 = *(int *)(param_4 + 0x28);
        local_194 = 0;
        local_114 = pbVar16;
        local_110 = uVar18;
        do {
          FUN_01aeb7ac(&local_d0,&local_158);
          bVar2 = local_bc;
          local_190 = local_cc;
          puVar20 = local_d0;
          uVar11 = extraout_r1;
          uVar19 = local_194;
          if (uVar18 <= local_194) goto LAB_01af4014;
          uVar11 = local_194 + 1;
          pbVar1 = pbVar16 + local_194;
          if (((~*pbVar1 & 0x1f) == 0) || (uVar18 <= uVar11)) goto LAB_01af4010;
          pbVar9 = pbVar16 + uVar11;
          uVar12 = local_194 + 2;
          uVar11 = (uint)*pbVar9;
          uVar19 = uVar12;
          if ((char)*pbVar9 < '\0') {
            uVar10 = uVar11 - 0x81;
            uVar11 = uVar10;
            if (uVar10 < 4) {
              uVar11 = (&switchD_01af3e6c::switchdataD_01af3e70)[uVar10];
              switch(uVar10) {
              case 0:
                if (uVar12 < uVar18) {
                  uVar19 = local_194 + 3;
                  uVar11 = (uint)(char)pbVar16[uVar12];
                  if (0x7fffffff < uVar11) {
                    uVar11 = (uint)pbVar16[uVar12];
                    goto LAB_01af3d88;
                  }
                }
                break;
              case 1:
                if (uVar12 < uVar18) {
                  uVar11 = local_194 + 3;
                  if (uVar11 < uVar18) {
                    uVar19 = local_194 + 4;
                    if (pbVar16[uVar12] != 0) {
                      uVar11 = (uint)CONCAT11(pbVar16[uVar12],pbVar16[uVar11]);
LAB_01af3ff8:
                      if (uVar11 < 0xffff) goto LAB_01af3d88;
                    }
                  }
                  else {
LAB_01af4010:
                    uVar19 = uVar11;
                  }
                }
                break;
              case 2:
                if (uVar12 < uVar18) {
                  uVar11 = local_194 + 3;
                  if (uVar18 <= uVar11) goto LAB_01af4010;
                  if (local_194 + 4 < uVar18) {
                    uVar19 = local_194 + 5;
                    if (pbVar16[uVar12] != 0) {
                      uVar11 = (uint)pbVar16[uVar11] << 8 | (uint)pbVar16[uVar12] << 0x10 |
                               (uint)pbVar16[local_194 + 4];
                      goto LAB_01af3ff8;
                    }
                  }
                  else {
LAB_01af40d4:
                    uVar11 = local_194 + 3;
                    uVar19 = local_194 + 4;
                  }
                }
                break;
              case 3:
                if (uVar12 < uVar18) {
                  uVar11 = local_194 + 3;
                  if (uVar18 <= uVar11) goto LAB_01af4010;
                  if (uVar18 <= local_194 + 4) goto LAB_01af40d4;
                  uVar10 = local_194 + 5;
                  if (uVar10 < uVar18) {
                    uVar19 = local_194 + 6;
                    if (pbVar16[uVar12] != 0) {
                      uVar11 = (uint)pbVar16[uVar11] << 0x10 | (uint)pbVar16[uVar12] << 0x18 |
                               (uint)pbVar16[local_194 + 4] << 8 | (uint)pbVar16[uVar10];
                      goto LAB_01af3ff8;
                    }
                  }
                  else {
                    uVar19 = uVar10;
                  }
                }
              }
            }
LAB_01af4014:
            local_194 = uVar19;
            local_ac = (byte *)((uint)local_ac & 0xffffff00);
            *(undefined1 *)((undefined2 *)((uint)&local_b0 | 5) + 1) = 0;
            *(undefined2 *)((uint)&local_b0 | 5) = 0;
            local_a8 = uVar11;
LAB_01af402c:
            local_b0 = 0x80000000;
            local_d2 = local_b9;
            local_188 = local_b8;
            local_18c = iStack_b4;
            local_d4 = local_bb;
            local_198 = local_c0;
            local_184 = local_c8;
            local_1a4 = local_c4;
            FUN_01aeb5f4(&local_b0);
LAB_01af4088:
            if (puVar20 != (undefined1 *)0x8000002d) {
LAB_01af4580:
              local_194 = (uint)bVar2;
              local_15a = local_d2;
              local_15c = local_d4;
              param_4 = local_1a4;
              goto LAB_01af45a0;
            }
          }
          else {
LAB_01af3d88:
            local_194 = uVar11 + uVar19;
            if ((CARRY4(uVar11,uVar19)) || (uVar18 < local_194)) goto LAB_01af4014;
            if (*pbVar1 != 0x30) {
              goto LAB_01af402c;
            }
            local_b0 = 0x8000002d;
            local_ac = pbVar16 + uVar19;
            local_84 = 0;
            local_a8 = uVar11;
            local_8c = local_ac;
            local_88 = uVar11;
            FUN_01aefedc(&local_78,&local_8c);
            bVar2 = local_64;
            local_198 = local_68;
            local_190 = local_74;
            if (local_78 != (undefined1 *)0x8000002d) {
              local_188 = local_60;
              local_18c = local_5c;
              local_184 = local_70;
              local_1a4 = local_6c;
              puVar20 = local_78;
              local_80 = local_63;
              local_7e = local_61;
LAB_01af4564:
              local_d2 = local_7e;
              local_d4 = local_80;
              FUN_01aeb5f4(&local_d0);
              goto LAB_01af4580;
            }
            if ((local_70 == 3) && ((short)*local_74 == 0x1d55)) {
              if ((byte *)((int)local_74 + 2) == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb0cc(&DAT_01d30578);
              }
              bVar4 = *(byte *)((int)local_74 + 2);
              if (bVar4 < 0x1c) {
                if (bVar4 != 0x14) {
                  if (bVar4 == 0x1b) {
                    puVar20 = &DAT_80000024;
                    goto LAB_01af4564;
                  }
                  goto LAB_01af3e28;
                }
                local_54 = local_6c;
                local_78 = (undefined1 *)0x8000000b;
                local_4c = 0;
                local_50 = local_68;
                FUN_01af33cc(&local_48,&local_54);
                uVar11 = local_40;
                if (local_48 == -0x7fffffd3) {
                  if (0x14 < local_40) goto LAB_01af45c8;
                  if (local_4c == local_50) {
                    local_1bc = local_44;
                    FUN_01aeb5f4(&local_78);
                    local_1c0 = uVar11;
                    goto LAB_01af3e34;
                  }
                }
                else {
                  FUN_01aeb5f4(&local_48);
LAB_01af45c8:
                  FUN_01aeb5f4(&local_78);
                }
                local_184 = local_1c0;
                local_190 = local_1bc;
                puVar20 = (undefined1 *)0x8000000b;
                goto LAB_01af4564;
              }
              if (bVar4 == 0x1c) {
                if (local_1b8 != 0) {
                  puVar20 = &DAT_80000009;
                  goto LAB_01af4564;
                }
                *(int *)(param_4 + 0x28) = local_6c;
                *(uint *)(param_4 + 0x2c) = local_68;
                local_1b8 = local_6c;
              }
              else if (bVar4 != 0x23) goto LAB_01af3e28;
            }
            else {
LAB_01af3e28:
              if ((local_64 & 1) != 0) {
                puVar20 = (undefined1 *)0x80000021;
                goto LAB_01af4564;
              }
            }
LAB_01af3e34:
            if (local_84 != local_88) {
              local_188 = local_b8;
              local_18c = iStack_b4;
              local_184 = local_c8;
              local_1a4 = local_c4;
              local_d2 = local_b9;
              local_d4 = local_bb;
              local_198 = local_c0;
              local_190 = local_cc;
              puVar20 = local_d0;
              bVar2 = local_bc;
              goto LAB_01af4088;
            }
            FUN_01aeb5f4(&local_d0);
          }
        } while (local_194 != uVar18);
        puVar20 = (undefined1 *)0x8000002d;
        local_198 = uVar18;
        local_190 = &local_b8;
LAB_01af45a0:
        FUN_01aeb5f4(&local_f8);
        local_138 = puVar20;
        local_124._0_1_ = (char)local_194;
      }
      FUN_01aeb5f4(&local_158);
      if (local_138 == (undefined1 *)0x8000002d) {
        if (uVar15 != unaff_r11) {
          iVar8 = param_3[1];
          iVar13 = param_3[2];
          iVar14 = param_3[3];
          *param_1 = *param_3;
          param_1[1] = iVar8;
          param_1[2] = iVar13;
          param_1[3] = iVar14;
          iVar8 = param_3[5];
          iVar13 = param_3[6];
          iVar14 = param_3[7];
          param_1[4] = param_3[4];
          param_1[5] = iVar8;
          param_1[6] = iVar13;
          param_1[7] = iVar14;
          return;
        }
        *param_1 = -0x7fffffd3;
      }
      else {
        *(undefined2 *)((int)param_1 + 0x15) = local_15c;
        *(undefined1 *)((int)param_1 + 0x17) = local_15a;
        param_1[6] = local_188;
        param_1[7] = local_18c;
        param_1[1] = (int)local_190;
        *(undefined1 *)(param_1 + 5) = (undefined1)local_124;
        *param_1 = (int)local_138;
        param_1[2] = local_184;
        param_1[3] = param_4;
        param_1[4] = local_198;
      }
      goto LAB_01af4308;
    }
  }
  else {
switchD_01af419c_default:
    local_17c = (byte *)0x0;
    local_178 = unaff_r11;
  }
  local_180 = -0x80000000;
  iVar8 = param_3[1];
  iVar13 = param_3[2];
  iVar14 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = iVar8;
  param_1[2] = iVar13;
  param_1[3] = iVar14;
  iVar8 = param_3[5];
  iVar13 = param_3[6];
  iVar14 = param_3[7];
  param_1[4] = param_3[4];
  param_1[5] = iVar8;
  param_1[6] = iVar13;
  param_1[7] = iVar14;
  param_3 = &local_180;
LAB_01af4308:
  FUN_01aeb5f4(param_3);
  return;
}

