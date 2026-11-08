// FUN_01af8134 @ 01af8134 size=5292 calls_out=22 calls_in=2
// strings: Extra-data field can't exceed u16::MAX bytes | Extra-data field doesn't have room for ID and length

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01af8134(undefined4 *param_1,int param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *******pppppppuVar3;
  undefined4 *******pppppppuVar4;
  char cVar5;
  ushort uVar6;
  uint *puVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *******pppppppuVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined2 *puVar17;
  undefined1 uVar18;
  undefined4 *******pppppppuVar19;
  ushort *puVar20;
  undefined4 *******pppppppuVar21;
  int iVar22;
  undefined4 *******pppppppuVar23;
  bool bVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined4 *******local_1ac;
  undefined4 *******local_1a8;
  undefined4 *******local_1a4;
  uint local_174;
  undefined4 *******local_170;
  int local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  undefined4 *******local_140;
  code *local_13c;
  undefined4 *******local_138;
  code *local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined2 local_120;
  byte bStack_11e;
  undefined2 local_11c;
  undefined2 uStack_11a;
  undefined8 local_118;
  undefined4 *******local_110;
  undefined4 *******local_10c;
  undefined8 local_108;
  undefined4 *******local_100;
  undefined4 *******local_fc;
  undefined4 *******local_f8;
  undefined4 *******local_f4;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 *******local_e0;
  undefined4 *******local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_c8;
  uint local_c0;
  uint local_bc;
  int local_b8;
  undefined4 *local_b4;
  int local_b0;
  undefined2 local_ac;
  undefined2 local_aa;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  undefined1 uStack_97;
  undefined1 local_96;
  undefined1 local_95;
  undefined2 local_94;
  undefined4 local_90;
  undefined4 *******local_8c;
  undefined4 *******local_88;
  undefined4 *******local_84;
  undefined4 local_80;
  undefined4 *******local_7c;
  undefined4 *******local_74;
  undefined4 *******local_70;
  undefined4 *******local_6c;
  undefined4 *******local_68;
  undefined4 *******local_64;
  undefined4 *******local_60;
  ushort local_5c;
  byte local_59;
  undefined4 *******local_58;
  undefined4 *******local_54;
  undefined4 *******local_50;
  undefined4 local_48;
  undefined4 *******local_44;
  undefined4 *******local_40;
  undefined4 *******local_38;
  undefined4 *******local_34;
  undefined4 *******local_30;
  code *local_2c;
  
  if (param_3 == 0) {
    uVar8 = 0x80000007;
  }
  else {
    puVar7 = param_1 + 1;
    if (param_3 >> 0x10 == 0) {
      uVar9 = (uint)&local_90 | 4;
      local_144 = 0;
      local_148 = 0;
      local_150 = param_2;
      local_14c = param_3;
      do {
        uVar10 = local_144;
        uVar12 = local_148;
        pppppppuVar21 = (undefined4 *******)&local_90;
        uVar16 = -(local_144 + (param_3 < local_148));
        if (uVar16 == 0 && (3 < param_3 - local_148) <= uVar16) {
          FUN_01af9864(puVar7,"Extra-data field doesn\'t have room for ID and length",0x34);
          goto LAB_01af91e4;
        }
        FUN_01afa810(&local_140,&local_150);
        if (((char)local_140 != '\x04') && (((uint)local_140 & 0xff) != 4)) {
          *param_1 = 0x80000001;
          *puVar7 = (uint)local_140;
          param_1[2] = local_13c;
          return;
        }
        uVar16 = (uint)local_140 >> 0x10;
        local_38 = (undefined4 *******)CONCAT22(local_38._2_2_,(short)((uint)local_140 >> 0x10));
        if (uVar16 < 0x6375) {
          if (uVar16 != 1 && uVar16 != 10) {
            uVar14 = 0x5455;
            goto LAB_01af82e0;
          }
        }
        else if (uVar16 < 0x9901) {
          if (uVar16 != 0x6375) {
            uVar14 = 0x7075;
            goto LAB_01af82e0;
          }
        }
        else if (uVar16 != 0x9901) {
          uVar14 = 0xa11e;
LAB_01af82e0:
          if (uVar16 != uVar14) {
            iVar15 = 0x20;
            puVar17 = &DAT_00533d20;
            while (iVar15 != 0) {
              iVar22 = 0;
              bVar24 = false;
              do {
                puVar20 = (ushort *)((int)puVar17 + iVar22);
                iVar22 = iVar22 + 2;
                bVar24 = (bool)(bVar24 | *puVar20 == uVar16);
              } while (iVar22 != 0x40);
              iVar15 = iVar15 + -0x20;
              puVar17 = puVar17 + 0x20;
              if (bVar24) goto LAB_01af9184;
            }
            iVar15 = 0;
            while (iVar15 != 0x36) {
              puVar20 = (ushort *)((int)&DAT_00533d60 + iVar15);
              iVar15 = iVar15 + 2;
              if (*puVar20 == uVar16) goto LAB_01af9184;
            }
          }
        }
        iVar15 = local_144 - (1 >= local_148);
        if (local_144 == 0 && (1 < local_148) <= local_144) {
          *param_1 = 0x80000001;
          param_1[1] = 2;
          param_1[2] = &DAT_01d30838;
          return;
        }
        bVar24 = local_148 < 2;
        local_148 = local_148 - 2;
        local_100 = (undefined4 *******)0x0;
        local_144 = local_144 - bVar24;
        local_fc = (undefined4 *******)0x0;
        local_f8 = (undefined4 *******)0x0;
        local_f4 = (undefined4 *******)0x0;
        local_13c = (code *)0x0;
        uStack_97 = 0;
        local_96 = 0;
        local_94 = 0xff;
        local_ac = 1;
        local_110 = (undefined4 *******)&DAT_00000001;
        local_118._0_4_ = 1;
        local_108._0_4_ = 1;
        local_140 = (undefined4 *******)0x0;
        local_a0 = 0;
        local_130 = 0;
        local_12c = 0;
        local_a8 = 0;
        local_e8 = 0;
        local_e0 = (undefined4 *******)0x0;
        local_dc = (undefined4 *******)0x0;
        local_d8 = 0;
        local_d4 = 0;
        local_f0 = 0;
        local_10c = (undefined4 *******)0x0;
        local_120 = 0;
        bStack_11e = 0;
        local_11c = 0;
        uStack_11a = 0;
        local_118._4_4_ = 0;
        local_108._4_4_ = 0;
        local_c0 = 0;
        local_bc = 0;
        local_c8 = 3;
        local_b4 = (undefined4 *)&DAT_00000008;
        local_a4 = 0;
        local_95 = 0;
        local_b8 = 0;
        local_b0 = 0;
        FUN_01afa810(pppppppuVar21,&local_150,iVar15);
        if ((char)local_90 == '\x04') {
          uVar2 = local_90._2_2_;
          if (local_90._2_2_ < 0x6375) {
            if (local_90._2_2_ != 1 && local_90._2_2_ != 10) {
              uVar6 = 0x5455;
              goto LAB_01af8468;
            }
LAB_01af8470:
            local_58 = (undefined4 *******)CONCAT22(local_58._2_2_,local_90._2_2_);
            FUN_01afa810(&local_48,&local_150);
            if ((char)local_48 != '\x04') {
              cVar5 = FUN_005ef5e8(&local_48);
              pppppppuVar11 = local_44;
              pppppppuVar23 = local_48;
              pppppppuVar21 = (undefined4 *******)&DAT_80000001;
              if (cVar5 == '%') {
                local_34 = (undefined4 *******)FUN_01af9e8c;
                local_38 = &local_58;
                FUN_00664898(&local_90,&DAT_00578739,&local_38);
                pppppppuVar19 = local_8c;
                pppppppuVar21 = local_90;
                local_170 = local_88;
                FUN_0069263c(pppppppuVar23,pppppppuVar11);
              }
              else {
                pppppppuVar23 = local_44;
                pppppppuVar19 = local_48;
LAB_01af85a8:
                local_170 = pppppppuVar23;
              }
LAB_01af85ac:
              local_174 = (uint)pppppppuVar19 >> 8;
              goto LAB_01af85b4;
            }
            uVar16 = (uint)local_48._2_2_;
            if (uVar2 < 0x6375) {
              if (uVar2 != 1) {
                if (uVar2 == 10) {
                  pppppppuVar23 = (undefined4 *******)0x80000003;
                  if (uVar16 != 0x20) {
                    local_170 = (undefined4 *******)&DAT_0000002a;
                    pppppppuVar21 = (undefined4 *******)0x534581;
                    local_48 = pppppppuVar23;
                    goto LAB_01af9410;
                  }
                  FUN_01afa680(&local_90,&local_150);
                  if (((uint)local_90 & 0xff) == 4) {
                    FUN_01afa810(&local_90,&local_150);
                    if (((char)local_90 == '\x04') || (((uint)local_90 & 0xff) == 4)) {
                      if ((uint)local_90 >> 0x10 != 1) {
                        local_170 = (undefined4 *******)&DAT_00000031;
                        pppppppuVar21 = (undefined4 *******)0x534550;
                        local_48 = pppppppuVar23;
                        goto LAB_01af9410;
                      }
                      FUN_01afa810(&local_90,&local_150);
                      if (((char)local_90 != '\x04') && (((uint)local_90 & 0xff) != 4))
                      goto LAB_01af9400;
                      if ((uint)local_90 >> 0x10 != 0x18) {
                        local_170 = (undefined4 *******)&DAT_00000032;
                        pppppppuVar21 =
                             (undefined4 *******)
                             "NTFS extra field has an unsupported attribute sizeNTFS extra field has an unsupported attribute tagNTFS extra field has an unsupported lengthinvalid seek to a negative or overflowing positionAES extra field truncatedInvalid AES vendorAES extra data field has an unsupported lengthZIP64 extra field truncatedZIP64 extra-data field is the wrong lengthExtra field content truncatedInvalid AES encryption strengthInvalid AES vendor version"
                        ;
                        local_48 = pppppppuVar23;
                        goto LAB_01af9410;
                      }
                      FUN_01afa8cc(&local_90,&local_150);
                      pppppppuVar23 = local_84;
                      pppppppuVar21 = local_88;
                      if (local_90 == (undefined4 *******)&DAT_00000001) {
LAB_01af9214:
                        local_170 = local_88;
                        local_48 = local_8c;
                        goto LAB_01af9408;
                      }
                      FUN_01afa8cc(&local_90,&local_150);
                      pppppppuVar19 = local_84;
                      pppppppuVar11 = local_88;
                      if (local_90 == (undefined4 *******)&DAT_00000001) goto LAB_01af9214;
                      FUN_01afa8cc(&local_90,&local_150);
                      pppppppuVar4 = local_84;
                      pppppppuVar3 = local_88;
                      if (local_90 == (undefined4 *******)&DAT_00000001) goto LAB_01af9214;
                      FUN_01afa9c8(&local_b8);
                      local_b4[2] = pppppppuVar21;
                      local_b4[3] = pppppppuVar23;
                      local_b4[4] = pppppppuVar11;
                      *local_b4 = 0;
                      local_b0 = 1;
                      local_b4[5] = pppppppuVar19;
                      local_b4[6] = pppppppuVar3;
                      local_b4[7] = pppppppuVar4;
LAB_01af9140:
                      uVar26 = CONCAT44(local_118._4_4_,(undefined4)local_118);
                      uVar25 = CONCAT44(local_108._4_4_,(undefined4)local_108);
                      goto LAB_01af9148;
                    }
                  }
LAB_01af9400:
                  local_170 = local_8c;
                  local_48 = local_90;
LAB_01af9408:
                  pppppppuVar21 = local_48;
                  local_48 = (undefined4 *******)&DAT_80000001;
                }
                else {
                  local_5c = local_48._2_2_;
                  if (uVar16 == 0) {
                    local_48 = (undefined4 *******)&DAT_80000000;
                    local_170 = (undefined4 *******)&DAT_00000021;
                    local_84 = (undefined4 *******)&DAT_00000021;
                    local_8c = (undefined4 *******)&DAT_80000000;
                    local_88 = (undefined4 *******)&DAT_005343b5;
                    pppppppuVar21 = (undefined4 *******)&DAT_005343b5;
                  }
                  else {
                    uVar12 = local_148;
                    if ((uint)(local_148 <= local_14c) <= -local_144) {
                      uVar12 = local_14c;
                    }
                    if (local_14c == uVar12) {
                      local_148 = local_14c;
                      local_144 = 0;
                      local_48 = (undefined4 *******)&DAT_80000001;
                      local_88 = (undefined4 *******)0x2;
                      local_84 = (undefined4 *******)&DAT_01d30824;
                      local_8c = (undefined4 *******)&DAT_80000001;
                      pppppppuVar21 = (undefined4 *******)0x2;
                      local_170 = (undefined4 *******)&DAT_01d30824;
                    }
                    else {
                      bVar1 = *(byte *)(local_150 + uVar12);
                      bVar24 = 0xfffffffe < local_148;
                      local_148 = local_148 + 1;
                      local_144 = local_144 + bVar24;
                      local_30 = (undefined4 *******)&DAT_0000002c;
                      local_34 = (undefined4 *******)&DAT_005343d6;
                      local_38 = (undefined4 *******)&DAT_80000000;
                      FUN_01afa5d0(&local_38);
                      pppppppuVar23 = (undefined4 *******)(uVar16 - 1);
                      local_59 = bVar1;
                      if (uVar16 == 5) {
                        if ((bVar1 & 1) != 0) {
LAB_01af8c08:
                          if (&DAT_00000003 < pppppppuVar23) goto LAB_01af8c14;
LAB_01af8ba0:
                          pppppppuVar11 = (undefined4 *******)0x0;
                          goto LAB_01af8e20;
                        }
                        pppppppuVar11 = (undefined4 *******)0x0;
                        if ((bVar1 & 2) == 0) {
                          uVar8 = 0;
                          local_1a4 = (undefined4 *******)0x0;
                          pppppppuVar11 = (undefined4 *******)0x0;
                          pppppppuVar19 = (undefined4 *******)0x0;
                          if ((bVar1 & 4) != 0) goto LAB_01af8f8c;
                        }
                        else {
LAB_01af8e88:
                          if ((uVar16 == 0xd) ||
                             (local_1a4 = (undefined4 *******)0x0, &DAT_00000003 < pppppppuVar23)) {
LAB_01af8ea0:
                            local_2c = FUN_012fd5c4;
                            local_30 = (undefined4 *******)&local_59;
                            local_34 = (undefined4 *******)FUN_012fcf18;
                            local_38 = (undefined4 *******)&local_5c;
                            FUN_00664898(&local_48,&DAT_00534448,&local_38);
                            local_58 = local_48;
                            local_54 = local_44;
                            local_50 = local_40;
                            if (pppppppuVar23 < &SUB_00000004) {
                              pppppppuVar23 = local_44;
                              pppppppuVar21 = local_48;
                              if (local_48 != (undefined4 *******)0x80000007) goto LAB_01af9338;
                            }
                            else {
                              FUN_01afa5d0();
                              pppppppuVar23 = pppppppuVar23 + -1;
                            }
                            FUN_01afa680(&local_38,&local_150);
                            if ((char)local_38 == '\x04') {
                              local_1a8 = local_34;
                              local_1a4 = (undefined4 *******)&DAT_00000001;
                            }
                            else {
                              local_1a8 = local_34;
                              local_1a4 = (undefined4 *******)&DAT_00000001;
                              if (((uint)local_38 & 0xff) != 4) goto LAB_01af95b8;
                            }
                          }
LAB_01af8f70:
                          if ((bVar1 & 4) == 0) {
                            uVar8 = 0;
                            pppppppuVar19 = pppppppuVar11;
                            if (uVar16 != 0xd) goto LAB_01af9070;
                          }
                          else {
LAB_01af8f8c:
                            if (uVar16 != 0xd) {
                              uVar8 = 0;
                              pppppppuVar19 = pppppppuVar11;
                              if (pppppppuVar23 < &SUB_00000004) goto LAB_01af9070;
                            }
                          }
                          local_2c = FUN_012fd5c4;
                          local_30 = (undefined4 *******)&local_59;
                          local_34 = (undefined4 *******)FUN_012fcf18;
                          local_38 = (undefined4 *******)&local_5c;
                          FUN_00664898(&local_48,&DAT_0053448d,&local_38);
                          local_58 = local_48;
                          local_54 = local_44;
                          local_50 = local_40;
                          if (pppppppuVar23 < &SUB_00000004) {
                            pppppppuVar23 = local_44;
                            if (local_48 != (undefined4 *******)0x80000007) goto LAB_01af9338;
                          }
                          else {
                            FUN_01afa5d0();
                            pppppppuVar23 = pppppppuVar23 + -1;
                          }
                          FUN_01afa680(&local_38,&local_150);
                          pppppppuVar19 = pppppppuVar11;
                          pppppppuVar21 = local_34;
                          if ((char)local_38 == '\x04') {
                            uVar8 = 1;
                          }
                          else {
                            uVar8 = 1;
                            if (((uint)local_38 & 0xff) != 4) goto LAB_01af95b8;
                          }
                        }
LAB_01af9070:
                        if (pppppppuVar23 == (undefined4 *******)0x0) {
LAB_01af90c4:
                          iVar15 = local_b0;
                          local_84 = local_1a8;
                          local_88 = local_1a4;
                          local_8c = local_1ac;
                          local_90 = pppppppuVar19;
                          local_80 = uVar8;
                          local_7c = pppppppuVar21;
                          if (local_b0 == local_b8) {
                            FUN_01afa9c8(&local_b8);
                          }
                          puVar13 = local_b4 + iVar15 * 8;
                          *puVar13 = 1;
                          puVar13[2] = local_1ac;
                          puVar13[3] = local_1a4;
                          puVar13[1] = pppppppuVar19;
                          puVar13[4] = local_1a8;
                          puVar13[5] = uVar8;
                          puVar13[6] = pppppppuVar21;
                          local_b0 = iVar15 + 1;
                          goto LAB_01af9140;
                        }
                        FUN_018a7af8(&local_38,pppppppuVar23);
                        pppppppuVar23 = local_34;
                        FUN_01afa738(&local_48,&local_150,local_34,local_30);
                        if (((char)local_48 == '\x04') || (((uint)local_48 & 0xff) == 4)) {
                          FUN_019bb7e0(local_38,pppppppuVar23);
                          goto LAB_01af90c4;
                        }
                        local_170 = local_44;
                        FUN_019bb7e0(local_38,pppppppuVar23);
                        goto LAB_01af9408;
                      }
                      uVar12 = (uint)bVar1 - (bVar1 >> 1 & 0x55);
                      uVar12 = (uVar12 & 0x33) + (uVar12 >> 2 & 0x33);
                      if (uVar16 != ((uVar12 + (uVar12 >> 4) & 0xf) << 2 | 1)) {
                        local_2c = FUN_012fd5c4;
                        local_30 = (undefined4 *******)&local_59;
                        local_34 = (undefined4 *******)FUN_012fcf18;
                        local_38 = (undefined4 *******)&local_5c;
                        FUN_00664898(&local_48,&DAT_005344d2,&local_38);
                        FUN_01af9904(&local_88,&local_48);
                        local_48 = (undefined4 *******)&DAT_80000001;
                        pppppppuVar21 = local_88;
                        local_170 = local_84;
                        local_8c = local_48;
                        goto LAB_01af9410;
                      }
                      if ((bVar1 & 1) != 0) goto LAB_01af8c08;
                      if (uVar16 != 0xd) goto LAB_01af8ba0;
LAB_01af8c14:
                      local_2c = FUN_012fd5c4;
                      local_30 = (undefined4 *******)&local_59;
                      local_34 = (undefined4 *******)FUN_012fcf18;
                      local_38 = (undefined4 *******)&local_5c;
                      FUN_00664898(&local_48,&DAT_00534402,&local_38);
                      local_58 = local_48;
                      local_54 = local_44;
                      local_50 = local_40;
                      if (&DAT_00000003 < pppppppuVar23) {
                        FUN_01afa5d0();
                        pppppppuVar23 = (undefined4 *******)(uVar16 - 5);
LAB_01af8ddc:
                        FUN_01afa680(&local_38,&local_150);
                        if ((char)local_38 == '\x04') {
                          pppppppuVar11 = (undefined4 *******)&DAT_00000001;
                          local_1ac = local_34;
LAB_01af8e20:
                          if ((bVar1 & 2) != 0) goto LAB_01af8e88;
                          local_1a4 = (undefined4 *******)0x0;
                          if (uVar16 == 0xd) goto LAB_01af8ea0;
                          goto LAB_01af8f70;
                        }
                        pppppppuVar11 = (undefined4 *******)&DAT_00000001;
                        local_1ac = local_34;
                        if (((uint)local_38 & 0xff) == 4) goto LAB_01af8e20;
LAB_01af95b8:
                        local_48 = (undefined4 *******)&DAT_80000001;
                        local_8c = (undefined4 *******)&DAT_80000001;
                        pppppppuVar21 = local_38;
                        local_170 = local_34;
                      }
                      else {
                        pppppppuVar23 = local_44;
                        pppppppuVar21 = local_48;
                        if (local_48 == (undefined4 *******)0x80000007) goto LAB_01af8ddc;
LAB_01af9338:
                        local_84 = local_40;
                        pppppppuVar21 = local_44;
                        local_170 = local_84;
                        local_8c = local_48;
                        local_88 = local_44;
                        local_58 = local_48;
                        local_54 = local_44;
                        local_50 = local_40;
                      }
                    }
                  }
                }
LAB_01af9410:
                local_174 = (uint)pppppppuVar21 >> 8;
                uVar18 = SUB41(pppppppuVar21,0);
                pppppppuVar21 = local_48;
LAB_01af9414:
                param_1[2] = local_170;
                *(undefined1 *)(param_1 + 1) = uVar18;
                *param_1 = pppppppuVar21;
                *(char *)((int)param_1 + 7) = (char)(local_174 >> 0x10);
                *(short *)((int)param_1 + 5) = (short)local_174;
                FUN_007a910c(&local_140);
                return;
              }
              local_95 = 1;
              if (0x17 < uVar16) {
                FUN_01afa8cc(pppppppuVar21,&local_150);
                if (local_90 == (undefined4 *******)&DAT_00000001) {
                  cVar5 = FUN_005ef5e8(uVar9);
                  if (cVar5 == '%') {
                    FUN_0069263c(local_8c,local_88);
LAB_01af9540:
                    local_48 = (undefined4 *******)&DAT_80000000;
                    local_170 = (undefined4 *******)&DAT_0000001b;
                    pppppppuVar21 = (undefined4 *******)0x534636;
                    goto LAB_01af9410;
                  }
                }
                else {
                  local_f8 = local_88;
                  local_f4 = local_84;
                  FUN_01afa8cc(pppppppuVar21,&local_150);
                  if (local_90 == (undefined4 *******)&DAT_00000001) {
                    cVar5 = FUN_005ef5e8(uVar9);
                    if (cVar5 == '%') {
                      FUN_0069263c(local_8c,local_88);
                      goto LAB_01af9540;
                    }
                  }
                  else {
                    local_100 = local_88;
                    local_fc = local_84;
                    FUN_01afa8cc(pppppppuVar21,&local_150);
                    if (local_90 != (undefined4 *******)&DAT_00000001) {
                      iVar15 = 0x18;
                      local_e0 = local_88;
                      local_dc = local_84;
                      if (uVar16 < 0x18) {
                        local_48 = (undefined4 *******)&DAT_80000000;
                        local_170 = (undefined4 *******)&DAT_0000002a;
                        pppppppuVar21 = (undefined4 *******)0x534651;
                        goto LAB_01af9410;
                      }
                      goto LAB_01af8878;
                    }
                    cVar5 = FUN_005ef5e8(uVar9);
                    if (cVar5 == '%') {
                      FUN_0069263c(local_8c,local_88);
                      goto LAB_01af9540;
                    }
                  }
                }
                goto LAB_01af9214;
              }
              iVar15 = 0;
LAB_01af8878:
              uVar25 = CONCAT44(local_108._4_4_,(undefined4)local_108);
              uVar26 = CONCAT44(local_118._4_4_,(undefined4)local_118);
              uVar16 = uVar16 - iVar15;
              uVar12 = 0;
              do {
                if (uVar16 == 0 && uVar12 == 0) break;
                uVar10 = local_148;
                if (local_144 != 0) {
                  uVar10 = 0xffffffff;
                }
                uVar14 = local_14c - uVar10;
                if (local_14c < uVar10) {
                  uVar14 = 0;
                }
                if (uVar12 == 0 && (0x1fff < uVar16) <= uVar12) {
                  if (uVar16 <= uVar14) {
                    uVar14 = uVar16;
                  }
                }
                else if (0x1fff < uVar14) {
                  uVar14 = 0x2000;
                }
                bVar24 = CARRY4(local_148,uVar14);
                uVar12 = uVar12 - (uVar16 < uVar14);
                local_148 = local_148 + uVar14;
                uVar16 = uVar16 - uVar14;
                local_144 = local_144 + bVar24;
              } while (uVar14 != 0);
            }
            else {
              if (0x9900 < uVar2) {
                if (uVar2 != 0x9901) goto LAB_01af87cc;
                if (uVar16 == 7) {
                  FUN_01afa810(pppppppuVar21,&local_150);
                  pppppppuVar23 = local_90;
                  if (((char)local_90 == '\x04') || (((uint)local_90 & 0xff) == 4)) {
                    uVar16 = (uint)local_90 >> 0x10;
                    FUN_01afa810(pppppppuVar21,&local_150);
                    if (((char)local_90 == '\x04') || (((uint)local_90 & 0xff) == 4)) {
                      uVar14 = local_148;
                      if ((uint)(local_148 <= local_14c) <= -local_144) {
                        uVar14 = local_14c;
                      }
                      if (local_14c == uVar14) {
                        local_148 = local_14c;
                        local_144 = 0;
                        pppppppuVar21 = (undefined4 *******)0x2;
                        local_90 = pppppppuVar21;
                        local_8c = (undefined4 *******)&DAT_01d30824;
                        cVar5 = FUN_005ef5e8(&local_90);
                        local_48 = (undefined4 *******)&DAT_80000001;
                        local_170 = (undefined4 *******)&DAT_01d30824;
                        if (cVar5 == '%') {
                          FUN_0069263c(2,&DAT_01d30824);
                          local_170 = (undefined4 *******)&DAT_00000019;
                          pppppppuVar21 = (undefined4 *******)0x5345dd;
                          local_48 = (undefined4 *******)&DAT_80000000;
                        }
                      }
                      else {
                        bVar1 = *(byte *)(local_150 + uVar14);
                        bVar24 = 0xfffffffe < local_148;
                        local_148 = local_148 + 1;
                        local_144 = local_144 + bVar24;
                        if ((uint)local_90 >> 0x10 == 0x4541) {
                          if (uVar16 - 1 < 2) {
                            if (bVar1 - 1 < 3) {
                              FUN_01afa810(&local_90,&local_150);
                              uVar26 = CONCAT44(local_118._4_4_,(undefined4)local_118);
                              uVar25 = CONCAT44(local_108._4_4_,(undefined4)local_108);
                              if (((char)local_90 == '\x04') || (((uint)local_90 & 0xff) == 4)) {
                                uStack_11a = (undefined2)((uint)local_90 >> 0x10);
                                local_11c = 2;
                                if ((uint)local_90 >> 0x10 == 8) {
                                  local_11c = 1;
                                }
                                if ((uint)local_90 >> 0x10 == 0) {
                                  local_11c = 0;
                                }
                                local_120 = (undefined2)((uint)pppppppuVar23 >> 0x10);
                                bStack_11e = bVar1;
                                local_ac = local_11c;
                                local_aa = uStack_11a;
                                local_c0 = uVar12;
                                local_bc = uVar10;
                                goto LAB_01af9148;
                              }
                              goto LAB_01af9400;
                            }
                            local_170 = (undefined4 *******)&DAT_0000001f;
                            pppppppuVar21 = (undefined4 *******)0x534698;
                            local_48 = (undefined4 *******)&DAT_80000000;
                          }
                          else {
                            local_170 = (undefined4 *******)&DAT_0000001a;
                            pppppppuVar21 = (undefined4 *******)0x5346b7;
                            local_48 = (undefined4 *******)&DAT_80000000;
                          }
                        }
                        else {
                          local_170 = (undefined4 *******)&DAT_00000012;
                          pppppppuVar21 = (undefined4 *******)0x5345f6;
                          local_48 = (undefined4 *******)&DAT_80000000;
                        }
                      }
                      goto LAB_01af9410;
                    }
                  }
                  goto LAB_01af9400;
                }
                local_170 = (undefined4 *******)&DAT_0000002e;
                pppppppuVar21 = (undefined4 *******)0x534608;
                local_48 = (undefined4 *******)0x80000003;
                goto LAB_01af9410;
              }
              if (uVar2 == 0x6375) {
                FUN_01afa054(pppppppuVar21,&local_150);
                if (local_90 != (undefined4 *******)0x0) {
                  local_174 = (uint)local_88 >> 8;
                  local_170 = local_84;
                  pppppppuVar19 = local_88;
                  pppppppuVar21 = local_8c;
                  goto LAB_01af85b4;
                }
                local_30 = local_84;
                local_34 = local_88;
                local_38 = local_8c;
                FUN_01af9f80(&local_48,&local_38,(undefined4)local_108,local_108._4_4_);
                pppppppuVar23 = local_40;
                pppppppuVar21 = local_44;
                uVar25 = CONCAT44(local_40,local_44);
                if (local_48 != (undefined4 *******)0x80000007) {
                  local_170 = local_40;
                  goto LAB_01af9410;
                }
                FUN_012fbd94(&local_90,local_44,local_40);
                if (local_90 == (undefined4 *******)0x0) {
                  local_6c = pppppppuVar23;
                  local_70 = pppppppuVar21;
                  local_74 = pppppppuVar23;
                }
                else {
                  local_70 = pppppppuVar23;
                  local_74 = pppppppuVar21;
                  local_6c = local_8c;
                  if (pppppppuVar23 != (undefined4 *******)&DAT_80000000) goto LAB_01af95d8;
                }
                uVar25 = FUN_0066661c(&local_74);
                if (local_108._4_4_ != 0) {
                  thunk_FUN_01be4678((undefined4)local_108);
                }
                uVar26 = CONCAT44(local_118._4_4_,(undefined4)local_118);
              }
              else {
                FUN_01afa054(pppppppuVar21,&local_150);
                if (local_90 != (undefined4 *******)0x0) {
                  local_170 = local_84;
                  pppppppuVar19 = local_88;
                  pppppppuVar21 = local_8c;
                  goto LAB_01af85ac;
                }
                local_60 = local_84;
                local_64 = local_88;
                local_68 = local_8c;
                FUN_01af9f80(&local_38,&local_68,local_110,local_10c);
                pppppppuVar23 = local_30;
                pppppppuVar11 = local_34;
                pppppppuVar19 = local_34;
                pppppppuVar21 = local_38;
                if (local_38 != (undefined4 *******)0x80000007) goto LAB_01af85a8;
                if (local_10c != (undefined4 *******)0x0) {
                  thunk_FUN_01be4678(local_110);
                }
                local_10c = pppppppuVar23;
                local_110 = pppppppuVar11;
                uVar25 = FUN_013d4df8(pppppppuVar11,pppppppuVar23);
                pppppppuVar23 = (undefined4 *******)((ulonglong)uVar25 >> 0x20);
                pppppppuVar21 = (undefined4 *******)uVar25;
                FUN_012fbd94(&local_90,pppppppuVar21,pppppppuVar23);
                if (local_90 == (undefined4 *******)0x0) {
                  pppppppuVar21 = pppppppuVar23;
                }
                else if (pppppppuVar23 != (undefined4 *******)&DAT_80000000) {
LAB_01af95d8:
                  FUN_019bb7e0((int)((ulonglong)uVar25 >> 0x20),(int)uVar25);
                  local_170 = (undefined4 *******)&DAT_0000000d;
                  local_174 = 0x5343;
                  uVar18 = 0x8d;
                  pppppppuVar21 = (undefined4 *******)&DAT_80000000;
                  goto LAB_01af9414;
                }
                local_90 = pppppppuVar21;
                uVar26 = FUN_01608eec(&local_90);
                if (local_118._4_4_ != 0) {
                  thunk_FUN_01be4678((undefined4)local_118);
                }
                uVar25 = CONCAT44(local_108._4_4_,(undefined4)local_108);
                uStack_97 = 1;
              }
            }
          }
          else {
            if (0x9900 < local_90._2_2_) {
              if (local_90._2_2_ != 0x9901) {
                uVar6 = 0xa11e;
                goto LAB_01af8468;
              }
              goto LAB_01af8470;
            }
            if (local_90._2_2_ == 0x6375) goto LAB_01af8470;
            uVar6 = 0x7075;
LAB_01af8468:
            if (local_90._2_2_ == uVar6) goto LAB_01af8470;
            FUN_01afa810(&local_48,&local_150);
            if ((char)local_48 != '\x04') {
              cVar5 = FUN_005ef5e8(&local_48);
              pppppppuVar11 = local_44;
              pppppppuVar23 = local_48;
              if (cVar5 != '%') {
                local_88 = (undefined4 *******)0x0;
                local_8c = (undefined4 *******)&DAT_00000001;
                local_90 = (undefined4 *******)0x0;
                FUN_01afaa98(&local_38,&local_150,pppppppuVar21);
                if (((uint)local_38 & 0xff) != 4) {
                  FUN_0069263c((uint)local_38 & 0xff,local_34);
                }
                FUN_019bb7e0(local_90,local_8c);
              }
              FUN_0069263c(pppppppuVar23,pppppppuVar11);
              uVar26 = CONCAT44(local_118._4_4_,(undefined4)local_118);
              uVar25 = CONCAT44(local_108._4_4_,(undefined4)local_108);
              goto LAB_01af9148;
            }
            uVar16 = (uint)local_48 >> 0x10;
LAB_01af87cc:
            FUN_018a7af8(pppppppuVar21,uVar16);
            pppppppuVar21 = local_8c;
            FUN_01afa738(&local_48,&local_150,local_8c,local_88);
            if ((char)local_48 != '\x04') {
              local_34 = local_44;
              local_38 = local_48;
              cVar5 = FUN_005ef5e8(&local_38);
              if (cVar5 == '%') {
                FUN_0069263c(local_48,local_44);
                pppppppuVar23 = (undefined4 *******)&DAT_80000000;
                local_170 = (undefined4 *******)&DAT_0000001d;
                local_48 = (undefined4 *******)0x53467b;
              }
              else {
                pppppppuVar23 = (undefined4 *******)&DAT_80000001;
                local_170 = local_44;
              }
              FUN_019bb7e0(local_90,pppppppuVar21);
              pppppppuVar21 = local_48;
              local_48 = pppppppuVar23;
              goto LAB_01af9410;
            }
            FUN_019bb7e0(local_90,pppppppuVar21);
            uVar26 = CONCAT44(local_118._4_4_,(undefined4)local_118);
            uVar25 = CONCAT44(local_108._4_4_,(undefined4)local_108);
          }
        }
        else {
          cVar5 = FUN_005ef5e8(pppppppuVar21);
          if (cVar5 == '%') {
            FUN_0069263c(local_90);
            pppppppuVar21 = (undefined4 *******)0x80000007;
            pppppppuVar19 = (undefined4 *******)0x0;
LAB_01af85b4:
          }
          else {
            local_174 = (uint)local_90 >> 8;
            pppppppuVar21 = (undefined4 *******)&DAT_80000001;
            local_170 = local_8c;
            pppppppuVar19 = local_90;
          }
          uVar25 = CONCAT44(local_108._4_4_,(undefined4)local_108);
          uVar26 = CONCAT44(local_118._4_4_,(undefined4)local_118);
          uVar18 = SUB41(pppppppuVar19,0);
          if (pppppppuVar21 != (undefined4 *******)0x80000007) goto LAB_01af9414;
        }
LAB_01af9148:
        local_118 = uVar26;
        local_108 = uVar25;
        FUN_007a910c(&local_140);
      } while (local_144 == 0 && (param_3 <= local_148) <= local_144);
      uVar8 = 0x80000007;
      goto LAB_01af91e8;
    }
    FUN_01af9864(puVar7,"Extra-data field can\'t exceed u16::MAX bytes",0x2c);
    uVar8 = 0x80000001;
  }
  *param_1 = uVar8;
  return;
LAB_01af9184:
  local_140 = &local_38;
  local_134 = FUN_012fd958;
  local_13c = FUN_012fcf18;
  local_138 = local_140;
  FUN_00664898(&local_90,&DAT_00533d96,&local_140);
  FUN_01af9904(puVar7,&local_90);
LAB_01af91e4:
  uVar8 = 0x80000001;
LAB_01af91e8:
  *param_1 = uVar8;
  return;
}

