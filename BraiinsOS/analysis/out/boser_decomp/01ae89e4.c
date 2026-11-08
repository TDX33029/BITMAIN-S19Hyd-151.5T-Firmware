// FUN_01ae89e4 @ 01ae89e4 size=3732 calls_out=15 calls_in=2
// strings: eeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/chrono-0.4.42/src/format/scan.rs | assertion failed: public_values_eq(cert.issuer; issuer_subject)

undefined8
FUN_01ae89e4(int *param_1,undefined4 *param_2,uint param_3,uint param_4,uint param_5,int *param_6)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint uVar24;
  uint *puVar25;
  int *piVar26;
  uint *puVar27;
  uint *puVar28;
  undefined4 *puVar29;
  int *piVar30;
  int *piVar31;
  undefined4 *puVar32;
  uint *puVar33;
  int iVar34;
  undefined4 *puVar35;
  uint uVar36;
  int iVar37;
  uint uVar38;
  int iVar39;
  uint uVar40;
  int iVar41;
  int iVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 *puVar45;
  bool bVar46;
  ulonglong uVar47;
  undefined8 uVar48;
  uint local_194;
  int local_170;
  byte *local_16c;
  int local_168;
  uint local_118;
  int local_114;
  int local_110;
  undefined4 local_e8;
  int local_e4;
  undefined4 local_e0;
  int local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  uVar15 = param_5;
  local_118 = param_2[10];
  local_114 = param_2[0xb];
  local_110 = 0;
  iVar37 = param_2[0x10];
  FUN_01ae9b18(&local_a8,&local_118);
  uVar24 = local_9c;
  uVar38 = local_a0;
  if ((char)local_a8 == '\x01') {
LAB_01ae8a4c:
    uVar36 = local_a8 >> 8 & 0xff;
    goto LAB_01ae8a50;
  }
  FUN_01ae9b18(&local_a8,&local_118);
  if ((char)local_a8 == '\x01') goto LAB_01ae8a4c;
  uVar36 = 9;
  if (((local_9c <= uVar24 && (uint)(uVar38 <= local_a0) <= local_9c - uVar24) ||
      (uVar36 = 5, param_4 <= uVar24 && (uint)(uVar38 <= param_3) <= param_4 - uVar24)) ||
     (uVar36 = 3, local_9c <= param_4 && (uint)(param_3 <= local_a0) <= local_9c - param_4))
  goto LAB_01ae8a50;
  if (local_110 == local_114) {
    if (param_2[0x11] != 0) {
      local_a4 = param_2[0x12];
      local_a0 = 0;
      local_a8 = param_2[0x11];
      uVar47 = FUN_01aea060(&local_a8);
      uVar36 = (uint)(uVar47 >> 0x20);
      if ((uVar47 & 1) == 0) {
        if (local_a0 == local_a4) {
          if (iVar37 == 0) {
LAB_01ae8ba8:
            uVar36 = 2;
            if ((uVar47 & 0x100000000) == 0) goto LAB_01ae8bb4;
          }
          else {
            uVar36 = 7;
            if ((uVar47 & 0x100000000) != 0) goto LAB_01ae8bb4;
          }
        }
        else {
          uVar48 = FUN_01899080(&local_a8);
          uVar36 = 0;
          if (((byte *)uVar48 != (byte *)0x0) && ((int)((ulonglong)uVar48 >> 0x20) == 1)) {
            if (iVar37 == 0) goto LAB_01ae8ba8;
            uVar36 = 7;
            if (((uVar47 & 0x100000000) != 0) && (uVar36 = 0x18, uVar15 <= *(byte *)uVar48))
            goto LAB_01ae8bb4;
          }
        }
      }
      else if ((uVar36 & 0xff) == 0x26) {
LAB_01ae8bb4:
        uVar36 = 0;
        uVar44 = 0;
        if (local_a0 != local_a4) goto LAB_01ae8a6c;
        goto LAB_01ae8bd4;
      }
      goto LAB_01ae8a50;
    }
    uVar36 = 7;
    if (iVar37 == 0) {
LAB_01ae8bd4:
      iVar41 = param_2[0x15];
      if (iVar41 != 0) {
        puVar28 = (uint *)param_2[0x16];
        puVar33 = (uint *)0x0;
        iVar42 = param_1[1];
        uVar38 = param_1[2];
        do {
          if (puVar28 <= puVar33) goto LAB_01ae8dac;
          pbVar1 = (byte *)(iVar41 + (int)puVar33);
          uVar36 = 0;
          if ((~*pbVar1 & 0x1f) == 0) goto LAB_01ae8db0;
          uVar44 = 0;
          if (puVar28 <= (uint *)((int)puVar33 + 1U)) goto LAB_01ae8a6c;
          bVar2 = *(byte *)(iVar41 + (int)((int)puVar33 + 1U));
          puVar16 = (uint *)((int)puVar33 + 2);
          uVar24 = (uint)bVar2;
          if ((char)bVar2 < '\0') {
            if (3 < uVar24 - 0x81) goto LAB_01ae8a6c;
            puVar27 = &switchD_01ae8c94::switchdataD_01ae8c98;
            puVar25 = (uint *)(&switchD_01ae8c94::switchdataD_01ae8c98)[uVar24 - 0x81];
            switch(uVar24) {
            case 0x81:
              if ((puVar16 < puVar28) &&
                 (0x7fffffff < (uint)(int)(char)*(byte *)(iVar41 + (int)puVar16))) {
                uVar24 = (uint)*(byte *)(iVar41 + (int)puVar16);
                puVar16 = (uint *)((int)puVar33 + 3);
                goto LAB_01ae8c3c;
              }
              goto LAB_01ae8a6c;
            case 0x82:
              if (puVar28 > puVar16) {
                puVar25 = (uint *)((int)puVar33 + 3);
              }
              if ((puVar28 <= puVar16 || puVar28 <= puVar25) ||
                 (*(char *)(iVar41 + (int)puVar16) == '\0')) goto LAB_01ae8a6c;
              uVar24 = (uint)CONCAT11(*(char *)(iVar41 + (int)puVar16),
                                      *(undefined1 *)(iVar41 + (int)puVar25));
              puVar16 = puVar33 + 1;
              break;
            case 0x83:
              if (puVar28 <= puVar16) goto LAB_01ae8a6c;
              puVar25 = (uint *)((int)puVar33 + 3);
              if (puVar28 > puVar25) {
                puVar27 = puVar33 + 1;
              }
              if ((puVar28 <= puVar25 || puVar28 <= puVar27) ||
                 (*(byte *)(iVar41 + (int)puVar16) == 0)) goto LAB_01ae8a6c;
              uVar24 = (uint)*(byte *)(iVar41 + (int)puVar25) << 8 |
                       (uint)*(byte *)(iVar41 + (int)puVar16) << 0x10 |
                       (uint)*(byte *)(iVar41 + (int)puVar27);
              puVar16 = (uint *)((int)puVar33 + 5);
              break;
            case 0x84:
              if (puVar16 < puVar28) {
                puVar25 = (uint *)((int)puVar33 + 3);
                if (puVar25 < puVar28) {
                  puVar27 = puVar33 + 1;
                }
                if (puVar25 < puVar28 && puVar27 < puVar28) {
                  if (((uint *)((int)puVar33 + 5) < puVar28) &&
                     (*(byte *)(iVar41 + (int)puVar16) != 0)) {
                    uVar24 = (uint)*(byte *)(iVar41 + (int)puVar25) << 0x10 |
                             (uint)*(byte *)(iVar41 + (int)puVar16) << 0x18 |
                             (uint)*(byte *)(iVar41 + (int)puVar27) << 8 |
                             (uint)*(byte *)(iVar41 + (int)puVar33 + 5);
                    puVar16 = (uint *)((int)puVar33 + 6);
                    break;
                  }
                  goto LAB_01ae8da4;
                }
              }
              goto LAB_01ae8a6c;
            }
            if (uVar24 < 0xffff) goto LAB_01ae8c3c;
LAB_01ae8da4:
            uVar36 = 0;
            goto LAB_01ae8a6c;
          }
LAB_01ae8c3c:
          puVar33 = (uint *)((int)puVar16 + uVar24);
          if (((CARRY4((uint)puVar16,uVar24)) || (puVar28 < puVar33)) || (*pbVar1 != 6))
          goto LAB_01ae8da4;
          if ((uVar38 == uVar24) &&
             (iVar6 = thunk_FUN_01bed842(iVar42,iVar41 + (int)puVar16,uVar38), iVar6 == 0))
          goto LAB_01ae8dcc;
        } while (puVar33 != puVar28);
        uVar36 = 0x19;
        goto LAB_01ae8a6c;
      }
      uVar36 = 0x19;
      if (*param_1 == 1) {
LAB_01ae8dcc:
        if (iVar37 == 0) {
          if (uVar15 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01304210(0,&DAT_00533278,&param_5,0);
          }
        }
        else {
          uVar36 = 0x15;
          uVar44 = 0;
          if (5 < uVar15) goto LAB_01ae8a6c;
        }
        if (param_1[6] != 0) {
          iVar6 = param_1[10];
          uVar44 = 1;
          piVar26 = (int *)param_1[3];
          iVar41 = param_1[4];
          puVar29 = (undefined4 *)param_1[5];
          puVar32 = puVar29 + param_1[6] * 6;
          puVar17 = (undefined4 *)param_1[9];
          iVar42 = param_2[9];
          uVar7 = param_2[8];
          uVar38 = 0x1b;
LAB_01ae8e80:
          uVar24 = 0x1b;
          if (iVar42 == puVar29[1]) {
            uVar43 = *puVar29;
            iVar8 = thunk_FUN_01bed842(uVar7,uVar43,iVar42);
            uVar24 = 0x1b;
            if (iVar8 == 0) {
              local_16c = (byte *)0x0;
              puVar45 = puVar29 + 3;
              puVar35 = puVar29 + 2;
              local_170 = *param_6;
              puVar9 = param_2;
              local_168 = iVar42;
              do {
                if (local_170 == 0) {
LAB_01ae9848:
                  uVar36 = 0x16;
                  goto LAB_01ae8a6c;
                }
                uVar18 = *puVar35;
                uVar36 = 0x23;
                uVar19 = *puVar45;
                uVar20 = puVar9[2];
                uVar21 = puVar9[3];
                iVar34 = puVar9[5];
                uVar22 = puVar9[4];
                uVar23 = puVar9[6];
                uVar10 = puVar9[7];
                iVar8 = local_170 + -1;
                *param_6 = iVar8;
                piVar30 = piVar26;
                do {
                  do {
                    if (piVar30 == piVar26 + iVar41) goto LAB_01ae9568;
                    piVar31 = piVar30 + 1;
                    iVar39 = *piVar30;
                    piVar30 = piVar31;
                  } while ((iVar34 != *(int *)(iVar39 + 0xc)) ||
                          (iVar11 = thunk_FUN_01bed842(uVar22,*(undefined4 *)(iVar39 + 8),iVar34),
                          iVar11 != 0));
                  uVar48 = FUN_01aeafe0(iVar39,uVar18,uVar19,uVar20,uVar21,uVar23,uVar10);
                  uVar24 = (uint)((ulonglong)uVar48 >> 0x20);
                  uVar36 = (uint)uVar48 & 0xff;
                } while (uVar36 == 0x25);
                if (uVar36 != 0x26) goto LAB_01ae9568;
                if (iVar6 != 0) {
                  if (puVar9[9] != local_168) {
LAB_01ae9874:
                    /* WARNING: Subroutine does not return */
                    FUN_012fb0ec("assertion failed: public_values_eq(cert.issuer, issuer_subject)",
                                 0x3f,&DAT_01d301f0);
                  }
                  iVar34 = thunk_FUN_01bed842(puVar9[8],uVar43,local_168);
                  puVar35 = puVar17;
                  if (iVar34 != 0) goto LAB_01ae9874;
                  do {
                    iVar34 = puVar35[1];
                    uVar43 = *puVar35;
                    uVar48 = (**(code **)(iVar34 + 0xc))(uVar43);
                    uVar24 = puVar9[9];
                    if ((uint)((ulonglong)uVar48 >> 0x20) == uVar24) {
                      uVar48 = thunk_FUN_01bed842((int)uVar48,puVar9[8]);
                      uVar24 = (uint)((ulonglong)uVar48 >> 0x20);
                      if ((int)uVar48 == 0) {
                        if (iVar8 == 0) goto LAB_01ae9848;
                        local_170 = local_170 + -2;
                        *param_6 = local_170;
                        uVar36 = (**(code **)(iVar34 + 0x14))(uVar43,piVar26,iVar41,uVar18,uVar19);
                        uVar13 = uVar36 & 0xff;
                        if (uVar13 != 0x26) {
                          if (uVar13 == 0xe) {
                            uVar24 = 0xd;
                            goto switchD_01ae9144_default;
                          }
                          if (uVar13 != 0x23) {
                            uVar24 = 0x24;
                            if (uVar13 != 0x25) goto LAB_01ae9568;
                            goto LAB_01ae9590;
                          }
                          uVar24 = 0x22;
                          goto switchD_01ae9144_default;
                        }
                        if (local_16c != (byte *)0x0) {
                          uVar24 = 0;
                          if (local_194 == 0) goto switchD_01ae9144_default;
                          uVar36 = ~(uint)*local_16c;
                          bVar46 = (uVar36 & 0x1f) == 0;
                          if (!bVar46) {
                            uVar36 = local_194;
                          }
                          if (bVar46 || uVar36 == 1) goto switchD_01ae9144_default;
                          uVar36 = (uint)local_16c[1];
                          if ((char)local_16c[1] < '\0') {
                            switch(uVar36) {
                            case 0x81:
                              if ((2 < local_194) && (0x7fffffff < (uint)(int)(char)local_16c[2])) {
                                uVar36 = (uint)local_16c[2];
                                uVar13 = 3;
                                goto LAB_01ae9244;
                              }
                              goto switchD_01ae9144_default;
                            case 0x82:
                              if ((local_194 < 4) || (local_16c[2] == 0))
                              goto switchD_01ae9144_default;
                              uVar36 = (uint)CONCAT11(local_16c[2],local_16c[3]);
                              uVar13 = 4;
                              break;
                            case 0x83:
                              if ((local_194 < 5) || (local_16c[2] == 0))
                              goto switchD_01ae9144_default;
                              uVar36 = (uint)local_16c[3] << 8 | (uint)local_16c[2] << 0x10 |
                                       (uint)local_16c[4];
                              uVar13 = 5;
                              break;
                            case 0x84:
                              if (((local_194 < 3) || (local_194 < 6)) || (local_16c[2] == 0))
                              goto switchD_01ae9144_default;
                              uVar36 = (uint)local_16c[3] << 0x10 | (uint)local_16c[2] << 0x18 |
                                       (uint)local_16c[4] << 8 | (uint)local_16c[5];
                              uVar13 = 6;
                              break;
                            default:
                              goto switchD_01ae9144_default;
                            }
                            if (0xfffe < uVar36) goto switchD_01ae9144_default;
                          }
                          else {
                            uVar13 = 2;
                          }
LAB_01ae9244:
                          if ((((CARRY4(uVar13,uVar36)) || (local_194 < uVar13 + uVar36)) ||
                              (*local_16c != 3)) || (uVar36 == 0)) goto switchD_01ae9144_default;
                          local_16c = local_16c + uVar13;
                          uVar13 = (uint)*local_16c;
                          if ((7 < uVar13) || ((uVar36 == 1 && (uVar13 != 0))))
                          goto switchD_01ae9144_default;
                          if (uVar36 == 1) {
                    /* WARNING: Subroutine does not return */
                            FUN_012fb12c(0xffffffff,0,&DAT_01d30170);
                          }
                          if ((uVar13 != 0) &&
                             (((uint)(local_16c + 1)[uVar36 - 2] & ~(-1 << uVar13)) != 0))
                          goto LAB_01ae9590;
                          if ((local_16c[1] & 2) == 0) {
                            uVar24 = 0xf;
                            goto switchD_01ae9144_default;
                          }
                        }
                        (**(code **)(iVar34 + 0x10))(&local_a8,uVar43,*puVar9,puVar9[1]);
                        if (local_a8 == 3 && local_a4 == 0) {
                          uVar36 = local_a0 & 0xff;
                          goto LAB_01ae9568;
                        }
                        uVar24 = local_a4;
                        if (local_a8 == 2 && local_a4 == 0) goto LAB_01ae9044;
                        uVar24 = 6;
                        goto switchD_01ae9144_default;
                      }
                    }
                    puVar35 = puVar35 + 2;
                  } while (puVar35 != puVar17 + iVar6 * 2);
                }
                local_170 = iVar8;
LAB_01ae9044:
                if ((undefined4 *)puVar9[0x10] == (undefined4 *)0x0) goto LAB_01ae9310;
                puVar45 = puVar9 + 0xf;
                local_168 = puVar9[0xd];
                local_16c = (byte *)puVar9[0x13];
                local_194 = puVar9[0x14];
                puVar35 = puVar9 + 0xe;
                uVar43 = puVar9[0xc];
                puVar9 = (undefined4 *)puVar9[0x10];
              } while( true );
            }
          }
          goto LAB_01ae9590;
        }
        uVar38 = 0x1b;
        goto LAB_01ae95d0;
      }
    }
  }
  else {
LAB_01ae8dac:
    uVar36 = 0;
  }
  goto LAB_01ae8db0;
LAB_01ae9310:
  local_3c = puVar29[4];
  if (local_3c == 0) {
    local_3c = 0;
  }
  else {
    uVar24 = puVar29[5];
  }
  puVar9 = param_2;
LAB_01ae9360:
  if (local_3c == 0) {
LAB_01ae9528:
    uVar36 = uVar38;
    if ((undefined4 *)puVar9[0x10] != (undefined4 *)0x0) goto code_r0x01ae9534;
    goto LAB_01ae9838;
  }
  local_34 = 0;
  local_38 = uVar24;
  FUN_01ae6994(&local_a8,&local_3c,0xa0);
  uVar13 = local_a0;
  uVar24 = local_a4;
  if ((char)local_a8 != '\x01') {
    FUN_01ae6994(&local_a8,&local_3c,0xa1);
    uVar5 = local_a0;
    uVar14 = local_a4;
    if ((char)local_a8 != '\x01') {
      puVar35 = puVar9;
      do {
        uVar12 = puVar35[0xc];
        uVar40 = puVar35[0xd];
        if (puVar35[0x19] == 0) {
LAB_01ae948c:
          local_a8 = CONCAT31(local_a8._1_3_,1);
          local_a4 = uVar12;
          local_a0 = uVar40;
          uVar36 = FUN_01ae6b6c(&local_a8,0,uVar24,uVar13,param_6);
          uVar36 = uVar36 & 0xff;
          if (uVar36 != 0x27) goto LAB_01ae9504;
          uVar36 = FUN_01ae6b6c(&local_a8,1,uVar14,uVar5,param_6);
          uVar36 = uVar36 & 0xff;
          if (uVar36 != 0x27) goto LAB_01ae9504;
        }
        else {
          local_2c = puVar35[0x1a];
          local_28 = 0;
          local_30 = puVar35[0x19];
          do {
            if (local_28 == local_2c) goto LAB_01ae948c;
            FUN_01ae6550(&local_118,&local_30);
            uVar3 = local_118;
            uVar36 = local_118 >> 8 & 0xff;
            if ((char)local_118 == '\x04') break;
            FUN_01bed4e2((uint)&local_a8 | 2,(uint)&local_118 | 2,10);
            piVar30 = param_6;
            local_a8._0_2_ = (undefined2)uVar3;
            uVar36 = FUN_01ae6b6c(&local_a8,0,uVar24,uVar13,param_6);
            uVar36 = uVar36 & 0xff;
            if (uVar36 != 0x27) break;
            uVar36 = FUN_01ae6b6c(&local_a8,1,uVar14,uVar5,piVar30);
            uVar36 = uVar36 & 0xff;
          } while (uVar36 == 0x27);
LAB_01ae9504:
          if (uVar36 != 0x26) goto LAB_01ae9568;
        }
        puVar35 = (undefined4 *)puVar35[0x10];
      } while (puVar35 != (undefined4 *)0x0);
      if (local_34 == local_38) goto LAB_01ae9528;
      uVar24 = 0;
switchD_01ae9144_default:
LAB_01ae9590:
      puVar29 = puVar29 + 6;
      uVar13 = FUN_01ae8724(uVar38);
      uVar14 = FUN_01ae8724(uVar24);
      uVar36 = uVar38;
      if (uVar13 < uVar14) {
        uVar36 = uVar24;
      }
      uVar38 = uVar36;
      if (puVar29 == puVar32) goto LAB_01ae9804;
      goto LAB_01ae8e80;
    }
  }
  uVar36 = local_a8 >> 8 & 0xff;
LAB_01ae9568:
  if (((uVar36 & 0xff) < 0x17) && ((1 << (uVar36 & 0xff) & 0x580000U) != 0)) goto LAB_01ae8a6c;
  uVar24 = uVar36;
  goto LAB_01ae9590;
code_r0x01ae9534:
  local_3c = puVar9[0x17];
  uVar24 = puVar9[0x18];
  puVar9 = (undefined4 *)puVar9[0x10];
  goto LAB_01ae9360;
LAB_01ae9838:
  uVar44 = 2;
  goto LAB_01ae8a6c;
LAB_01ae9804:
  if (((uVar36 & 0xff) < 0x17) && (uVar44 = 1, (1 << (uVar36 & 0xff) & 0x580000U) != 0))
  goto LAB_01ae8a6c;
LAB_01ae95d0:
  uVar36 = uVar38;
  if (param_1[8] != 0) {
    puVar29 = (undefined4 *)param_1[7];
    puVar17 = puVar29 + param_1[8] * 2;
    iVar41 = param_2[9];
    uVar44 = param_2[8];
    if (iVar37 != 0) {
      uVar15 = uVar15 + 1;
    }
    do {
      FUN_01ae75f4(&local_a8,*puVar29,puVar29[1],param_2);
      uVar24 = local_a8;
      uVar4 = (undefined1)local_a4;
      uVar36 = local_a4 & 0xff;
      if (local_a8 == 0) {
        uVar47 = (ulonglong)uVar36 << 0x20;
        if (uVar36 < 0x17) {
          uVar47 = CONCAT44(local_a4,(uint)((1 << uVar36 & 0x580000U) != 0)) & 0xffffffffff;
        }
      }
      else {
        FUN_01bed4e2((uint)&local_118 | 5,(uint)&local_a8 | 5,0x2b);
        uVar7 = local_78;
        local_e0 = local_70;
        local_dc = iStack_6c;
        uStack_d8 = uStack_68;
        uStack_d4 = uStack_64;
        local_d0 = local_60;
        uStack_cc = uStack_5c;
        uStack_c8 = uStack_58;
        uStack_c4 = uStack_54;
        local_c0 = local_50;
        uStack_bc = uStack_4c;
        uStack_b8 = uStack_48;
        uStack_b4 = uStack_44;
        uStack_b0 = uStack_40;
        local_114 = CONCAT31(local_114._1_3_,uVar4);
        local_e4 = local_74;
        local_e8 = local_78;
        local_118 = uVar24;
        uVar47 = 0x1b00000000;
        if (local_74 == iVar41) {
          iVar37 = thunk_FUN_01bed842(local_78,uVar44,iVar41);
          uVar47 = 0x1b00000000;
          if (iVar37 == 0) {
            puVar32 = param_2;
            do {
              if (local_dc == puVar32[0xf]) {
                iVar37 = thunk_FUN_01bed842(local_e0,puVar32[0xe],local_dc);
                bVar46 = iVar37 == 0;
                if (bVar46) {
                  iVar37 = puVar32[0xd];
                }
                if ((bVar46 && iVar41 == iVar37) &&
                   (iVar37 = thunk_FUN_01bed842(uVar7,puVar32[0xc],iVar41), iVar37 == 0)) {
                  uVar47 = 0x1b00000000;
                  goto LAB_01ae97bc;
                }
              }
              puVar32 = (undefined4 *)puVar32[0x10];
            } while (puVar32 != (undefined4 *)0x0);
            if (param_6[1] == 0) {
              uVar47 = 0x1400000001;
            }
            else {
              param_6[1] = param_6[1] + -1;
              uVar47 = FUN_01ae89e4(param_1,&local_118,param_3,param_4,uVar15,param_6);
            }
          }
        }
      }
LAB_01ae97bc:
      uVar36 = (uint)(uVar47 >> 0x20);
      if (((uint)uVar47 & 0xff) == 2) goto LAB_01ae9838;
      if ((uVar47 & 1) != 0) {
        uVar44 = 1;
        goto LAB_01ae8a6c;
      }
      puVar29 = puVar29 + 2;
      uVar24 = FUN_01ae8724(uVar38);
      uVar13 = FUN_01ae8724(uVar36);
      if (uVar13 <= uVar24) {
        uVar36 = uVar38;
      }
      uVar38 = uVar36;
      uVar36 = uVar38;
    } while (puVar29 != puVar17);
  }
LAB_01ae8a50:
  if ((uVar36 & 0xff) < 0x17) {
    uVar44 = 1;
    if ((1 << (uVar36 & 0xff) & 0x580000U) == 0) {
      uVar44 = 0;
    }
    goto LAB_01ae8a6c;
  }
LAB_01ae8db0:
  uVar44 = 0;
LAB_01ae8a6c:
  return CONCAT44(uVar36,uVar44);
}

