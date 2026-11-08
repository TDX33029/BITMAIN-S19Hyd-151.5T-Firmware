// FUN_01009fa4 @ 01009fa4 size=5308 calls_out=14 calls_in=2
// strings: 

void FUN_01009fa4(uint *param_1,undefined4 *param_2,code *param_3)

{
  ushort uVar1;
  short *psVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  byte bVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  undefined *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  ulonglong uVar21;
  undefined *local_b4;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  char local_98;
  byte *local_8c;
  uint local_88;
  byte *local_84;
  uint local_80;
  int local_7c;
  short *local_78;
  uint local_74;
  undefined4 local_70 [2];
  byte local_68 [2];
  byte local_66 [2];
  byte local_64 [2];
  byte local_62 [8];
  undefined1 local_5a;
  undefined1 local_59;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  ushort uStack_4c;
  short local_4a;
  undefined4 uStack_48;
  code *local_44;
  byte **local_40;
  code *local_3c;
  byte *local_38;
  byte *local_34;
  int local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  uVar18 = param_2[1];
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar18);
  }
  if (uVar18 == 0) {
    local_84 = &DAT_00000001;
    local_88 = 0;
  }
  else {
    local_84 = (byte *)thunk_FUN_016d4a50(uVar18);
    local_88 = uVar18;
    if (local_84 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar18);
    }
  }
  puVar9 = (uint *)param_2[2];
  local_80 = 0;
  local_8c = (byte *)*param_2;
  uVar13 = puVar9[1];
  uVar16 = *puVar9;
  if (uVar13 < uVar16) goto LAB_0100a070;
  if (uVar16 != 0) {
    if (uVar16 < uVar18) {
      if ((char)local_8c[uVar16] < -0x40) goto LAB_0100a070;
    }
    else if (uVar16 != uVar18) goto LAB_0100a070;
  }
  if (uVar13 != 0) {
    if (uVar13 < uVar18) {
      if ((char)local_8c[uVar13] < -0x40) {
LAB_0100a070:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(local_8c,uVar18,uVar16,uVar13,&DAT_018821a4);
      }
    }
    else if (uVar13 != uVar18) goto LAB_0100a070;
  }
  iVar17 = uVar13 - uVar16;
  if (iVar17 < 0) {
    uVar3 = 0;
LAB_0100a0a8:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar3,iVar17);
  }
  local_78 = (short *)&DAT_00000001;
  local_7c = 0;
  if (uVar13 != uVar16) {
    local_78 = (short *)thunk_FUN_016d4a50(iVar17);
    if (local_78 == (short *)0x0) {
      uVar3 = 1;
      goto LAB_0100a0a8;
    }
    local_7c = iVar17;
  }
  pbVar6 = local_8c + uVar16;
  local_74 = 0;
  if ((puVar9[2] == 0 || uVar13 == uVar16) || (*pbVar6 != 0x2f)) {
    FUN_0100b5b4(&local_7c,pbVar6,iVar17,0);
  }
  else {
    FUN_0100b5b4(&local_88,pbVar6,iVar17,0);
    local_54._0_2_ = (short)local_80;
    local_54._2_2_ = (short)(local_80 >> 0x10);
    local_58._0_2_ = (short)local_84;
    local_58._2_2_ = (ushort)((uint)local_84 >> 0x10);
    FUN_01008488(&local_7c,0,&local_58,1);
    local_80 = 0;
  }
  uVar13 = puVar9[2];
  local_b4 = &DAT_018821a4;
  if (uVar13 != 0) {
    if (uVar13 < uVar18) {
      if (-0x41 < (char)local_8c[uVar13]) {
LAB_0100a214:
        if (local_88 - local_80 < uVar13) {
          FUN_010e02bc(&local_88,local_80,uVar13);
        }
        FUN_016dd1aa(local_84 + local_80,local_8c,uVar13);
        uVar13 = local_80 + uVar13;
        pbVar6 = local_84;
        uVar16 = uVar13;
        if (uVar13 == 0) {
          local_a0 = 0;
          local_80 = 0;
          if (local_88 == 0) goto LAB_0100b25c;
        }
        else {
          do {
            bVar8 = *pbVar6;
            if (bVar8 - 0x41 < 0x1a) {
              bVar8 = bVar8 | 0x20;
            }
            *pbVar6 = bVar8;
            uVar16 = uVar16 - 1;
            pbVar6 = pbVar6 + 1;
          } while (uVar16 != 0);
          local_80 = uVar13;
          local_a0 = uVar13;
          if (local_88 == uVar13) {
LAB_0100b25c:
            local_80 = uVar13;
            FUN_010e02bc(&local_88,local_a0,1);
          }
        }
        local_84[local_80] = 0x3a;
        local_80 = local_a0 + 1;
        local_98 = (char)puVar9[6];
        goto joined_r0x0100a2b8;
      }
    }
    else if (uVar13 == uVar18) goto LAB_0100a214;
    uVar16 = 0;
    local_58 = (byte **)CONCAT22(local_58._2_2_,(short)local_58);
    local_54 = (undefined1 *)CONCAT22(local_54._2_2_,(short)local_54);
    local_50 = (undefined1 *)CONCAT22(local_50._2_2_,(short)local_50);
    uStack_48 = (byte **)CONCAT22(uStack_48._2_2_,(short)uStack_48);
    goto LAB_0100a668;
  }
  local_98 = (char)puVar9[6];
  local_a0 = 0;
joined_r0x0100a2b8:
  if (local_98 == '\x04') {
    local_98 = '\x04';
    uVar18 = puVar9[2];
    uVar7 = local_a8;
    uVar14 = local_80;
joined_r0x0100a2d8:
    local_80 = uVar14;
    if ((((uVar18 != 0) && ((char)puVar9[6] == '\x04')) && (1 < local_74)) && (*local_78 == 0x2f2f))
    {
      if (local_88 - uVar14 < 2) {
        FUN_010e02bc(&local_88,uVar14,2);
      }
      (local_84 + local_80)[0] = 0x2f;
      (local_84 + local_80)[1] = 0x2e;
      local_80 = local_80 + 2;
    }
    uVar15 = local_74;
    psVar2 = local_78;
    if (local_88 - local_80 < local_74) {
      FUN_010e02bc(&local_88,local_80,local_74);
    }
    FUN_016dd1aa(local_84 + local_80,psVar2,uVar15);
    iVar17 = param_2[2];
    uVar18 = param_2[1];
    uVar13 = *(uint *)(iVar17 + 0xc);
    uVar15 = local_80 + uVar15;
    if (uVar13 == 0) {
      uVar13 = uVar15;
      uVar16 = *(uint *)(iVar17 + 4);
      uVar10 = 0;
    }
    else {
      local_8c = (byte *)*param_2;
      uVar16 = *(int *)(iVar17 + 4) + 1;
      local_80 = uVar15;
      if (uVar13 < uVar16) goto LAB_0100a668;
      if (uVar16 != 0) {
        if (uVar16 < uVar18) {
          if ((char)local_8c[uVar16] < -0x40) goto LAB_0100a668;
        }
        else if (uVar16 != uVar18) goto LAB_0100a668;
      }
      if (uVar13 < uVar18) {
        if ((char)local_8c[uVar13] < -0x40) goto LAB_0100a668;
      }
      else if (uVar13 != uVar18) goto LAB_0100a668;
      if (local_88 == uVar15) {
        FUN_010e02bc(&local_88,uVar15,1);
      }
      local_84[local_80] = 0x3f;
      local_80 = uVar15 + 1;
      FUN_0100b5b4(&local_88,local_8c + uVar16,uVar13 - uVar16,0);
      uVar13 = local_80;
      uVar16 = *(uint *)(iVar17 + 4);
      uVar10 = local_80;
      if (*(uint *)(iVar17 + 0xc) != 0) {
        uVar16 = *(uint *)(iVar17 + 0xc);
      }
    }
    local_80 = uVar13;
    if (uVar16 == uVar18) {
LAB_0100b1cc:
      *param_1 = local_88;
      param_1[1] = (uint)local_84;
      param_1[2] = local_80;
      param_1[3] = uVar14;
      param_1[5] = local_a0;
      *(char *)(param_1 + 9) = local_98;
      param_1[7] = local_a4;
      *(short *)((int)param_1 + 0x25) = (short)uVar7;
      param_1[8] = local_ac;
      param_1[4] = uVar15;
      param_1[6] = uVar10;
      *(char *)((int)param_1 + 0x27) = (char)(uVar7 >> 0x10);
      if (local_7c != 0) {
        thunk_FUN_016d3fb4(psVar2);
      }
      return;
    }
    uVar16 = uVar16 + 1;
    local_8c = (byte *)*param_2;
    uVar19 = uVar18;
    if ((uVar16 <= uVar18) &&
       ((uVar16 == 0 || uVar18 <= uVar16 || (-0x41 < (char)local_8c[uVar16])))) {
      if (local_88 == uVar13) {
        FUN_010e02bc(&local_88,uVar13,1);
      }
      local_84[local_80] = 0x23;
      local_80 = uVar13 + 1;
      FUN_0100b5b4(&local_88,local_8c + uVar16,uVar18 - uVar16,0);
      goto LAB_0100b1cc;
    }
LAB_0100b47c:
    uVar18 = uVar19;
    uVar13 = uVar19;
  }
  else {
    uVar13 = *puVar9;
    uVar16 = puVar9[2] + 3;
    if (puVar9[2] == 0) {
      uVar16 = 2;
    }
    local_58 = (byte **)CONCAT22(local_58._2_2_,(short)local_58);
    local_54 = (undefined1 *)CONCAT22(local_54._2_2_,(short)local_54);
    local_50 = (undefined1 *)CONCAT22(local_50._2_2_,(short)local_50);
    uStack_48 = (byte **)CONCAT22(uStack_48._2_2_,(short)uStack_48);
    if (uVar13 < uVar16) goto LAB_0100a668;
    uVar15 = puVar9[4];
    uVar14 = puVar9[5];
    if (uVar16 != 0) {
      if (uVar16 < uVar18) {
        local_58 = (byte **)CONCAT22(local_58._2_2_,(short)local_58);
        local_54 = (undefined1 *)CONCAT22(local_54._2_2_,(short)local_54);
        local_50 = (undefined1 *)CONCAT22(local_50._2_2_,(short)local_50);
        uStack_48 = (byte **)CONCAT22(uStack_48._2_2_,(short)uStack_48);
        if ((char)local_8c[uVar16] < -0x40) goto LAB_0100a668;
      }
      else {
        local_58 = (byte **)CONCAT22(local_58._2_2_,(short)local_58);
        local_54 = (undefined1 *)CONCAT22(local_54._2_2_,(short)local_54);
        local_50 = (undefined1 *)CONCAT22(local_50._2_2_,(short)local_50);
        uStack_48 = (byte **)CONCAT22(uStack_48._2_2_,(short)uStack_48);
        if (uVar16 != uVar18) goto LAB_0100a668;
      }
    }
    if (uVar13 != 0) {
      if (uVar13 < uVar18) {
        local_58 = (byte **)CONCAT22(local_58._2_2_,(short)local_58);
        local_54 = (undefined1 *)CONCAT22(local_54._2_2_,(short)local_54);
        local_50 = (undefined1 *)CONCAT22(local_50._2_2_,(short)local_50);
        uStack_48 = (byte **)CONCAT22(uStack_48._2_2_,(short)uStack_48);
        if ((char)local_8c[uVar13] < -0x40) goto LAB_0100a668;
      }
      else {
        local_58 = (byte **)CONCAT22(local_58._2_2_,(short)local_58);
        local_54 = (undefined1 *)CONCAT22(local_54._2_2_,(short)local_54);
        local_50 = (undefined1 *)CONCAT22(local_50._2_2_,(short)local_50);
        uStack_48 = (byte **)CONCAT22(uStack_48._2_2_,(short)uStack_48);
        if (uVar13 != uVar18) goto LAB_0100a668;
      }
    }
    uVar7 = (uint)*(uint3 *)((int)puVar9 + 0x19);
    if (local_98 == '\x04') {
      local_98 = '\x04';
      local_a4 = uVar14;
      local_58 = (byte **)CONCAT22(local_58._2_2_,(short)local_58);
      local_54 = (undefined1 *)CONCAT22(local_54._2_2_,(short)local_54);
      local_50 = (undefined1 *)CONCAT22(local_50._2_2_,(short)local_50);
      uStack_48 = (byte **)CONCAT22(uStack_48._2_2_,(short)uStack_48);
LAB_0100a334:
      uVar18 = puVar9[2];
      uVar7 = local_a8;
      uVar14 = local_80;
      goto joined_r0x0100a2d8;
    }
    if (local_88 - local_80 < 2) {
      FUN_010e02bc(&local_88,local_80,2);
    }
    uVar15 = uVar15 - uVar16;
    uVar19 = uVar13 - uVar16;
    local_8c = local_8c + uVar16;
    (local_84 + local_80)[0] = 0x2f;
    (local_84 + local_80)[1] = 0x2f;
    local_80 = local_80 + 2;
    uVar18 = uVar19;
    if (uVar15 != 0) {
      uVar13 = uVar15 - 1;
      if (uVar13 == 0) {
        uVar10 = 0;
      }
      else if (uVar13 < uVar19) {
        if ((char)local_8c[uVar13] < -0x40) {
LAB_0100b494:
          local_b4 = &DAT_01882274;
          uVar16 = 0;
          local_58 = (byte **)CONCAT22(local_58._2_2_,(short)local_58);
          local_54 = (undefined1 *)CONCAT22(local_54._2_2_,(short)local_54);
          local_50 = (undefined1 *)CONCAT22(local_50._2_2_,(short)local_50);
          uStack_48 = (byte **)CONCAT22(uStack_48._2_2_,(short)uStack_48);
          goto LAB_0100a668;
        }
        uVar10 = uVar13;
      }
      else {
        uVar10 = uVar19;
        if (uVar13 != uVar19) goto LAB_0100b494;
      }
      FUN_0100b5b4(&local_88,local_8c,uVar10,0);
      uVar13 = local_80;
      if (local_88 == local_80) {
        FUN_010e02bc(&local_88,local_80,1);
      }
      local_84[local_80] = 0x40;
      local_80 = uVar13 + 1;
    }
    local_a4 = local_80;
    uVar13 = uVar14 - uVar16;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(local_98) {
    case '\0':
      if (uVar15 <= uVar13) {
        if (uVar15 == 0) {
LAB_0100a5a0:
          if (uVar13 == 0) {
LAB_0100a720:
            uVar18 = uVar13 - uVar15;
            if (local_88 - local_80 < uVar18) {
              FUN_010e02bc(&local_88,local_80,uVar18);
            }
            FUN_016dd1aa(local_84 + local_80,local_8c + uVar15,uVar18);
            local_80 = local_80 + uVar18;
LAB_0100adc8:
            local_54 = (undefined1 *)CONCAT22(local_54._2_2_,(short)local_54);
LAB_0100adcc:
            local_ac = local_80;
            if (uVar13 == uVar19) {
LAB_0100ae18:
              uVar18 = puVar9[2];
              uVar14 = local_80;
              goto joined_r0x0100a2d8;
            }
            uVar16 = uVar13 + 1;
            if (0xfffffffe < uVar13) {
LAB_0100ae10:
              if (uVar19 != uVar16) {
                uVar13 = puVar9[2];
                pbVar6 = local_8c + uVar16;
                uVar19 = uVar19 - uVar16;
                if (uVar13 != 0) {
                  local_8c = (byte *)*param_2;
                  uVar18 = param_2[1];
                  if (uVar13 < uVar18) {
                    if (-0x41 < (char)local_8c[uVar13]) {
LAB_0100ae74:
                      uVar21 = (*param_3)(local_8c,uVar13);
                      if (((uVar21 & 1) != 0) &&
                         ((bVar8 = *pbVar6, uVar19 != 1 || (bVar8 != 0x2b && bVar8 != 0x2d)))) {
                        uVar18 = uVar19;
                        pbVar5 = pbVar6;
                        if (bVar8 == 0x2b) {
                          pbVar5 = pbVar6 + 1;
                          uVar18 = uVar19 - 1;
                        }
                        uVar13 = 0;
                        if (uVar18 < 5) {
                          for (; uVar18 != 0; uVar18 = uVar18 - 1) {
                            bVar8 = *pbVar5;
                            if (9 < bVar8 - 0x30) goto LAB_0100af54;
                            pbVar5 = pbVar5 + 1;
                            uVar13 = (bVar8 - 0x30) + uVar13 * 10;
                          }
LAB_0100aef0:
                          local_a8 = uVar7;
                          if (((uint)(uVar21 >> 0x20) & 0xffff) == (uVar13 & 0xffff))
                          goto LAB_0100a334;
                        }
                        else {
                          do {
                            if (uVar18 == 0) goto LAB_0100aef0;
                            uVar13 = (uVar13 & 0xffff) * 4 + (uVar13 & 0xffff);
                            if (uVar13 >> 0xf != 0) break;
                            if (9 < *pbVar5 - 0x30) break;
                            uVar18 = uVar18 - 1;
                            uVar13 = (uVar13 * 2 & 0xffff) + (*pbVar5 - 0x30 & 0xffff);
                            pbVar5 = pbVar5 + 1;
                          } while (uVar13 >> 0x10 == 0);
                        }
                      }
                      goto LAB_0100af54;
                    }
                  }
                  else if (uVar13 == uVar18) goto LAB_0100ae74;
                  uVar16 = 0;
                  goto LAB_0100a668;
                }
LAB_0100af54:
                uVar18 = local_80;
                if (local_88 == local_80) {
                  FUN_010e02bc(&local_88,local_80,1);
                }
                local_84[local_80] = 0x3a;
                local_80 = uVar18 + 1;
                if (local_88 - local_80 < uVar19) {
                  FUN_010e02bc(&local_88,local_80,uVar19);
                }
                FUN_016dd1aa(local_84 + local_80,pbVar6,uVar19);
                uVar18 = puVar9[2];
                uVar14 = local_80 + uVar19;
                goto joined_r0x0100a2d8;
              }
              goto LAB_0100ae18;
            }
            if (uVar16 < uVar19) {
              if (-0x41 < (char)local_8c[uVar16]) goto LAB_0100ae10;
            }
            else if (uVar19 == uVar16) goto LAB_0100ae10;
            local_b4 = &DAT_01882264;
            goto LAB_0100b47c;
          }
          if (uVar13 < uVar19) {
            if (-0x41 < (char)local_8c[uVar13]) goto LAB_0100a720;
          }
          else if (uVar13 == uVar19) goto LAB_0100a720;
        }
        else if (uVar15 < uVar19) {
          if (-0x41 < (char)local_8c[uVar15]) goto LAB_0100a5a0;
        }
        else if (uVar15 == uVar19) goto LAB_0100a5a0;
      }
      break;
    case '\x01':
      if (local_88 == local_80) {
        FUN_010e02bc(&local_88,local_80,1);
      }
      uVar16 = local_a4 + 1;
      local_84[local_80] = 0x5b;
      local_80 = uVar16;
      if (uVar15 <= uVar13) {
        if (uVar15 == 0) {
LAB_0100a5c8:
          if (uVar13 == 0) {
LAB_0100a760:
            if (uVar13 == uVar15) {
              uVar18 = 0;
              local_a4 = 1;
              puVar12 = &DAT_01882144;
LAB_0100b408:
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(local_a4,uVar18,uVar18,puVar12);
            }
            local_2c = 0;
            local_30 = uVar13 + ~uVar15;
            local_34 = local_8c + uVar15 + 1;
            FUN_0100cf40(&local_58,&local_34);
            if ((short)local_58 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_01882244);
            }
            local_70[0] = CONCAT22((short)local_54,local_58._2_2_);
            local_70[1] = CONCAT22((short)local_50,local_54._2_2_);
            uVar16 = (uint)local_58._2_2_;
            uVar18 = CONCAT22((short)uStack_48,local_4a);
            bVar20 = (short)local_54 == 0 && local_58._2_2_ == 0;
            if ((short)local_54 == 0 && local_58._2_2_ == 0) {
              bVar20 = (short)local_50 == 0 && local_54._2_2_ == 0;
            }
            if (bVar20) {
              uVar1 = local_50._2_2_;
              if (local_50._2_2_ == 0) {
                uVar18 = 0xffff;
                uVar1 = uStack_4c;
              }
              if (local_50._2_2_ != 0 || uVar1 != uVar18) goto LAB_0100a7f0;
              local_59 = (undefined1)local_4a;
              local_5a = (undefined1)((ushort)local_4a >> 8);
              local_34 = (byte *)CONCAT31(local_34._1_3_,(char)(short)uStack_48);
              local_40 = &local_34;
              local_50 = &local_59;
              local_58 = (byte **)&local_5a;
              local_38 = (byte *)CONCAT31(local_38._1_3_,(char)((ushort)(short)uStack_48 >> 8));
              local_3c = FUN_00fac0c8;
              local_44 = FUN_00fac0c8;
              uStack_4c = 0xc0c8;
              local_4a = 0xfa;
              local_54._0_2_ = -0x3f38;
              local_54._2_2_ = 0xfa;
              uStack_48 = &local_38;
              iVar17 = FUN_00fa948c(&local_88,&DAT_018820ec,&DAT_005887fd,&local_58);
              if (iVar17 != 0) {
                puVar12 = &DAT_01882124;
                goto LAB_0100b2bc;
              }
            }
            else {
LAB_0100a7f0:
              uVar18 = 2;
              if (local_58._2_2_ != 0) {
                uVar18 = 1;
                uVar16 = 1;
              }
              uVar14 = uVar18;
              if ((short)local_54 != 0) {
                uVar14 = (uint)(local_58._2_2_ == 0);
              }
              uVar16 = uVar16 & (short)local_54 == 0;
              uVar15 = 0;
              if (local_54._2_2_ == 0) {
                if ((short)local_54 == 0) {
                  uVar10 = uVar16;
                }
                else {
                  uVar18 = 0;
                  uVar10 = 2;
                }
                uVar11 = uVar18 + 1;
                if (uVar14 <= uVar18) {
                  uVar16 = uVar10;
                }
                if (uVar14 < uVar11) {
                  uVar14 = uVar11;
                }
              }
              else {
                uVar10 = 0;
                uVar11 = 0;
              }
              if ((short)local_50 == 0) {
                uVar15 = uVar11 + 1;
                if (uVar11 == 0) {
                  uVar10 = 3;
                }
                if (uVar14 <= uVar11) {
                  uVar16 = uVar10;
                }
                if (uVar14 < uVar15) {
                  uVar14 = uVar15;
                }
              }
              else {
                uVar10 = 0;
              }
              uVar18 = 0;
              if (local_50._2_2_ == 0) {
                if (uVar15 == 0) {
                  uVar10 = 4;
                }
                uVar11 = uVar15 + 1;
                if (uVar14 <= uVar15) {
                  uVar16 = uVar10;
                }
                if (uVar14 < uVar11) {
                  uVar14 = uVar11;
                }
              }
              else {
                uVar10 = 0;
                uVar11 = 0;
              }
              if (uStack_4c == 0) {
                uVar18 = uVar11 + 1;
                if (uVar11 == 0) {
                  uVar10 = 5;
                }
                if (uVar14 <= uVar11) {
                  uVar16 = uVar10;
                }
                if (uVar14 < uVar18) {
                  uVar14 = uVar18;
                }
              }
              else {
                uVar10 = 0;
              }
              uVar15 = 0;
              if (local_4a == 0) {
                uVar15 = uVar18 + 1;
                if (uVar18 == 0) {
                  uVar10 = 6;
                }
                if (uVar14 <= uVar18) {
                  uVar16 = uVar10;
                }
                if (uVar14 < uVar15) {
                  uVar14 = uVar15;
                }
              }
              else {
                uVar10 = 0;
              }
              if ((short)uStack_48 == 0) {
                if (uVar15 == 0) {
                  uVar10 = 7;
                }
                if (uVar15 < uVar14) {
                  uVar10 = uVar16;
                }
                if (uVar14 < uVar15 + 1) {
                  uVar14 = uVar15 + 1;
                }
              }
              else {
                uVar10 = uVar16;
              }
              pbVar6 = (byte *)((uint)local_70 | 2);
              if (uVar14 < 2) {
                local_58 = &local_38;
                local_54._0_2_ = -0x6240;
                local_54._2_2_ = 0x100;
                local_38 = (byte *)local_70;
                iVar17 = FUN_00fa948c(&local_88,&DAT_018820ec,&DAT_00590e71,&local_58);
                if (iVar17 != 0) {
                  puVar12 = &DAT_01882104;
LAB_0100b2bc:
                    /* WARNING: Subroutine does not return */
                  FUN_00fb74f8(&DAT_00418ec6,0x2b,&uStack_25,&DAT_01882174,puVar12);
                }
                local_58 = &local_34;
                local_54._0_2_ = -0x6240;
                local_54._2_2_ = 0x100;
                local_34 = pbVar6;
                iVar17 = FUN_00fa948c(&local_88,&DAT_018820ec,&DAT_0059a08d,&local_58);
                puVar12 = &DAT_01882114;
                if (iVar17 != 0) goto LAB_0100b2bc;
                local_34 = (byte *)((uint)local_70 | 4);
                local_58 = &local_34;
                local_54._0_2_ = -0x6240;
                local_54._2_2_ = 0x100;
                iVar17 = FUN_00fa948c(&local_88,&DAT_018820ec,&DAT_0059a08d,&local_58);
                if (iVar17 != 0) goto LAB_0100b2bc;
                local_34 = (byte *)((uint)local_70 | 6);
                local_58 = &local_34;
                local_54._0_2_ = -0x6240;
                local_54._2_2_ = 0x100;
                iVar17 = FUN_00fa948c(&local_88,&DAT_018820ec,&DAT_0059a08d,&local_58);
                if (iVar17 != 0) goto LAB_0100b2bc;
                local_34 = local_68;
                local_58 = &local_34;
                local_54._0_2_ = -0x6240;
                local_54._2_2_ = 0x100;
                iVar17 = FUN_00fa948c(&local_88,&DAT_018820ec,&DAT_0059a08d,&local_58);
                if (iVar17 != 0) goto LAB_0100b2bc;
                local_34 = local_66;
                local_58 = &local_34;
                local_54._0_2_ = -0x6240;
                local_54._2_2_ = 0x100;
                iVar17 = FUN_00fa948c(&local_88,&DAT_018820ec,&DAT_0059a08d,&local_58);
                if (iVar17 != 0) goto LAB_0100b2bc;
                local_34 = local_64;
                local_58 = &local_34;
                local_54._0_2_ = -0x6240;
                local_54._2_2_ = 0x100;
                iVar17 = FUN_00fa948c(&local_88,&DAT_018820ec,&DAT_0059a08d,&local_58);
                if (iVar17 != 0) goto LAB_0100b2bc;
                local_34 = local_62;
                local_58 = &local_34;
                local_54._0_2_ = -0x6240;
                local_54._2_2_ = 0x100;
                iVar17 = FUN_00fa948c(&local_88,&DAT_018820ec,&DAT_0059a08d,&local_58);
                if (iVar17 != 0) goto LAB_0100b2bc;
              }
              else {
                if (uVar10 != 0) {
                  local_54._0_2_ = -0x6240;
                  local_54._2_2_ = 0x100;
                  local_58 = &local_38;
                  local_38 = (byte *)local_70;
                  iVar17 = FUN_00fa948c(&local_88,&DAT_018820ec,&DAT_00590e71,&local_58);
                  if (iVar17 != 0) {
                    puVar12 = &DAT_01882104;
                    goto LAB_0100b2bc;
                  }
                  if (uVar10 != 1) {
                    iVar17 = uVar10 * 2 + -2;
                    do {
                      local_54._0_2_ = -0x6240;
                      local_54._2_2_ = 0x100;
                      local_58 = &local_34;
                      local_34 = pbVar6;
                      iVar4 = FUN_00fa948c(&local_88,&DAT_018820ec,&DAT_0059a08d,&local_58);
                      if (iVar4 != 0) goto LAB_0100b2b4;
                      pbVar6 = pbVar6 + 2;
                      iVar17 = iVar17 + -2;
                    } while (iVar17 != 0);
                  }
                }
                if (local_88 - local_80 < 2) {
                  FUN_010e02bc(&local_88,local_80,2);
                }
                uVar14 = uVar14 + uVar10;
                (local_84 + local_80)[0] = 0x3a;
                (local_84 + local_80)[1] = 0x3a;
                local_80 = local_80 + 2;
                if (8 < uVar14) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa36c(uVar14,8,8,&DAT_01882134);
                }
                if (uVar14 != 8) {
                  local_38 = (byte *)((int)local_70 + uVar14 * 2);
                  local_58 = &local_38;
                  local_54._0_2_ = -0x6240;
                  local_54._2_2_ = 0x100;
                  iVar17 = FUN_00fa948c(&local_88,&DAT_018820ec,&DAT_00590e71,&local_58);
                  if (iVar17 != 0) {
                    puVar12 = &DAT_01882104;
                    goto LAB_0100b2bc;
                  }
                  if (uVar14 != 7) {
                    iVar17 = uVar14 * 2;
                    do {
                      local_34 = (byte *)(((uint)local_70 | 2) + iVar17);
                      local_54._0_2_ = -0x6240;
                      local_54._2_2_ = 0x100;
                      local_58 = &local_34;
                      iVar4 = FUN_00fa948c(&local_88,&DAT_018820ec,&DAT_0059a08d,&local_58);
                      if (iVar4 != 0) goto LAB_0100b2b4;
                      iVar17 = iVar17 + 2;
                    } while (iVar17 != 0xe);
                  }
                }
              }
            }
            uVar18 = local_80;
            if (local_88 == local_80) {
              FUN_010e02bc(&local_88,local_80,1);
            }
            local_84[local_80] = 0x5d;
            local_80 = uVar18 + 1;
            goto LAB_0100adc8;
          }
          if (uVar13 < uVar19) {
            if (-0x41 < (char)local_8c[uVar13]) goto LAB_0100a760;
          }
          else if (uVar13 == uVar19) goto LAB_0100a760;
        }
        else if (uVar15 < uVar19) {
          if (-0x41 < (char)local_8c[uVar15]) goto LAB_0100a5c8;
        }
        else if (uVar15 == uVar19) goto LAB_0100a5c8;
      }
      break;
    case '\x02':
      if (uVar15 <= uVar13) {
        if (uVar15 == 0) {
LAB_0100a550:
          if (uVar13 == 0) {
LAB_0100a5f0:
            uVar18 = uVar13 - uVar15;
            if (local_88 - local_80 < uVar18) {
              FUN_010e02bc(&local_88,local_80,uVar18);
            }
            FUN_016dd1aa(local_84 + local_80,local_8c + uVar15,uVar18);
            uVar18 = local_80 + uVar18;
            local_80 = uVar18;
            if (local_a4 != 0) {
              if (local_a4 < uVar18) {
                if ((char)local_84[local_a4] < -0x40) {
LAB_0100a658:
                  local_8c = local_84;
                  local_b4 = &DAT_01882154;
                  uVar16 = local_a4;
                  uVar13 = uVar18;
                  local_58 = (byte **)CONCAT22(local_58._2_2_,(short)local_58);
                  local_54 = (undefined1 *)CONCAT22(local_54._2_2_,(short)local_54);
                  local_50 = (undefined1 *)CONCAT22(local_50._2_2_,(short)local_50);
                  uStack_48 = (byte **)CONCAT22(uStack_48._2_2_,(short)uStack_48);
                  goto LAB_0100a668;
                }
              }
              else if (uVar18 != local_a4) goto LAB_0100a658;
            }
            local_98 = '\x02';
            local_58 = (byte **)CONCAT22(local_58._2_2_,(short)local_58);
            local_54 = (undefined1 *)CONCAT22(local_54._2_2_,(short)local_54);
            local_50 = (undefined1 *)CONCAT22(local_50._2_2_,(short)local_50);
            uStack_48 = (byte **)CONCAT22(uStack_48._2_2_,(short)uStack_48);
            if (uVar18 != local_a4) {
              iVar17 = uVar18 - local_a4;
              pbVar6 = local_84 + local_a4;
              do {
                bVar8 = *pbVar6;
                if (bVar8 - 0x41 < 0x1a) {
                  bVar8 = bVar8 | 0x20;
                }
                *pbVar6 = bVar8;
                iVar17 = iVar17 + -1;
                pbVar6 = pbVar6 + 1;
                local_58 = (byte **)CONCAT22(local_58._2_2_,(short)local_58);
                local_54 = (undefined1 *)CONCAT22(local_54._2_2_,(short)local_54);
                local_50 = (undefined1 *)CONCAT22(local_50._2_2_,(short)local_50);
                uStack_48 = (byte **)CONCAT22(uStack_48._2_2_,(short)uStack_48);
              } while (iVar17 != 0);
            }
            goto LAB_0100adcc;
          }
          if (uVar13 < uVar19) {
            if (-0x41 < (char)local_8c[uVar13]) goto LAB_0100a5f0;
          }
          else if (uVar13 == uVar19) goto LAB_0100a5f0;
        }
        else if (uVar15 < uVar19) {
          if (-0x41 < (char)local_8c[uVar15]) goto LAB_0100a550;
        }
        else if (uVar15 == uVar19) goto LAB_0100a550;
      }
      break;
    case '\x03':
      if (uVar15 <= uVar13) {
        if (uVar15 == 0) {
LAB_0100a578:
          if (uVar13 == 0) {
LAB_0100a68c:
            FUN_0100b5b4(&local_88,local_8c + uVar15,uVar13 - uVar15,1);
            local_98 = '\x03';
            local_58 = (byte **)CONCAT22(local_58._2_2_,(short)local_58);
            local_54 = (undefined1 *)CONCAT22(local_54._2_2_,(short)local_54);
            local_50 = (undefined1 *)CONCAT22(local_50._2_2_,(short)local_50);
            uStack_48 = (byte **)CONCAT22(uStack_48._2_2_,(short)uStack_48);
            if (local_80 < (uVar13 - uVar15) + local_a4) {
              if (local_80 < local_a4) {
                puVar12 = &DAT_01882164;
                uVar18 = local_80;
                goto LAB_0100b408;
              }
              local_54 = (undefined1 *)(local_80 - local_a4);
              local_58 = (byte **)(local_84 + local_a4);
              local_50._0_2_ = 0;
              local_50._2_2_ = 0;
              uVar18 = FUN_0100bd54(&local_58);
              local_98 = '\0';
              if ((undefined1 *)CONCAT22(local_50._2_2_,(short)local_50) < local_54) {
                local_98 = '\x03';
              }
              if ((uVar18 & 1) == 0) {
                local_98 = '\x03';
              }
              local_50 = (undefined1 *)CONCAT22(local_50._2_2_,(short)local_50);
              uStack_48 = (byte **)CONCAT22(uStack_48._2_2_,(short)uStack_48);
            }
            goto LAB_0100adcc;
          }
          if (uVar13 < uVar19) {
            if (-0x41 < (char)local_8c[uVar13]) goto LAB_0100a68c;
          }
          else if (uVar13 == uVar19) goto LAB_0100a68c;
        }
        else if (uVar15 < uVar19) {
          if (-0x41 < (char)local_8c[uVar15]) goto LAB_0100a578;
        }
        else if (uVar15 == uVar19) goto LAB_0100a578;
      }
    }
    local_b4 = &DAT_01882254;
    uVar16 = uVar15;
    local_58 = (byte **)CONCAT22(local_58._2_2_,(short)local_58);
    local_54 = (undefined1 *)CONCAT22(local_54._2_2_,(short)local_54);
    local_50 = (undefined1 *)CONCAT22(local_50._2_2_,(short)local_50);
    uStack_48 = (byte **)CONCAT22(uStack_48._2_2_,(short)uStack_48);
  }
LAB_0100a668:
                    /* WARNING: Subroutine does not return */
  FUN_00faa8ac(local_8c,uVar18,uVar16,uVar13,local_b4);
LAB_0100b2b4:
  puVar12 = &DAT_01882114;
  goto LAB_0100b2bc;
}

