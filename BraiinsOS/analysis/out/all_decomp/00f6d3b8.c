// FUN_00f6d3b8 @ 00f6d3b8 size=4400 calls_out=25 calls_in=1
// strings: localtime | /etc/timezone | /etc/config/system | confignfastride2start_mapclassesquitsetcache_capacity | option | system

/* WARNING: Removing unreachable block (ram,0x00f6d4c8) */
/* WARNING: Removing unreachable block (ram,0x00f6d4cc) */
/* WARNING: Removing unreachable block (ram,0x00f6d5c0) */
/* WARNING: Removing unreachable block (ram,0x00f6d4d8) */
/* WARNING: Removing unreachable block (ram,0x00f6d4e4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00f6d3b8(undefined4 *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte *******pppppppbVar3;
  byte *******pppppppbVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  byte *****pppppbVar7;
  int iVar8;
  byte *******pppppppbVar9;
  byte *pbVar10;
  byte *******extraout_r1;
  uint uVar11;
  byte ******ppppppbVar12;
  byte *******pppppppbVar13;
  byte *pbVar14;
  uint uVar15;
  byte *******pppppppbVar16;
  byte *******pppppppbVar17;
  byte *pbVar18;
  byte *******pppppppbVar19;
  byte *******pppppppbVar20;
  byte ******ppppppbVar21;
  byte *******pppppppbVar22;
  byte *******pppppppbVar23;
  byte *******pppppppbVar24;
  bool bVar25;
  byte *******local_2a0;
  byte *******local_29c;
  byte *******local_294;
  uint local_288;
  byte *******local_280;
  byte *******local_278;
  byte *******local_270;
  byte *******local_268;
  byte *******local_264;
  byte *******local_260;
  undefined4 *local_218;
  undefined4 local_214;
  int local_20c;
  undefined4 local_208;
  int local_200;
  undefined4 local_1fc;
  byte *******local_1c4;
  byte *******local_1c0;
  byte *******local_1bc;
  byte *******local_1b8;
  byte *******local_1b4;
  byte *******local_1b0;
  byte *******local_1ac;
  byte *******local_1a8;
  byte *******local_1a4;
  byte *******local_34;
  byte *******local_30;
  byte *******local_2c;
  
  if (param_2 == 0) {
    FUN_00f680b0(&local_1b8,"localtime",9);
    if (local_1b8 != (byte *******)0x1) goto LAB_00f6d460;
LAB_00f6d3e0:
    pppppppbVar17 = local_1ac;
    local_218 = (undefined4 *)0x80000000;
    pppppppbVar4 = local_1a8;
    if (local_1a8 == (byte *******)0x3b9aca06) {
      pppppppbVar4 = (byte *******)((uint)local_1b0 & 0xff);
    }
    if (local_1a8 == (byte *******)0x3b9aca06 && pppppppbVar4 == (byte *******)0x3) {
      ppppppbVar12 = *local_1ac;
      ppppppbVar21 = local_1ac[1];
      pppppbVar7 = *ppppppbVar21;
      if (pppppbVar7 != (byte *****)0x0) {
        (*(code *)pppppbVar7)(ppppppbVar12);
      }
      if (ppppppbVar21[1] != (byte *****)0x0) {
        thunk_FUN_016d3fb4(ppppppbVar12);
      }
      thunk_FUN_016d3fb4(pppppppbVar17);
    }
  }
  else {
    FUN_00f680b0(&local_1b8);
    if (local_1b8 == (byte *******)0x1) goto LAB_00f6d3e0;
LAB_00f6d460:
    FUN_016dd1aa(&local_218,(uint)&local_1b8 | 4,0x54);
    pppppppbVar4 = (byte *******)local_218;
    if (local_218 != (undefined4 *)0x80000000) {
      FUN_016dd1aa(&local_268,(uint)&local_218 | 4,0x50);
      goto LAB_00f6e1c8;
    }
  }
  local_1b0 = (byte *******)0x69746c61;
  local_1b8 = (byte *******)0x6374652f;
  local_1b4 = (byte *******)0x636f6c2f;
  local_1ac = (byte *******)CONCAT13(local_1ac._3_1_,0x656d);
  pppppppbVar4 = (byte *******)0x9d8c9bd1;
  iVar8 = 0;
  do {
    if (*(char *)((int)&local_1b0 + iVar8) == '\0') {
      if (iVar8 == 6) {
        FUN_015e6d48(&local_268,&local_1b8);
        pppppppbVar20 = local_260;
        pppppppbVar24 = local_264;
        pppppppbVar13 = local_268;
        pppppppbVar16 = local_264;
        pppppppbVar17 = local_260;
        if (local_268 == (byte *******)&DAT_80000000) goto LAB_00f6d5e0;
        FUN_00fab1e0(&local_1b8,local_264,local_260);
        if (local_1b8 != (byte *******)0x0) {
          pppppppbVar17 = (byte *******)0x0;
          if (pppppppbVar13 != (byte *******)0x0) {
            thunk_FUN_016d3fb4(pppppppbVar24);
          }
          pppppppbVar16 = (byte *******)&DAT_00000004;
          goto LAB_00f6d5e0;
        }
        pppppppbVar4 = (byte *******)&local_30;
        local_34 = pppppppbVar13;
        local_30 = pppppppbVar24;
        local_2c = pppppppbVar20;
        if (pppppppbVar20 < &DAT_00000014) {
          if (&DAT_0000000d < pppppppbVar20) goto LAB_00f6e37c;
          goto LAB_00f6e3c4;
        }
        pppppppbVar16 = (byte *******)&DAT_00000014;
        iVar8 = thunk_FUN_016dd50a(&DAT_00387b7e,pppppppbVar24,0x14);
        if (iVar8 != 0) {
          if (&DAT_00000015 < pppppppbVar20) {
            pppppppbVar16 = (byte *******)&DAT_00000016;
            iVar8 = thunk_FUN_016dd50a(&DAT_00387b92,pppppppbVar24,0x16);
            if (iVar8 == 0) goto LAB_00f6e3e4;
          }
LAB_00f6e37c:
          pppppppbVar16 = (byte *******)&DAT_0000000e;
          iVar8 = thunk_FUN_016dd50a(&DAT_00387ba8,pppppppbVar24,0xe);
          if (iVar8 != 0) {
            if (&DAT_0000000f < pppppppbVar20) {
              pppppppbVar16 = (byte *******)&DAT_00000010;
              iVar8 = thunk_FUN_016dd50a("../etc/zoneinfo/General_Category",pppppppbVar24,0x10);
              if (iVar8 == 0) goto LAB_00f6e3e4;
            }
LAB_00f6e3c4:
            pppppppbVar17 = (byte *******)0x0;
            pppppppbVar16 = (byte *******)&DAT_00000004;
            if (pppppppbVar13 != (byte *******)0x0) {
              thunk_FUN_016d3fb4(pppppppbVar24);
            }
            goto LAB_00f6d5e0;
          }
        }
LAB_00f6e3e4:
        if ((pppppppbVar16 < pppppppbVar20) &&
           ((char)*(byte *)((int)pppppppbVar24 + (int)pppppppbVar16) < -0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478("end of range should be a character boundary",0x57,&DAT_01885690);
        }
        pppppppbVar20 = (byte *******)((int)pppppppbVar20 - (int)pppppppbVar16);
        local_2c = (byte *******)0x0;
        pppppppbVar17 = (byte *******)0x0;
        if (pppppppbVar20 != (byte *******)0x0) {
          if (pppppppbVar16 != (byte *******)0x0) {
            FUN_016dd52c(local_30,(byte *)((int)local_30 + (int)pppppppbVar16),pppppppbVar20);
          }
          pppppppbVar17 = pppppppbVar20;
        }
        pppppppbVar16 = local_30;
        pppppppbVar13 = local_30;
        pppppppbVar24 = local_34;
        local_2c = pppppppbVar17;
        if (local_34 == (byte *******)&DAT_80000000) goto LAB_00f6d5e0;
        goto LAB_00f6df1c;
      }
      break;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 7);
  pppppppbVar16 = (byte *******)&SUB_00000002;
  pppppppbVar17 = (byte *******)&DAT_018aae48;
LAB_00f6d5e0:
  FUN_015ec424(&local_1b8,"/etc/timezone",0xd);
  pppppppbVar3 = local_1b4;
  pppppppbVar24 = local_1b8;
  pppppppbVar20 = local_1b0;
  if (local_1b8 != (byte *******)&DAT_80000000) {
    if (local_1b0 == (byte *******)0x0) {
      pppppppbVar20 = (byte *******)0x0;
    }
    else {
      pppppppbVar13 = (byte *******)((int)local_1b4 + (int)local_1b0);
      do {
        pppppppbVar9 = (byte *******)((int)pppppppbVar13 + -1);
        uVar11 = (uint)(char)*(byte *)pppppppbVar9;
        if (0x7fffffff < uVar11) {
          pppppppbVar9 = (byte *******)((int)pppppppbVar13 + -2);
          bVar1 = *(byte *)pppppppbVar9;
          if ((char)bVar1 < -0x40) {
            pppppppbVar9 = (byte *******)((int)pppppppbVar13 + -3);
            bVar2 = *(byte *)pppppppbVar9;
            if ((char)bVar2 < -0x40) {
              pppppppbVar9 = pppppppbVar13 + -1;
              uVar15 = (int)(char)bVar2 & 0x3fU | (*(byte *)pppppppbVar9 & 7) << 6;
            }
            else {
              uVar15 = bVar2 & 0xf;
            }
            uVar15 = (int)(char)bVar1 & 0x3fU | uVar15 << 6;
          }
          else {
            uVar15 = bVar1 & 0x1f;
          }
          uVar11 = uVar11 & 0x3f | uVar15 << 6;
        }
        pppppppbVar4 = (byte *******)(uVar11 - 9);
        if ((&DAT_00000005 <= pppppppbVar4) && (uVar11 != 0x20)) {
          if (0x7f < uVar11) {
            pppppppbVar4 = (byte *******)(uVar11 >> 8);
            if (pppppppbVar4 < &DAT_00000020) {
              if (pppppppbVar4 == (byte *******)0x0) {
                bVar1 = (&DAT_0041951b)[uVar11 & 0xff] & 1;
                goto joined_r0x00f6d714;
              }
              if ((pppppppbVar4 == (byte *******)&DAT_00000016) && (uVar11 == 0x1680))
              goto LAB_00f6d644;
            }
            else if (pppppppbVar4 == (byte *******)&DAT_00000020) {
              bVar1 = (&DAT_0041951b)[uVar11 & 0xff] & 2;
joined_r0x00f6d714:
              if (bVar1 != 0) goto LAB_00f6d644;
            }
            else if (pppppppbVar4 == (byte *******)&DAT_00000030 && uVar11 == 0x3000)
            goto LAB_00f6d644;
          }
          pppppppbVar13 = (byte *******)((int)pppppppbVar13 - (int)local_1b4);
          if ((((pppppppbVar13 <= local_1b0) &&
               (pppppppbVar20 = pppppppbVar13, pppppppbVar13 != (byte *******)0x0)) &&
              (pppppppbVar13 < local_1b0)) &&
             ((char)*(byte *)((int)local_1b4 + (int)pppppppbVar13) < -0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_00418707,0x30,&DAT_01885680);
          }
          goto joined_r0x00f6e458;
        }
LAB_00f6d644:
        pppppppbVar13 = pppppppbVar9;
      } while (pppppppbVar9 != local_1b4);
      pppppppbVar20 = (byte *******)0x0;
    }
  }
joined_r0x00f6e458:
  if (((uint)pppppppbVar16 & 0xff) == 3) {
    ppppppbVar12 = *pppppppbVar17;
    ppppppbVar21 = pppppppbVar17[1];
    pppppbVar7 = *ppppppbVar21;
    if (pppppbVar7 != (byte *****)0x0) {
      (*(code *)pppppbVar7)(ppppppbVar12);
    }
    if (ppppppbVar21[1] != (byte *****)0x0) {
      thunk_FUN_016d3fb4(ppppppbVar12);
    }
    thunk_FUN_016d3fb4(pppppppbVar17);
  }
  if (pppppppbVar24 == (byte *******)&DAT_80000000) {
    local_1b8 = (byte *******)0x0;
    local_1ac = (byte *******)((uint)local_1ac & 0xffff0000);
    local_1b4 = (byte *******)0x1b6;
    local_1b0 = (byte *******)&DAT_00000001;
    FUN_015ec1bc(&local_268,&local_1b8,"/etc/config/system",0x12);
    pppppppbVar9 = local_264;
    pppppppbVar13 = (byte *******)((uint)local_268 & 0xff);
    if (pppppppbVar13 == (byte *******)&DAT_00000004) {
      ppppppbVar12 = (byte ******)thunk_FUN_016d4a50(0x2000);
      if (ppppppbVar12 == (byte ******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,0x2000);
      }
      local_1b4 = (byte *******)0x2000;
      local_1a4 = pppppppbVar9;
      local_1a8 = (byte *******)0x0;
      local_1ac = (byte *******)0x0;
      local_280 = (byte *******)0x0;
      local_1b0 = (byte *******)0x0;
      local_1b8 = (byte *******)ppppppbVar12;
      local_278 = (byte *******)thunk_FUN_016d4a50(0x50);
      if (local_278 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,0x50);
      }
      pppppppbVar23 = (byte *******)0x0;
      pppppppbVar22 = (byte *******)0x0;
      pppppppbVar24 = (byte *******)0x0;
      local_34 = (byte *******)&DAT_00000050;
      local_294 = (byte *******)&DAT_80000000;
      local_30 = local_278;
LAB_00f6d8c0:
      local_288 = 0;
      do {
LAB_00f6d8c8:
        do {
          do {
            local_2c = (byte *******)0x0;
            local_270 = (byte *******)0x0;
            pppppppbVar16 = local_2c;
            do {
              while (pppppppbVar22 < pppppppbVar24) {
LAB_00f6d93c:
                pbVar14 = (byte *)((int)pppppppbVar24 - (int)pppppppbVar22);
                pbVar18 = (byte *)((int)pppppppbVar22 + (int)ppppppbVar12);
                if (pbVar14 < (byte *)0x8) {
                  if (pbVar14 != (byte *)0x0) {
                    if (*pbVar18 == 10) {
                      pbVar10 = (byte *)0x0;
                    }
                    else {
                      if (pbVar14 == (byte *)0x1) goto LAB_00f6dab4;
                      if (pbVar18[1] == 10) {
                        pbVar10 = (byte *)0x1;
                      }
                      else {
                        if (pbVar14 == (byte *)0x2) goto LAB_00f6dab4;
                        if (pbVar18[2] == 10) {
                          pbVar10 = (byte *)0x2;
                        }
                        else {
                          if (pbVar14 == (byte *)0x3) goto LAB_00f6dab4;
                          if (pbVar18[3] == 10) {
                            pbVar10 = (byte *)0x3;
                          }
                          else {
                            if (pbVar14 == (byte *)0x4) goto LAB_00f6dab4;
                            if (pbVar18[4] == 10) {
                              pbVar10 = (byte *)0x4;
                            }
                            else {
                              if (pbVar14 == (byte *)0x5) goto LAB_00f6dab4;
                              if (pbVar18[5] == 10) {
                                pbVar10 = (byte *)0x5;
                              }
                              else {
                                if ((pbVar14 == (byte *)0x6) || (pbVar18[6] != 10))
                                goto LAB_00f6dab4;
                                pbVar10 = (byte *)0x6;
                              }
                            }
                          }
                        }
                      }
                    }
LAB_00f6dbc0:
                    local_1a8 = local_280;
                    local_1b0 = pppppppbVar22;
                    if (pbVar14 <= pbVar10) {
                      local_1ac = pppppppbVar23;
                    /* WARNING: Subroutine does not return */
                      FUN_00faa36c(0,pbVar10,pbVar14,&DAT_0188bbe0);
                    }
                    pbVar14 = pbVar10 + 1;
                    if (pbVar10 < (byte *)((int)local_34 - (int)pppppppbVar16)) {
                      local_1ac = pppppppbVar23;
                    }
                    else {
                      local_1ac = pppppppbVar23;
                      FUN_010e02bc(&local_34,pppppppbVar16,pbVar14);
                      local_278 = local_30;
                      pppppppbVar16 = local_2c;
                    }
                    FUN_016dd1aa((byte *)((int)local_278 + (int)pppppppbVar16),pbVar18,pbVar14);
                    pppppppbVar16 = (byte *******)((int)pppppppbVar16 + (int)pbVar14);
                    local_1b0 = (byte *******)((int)pppppppbVar22 + (int)pbVar14);
                    if (pppppppbVar24 < (byte *******)((int)pppppppbVar22 + (int)pbVar14)) {
                      local_1b0 = pppppppbVar24;
                    }
                    pppppppbVar17 = (byte *******)((int)local_270 + (int)pbVar14);
                    pppppppbVar13 = (byte *******)&DAT_00000004;
                    goto LAB_00f6dc28;
                  }
                }
                else {
                  pbVar6 = (byte *)(((uint)(pbVar18 + 3) & 0xfffffffc) - (int)pbVar18);
                  if (pbVar6 == (byte *)0x0) {
                    pbVar6 = (byte *)0x0;
                    goto LAB_00f6da2c;
                  }
                  pbVar10 = (byte *)0x0;
                  do {
                    if (pbVar18[(int)pbVar10] == 10) goto LAB_00f6dbc0;
                    pbVar10 = pbVar10 + 1;
                  } while (pbVar6 != pbVar10);
                  for (; pbVar6 <= pbVar14 + -8; pbVar6 = pbVar6 + 8) {
LAB_00f6da2c:
                    uVar15 = *(uint *)(pbVar18 + (int)pbVar6);
                    uVar11 = *(uint *)((int)(pbVar18 + (int)pbVar6) + 4) ^ 0xa0a0a0a;
                    if (((0x1010100 - (uVar15 ^ 0xa0a0a0a) | uVar15) & 0x80808080 &
                        (0x1010100 - uVar11 | uVar11)) != 0x80808080) break;
                  }
                  if (pbVar14 != pbVar6) {
                    pbVar10 = (byte *)0x0;
                    do {
                      if (pbVar18[(int)(pbVar10 + (int)pbVar6)] == 10) {
                        pbVar10 = pbVar10 + (int)pbVar6;
                        goto LAB_00f6dbc0;
                      }
                      pbVar10 = pbVar10 + 1;
                    } while ((byte *)((int)pppppppbVar24 + (-(int)pppppppbVar22 - (int)pbVar6)) !=
                             pbVar10);
                  }
                }
LAB_00f6dab4:
                if ((byte *)((int)local_34 - (int)pppppppbVar16) < pbVar14) {
                  FUN_010e02bc(&local_34,pppppppbVar16,pbVar14);
                  local_278 = local_30;
                  pppppppbVar16 = local_2c;
                }
                else {
                }
                FUN_016dd1aa((byte *)((int)local_278 + (int)pppppppbVar16),pbVar18,pbVar14);
                pppppppbVar22 = (byte *******)((int)pppppppbVar22 + (int)pbVar14);
                pppppppbVar16 = (byte *******)((int)pppppppbVar16 + (int)pbVar14);
                if (pppppppbVar24 < pppppppbVar22) {
                  pppppppbVar22 = pppppppbVar24;
                }
                pppppppbVar17 = (byte *******)((int)local_270 + (int)pbVar14);
                local_2c = pppppppbVar16;
                local_270 = pppppppbVar17;
                if (pbVar14 == (byte *)0x0) {
                  pppppppbVar13 = (byte *******)&DAT_00000004;
                  local_1a8 = local_280;
                  local_1b0 = pppppppbVar22;
                  local_1ac = pppppppbVar23;
                  goto LAB_00f6dc28;
                }
              }
              pppppppbVar23 = (byte *******)FUN_016e0250(pppppppbVar9,ppppppbVar12,0x2000);
              if (pppppppbVar23 != (byte *******)0xffffffff) {
                pppppppbVar22 = (byte *******)0x0;
                if (local_280 < pppppppbVar23) {
                  local_280 = pppppppbVar23;
                }
                pppppppbVar24 = pppppppbVar23;
                goto LAB_00f6d93c;
              }
              puVar5 = (undefined4 *)FUN_016d2bc8();
              pppppppbVar17 = (byte *******)*puVar5;
              pppppppbVar13 = (byte *******)((uint)pppppppbVar4 & 0xffffff00);
              pppppppbVar23 = (byte *******)0x0;
              pppppppbVar22 = (byte *******)0x0;
              pppppppbVar24 = (byte *******)0x0;
              pppppppbVar4 = pppppppbVar13;
            } while (pppppppbVar17 == (byte *******)&DAT_00000004);
            local_1a8 = local_280;
            local_1ac = (byte *******)0x0;
            local_1b0 = (byte *******)0x0;
LAB_00f6dc28:
            pppppppbVar22 = local_1b0;
            FUN_00fab1e0(&local_268,local_278,pppppppbVar16);
            if (local_268 != (byte *******)0x0) {
              bVar25 = ((uint)pppppppbVar13 & 0xff) == 4;
              if (bVar25) {
                pppppppbVar17 = (byte *******)&DAT_018aaa9c;
              }
              pppppppbVar16 = (byte *******)0x0;
              if (bVar25) {
                pppppppbVar13 = (byte *******)&SUB_00000002;
              }
            }
            local_2c = pppppppbVar16;
            if (((uint)pppppppbVar13 & 0xff) != 4) {
              pppppppbVar16 = (byte *******)((uint)pppppppbVar13 >> 8);
              pppppppbVar24 = (byte *******)&DAT_80000000;
              goto LAB_00f6e290;
            }
            if (pppppppbVar16 == (byte *******)0x0) {
              pppppppbVar13 = local_29c;
              if (local_294 == (byte *******)&DAT_80000000) {
                pppppppbVar13 = (byte *******)&DAT_00000006;
              }
              if (local_34 != (byte *******)0x0) {
                thunk_FUN_016d3fb4(local_30);
              }
              pppppppbVar16 = (byte *******)((uint)local_29c >> 8);
              thunk_FUN_016d3fb4(ppppppbVar12);
              FUN_016dffb2(pppppppbVar9);
              pppppppbVar17 = local_2a0;
              pppppppbVar24 = local_294;
              goto joined_r0x00f6e244;
            }
            local_278 = local_30;
            local_1c4 = local_30;
            local_1c0 = pppppppbVar16;
            FUN_010d2424(&local_268,&local_1c4);
            pppppppbVar17 = local_264;
          } while (local_268 != (byte *******)&DAT_00000001);
          if (local_264 == (byte *******)0x0) goto LAB_00f6e288;
        } while (local_260 != (byte *******)&DAT_00000006);
        iVar8 = thunk_FUN_016dd50a(local_264,"confignfastride2start_mapclassesquitsetcache_capacity"
                                   ,6);
        if (iVar8 != 0) {
          if ((local_288 & 1) == 0) goto LAB_00f6d8c0;
          iVar8 = thunk_FUN_016dd50a(pppppppbVar17,"option",6);
          local_288 = 1;
          if (iVar8 == 0) {
            FUN_010d2424(&local_268,&local_1c4);
            pppppppbVar13 = local_264;
            if (local_268 == (byte *******)&DAT_00000001) {
              if (local_264 == (byte *******)0x0) goto LAB_00f6e288;
              if (local_260 == (byte *******)&DAT_00000008) {
                iVar8 = thunk_FUN_016dd50a(local_264,&DAT_0056a010,8);
                pppppppbVar17 = pppppppbVar16;
                if (iVar8 == 0) {
                  FUN_010d2424(&local_268,&local_1c4);
                  pppppppbVar19 = (byte *******)0x0;
                  if (local_268 == (byte *******)&DAT_00000001) {
                    if (local_264 == (byte *******)0x0) goto LAB_00f6e288;
                    pppppppbVar17 = local_260;
                    pppppppbVar19 = local_264;
                  }
                  FUN_010d2424(&local_268,&local_1c4);
                  if (local_268 != (byte *******)&DAT_00000001) {
                    if (pppppppbVar19 != (byte *******)0x0) {
                      FUN_014f12cc(&local_268,pppppppbVar17);
                      pppppppbVar13 = local_260;
                      pppppppbVar24 = local_264;
                      if (local_268 == (byte *******)&DAT_00000001) {
                        local_270 = local_264;
                        goto LAB_00f6e4f4;
                      }
                      FUN_016dd1aa(local_260,pppppppbVar19,pppppppbVar17);
                      pppppppbVar16 = (byte *******)((uint)pppppppbVar13 >> 8);
                      goto LAB_00f6e290;
                    }
                    goto LAB_00f6d8c8;
                  }
                }
                else {
                  iVar8 = thunk_FUN_016dd50a(pppppppbVar13,&DAT_0056aa00,8);
                  if (iVar8 != 0) goto LAB_00f6d8c8;
                  FUN_010d2424(&local_268,&local_1c4);
                  pppppppbVar13 = (byte *******)0x0;
                  if (local_268 == (byte *******)&DAT_00000001) {
                    if (local_264 == (byte *******)0x0) goto LAB_00f6e288;
                    pppppppbVar13 = local_264;
                    pppppppbVar17 = local_260;
                  }
                  FUN_010d2424(&local_268,&local_1c4);
                  if (local_268 != (byte *******)&DAT_00000001) {
                    if (pppppppbVar13 != (byte *******)0x0) {
                      FUN_014f12cc(&local_268,pppppppbVar17);
                      pppppppbVar19 = local_260;
                      pppppppbVar16 = local_264;
                      local_270 = local_264;
                      if (local_268 == (byte *******)&DAT_00000001) {
LAB_00f6e4f4:
                    /* WARNING: Subroutine does not return */
                        FUN_00600af4(local_270,local_260);
                      }
                      FUN_016dd1aa(local_260,pppppppbVar13,pppppppbVar17);
                      if (((uint)local_294 & 0x7fffffff) != 0) {
                        thunk_FUN_016d3fb4(local_29c);
                      }
                      local_29c = pppppppbVar19;
                      local_294 = pppppppbVar16;
                      local_2a0 = pppppppbVar17;
                    }
                    goto LAB_00f6d8c8;
                  }
                }
                pppppppbVar16 = pppppppbVar17;
                if (local_264 == (byte *******)0x0) goto LAB_00f6e288;
              }
            }
          }
          goto LAB_00f6d8c8;
        }
        FUN_010d2424(&local_268,&local_1c4);
        if (local_268 != (byte *******)&DAT_00000001) goto LAB_00f6d8c0;
        if (local_264 == (byte *******)0x0) goto LAB_00f6e288;
        local_288 = 0;
        if ((local_260 != (byte *******)&DAT_00000006) ||
           (iVar8 = thunk_FUN_016dd50a(local_264,"system",6), iVar8 != 0)) goto LAB_00f6d8c8;
        FUN_010d2424(&local_268,&local_1c4);
        pppppppbVar17 = extraout_r1;
        if (local_268 == (byte *******)&DAT_00000001) {
          pppppppbVar17 = local_264;
        }
        if (local_268 == (byte *******)&DAT_00000001 && pppppppbVar17 == (byte *******)0x0) {
LAB_00f6e288:
          pppppppbVar24 = (byte *******)&DAT_80000000;
          pppppppbVar13 = (byte *******)&DAT_00000004;
          pppppppbVar17 = pppppppbVar22;
LAB_00f6e290:
          if (((uint)local_294 & 0x7fffffff) != 0) {
            thunk_FUN_016d3fb4(local_29c);
          }
          if (local_34 != (byte *******)0x0) {
            thunk_FUN_016d3fb4(local_30);
          }
          thunk_FUN_016d3fb4(ppppppbVar12);
          FUN_016dffb2(pppppppbVar9);
          goto joined_r0x00f6e244;
        }
        local_288 = (uint)local_268 ^ 1;
      } while( true );
    }
    pppppppbVar16 = (byte *******)((uint)local_268 >> 8);
    pppppppbVar17 = local_264;
    pppppppbVar24 = (byte *******)&DAT_80000000;
joined_r0x00f6e244:
    if (((uint)pppppppbVar3 & 0xff) == 3) {
      ppppppbVar12 = *pppppppbVar20;
      ppppppbVar21 = pppppppbVar20[1];
      pppppbVar7 = *ppppppbVar21;
      if (pppppbVar7 != (byte *****)0x0) {
        (*(code *)pppppbVar7)(ppppppbVar12);
      }
      if (ppppppbVar21[1] != (byte *****)0x0) {
        thunk_FUN_016d3fb4(ppppppbVar12);
      }
      thunk_FUN_016d3fb4(pppppppbVar20);
    }
    if (pppppppbVar24 != (byte *******)&DAT_80000000) goto LAB_00f6df94;
    pppppppbVar4 = (byte *******)0x80000000;
    if (((uint)pppppppbVar13 & 0xff) == 3) {
      ppppppbVar12 = *pppppppbVar17;
      ppppppbVar21 = pppppppbVar17[1];
      pppppbVar7 = *ppppppbVar21;
      if (pppppbVar7 != (byte *****)0x0) {
        (*(code *)pppppbVar7)(ppppppbVar12);
      }
      pppppppbVar4 = (byte *******)0x80000000;
      if (ppppppbVar21[1] != (byte *****)0x0) {
        thunk_FUN_016d3fb4(ppppppbVar12);
      }
      goto LAB_00f6e11c;
    }
  }
  else {
    pppppppbVar13 = pppppppbVar3;
    pppppppbVar17 = pppppppbVar20;
LAB_00f6df1c:
    pppppppbVar16 = (byte *******)((uint)pppppppbVar13 >> 8);
LAB_00f6df94:
    local_1c0 = (byte *******)((uint)pppppppbVar13 & 0xff | (int)pppppppbVar16 << 8);
    local_1ac = (byte *******)&DAT_006043a8;
    local_1b0 = (byte *******)&local_1c4;
    local_1b4 = (byte *******)&DAT_0157d360;
    local_1b8 = (byte *******)&DAT_01880274;
    local_1c4 = pppppppbVar24;
    local_1bc = pppppppbVar17;
    FUN_00600d2c(&local_34,&DAT_0058b76c,&local_1b8);
    pppppppbVar4 = local_30;
    FUN_015ecd70(&local_268,local_30,local_2c);
    if (local_34 != (byte *******)0x0) {
      thunk_FUN_016d3fb4(pppppppbVar4);
    }
    if (local_268 == (byte *******)&DAT_80000000) {
      if ((char)local_264 == '\x03') {
        ppppppbVar12 = *local_260;
        ppppppbVar21 = local_260[1];
        pppppbVar7 = *ppppppbVar21;
        if (pppppbVar7 != (byte *****)0x0) {
          (*(code *)pppppbVar7)(ppppppbVar12);
        }
        if (ppppppbVar21[1] != (byte *****)0x0) {
          thunk_FUN_016d3fb4(ppppppbVar12);
        }
        thunk_FUN_016d3fb4(local_260);
      }
      pppppppbVar4 = (byte *******)0x80000000;
    }
    else {
      FUN_00f62700(&local_1b8,local_264,local_260);
      pppppppbVar17 = local_1ac;
      pppppppbVar4 = local_1b4;
      if (local_1b8 == (byte *******)0x0) {
        FUN_016dd1aa(&local_268,&local_1b0,0x50);
      }
      else {
        pppppppbVar4 = (byte *******)0x80000000;
        pppppppbVar13 = local_1a8;
        if (local_1a8 == (byte *******)0x3b9aca06) {
          pppppppbVar13 = (byte *******)((uint)local_1b0 & 0xff);
        }
        if (local_1a8 == (byte *******)0x3b9aca06 && pppppppbVar13 == (byte *******)0x3) {
          ppppppbVar12 = *local_1ac;
          ppppppbVar21 = local_1ac[1];
          pppppbVar7 = *ppppppbVar21;
          if (pppppbVar7 != (byte *****)0x0) {
            (*(code *)pppppbVar7)(ppppppbVar12);
          }
          if (ppppppbVar21[1] != (byte *****)0x0) {
            thunk_FUN_016d3fb4(ppppppbVar12);
          }
          thunk_FUN_016d3fb4(pppppppbVar17);
        }
      }
      if (local_268 != (byte *******)0x0) {
        thunk_FUN_016d3fb4(local_264);
      }
    }
    if (local_1c4 != (byte *******)0x0) {
      pppppppbVar17 = local_1c0;
LAB_00f6e11c:
      thunk_FUN_016d3fb4(pppppppbVar17);
    }
  }
  if (local_218 != (undefined4 *)0x80000000) {
    if (local_218 != (undefined4 *)0x0) {
      thunk_FUN_016d3fb4(local_214);
    }
    if (local_20c != 0) {
      thunk_FUN_016d3fb4(local_208);
    }
    if (local_200 != 0) {
      thunk_FUN_016d3fb4(local_1fc);
    }
  }
  if (pppppppbVar4 == (byte *******)0x80000000) {
    iVar8 = FUN_016d38c8(0x10,1);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x10);
    }
    *(undefined1 *)((int)param_1 + 0x51) = 3;
    param_1[8] = 0;
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    param_1[3] = 1;
    param_1[4] = iVar8;
    param_1[5] = 1;
    param_1[6] = 0;
    param_1[7] = 8;
    return;
  }
LAB_00f6e1c8:
  *param_1 = pppppppbVar4;
  FUN_016dd1aa(param_1 + 1,&local_268,0x50);
  return;
}

