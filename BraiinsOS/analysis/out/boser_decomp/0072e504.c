// FUN_0072e504 @ 0072e504 size=3224 calls_out=15 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x0072eea4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0072e504(char *param_1,uint *param_2,int param_3,uint param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 *puVar15;
  undefined1 uVar16;
  undefined2 *puVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  uint extraout_r2;
  uint *puVar22;
  undefined2 uVar23;
  uint extraout_r3;
  uint *puVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  bool bVar29;
  undefined8 uVar30;
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  int local_120;
  uint local_118;
  uint local_110;
  undefined4 local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_ec;
  uint local_e8;
  undefined2 local_94;
  char local_92;
  undefined4 local_90;
  uint local_8c;
  uint local_88;
  uint uStack_84;
  undefined2 local_7c;
  char local_7a;
  uint local_78;
  uint local_74;
  uint local_70;
  uint uStack_6c;
  undefined4 local_68;
  int local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  int local_50;
  int local_4c;
  undefined1 local_48;
  undefined2 local_47;
  undefined1 local_45;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint uStack_2c;
  
  puVar5 = (undefined4 *)((uint)&local_68 | 1);
  puVar17 = (undefined2 *)((uint)&local_78 | 1);
  puVar6 = param_2 + 3;
  puVar7 = (undefined4 *)((uint)&local_90 | 1);
  puVar8 = (uint *)((uint)&local_90 | 2);
  puVar24 = param_2 + 6;
LAB_0072e59c:
  do {
    uVar27 = param_2[10];
    if ((int)uVar27 <= param_3) {
      *param_1 = 'O';
      return;
    }
    uVar9 = param_2[6];
    uVar10 = param_2[8];
    iVar18 = *(int *)(uVar10 + 0x18);
    iVar25 = *(int *)(uVar10 + 0x1c);
    iVar26 = *(int *)(uVar10 + 0x24);
    cVar4 = *(char *)(uVar10 + 0x21);
    FUN_00719bb8(&local_68,puVar24);
    uVar21 = local_5c;
    uVar10 = local_60;
    if ((char)local_68 != 'O') {
      local_92 = local_68._3_1_;
      local_94 = local_68._1_2_;
LAB_0072f180:
      *param_1 = (char)local_68;
      *(undefined2 *)(param_1 + 1) = local_94;
      param_1[3] = local_92;
      *(int *)(param_1 + 4) = local_64;
      *(uint *)(param_1 + 8) = uVar10;
      *(uint *)(param_1 + 0xc) = uVar21;
      return;
    }
    if (!(local_60 == 0 && local_5c == 0)) {
      uVar11 = param_2[9];
      if ((local_5c == 0) && (local_60 - 1 < *(uint *)(uVar11 + 8))) {
        iVar12 = (local_60 - 1) * 0x68 + *(int *)(uVar11 + 4);
      }
      else {
        iVar12 = FUN_0134bfa8(*(undefined4 *)(uVar11 + 0xc),*(undefined4 *)(uVar11 + 0x10),local_60,
                              local_5c);
        if (iVar12 == 0) {
          local_68._0_1_ = '\x12';
          local_64 = 0;
          goto LAB_0072f180;
        }
      }
      if (*(char *)(iVar12 + 0x62) == '\x01') {
        param_2[10] = param_2[10] + 1;
      }
      if (*(short *)(iVar12 + 0x60) == 0x2e) {
        uVar30 = FUN_0134c25c();
        uVar20 = *(undefined4 *)(param_2[8] + 0x20);
        do {
          FUN_00717a10(&local_68,puVar24,uVar20,(int)uVar30,(int)((ulonglong)uVar30 >> 0x20));
          if ((char)local_68 != 'O') {
            local_7a = local_68._3_1_;
            local_7c = local_68._1_2_;
LAB_0072f158:
            param_1[3] = local_7a;
            *(undefined2 *)(param_1 + 1) = local_7c;
            *param_1 = (char)local_68;
            *(int *)(param_1 + 4) = local_64;
            *(uint *)(param_1 + 8) = local_60;
            *(uint *)(param_1 + 0xc) = local_5c;
            return;
          }
          uVar10 = param_2[10];
          while( true ) {
            if ((int)uVar10 <= (int)uVar27) goto LAB_0072e59c;
            FUN_00719bb8(&local_68,puVar24);
            uVar21 = local_5c;
            uVar10 = local_60;
            if ((char)local_68 != 'O') {
              local_7c = *(undefined2 *)puVar5;
              local_7a = *(char *)((int)puVar5 + 2);
              local_60 = uVar10;
              local_5c = uVar21;
              goto LAB_0072f158;
            }
            if (local_60 != 0 || local_5c != 0) break;
            uVar10 = param_2[10] - 1;
            param_2[10] = uVar10;
          }
          uVar9 = param_2[9];
          if ((local_5c == 0) && (local_60 - 1 < *(uint *)(uVar9 + 8))) {
            iVar18 = (local_60 - 1) * 0x68 + *(int *)(uVar9 + 4);
          }
          else {
            iVar18 = FUN_0134bfa8(*(undefined4 *)(uVar9 + 0xc),*(undefined4 *)(uVar9 + 0x10),
                                  local_60,local_5c);
            if (iVar18 == 0) {
              local_68._0_1_ = '\x12';
              local_64 = 0;
              local_60 = uVar10;
              local_5c = uVar21;
              goto LAB_0072f158;
            }
          }
          if (*(char *)(iVar18 + 0x62) == '\x01') {
            param_2[10] = param_2[10] + 1;
          }
          uVar30 = FUN_0134c25c();
          uVar20 = *(undefined4 *)(param_2[8] + 0x20);
        } while( true );
      }
      if (*(short *)(iVar12 + 0x60) == 0x1d) {
        uVar21 = param_2[0xb];
        iVar12 = 4;
        uVar10 = param_2[0xc];
        if (cVar4 == '\b') {
          iVar12 = 0xc;
        }
        uVar30 = FUN_0134c25c();
        iVar28 = (int)((ulonglong)uVar30 >> 0x20);
        puVar22 = (uint *)uVar30;
        if (iVar28 == 0) {
          local_110 = 0;
          bVar3 = false;
          bVar2 = false;
          bVar1 = false;
          local_104 = 0;
          local_fc = 0;
          local_100 = 0;
          local_ec = 0;
          uVar11 = extraout_r2;
          uVar19 = extraout_r3;
        }
        else {
          local_110 = 0;
          iVar28 = iVar28 << 4;
          bVar3 = false;
          bVar2 = false;
          bVar1 = false;
          local_ec = 0;
          local_100 = 0;
          local_fc = 0;
          local_104 = 0;
          local_e8 = 0;
          do {
            local_40 = *puVar22;
            local_3c = puVar22[1];
            local_38 = puVar22[2];
            local_34 = puVar22[3];
            FUN_00716a3c(&local_68,puVar24,*(undefined4 *)(param_2[8] + 0x20));
            if (local_68 == 0x2e && local_64 == 0) {
              local_90 = local_60;
              local_8c = local_5c;
              local_88 = local_58;
              uStack_84 = local_54;
              goto LAB_0072ef48;
            }
            uVar19 = local_58 & 0xffff;
            uVar11 = local_f8;
            if (uVar19 < 0x55) {
              if (uVar19 < 0x12) {
                if (uVar19 == 3) {
                  if (local_e8 == 0) {
                    FUN_00717f68(&local_40,&local_68);
                    FUN_0071d020(&local_78,uVar21,*(undefined1 *)(uVar10 + 0xd9),
                                 *(undefined4 *)(uVar10 + 0x104),&local_40);
                    uVar11 = local_70;
                    local_ec = local_74;
                    local_e8 = local_74;
                    if ((char)local_78 != 'O') {
                      local_ec = 0;
                      uVar11 = local_70;
                      local_e8 = local_ec;
                    }
                  }
                }
                else if (uVar19 == 0x11) {
                  FUN_00717f68(&local_78,&local_68);
                  if ((local_78 & 0x3f) == 0) {
                    puVar14 = &local_70;
                  }
                  else {
                    if (local_78 != 0xc) goto switchD_0072e86c_caseD_56;
                    FUN_00719574(&local_40,*(undefined4 *)(uVar21 + 8),*(undefined4 *)(uVar21 + 0xc)
                                 ,*(undefined4 *)(uVar10 + 0xd8),*(undefined4 *)(uVar10 + 0x108),
                                 local_70);
                    cVar4 = (char)local_40;
                    if ((char)local_40 != 'O') goto LAB_0072f084;
                    puVar14 = &local_38;
                  }
                  local_12c = *puVar14;
                  local_128 = puVar14[1];
                  bVar1 = true;
                }
              }
              else if (uVar19 == 0x12) {
                FUN_00717f68(&local_78,&local_68);
                if ((local_78 & 0x3f) == 0) {
                  puVar14 = &local_70;
LAB_0072ec18:
                  local_138 = *puVar14;
                  local_13c = puVar14[1];
                  bVar2 = true;
                }
                else if (local_78 == 7) {
                  local_140 = local_70;
                  local_144 = uStack_6c;
                  bVar3 = true;
                }
                else if (local_78 == 0xc) {
                  FUN_00719574(&local_40,*(undefined4 *)(uVar21 + 8),*(undefined4 *)(uVar21 + 0xc),
                               *(undefined4 *)(uVar10 + 0xd8),*(undefined4 *)(uVar10 + 0x108),
                               local_70);
                  cVar4 = (char)local_40;
                  if ((char)local_40 != 'O') {
LAB_0072f084:
                    uVar20 = *(undefined4 *)((uint)&local_40 | 1);
                    *(undefined4 *)((int)puVar7 + 3) =
                         *(undefined4 *)((int)((uint)&local_40 | 1) + 3);
                    *puVar7 = uVar20;
                    local_88 = local_38;
                    uStack_84 = local_34;
                    goto LAB_0072f0d8;
                  }
                  puVar14 = &local_38;
                  goto LAB_0072ec18;
                }
              }
              else {
                bVar29 = uVar19 == 0x31 || uVar19 == 0x47;
                if (uVar19 == 0x31 || uVar19 == 0x47) {
                  bVar29 = local_e8 == 0;
                }
                if (bVar29) {
                  FUN_00717f68(&local_40,&local_68);
                  FUN_0072e3cc(&local_78,(char)param_2[0xe],local_40,local_3c,local_38,
                               (char)param_2[0xe],uVar21,uVar10,param_2[0xd],0x10);
                  uVar11 = local_70;
                  local_ec = local_74;
                  local_e8 = local_74;
                  if ((char)local_78 != 'O') {
                    uVar16 = *(undefined1 *)(puVar17 + 1);
                    *(undefined2 *)puVar7 = *puVar17;
                    *(undefined1 *)((int)puVar7 + 2) = uVar16;
                    local_8c = local_74;
                    local_88 = local_70;
                    uStack_84 = uStack_6c;
                    cVar4 = (char)local_78;
LAB_0072f0d8:
                    local_90 = CONCAT31(local_90._1_3_,cVar4);
                    goto LAB_0072ef48;
                  }
                }
              }
            }
            else {
              switch(uVar19) {
              case 0x55:
                FUN_00717f68(&local_40,&local_68);
                FUN_0071d324(&local_78,uVar21,uVar10);
                if ((char)local_78 != 'O') {
                  uVar16 = *(undefined1 *)(puVar17 + 1);
                  *(undefined2 *)puVar7 = *puVar17;
                  *(undefined1 *)((int)puVar7 + 2) = uVar16;
                  local_8c = local_74;
                  local_88 = local_70;
                  uStack_84 = uStack_6c;
                  local_90 = CONCAT31(local_90._1_3_,(char)local_78);
                  goto LAB_0072ef48;
                }
                local_110 = local_74;
                local_118 = local_70;
                break;
              case 0x56:
                break;
              case 0x57:
                local_fc = local_60;
                switch(local_68 & 0x3f) {
                case 2:
                  local_fc = local_60 & 0xff;
                  break;
                case 3:
                  local_fc = local_60 & 0xffff;
                  break;
                case 4:
                  break;
                case 5:
                case 7:
                  break;
                case 6:
                  if ((int)local_5c < 0) {
                    local_fc = 0;
                  }
                  break;
                default:
                  local_fc = 0;
                }
                break;
              case 0x58:
                FUN_00717f68(&local_40,&local_68);
                if (local_40 == 0x2c && local_3c == 0) {
                  if (!(local_38 != 0 || local_34 != 0)) {
                    if (*(ushort *)(uVar10 + 0xda) < 5) break;
                  }
                  local_104 = 1;
                  local_134 = local_34;
                  local_130 = local_38;
                }
                break;
              case 0x59:
                local_100 = local_60;
                switch(local_68 & 0x3f) {
                case 2:
                  local_100 = local_60 & 0xff;
                  break;
                case 3:
                  local_100 = local_60 & 0xffff;
                  break;
                case 4:
                  break;
                case 5:
                case 7:
                  break;
                case 6:
                  if ((int)local_5c < 0) {
                    local_100 = 0;
                  }
                  break;
                default:
                  local_100 = 0;
                }
                break;
              default:
                uVar13 = local_68;
                if (uVar19 != 0x6e) {
                  uVar13 = 0x2007;
                }
                if (uVar19 == 0x6e || uVar19 == uVar13) {
                  FUN_00717f68(&local_40,&local_68);
                  FUN_0071d020(&local_78,uVar21,*(undefined1 *)(uVar10 + 0xd9),
                               *(undefined4 *)(uVar10 + 0x104),&local_40);
                  if ((char)local_78 == 'O') {
                    uVar11 = local_70;
                    local_ec = local_74;
                    local_e8 = local_74;
                  }
                }
              }
            }
switchD_0072e86c_caseD_56:
            local_f8 = uVar11;
            iVar28 = iVar28 + -0x10;
            puVar22 = puVar22 + 4;
          } while (iVar28 != 0);
          uVar11 = local_134;
          uVar19 = local_130;
        }
        uVar13 = param_2[2];
        if (uVar13 == *param_2) {
          FUN_007193b0(param_2);
        }
        puVar15 = (undefined4 *)(param_2[1] + uVar13 * 0x28);
        *puVar15 = local_104;
        puVar15[3] = uVar11;
        puVar15[1] = 0;
        puVar15[2] = uVar19;
        puVar15[4] = local_ec;
        puVar15[5] = local_f8;
        puVar15[7] = local_100;
        puVar15[6] = ((iVar12 + iVar26) - (iVar25 + iVar18)) + uVar9;
        puVar15[8] = local_fc;
        param_2[2] = uVar13 + 1;
        if ((local_110 & 1) == 0) {
          if (bVar1) {
            if (bVar2) {
              if (local_128 <= local_13c && (uint)(local_138 <= local_12c) <= local_128 - local_13c)
              {
                uVar10 = param_2[5];
                if (uVar10 == param_2[3]) {
                  FUN_00719314(puVar6);
                }
                puVar22 = (uint *)(param_2[4] + uVar10 * 0x18);
                *puVar22 = local_12c;
                puVar22[1] = local_128;
                puVar22[2] = local_138;
                puVar22[3] = local_13c;
                puVar22[4] = param_4;
                puVar22[5] = uVar13;
                param_2[5] = uVar10 + 1;
              }
            }
            else if (bVar3) {
              uVar10 = local_144 + local_128 + (uint)CARRY4(local_140,local_12c);
              if (local_128 <= uVar10 &&
                  (uint)(local_140 + local_12c <= local_12c) <= local_128 - uVar10) {
                uVar21 = param_2[5];
                if (uVar21 == param_2[3]) {
                  FUN_00719314(puVar6);
                }
                puVar22 = (uint *)(param_2[4] + uVar21 * 0x18);
                *puVar22 = local_12c;
                puVar22[5] = uVar13;
                puVar22[1] = local_128;
                puVar22[2] = local_140 + local_12c;
                puVar22[3] = uVar10;
                puVar22[4] = param_4;
                param_2[5] = uVar21 + 1;
              }
            }
          }
        }
        else {
          iVar18 = 4;
          puVar22 = (uint *)(uVar21 + 0x58);
          uVar9 = *(uint *)(uVar10 + 0xd8) >> 0x10;
          if (4 < uVar9) {
            iVar18 = 0xc;
          }
          puVar14 = (uint *)((int)puVar22 + iVar18);
          if (4 < uVar9) {
            puVar22 = (uint *)(uVar21 + 0x60);
          }
          if (local_118 <= *puVar14) {
            local_60 = *(uint *)(uVar21 + 8);
            local_68 = *(uint *)(uVar10 + 0xf8);
            local_120 = *(int *)(uVar10 + 0xfc);
            local_5c = *(uint *)(uVar21 + 0xc);
            local_48 = 4 < uVar9;
            local_50 = *puVar22 + local_118;
            local_4c = *puVar14 - local_118;
            local_58 = *(uint *)(uVar10 + 0x108);
            local_45 = 0;
            local_47 = 0;
            local_64 = local_120;
            local_54 = *(uint *)(uVar10 + 0xd8);
            do {
              do {
                FUN_00731b20(&local_40,&local_68);
                uVar11 = uStack_2c;
                uVar9 = local_30;
                uVar21 = local_34;
                uVar10 = local_38;
                if (local_40 == 2 && local_3c == 0) {
                  uVar16 = (undefined1)(local_38 >> 8);
                  uVar10 = local_38 >> 0x10 | local_34 << 0x10;
                  uVar23 = (undefined2)(local_34 >> 0x10);
                  uVar21 = local_38;
                  goto LAB_0072eec0;
                }
                if ((local_40 & 1) == 0) goto LAB_0072ef34;
              } while (uStack_2c < local_34 || local_34 - uStack_2c < (uint)(local_30 <= local_38));
              uVar19 = param_2[5];
              if (uVar19 == param_2[3]) {
                FUN_00719314(puVar6);
              }
              puVar22 = (uint *)(param_2[4] + uVar19 * 0x18);
              *puVar22 = uVar10;
              puVar22[1] = uVar21;
              puVar22[2] = uVar9;
              puVar22[3] = uVar11;
              puVar22[4] = param_4;
              puVar22[5] = uVar13;
              param_2[5] = uVar19 + 1;
            } while( true );
          }
          uVar10 = local_120 << 0x10;
          uVar23 = (undefined2)((uint)local_120 >> 0x10);
          uVar16 = 0;
          uVar9 = *puVar22;
          uVar11 = 0;
          uVar21 = 0x13;
LAB_0072eec0:
          if ((uVar21 & 0xff) != 0x4f) {
            local_90._0_2_ = CONCAT11(uVar16,(char)local_90);
            *puVar8 = uVar10;
            *(uint *)((int)puVar8 + 6) = uVar9;
            *(uint *)((int)puVar8 + 10) = uVar11;
            *(undefined2 *)(puVar8 + 1) = uVar23;
            cVar4 = (char)uVar21;
            goto LAB_0072f1ac;
          }
        }
LAB_0072ef34:
        FUN_0072e504(&local_90,param_2,uVar27,param_4 + 1);
LAB_0072ef48:
        cVar4 = (char)local_90;
        if ((local_90 & 0xff) != 0x4f) {
LAB_0072f1ac:
          FUN_01bed4e2(param_1 + 1,puVar7,0xf);
          *param_1 = cVar4;
          return;
        }
      }
      else {
        uVar30 = FUN_0134c25c();
        FUN_00717a10(&local_68,puVar24,*(undefined4 *)(param_2[8] + 0x20),(int)uVar30,
                     (int)((ulonglong)uVar30 >> 0x20));
        if ((char)local_68 != 'O') {
          puVar7 = puVar5;
          cVar4 = (char)local_68;
          goto LAB_0072f1ac;
        }
      }
      goto LAB_0072e59c;
    }
    param_2[10] = param_2[10] - 1;
  } while( true );
}

