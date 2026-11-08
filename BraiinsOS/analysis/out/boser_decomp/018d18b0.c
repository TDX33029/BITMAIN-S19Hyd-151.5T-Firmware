// FUN_018d18b0 @ 018d18b0 size=4304 calls_out=25 calls_in=0
// strings: certificate transparency logs have expired; validation disabled | rustls::verify | rustls::verify | rustls::verify | rustls::verify | rustls::verify

/* WARNING: Type propagation algorithm not settling */

void FUN_018d18b0(char *param_1,int *param_2,int param_3,int param_4,int param_5,char *param_6,
                 undefined4 param_7,int param_8,undefined4 param_9,char *******param_10,
                 char *******param_11,char *******param_12,char *******param_13)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  ulonglong uVar12;
  char cVar13;
  undefined4 *puVar14;
  char ******ppppppcVar15;
  uint uVar16;
  char *pcVar17;
  uint uVar18;
  char *******pppppppcVar19;
  undefined4 *puVar20;
  uint uVar21;
  char *******pppppppcVar22;
  code *pcVar23;
  uint uVar24;
  uint uVar25;
  undefined *puVar26;
  int iVar27;
  int *piVar28;
  int iVar29;
  undefined4 uVar30;
  char *******pppppppcVar31;
  uint uVar32;
  int iVar33;
  undefined4 uVar34;
  uint uVar35;
  char *pcVar36;
  int *piVar37;
  char *******pppppppcVar38;
  int iVar39;
  int iVar40;
  uint uVar41;
  char cVar42;
  int iVar43;
  int iVar44;
  bool bVar45;
  undefined8 uVar46;
  ulonglong uVar47;
  undefined *local_1ec;
  uint local_1a4;
  int local_190;
  int local_18c;
  char *******local_188;
  char *******local_184;
  char *******local_180;
  char *******pppppppcStack_17c;
  char *******local_178;
  char *******local_174;
  char *******local_170;
  undefined1 *local_16c;
  char *******local_120;
  char *******local_11c;
  undefined2 local_114;
  char local_112;
  undefined4 local_110;
  undefined4 local_10c;
  char *******local_108;
  char *******local_104;
  char *******local_100;
  char *******local_fc;
  char *******local_f8;
  int local_f4;
  int local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  char *local_a4;
  undefined4 local_a0;
  char *******pppppppcStack_9c;
  char *******pppppppcStack_98;
  char *******pppppppcStack_94;
  undefined1 auStack_90 [80];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  char *******local_34;
  char *******local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  iVar29 = *(int *)(param_3 + 4);
  iVar33 = *(int *)(param_3 + 8);
  local_18c = 0;
  FUN_01ae75f4(&local_a4,iVar29,iVar33,0);
  if (local_a4 == (char *)0x0) {
    FUN_018cc5e4(&local_10c,(uint)local_a0 & 0xff);
    *(char ********)param_1 = local_10c;
    *(char ********)(param_1 + 4) = local_108;
    *(char ********)(param_1 + 8) = local_104;
    *(char ********)(param_1 + 0xc) = local_100;
    return;
  }
  FUN_01bed4e2((int)&local_10c + 1,(int)&local_a0 + 1,0x67);
  local_10c = (char *******)CONCAT31(local_10c._1_3_,(undefined1)local_a0);
  local_110 = local_a4;
  local_38 = local_10c;
  local_34 = local_108;
  local_30 = local_104;
  local_2c = local_100;
  FUN_01bed4e2(&local_178,&local_fc,0x58);
  local_188 = local_38;
  local_184 = local_34;
  local_180 = local_30;
  pppppppcStack_17c = local_2c;
  FUN_01bed4e2(auStack_90,&local_178,0x58);
  local_a0 = local_188;
  pppppppcStack_9c = local_184;
  pppppppcStack_98 = local_180;
  pppppppcStack_94 = pppppppcStack_17c;
  iVar39 = *(int *)(param_2[6] + 0xc);
  uVar41 = *(uint *)(param_2[6] + 0x10);
  if (param_5 == 0) {
    local_190 = 4;
  }
  else {
    local_190 = FUN_01298504(param_5 << 3,4);
    if (local_190 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,param_5 << 3);
    }
    puVar14 = (undefined4 *)(local_190 + 4);
    puVar20 = (undefined4 *)(param_4 + 4);
    iVar27 = param_5;
    do {
      uVar30 = *puVar20;
      uVar34 = puVar20[1];
      puVar20 = puVar20 + 3;
      puVar14[-1] = uVar30;
      *puVar14 = uVar34;
      puVar14 = puVar14 + 2;
      iVar27 = iVar27 + -1;
    } while (iVar27 != 0);
    local_18c = param_5;
  }
  uVar30 = 0;
  iVar27 = uVar41 * 0x18;
  if (0x5555555 < uVar41) {
LAB_018d1a40:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar30,iVar27);
  }
  if (iVar27 == 0) {
    ppppppcVar15 = (char ******)0x4;
    local_1a4 = 0;
  }
  else {
    uVar30 = 4;
    ppppppcVar15 = (char ******)FUN_01298504(iVar27,4);
    local_1a4 = uVar41;
    if (ppppppcVar15 == (char ******)0x0) goto LAB_018d1a40;
  }
  uVar35 = 0;
  if (uVar41 != 0) {
    piVar28 = (int *)(iVar39 + 0x14);
    iVar39 = 0;
    uVar35 = uVar41;
    do {
      uVar21 = piVar28[-3];
      uVar16 = piVar28[4];
      if (uVar21 < uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar16,uVar21,uVar21,&DAT_01d22c5c);
      }
      piVar1 = piVar28 + -4;
      iVar27 = 0;
      if (piVar28[1] != -0x80000000) {
        iVar27 = piVar28[2];
      }
      iVar44 = piVar28[-1];
      iVar43 = *piVar28;
      iVar40 = piVar28[3];
      piVar28 = piVar28 + 10;
      piVar37 = (int *)((int)ppppppcVar15 - iVar39);
      *piVar37 = *piVar1 + uVar16;
      iVar39 = iVar39 + -0x18;
      uVar35 = uVar35 - 1;
      piVar37[1] = uVar21 - uVar16;
      piVar37[2] = iVar44;
      piVar37[3] = iVar43;
      piVar37[4] = iVar27;
      piVar37[5] = iVar40;
    } while (uVar35 != 0);
    uVar35 = uVar41;
  }
  local_30 = param_13;
  local_38 = param_11;
  local_34 = param_12;
  local_174 = (char *******)0x0;
  local_178 = (char *******)0x0;
  local_170 = (char *******)0x0;
  FUN_019ac248(&local_110,&local_38,&local_178);
  pppppppcVar38 = local_104;
  pppppppcVar22 = local_108;
  cVar13 = '\x0e';
  if (((uint)local_110 & 1) == 0) {
    local_10c = (char *******)&DAT_0056fb48;
    local_110 = &DAT_00000001;
    local_ec = 4;
    local_170 = (char *******)0x3d090;
    local_f4 = local_190;
    local_104 = (char *******)&PTR_DAT_01d22f28;
    local_174 = (char *******)0x30d40;
    local_e8 = 0;
    local_f0 = local_18c;
    local_100 = (char *******)&DAT_0000000c;
    local_108 = (char *******)&DAT_00000008;
    local_178 = (char *******)&DAT_00000064;
    local_fc = (char *******)ppppppcVar15;
    local_f8 = (char *******)uVar35;
    uVar46 = FUN_01ae89e4(&local_110,&local_a4,pppppppcVar22,pppppppcVar38,0,&local_178);
    uVar41 = (uint)uVar46 & 0xff;
    bVar45 = uVar41 != 2;
    if (bVar45) {
      uVar41 = (uint)((ulonglong)uVar46 >> 0x20) & 0xff;
    }
    cVar13 = '\x14';
    if (bVar45 && uVar41 != 0x26) {
      FUN_018cc5e4(&local_110);
      cVar2 = (char)local_110;
      if ((char)local_110 != '\x14') {
        FUN_01bed4e2(&local_188,(uint)&local_110 | 1,0xf);
        cVar13 = cVar2;
      }
    }
  }
  FUN_0134aee0(local_1a4,ppppppcVar15,4,0x18);
  FUN_0134aee0(local_18c,local_190,4,8);
  if (cVar13 != '\x14') {
    FUN_01bed4e2(param_1 + 1,&local_188,0xf);
    *param_1 = cVar13;
    return;
  }
  if (((undefined1 *)param_2[4] != &DAT_3b9aca00) && (uVar41 = param_2[1], uVar41 != 0)) {
    local_178 = param_11;
    local_170 = param_13;
    local_174 = param_12;
    FUN_019ac248(&local_110,param_2 + 2,&local_178);
    if (local_110 == (char *)0x0 && local_10c == (char *******)0x0) {
      local_34 = param_12;
      cVar13 = '\0';
      local_38 = param_11;
      local_30 = param_13;
      local_174 = (char *******)0x0;
      local_178 = (char *******)0x0;
      local_170 = (char *******)0x0;
      FUN_019ac248(&local_110,&local_38,&local_178);
      pppppppcVar38 = local_104;
      pppppppcVar22 = local_108;
      if (((uint)local_110 & 1) == 0) {
        uVar12 = ZEXT48(local_108);
        uVar21 = (uint)(uVar12 * 1000 >> 0x20);
        uVar35 = (uint)(ZEXT48(local_104) * 1000);
        uVar16 = uVar21 + uVar35;
        if ((int)(ZEXT48(local_104) * 1000 >> 0x20) == 0 && !CARRY4(uVar21,uVar35)) {
          pcVar23 = *(code **)(param_8 + 0xc);
          uVar47 = (*pcVar23)(param_7);
          if ((int)uVar47 != 0) {
            iVar39 = *param_2;
            do {
              uVar35 = (uint)(uVar47 >> 0x20);
              pcVar17 = (char *)uVar47;
              if (uVar35 == 0) goto LAB_018d23d0;
              cVar13 = '\x03';
              if (*pcVar17 == '\0') {
                if ((uVar47 < 0x2100000000) || (uVar47 < 0x2b00000000)) {
LAB_018d23d0:
                  cVar13 = '\0';
                }
                else {
                  cVar2 = pcVar17[0x29];
                  cVar3 = pcVar17[0x2a];
                  uVar21 = (uint)CONCAT11(cVar2,cVar3);
                  uVar32 = uVar21 + 0x2b;
                  if (uVar35 < uVar32) goto LAB_018d23d0;
                  uVar24 = uVar21 + 0x2d;
                  if (uVar35 < uVar24) {
                    local_110 = (char *)0x0;
                    local_10c = (char *******)((uint)local_10c & 0xffffff00);
                    uVar24 = uVar32;
                  }
                  else {
                    local_10c = (char *******)0x2;
                    local_110 = pcVar17 + uVar32;
                  }
                  bVar4 = pcVar17[0x21];
                  bVar5 = pcVar17[0x22];
                  bVar6 = pcVar17[0x23];
                  bVar7 = pcVar17[0x24];
                  cVar8 = pcVar17[0x28];
                  cVar9 = pcVar17[0x27];
                  bVar10 = pcVar17[0x26];
                  bVar11 = pcVar17[0x25];
                  uVar32 = FUN_01961774(&local_110);
                  uVar18 = uVar32;
                  if ((uVar32 & 1) == 0) {
                    uVar25 = uVar24 + 2;
                    if (uVar35 < uVar25) {
                      local_110 = (char *)0x0;
                      local_10c = (char *******)((uint)local_10c & 0xffffff00);
                      uVar25 = uVar24;
                    }
                    else {
                      local_10c = (char *******)0x2;
                      local_110 = pcVar17 + uVar24;
                    }
                    uVar18 = FUN_01961774(&local_110);
                    if ((uVar18 & 1) == 0) {
                      if (uVar25 + (uVar18 >> 0x10) == uVar35) {
                        uVar35 = 0;
                        iVar27 = uVar41 << 2;
                        do {
                          iVar40 = thunk_FUN_01bed842(pcVar17 + 1,
                                                      *(int *)(iVar39 + uVar35 * 4) + 0x20,0x20);
                          if (iVar40 == 0) {
                            if (uVar41 <= uVar35) {
                    /* WARNING: Subroutine does not return */
                              FUN_012fb12c(uVar35,uVar41,&DAT_01d27160);
                            }
                            iVar27 = *(int *)(iVar39 + uVar35 * 4);
                            uVar32 = uVar32 >> 0x10;
                            cVar13 = '\x01';
                            cVar42 = '\v';
                            puVar26 = &DAT_01d30210;
                            uVar30 = *(undefined4 *)(iVar27 + 0x18);
                            uVar34 = *(undefined4 *)(iVar27 + 0x1c);
                            if (uVar32 < 0x501) {
                              if (uVar32 == 0x401) {
                                local_1ec = &DAT_01d304b4;
                                goto LAB_018d254c;
                              }
                              if (uVar32 != 0x403) goto LAB_018d23dc;
                              local_1ec = &DAT_01d30474;
                            }
                            else if (uVar32 == 0x501) {
                              local_1ec = &DAT_01d304c0;
LAB_018d254c:
                              puVar26 = &DAT_01d27170;
                            }
                            else {
                              if (uVar32 != 0x503) goto LAB_018d23dc;
                              local_1ec = &DAT_01d304a4;
                            }
                            pppppppcVar19 = (char *******)thunk_FUN_01be5118(2);
                            if (pppppppcVar19 == (char *******)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_0066439c(1,2);
                            }
                            local_108 = (char *******)0x2;
                            *(undefined2 *)pppppppcVar19 = 0;
                            local_110 = (char *)0x2;
                            local_10c = pppppppcVar19;
                            FUN_006666a0(&local_110);
                            *(byte *)((int)local_10c + 2) = bVar4;
                            local_108 = (char *******)0x3;
                            if (local_110 == &DAT_00000003) {
                              FUN_006666a0(&local_110);
                            }
                            *(byte *)((int)local_10c + 3) = bVar5;
                            local_108 = (char *******)0x4;
                            if (local_110 == &SUB_00000004) {
                              FUN_006666a0(&local_110);
                            }
                            *(byte *)(local_10c + 1) = bVar6;
                            local_108 = (char *******)0x5;
                            if (local_110 == &DAT_00000005) {
                              FUN_006666a0(&local_110);
                            }
                            *(byte *)((int)local_10c + 5) = bVar7;
                            local_108 = (char *******)0x6;
                            if (local_110 == &DAT_00000006) {
                              FUN_006666a0(&local_110);
                            }
                            uVar41 = (uint)bVar5 << 0x10 | (uint)bVar4 << 0x18 | (uint)bVar6 << 8 |
                                     (uint)bVar7;
                            *(byte *)((int)local_10c + 6) = bVar11;
                            local_108 = (char *******)0x7;
                            if (local_110 == &DAT_00000007) {
                              FUN_006666a0(&local_110);
                            }
                            *(byte *)((int)local_10c + 7) = bVar10;
                            local_108 = (char *******)0x8;
                            if (local_110 == &DAT_00000008) {
                              FUN_006666a0(&local_110);
                            }
                            *(char *)(local_10c + 2) = cVar9;
                            local_108 = (char *******)0x9;
                            if (local_110 == &DAT_00000009) {
                              FUN_006666a0(&local_110);
                            }
                            *(char *)((int)local_10c + 9) = cVar8;
                            local_108 = (char *******)&DAT_0000000a;
                            FUN_01ac6d2c(&local_110,"","LayoutErrorsemver version");
                            pppppppcVar19 = local_108;
                            if (local_108 == (char *******)local_110) {
                              FUN_006666a0(&local_110);
                            }
                            pcVar36 = (char *)((int)pppppppcVar19 + 1);
                            *(char *)((int)local_10c + (int)pppppppcVar19) =
                                 (char)((uint)iVar33 >> 0x10);
                            if (pcVar36 == local_110) {
                              local_108 = (char *******)pcVar36;
                              FUN_006666a0(&local_110);
                            }
                            *(char *)((int)local_10c + (int)pcVar36) = (char)((uint)iVar33 >> 8);
                            pcVar36 = (char *)((int)pppppppcVar19 + 2);
                            if (pcVar36 == local_110) {
                              local_108 = (char *******)pcVar36;
                              FUN_006666a0(&local_110);
                            }
                            local_108 = (char *******)((int)pppppppcVar19 + 3);
                            *(char *)((int)local_10c + (int)pcVar36) = (char)iVar33;
                            FUN_01ac6d2c(&local_110,iVar29,iVar29 + iVar33);
                            pppppppcVar19 = local_108;
                            if (local_108 == (char *******)local_110) {
                              FUN_006666a0(&local_110);
                            }
                            pcVar36 = (char *)((int)pppppppcVar19 + 1);
                            *(char *)((int)local_10c + (int)pppppppcVar19) = cVar2;
                            if (pcVar36 == local_110) {
                              local_108 = (char *******)pcVar36;
                              FUN_006666a0(&local_110);
                            }
                            *(char *)((int)local_10c + (int)pcVar36) = cVar3;
                            local_108 = (char *******)((int)pppppppcVar19 + 2);
                            FUN_01ac6d2c(&local_110,pcVar17 + 0x2b,pcVar17 + 0x2b + uVar21);
                            pppppppcVar31 = local_108;
                            pppppppcVar19 = local_10c;
                            DataMemoryBarrier(0xb);
                            if (DAT_01d51afc != '\x02') {
                              FUN_0188ff90();
                            }
                            iVar29 = (**(code **)(puVar26 + 0x10))
                                               (local_1ec,uVar30,uVar34,pppppppcVar19,pppppppcVar31,
                                                pcVar17 + uVar25,uVar18 >> 0x10);
                            FUN_0134bd64(local_110,local_10c);
                            if ((iVar29 != 0) ||
                               (cVar13 = '\x02',
                               uVar16 <= uVar41 &&
                               (uint)(((uint)CONCAT11(cVar9,cVar8) |
                                      (uint)bVar11 << 0x18 | (uint)bVar10 << 0x10) <=
                                     (uint)(uVar12 * 1000)) <= uVar16 - uVar41)) goto LAB_018d23dc;
                            if (DAT_01d51b00 < 4) goto LAB_018d1cd8;
                            local_170 = *(char ********)(iVar39 + uVar35 * 4);
                            local_16c = &LAB_018a13b8;
                            pcVar17 = &DAT_005bc2e4;
                            local_174 = (char *******)&LAB_018a13b8;
                            local_178 = local_170 + 4;
                            local_100 = (char *******)&DAT_01d22f68;
                            pppppppcVar22 = (char *******)&local_178;
                            uVar30 = 4;
                            goto LAB_018d1cd4;
                          }
                          uVar35 = uVar35 + 1;
                          iVar27 = iVar27 + -4;
                        } while (iVar27 != 0);
                        cVar13 = '\x04';
                        goto LAB_018d21e0;
                      }
                      goto LAB_018d23d0;
                    }
                  }
                  cVar13 = (char)(uVar18 >> 8);
                  local_188 = (char *******)CONCAT31(local_188._1_3_,cVar13);
                  if (2 < (uVar18 & 0xffff) >> 8) goto LAB_018d21e4;
                }
                cVar42 = '\v';
                goto LAB_018d23dc;
              }
LAB_018d21e0:
              local_188 = (char *******)CONCAT31(local_188._1_3_,cVar13);
LAB_018d21e4:
              pcVar17 = "rustls::verify";
              if (3 < DAT_01d51b00) {
                local_174 = (char *******)FUN_018d2b10;
                local_100 = (char *******)&DAT_01d22f78;
                local_104 = (char *******)&DAT_0000000e;
                local_10c = (char *******)&DAT_0000000e;
                local_178 = (char *******)&local_188;
                local_110 = pcVar17;
                local_108 = (char *******)pcVar17;
                FUN_0193b350(&DAT_005b3195,&local_178,4,&local_110);
              }
              uVar47 = (*pcVar23)(param_7);
            } while ((int)uVar47 != 0);
            cVar42 = '\v';
            if (1 < DAT_01d51b00) {
              local_104 = (char *******)0xe;
              local_10c = (char *******)0xe;
              local_100 = (char *******)&DAT_01d22f58;
              local_110 = pcVar17;
              local_108 = (char *******)pcVar17;
              FUN_0193b350("No valid SCTs provided",0x2d,2,&local_110);
            }
            goto LAB_018d23dc;
          }
          goto LAB_018d1cd8;
        }
      }
      cVar42 = '\x0e';
LAB_018d23dc:
      *(char ********)(param_1 + 8) = pppppppcVar22;
      param_1[1] = cVar13;
      *param_1 = cVar42;
      *(char ********)(param_1 + 0xc) = pppppppcVar38;
      return;
    }
    if (1 < DAT_01d51b00) {
      pcVar17 = "certificate transparency logs have expired, validation disabled";
      local_100 = (char *******)&DAT_01d22f88;
      uVar30 = 2;
      pppppppcVar22 = (char *******)0x7f;
LAB_018d1cd4:
      local_108 = (char *******)0x51e01a;
      local_110 = "rustls::verify";
      local_104 = (char *******)&DAT_0000000e;
      local_10c = (char *******)&DAT_0000000e;
      FUN_0193b350(pcVar17,pppppppcVar22,uVar30,&local_110);
    }
  }
LAB_018d1cd8:
  if ((param_10 != (char *******)0x0) && (4 < DAT_01d51b00)) {
    pppppppcVar22 = (char *******)FUN_01298504(param_10,1);
    if (pppppppcVar22 == (char *******)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,param_10);
    }
    local_178 = param_10;
    local_174 = pppppppcVar22;
    FUN_01bed4e2(pppppppcVar22,param_9,param_10);
    local_34 = (char *******)&LAB_0065eeb8;
    local_38 = (char *******)&local_178;
    local_170 = param_10;
    local_100 = (char *******)&DAT_01d22f98;
    local_104 = (char *******)&DAT_0000000e;
    local_108 = (char *******)0x51e01a;
    local_10c = (char *******)&DAT_0000000e;
    local_110 = "rustls::verify";
    FUN_0193b350(&DAT_005b4c87,&local_38,5,&local_110);
    FUN_0134bd64(local_178,local_174);
  }
  if (*param_6 != '\x01') {
    uVar30 = *(undefined4 *)(param_6 + 8);
    uVar34 = *(undefined4 *)(param_6 + 0xc);
    iVar29 = FUN_01ae67a8(uVar30,uVar34,0,0);
    pppppppcVar22 = (char *******)0x0;
    cVar13 = '\n';
    if (iVar29 == 0) goto LAB_018d2118;
    local_178 = (char *******)0x0;
    local_174 = (char *******)uVar30;
    local_170 = (char *******)uVar34;
    cVar13 = FUN_01aeb224(local_40,local_3c,&local_178);
    if (cVar13 != '&') {
      FUN_018cc5e4(&local_110);
      if ((char)local_110 != '\x14') {
        local_11c = local_104;
        local_120 = local_108;
        local_112 = local_110._3_1_;
        local_114 = local_110._1_2_;
        pppppppcVar22 = local_10c;
        cVar13 = (char)local_110;
        goto LAB_018d2118;
      }
    }
    goto LAB_018d207c;
  }
  if (param_6[1] == '\x01') {
    FUN_01bed4e2(&local_38,param_6 + 2,0x10);
    pppppppcVar22 = (char *******)thunk_FUN_01be5118(0x27);
    if (pppppppcVar22 == (char *******)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x27);
    }
    iVar29 = 0;
    local_188 = (char *******)&DAT_00000027;
    local_180 = (char *******)0x0;
    local_184 = pppppppcVar22;
    do {
      local_110 = (char *)((int)&local_38 + iVar29);
      local_108 = (char *******)((int)&local_38 + iVar29 + 1);
      local_104 = (char *******)&LAB_01a7e8b0;
      local_10c = (char *******)&LAB_01a7e8b0;
      iVar33 = FUN_012fa178(&local_188,&DAT_01d30304,&DAT_005333fc,&local_110);
      if (iVar33 != 0) {
        puVar26 = &DAT_01d30374;
        goto LAB_018d2418;
      }
      iVar29 = iVar29 + 2;
    } while (iVar29 != 0xe);
    local_108 = (char *******)((int)&local_2c + 3);
    local_110 = (char *)((int)&local_2c + 2);
    local_104 = (char *******)&LAB_01a7e8b0;
    local_10c = (char *******)&LAB_01a7e8b0;
    iVar29 = FUN_012fa178(&local_188,&DAT_01d30304,&DAT_005333bf,&local_110);
    if (iVar29 != 0) {
      puVar26 = &DAT_01d30364;
LAB_018d2418:
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_005333ce,0x2e,&uStack_25,&DAT_01d30344,puVar26);
    }
    local_104 = *(char ********)(param_6 + 2);
    pppppppcVar22 = *(char ********)(param_6 + 6);
    pppppppcVar38 = local_180;
    pppppppcVar19 = local_184;
    if (local_188 == (char *******)&DAT_80000000) goto LAB_018d2004;
    local_10c = local_184;
    pppppppcVar31 = local_188;
    local_188 = *(char ********)(param_6 + 10);
    local_184 = *(char ********)(param_6 + 0xe);
  }
  else {
    pppppppcVar22 = *(char ********)(param_6 + 2);
    local_30 = (char *******)0x0;
    local_10c = (char *******)&DAT_01d3031c;
    local_110 = (char *)&local_38;
    local_38 = (char *******)0x0;
    local_104 = (char *******)0x0;
    local_34 = (char *******)&DAT_00000001;
    local_108 = (char *******)0x60000020;
    local_188 = pppppppcVar22;
    iVar29 = FUN_013095bc(&local_188,&local_110);
    if (iVar29 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01d30344,&DAT_01d30334);
    }
    local_104 = local_30;
    pppppppcVar38 = local_34;
    pppppppcVar19 = local_38;
LAB_018d2004:
    local_10c = (char *******)0x0;
    pppppppcVar31 = (char *******)&DAT_80000000;
  }
  local_f8 = local_184;
  local_fc = local_188;
  local_110 = (char *)0x1;
  local_108 = pppppppcVar38;
  local_100 = pppppppcVar22;
  cVar13 = FUN_01aeb224(local_40,local_3c,&local_110);
  if (cVar13 != '&') {
    FUN_018cc5e4(&local_38);
    pppppppcVar22 = local_34;
    cVar13 = (char)local_38;
    if ((char)local_38 != '\x14') {
      if (pppppppcVar31 == (char *******)&DAT_80000000) {
        pppppppcVar31 = pppppppcVar19;
      }
      else {
        pppppppcVar38 = pppppppcVar19;
      }
      local_11c = local_2c;
      local_120 = local_30;
      local_112 = local_38._3_1_;
      local_114 = local_38._1_2_;
      FUN_0134bd64(pppppppcVar31,pppppppcVar38);
LAB_018d2118:
      param_1[3] = local_112;
      *(undefined2 *)(param_1 + 1) = local_114;
      *(char ********)(param_1 + 4) = pppppppcVar22;
      *(char ********)(param_1 + 8) = local_120;
      *(char ********)(param_1 + 0xc) = local_11c;
      *param_1 = cVar13;
      return;
    }
  }
  if (pppppppcVar31 == (char *******)&DAT_80000000) {
    pppppppcVar31 = pppppppcVar19;
  }
  else {
    pppppppcVar38 = pppppppcVar19;
  }
  FUN_0134bd64(pppppppcVar31,pppppppcVar38);
LAB_018d207c:
  *param_1 = '\x14';
  return;
}

