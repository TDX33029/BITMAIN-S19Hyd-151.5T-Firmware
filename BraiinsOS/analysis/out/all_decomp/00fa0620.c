// FUN_00fa0620 @ 00fa0620 size=3592 calls_out=17 calls_in=3
// strings: 

void FUN_00fa0620(uint *param_1,int *param_2,undefined4 *param_3,int param_4,int param_5)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined1 *puVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  int *piVar15;
  int iVar16;
  byte *pbVar17;
  int iVar18;
  uint uVar19;
  int *piVar20;
  undefined4 *puVar21;
  int iVar22;
  int *piVar23;
  undefined4 *puVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined4 *puVar29;
  int iVar30;
  undefined4 uVar31;
  int iVar32;
  undefined4 uVar33;
  undefined4 *puVar34;
  undefined4 *puVar35;
  bool bVar36;
  undefined4 *local_e8;
  int *local_d8;
  int local_d0;
  uint local_c8;
  undefined4 *local_c4;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  undefined4 *local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined4 *local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  uint local_7c;
  byte *local_78;
  uint local_74;
  int local_70;
  int *local_64;
  int *local_60;
  int local_5c;
  int *local_58;
  int local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int *local_44;
  int local_40;
  int local_3c;
  int *local_38;
  uint local_34;
  uint local_30;
  byte *local_2c;
  uint local_28;
  
  piVar20 = (int *)param_2[2];
  iVar2 = *param_2;
  piVar15 = piVar20;
  if (piVar20 == (int *)0x0) {
    piVar15 = &local_b8;
    FUN_00f8f0c0(piVar15,iVar2);
  }
  iVar12 = piVar15[2];
  iVar16 = piVar15[1];
  local_a4 = 0;
  local_a8 = (undefined4 *)&DAT_00000004;
  local_ac = 0;
  if (iVar12 != 0) {
    local_c4 = (undefined4 *)iVar16;
    do {
      local_50 = 4;
      iVar22 = *(int *)(iVar2 + 0x4c);
      iVar3 = *(int *)(iVar2 + 0x48);
      local_4c = 0;
      local_54 = 0;
      local_d8 = (int *)thunk_FUN_016d4a50(4);
      if (local_d8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,4);
      }
      iVar30 = 0;
      uVar27 = 4;
      iVar13 = (int)local_c4 + 0x14;
      iVar22 = iVar22 * 0x134;
      *local_d8 = (int)local_c4 + 0xc;
      local_40 = 1;
      local_48 = 1;
      local_34 = 0;
      local_38 = (int *)&DAT_00000004;
      local_3c = 0;
      local_44 = local_d8;
      do {
        local_40 = local_40 + -1;
        puVar21 = (undefined4 *)local_d8[local_40];
        for (iVar25 = 0; iVar30 * 4 != iVar25; iVar25 = iVar25 + 4) {
          if (((*(undefined4 **)(uVar27 + iVar25))[1] == puVar21[1]) &&
             (iVar4 = thunk_FUN_016dd50a(**(undefined4 **)(uVar27 + iVar25),*puVar21), iVar4 == 0))
          goto LAB_00fa0758;
        }
        if (iVar30 == local_54) {
          FUN_00f98d28(&local_54);
          uVar27 = local_50;
        }
        *(undefined4 **)(uVar27 + iVar30 * 4) = puVar21;
        iVar30 = iVar30 + 1;
        iVar25 = iVar3;
        iVar4 = iVar22;
        local_4c = iVar30;
LAB_00fa07ec:
        if (iVar4 != 0) {
          if ((*(int *)(iVar25 + 0x118) != puVar21[1]) ||
             (iVar5 = thunk_FUN_016dd50a(*(undefined4 *)(iVar25 + 0x114),*puVar21), iVar5 != 0))
          goto LAB_00fa07e4;
          piVar15 = *(int **)(iVar25 + 100);
          piVar23 = piVar15 + *(int *)(iVar25 + 0x68) * 4;
          while (piVar6 = piVar15, piVar15 != piVar23) {
            while (piVar15 = piVar6 + 4, *piVar6 != 0) {
              if (param_5 != 0) {
                iVar4 = *(int *)(param_5 + 0x24);
                uVar28 = 0;
                uVar31 = *(undefined4 *)((int)local_c4 + 0xc);
                iVar5 = *(int *)((int)local_c4 + 0x10);
                for (iVar25 = *(int *)(param_5 + 0x28) << 3; iVar25 != 0; iVar25 = iVar25 + -8) {
                  if ((*(int *)(iVar4 + uVar28 * 8 + 4) == iVar5) &&
                     (iVar7 = thunk_FUN_016dd50a(*(undefined4 *)(iVar4 + uVar28 * 8),uVar31,iVar5),
                     iVar7 == 0)) {
                    if (*(uint *)(param_5 + 0x34) <= uVar28) {
                    /* WARNING: Subroutine does not return */
                      FUN_00faa4a4(uVar28,*(uint *)(param_5 + 0x34),&DAT_01880824);
                    }
                    iVar4 = *(int *)(param_5 + 0x30) + uVar28 * 0x3c;
                    bVar36 = *(char *)(iVar4 + 0x39) != '\0';
                    iVar25 = 0;
                    if (bVar36) {
                      iVar25 = *(int *)(iVar4 + 0x34);
                    }
                    if (bVar36 && iVar25 != 0) {
                      iVar5 = *(int *)(iVar4 + 0x30);
                      iVar25 = iVar5 + iVar25 * 0xc;
                      do {
                        iVar7 = *(int *)(iVar5 + 4);
                        piVar11 = (int *)(iVar5 + 8);
                        iVar5 = iVar5 + 0xc;
                        iVar32 = iVar7 + *piVar11 * 0xc;
LAB_00fa094c:
                        if (iVar7 != iVar32) {
                          puVar21 = (undefined4 *)(iVar7 + 4);
                          iVar18 = *(int *)(iVar7 + 8);
                          iVar7 = iVar7 + 0xc;
                          if (*(char *)(iVar4 + 0x38) != '\0') {
                            FUN_006008c8(&local_30,*puVar21,iVar18);
                            uVar28 = local_28;
                            pbVar1 = local_2c;
                            FUN_006008c8(&local_7c,*piVar6,piVar6[1]);
                            bVar36 = false;
                            if (uVar28 == local_74) {
                              pbVar14 = local_78;
                              pbVar17 = pbVar1;
                              do {
                                if (uVar28 == 0) {
                                  bVar36 = true;
                                  break;
                                }
                                uVar19 = (uint)*pbVar14;
                                uVar28 = uVar28 - 1;
                                uVar26 = (uint)*pbVar17;
                                if (uVar19 - 0x41 < 0x1a) {
                                  uVar19 = uVar19 | 0x20;
                                }
                                if (uVar26 - 0x41 < 0x1a) {
                                  uVar26 = uVar26 | 0x20;
                                }
                                pbVar14 = pbVar14 + 1;
                                pbVar17 = pbVar17 + 1;
                              } while (uVar26 == uVar19);
                              if ((local_7c & 0x7fffffff) != 0) goto LAB_00fa0930;
LAB_00fa0a40:
                              if ((local_30 & 0x7fffffff) != 0) {
LAB_00fa0a4c:
                                thunk_FUN_016d3fb4(pbVar1);
                                if (bVar36) goto LAB_00fa0a60;
                                goto LAB_00fa094c;
                              }
                            }
                            else {
                              if ((local_7c & 0x7fffffff) == 0) goto LAB_00fa0a40;
LAB_00fa0930:
                              thunk_FUN_016d3fb4();
                              if ((local_30 & 0x7fffffff) != 0) goto LAB_00fa0a4c;
                            }
                            if (bVar36) goto LAB_00fa0a60;
                            goto LAB_00fa094c;
                          }
                          if ((iVar18 == piVar6[1]) &&
                             (iVar18 = thunk_FUN_016dd50a(*puVar21,*piVar6,iVar18), iVar18 == 0))
                          goto LAB_00fa0a60;
                          goto LAB_00fa094c;
                        }
                      } while (iVar5 != iVar25);
                    }
                    break;
                  }
                  uVar28 = uVar28 + 1;
                }
              }
              piVar6 = piVar15;
              if (piVar15 == piVar23) goto LAB_00fa0758;
            }
LAB_00fa0a60:
            iVar5 = piVar6[2];
            iVar7 = piVar6[3];
            iVar25 = iVar3;
            for (iVar4 = iVar22; iVar4 != 0; iVar4 = iVar4 + -0x134) {
              if (*(int *)(iVar25 + 0x118) == iVar7) {
                iVar18 = thunk_FUN_016dd50a(*(undefined4 *)(iVar25 + 0x114),iVar5,iVar7);
                iVar32 = local_40;
                if (iVar18 == 0) {
                  if (*(int *)(iVar25 + 0x68) != 0) {
                    if (local_40 == local_48) {
                      FUN_00f98d28(&local_48);
                    }
                    local_d8 = local_44;
                    local_44[iVar32] = iVar25 + 0x114;
                    local_40 = iVar32 + 1;
                  }
                  break;
                }
              }
              iVar25 = iVar25 + 0x134;
            }
            uVar28 = local_34;
            if (local_34 == local_3c) {
              FUN_00f98f0c(&local_3c);
            }
            local_38[uVar28 * 2] = iVar5;
            (local_38 + uVar28 * 2)[1] = iVar7;
            local_34 = uVar28 + 1;
          }
        }
LAB_00fa0758:
        uVar28 = local_34;
        piVar15 = local_38;
        iVar25 = local_3c;
      } while (local_40 != 0);
      if (local_48 != 0) {
        thunk_FUN_016d3fb4(local_44);
      }
      if (local_54 != 0) {
        thunk_FUN_016d3fb4(local_50);
      }
      if (uVar28 != 0) {
        piVar23 = piVar15;
        do {
          iVar3 = local_a4;
          uVar33 = *piVar23;
          uVar31 = piVar23[1];
          if (local_a4 == local_ac) {
            FUN_00f98f0c(&local_ac);
          }
          piVar23 = piVar23 + 2;
          local_a8[iVar3 * 2] = uVar33;
          local_a4 = iVar3 + 1;
          (local_a8 + iVar3 * 2)[1] = uVar31;
        } while (piVar23 != piVar15 + uVar28 * 2);
      }
      if (iVar25 != 0) {
        thunk_FUN_016d3fb4(piVar15);
      }
      iVar3 = local_a4;
      uVar33 = *(undefined4 *)((int)local_c4 + 0xc);
      uVar31 = *(undefined4 *)((int)local_c4 + 0x10);
      if (local_a4 == local_ac) {
        FUN_00f98f0c(&local_ac);
      }
      local_a8[iVar3 * 2] = uVar33;
      (local_a8 + iVar3 * 2)[1] = uVar31;
      local_a4 = iVar3 + 1;
      local_c4 = (undefined4 *)iVar13;
      if (iVar13 == iVar16 + iVar12 * 0x14) break;
    } while( true );
  }
  local_98 = 0;
  puVar35 = local_a8 + local_a4 * 2;
  local_a0 = 0;
  local_4c = 0;
  local_54 = 0;
  local_d8 = (int *)0x4;
  local_9c = 4;
  local_50 = 4;
  local_d0 = 0;
  local_c4 = param_3;
  puVar21 = local_a8;
LAB_00fa0c8c:
  do {
    iVar12 = local_98;
    if (puVar21 == (undefined4 *)0x0 || puVar21 == puVar35) {
      if (local_c4 == param_3 + param_4 * 2) {
        piVar15 = (int *)(local_9c + 4);
        iVar16 = local_98 << 3;
        puVar35 = local_a8 + local_a4 * 2;
        local_c8 = 4;
        local_40 = 0;
        iVar3 = param_2[1];
        local_44 = (int *)0x4;
        local_48 = 0;
        local_34 = 0;
        local_38 = (int *)&DAT_00000004;
        local_d0 = 0;
        local_3c = 0;
        puVar21 = local_a8;
        local_e8 = param_3;
        goto LAB_00fa0f48;
      }
      puVar8 = local_c4;
      puVar21 = (undefined4 *)0x0;
      local_c4 = local_c4 + 2;
    }
    else {
      puVar8 = puVar21;
      puVar21 = puVar21 + 2;
    }
    uVar31 = *puVar8;
    iVar16 = *(int *)(iVar2 + 0x6c);
    iVar3 = puVar8[1];
    puVar24 = (undefined4 *)(iVar16 + 0x24);
    iVar12 = *(int *)(iVar2 + 0x70) * 0x30;
    while( true ) {
      if (iVar12 == 0) goto LAB_00fa0c8c;
      if ((*(int *)(iVar16 + 0x28) == iVar3) &&
         (iVar22 = thunk_FUN_016dd50a(*puVar24,uVar31,iVar3), iVar22 == 0)) break;
      iVar16 = iVar16 + 0x30;
      iVar12 = iVar12 + -0x30;
      puVar24 = puVar24 + 0xc;
    }
    FUN_00f8edf8(&local_94,iVar2,puVar8);
    puVar24 = local_90;
    if (param_5 != 0) {
      iVar16 = *(int *)(param_5 + 0x24);
      iVar3 = *(int *)(param_5 + 0x28);
      puVar34 = local_90 + local_8c * 2;
      iVar12 = *(int *)(param_5 + 0x30);
      uVar27 = *(uint *)(param_5 + 0x34);
      for (puVar29 = local_90; puVar29 != puVar34; puVar29 = puVar29 + 2) {
        uVar31 = *puVar29;
        uVar28 = 0;
        iVar13 = puVar29[1];
        for (iVar22 = iVar3 << 3; iVar22 != 0; iVar22 = iVar22 + -8) {
          if ((*(int *)(iVar16 + uVar28 * 8 + 4) == iVar13) &&
             (iVar30 = thunk_FUN_016dd50a(*(undefined4 *)(iVar16 + uVar28 * 8),uVar31,iVar13),
             iVar30 == 0)) {
            if (uVar27 <= uVar28) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar28,uVar27,&DAT_01880824);
            }
            if (*(char *)(iVar12 + uVar28 * 0x3c + 0x39) != '\0') {
              if (local_94 != 0) {
                thunk_FUN_016d3fb4(puVar24);
              }
              goto LAB_00fa0c8c;
            }
            break;
          }
          uVar28 = uVar28 + 1;
        }
      }
    }
    FUN_00f8e960(&local_88,iVar2,puVar8);
    iVar16 = local_80;
    iVar12 = local_84;
    if (local_d0 == 0) {
LAB_00fa0eac:
      if (local_d0 == local_54) {
        FUN_00f98de8(&local_54);
        local_d8 = (int *)local_50;
      }
      piVar15 = (int *)((int)local_d8 + local_d0 * 0xc);
      *piVar15 = local_88;
      piVar15[1] = local_84;
      piVar15[2] = local_80;
      local_d0 = local_d0 + 1;
      local_4c = local_d0;
    }
    else {
      iVar3 = 0;
      while ((*(int *)((int)local_d8 + iVar3 + 8) != iVar16 ||
             (iVar22 = thunk_FUN_016dd50a(*(undefined4 *)((int)local_d8 + iVar3 + 4),iVar12,iVar16),
             iVar22 != 0))) {
        iVar3 = iVar3 + 0xc;
        if (local_d0 * 0xc == iVar3) goto LAB_00fa0eac;
      }
      if (local_88 != 0) {
        thunk_FUN_016d3fb4(iVar12);
      }
    }
    FUN_00fa1924(&local_a0,&local_94);
  } while( true );
LAB_00fa07e4:
  iVar4 = iVar4 + -0x134;
  iVar25 = iVar25 + 0x134;
  goto LAB_00fa07ec;
LAB_00fa0f48:
  do {
    if (puVar21 == (undefined4 *)0x0 || puVar21 == puVar35) {
      if (local_e8 == param_3 + param_4 * 2) {
        local_74 = local_48;
        local_28 = 0;
        local_2c = (byte *)0x4;
        local_30 = 0;
        local_70 = (int)local_44 + local_d0 * 0xc;
        local_7c = (uint)local_44;
        local_78 = (byte *)local_44;
        FUN_00f7048c(&local_30,&local_7c);
        local_74 = local_54;
        local_7c = local_50;
        local_70 = local_50 + local_4c * 0xc;
        local_78 = (byte *)local_50;
        FUN_00f7048c(&local_30,&local_7c);
        piVar23 = local_38;
        iVar2 = local_3c;
        piVar6 = local_38 + local_34 * 3;
        local_70 = 0x80000001;
        local_7c = 0x80000001;
        local_58 = piVar6;
        local_5c = local_3c;
        local_60 = local_38;
        local_64 = local_38;
        piVar15 = local_38;
        uVar27 = local_28;
        break;
      }
      puVar8 = local_e8;
      puVar21 = (undefined4 *)0x0;
      local_e8 = local_e8 + 2;
    }
    else {
      puVar8 = puVar21;
      puVar21 = puVar21 + 2;
    }
    uVar31 = *puVar8;
    iVar30 = puVar8[1];
    iVar22 = *(int *)(iVar2 + 0x48);
    for (iVar13 = *(int *)(iVar2 + 0x4c) * 0x134; iVar13 != 0; iVar13 = iVar13 + -0x134) {
      if (*(int *)(iVar22 + 0x118) == iVar30) {
        uVar33 = *(undefined4 *)(iVar22 + 0x114);
        iVar25 = thunk_FUN_016dd50a(uVar33,uVar31,iVar30);
        if (iVar25 == 0) {
          if (iVar12 == 0) goto LAB_00fa1024;
          iVar13 = iVar16;
          piVar23 = piVar15;
          goto LAB_00fa0ff0;
        }
      }
      iVar22 = iVar22 + 0x134;
    }
  } while( true );
joined_r0x00fa1260:
  local_28 = uVar27;
  if (piVar15 == piVar6) {
LAB_00fa1338:
    if (iVar2 != 0) {
      thunk_FUN_016d3fb4(piVar23);
    }
    *param_1 = local_30;
    param_1[1] = (uint)local_2c;
    param_1[2] = local_28;
    if (local_a0 != 0) {
      thunk_FUN_016d3fb4(local_9c);
    }
    if (local_ac != 0) {
      thunk_FUN_016d3fb4(local_a8);
    }
    if (piVar20 == (int *)0x0) {
      puVar21 = (undefined4 *)(local_b4 + 4);
      for (iVar2 = local_b0; iVar2 != 0; iVar2 = iVar2 + -1) {
        if (puVar21[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar21);
        }
        puVar21 = puVar21 + 5;
      }
      if (local_b8 != 0) {
        thunk_FUN_016d3fb4(local_b4);
        return;
      }
    }
    return;
  }
  puVar10 = (undefined1 *)((int)piVar6 + (-0xc - (int)piVar15));
  piVar11 = piVar15;
  while( true ) {
    piVar15 = piVar11 + 3;
    iVar12 = *piVar11;
    if (iVar12 != -0x80000000) break;
    puVar10 = puVar10 + -0xc;
    piVar11 = piVar15;
    if (piVar15 == piVar6) {
      local_60 = piVar6;
      goto LAB_00fa1338;
    }
  }
  local_60 = piVar15;
  if (iVar12 == -0x7fffffff) {
    if (piVar6 != piVar15) {
      piVar11 = piVar11 + 4;
      uVar27 = (uint)puVar10 / 0xc;
      do {
        if ((piVar11[-1] & 0x7fffffffU) != 0) {
          thunk_FUN_016d3fb4(*piVar11);
        }
        piVar11 = piVar11 + 3;
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
    }
    goto LAB_00fa1338;
  }
  iVar3 = piVar11[2];
  iVar16 = piVar11[1];
  if (uVar27 == local_30) {
    FUN_00f98de8(&local_30);
  }
  piVar11 = (int *)((int)local_2c + uVar27 * 0xc);
  *piVar11 = iVar12;
  piVar11[1] = iVar16;
  piVar11[2] = iVar3;
  uVar27 = uVar27 + 1;
  goto joined_r0x00fa1260;
  while( true ) {
    piVar23 = piVar23 + 2;
    iVar13 = iVar13 + -8;
    if (iVar13 == 0) break;
LAB_00fa0ff0:
    if ((*piVar23 == iVar30) &&
       (iVar25 = thunk_FUN_016dd50a(piVar23[-1],uVar33,iVar30), iVar25 == 0)) goto LAB_00fa0f48;
  }
LAB_00fa1024:
  if ((param_5 == 0) || (iVar13 = FUN_00f9b1f0(param_5,uVar31,iVar30,&DAT_0056a778), iVar13 == 0)) {
    FUN_00f9d408(&local_30,iVar22,iVar3,1);
    uVar28 = local_28;
    pbVar1 = local_2c;
    uVar27 = local_30;
    if (*(int *)(iVar22 + 0x14) == 0) {
      if (local_d0 != 0) {
        iVar22 = 0;
        do {
          if ((*(uint *)(local_c8 + iVar22 + 8) == uVar28) &&
             (iVar13 = thunk_FUN_016dd50a(*(undefined4 *)(local_c8 + iVar22 + 4),pbVar1,uVar28),
             iVar13 == 0)) {
            if (uVar27 != 0) {
              thunk_FUN_016d3fb4(pbVar1);
            }
            goto LAB_00fa0f48;
          }
          iVar22 = iVar22 + 0xc;
        } while (local_d0 * 0xc != iVar22);
      }
      if (local_d0 == local_48) {
        FUN_00f98de8(&local_48);
        local_c8 = (uint)local_44;
      }
      puVar9 = (uint *)(local_c8 + local_d0 * 0xc);
      *puVar9 = uVar27;
      puVar9[1] = (uint)pbVar1;
      puVar9[2] = uVar28;
      local_d0 = local_d0 + 1;
      local_40 = local_d0;
    }
    else {
      uVar27 = *(uint *)(iVar22 + 0x18);
      if (local_34 < uVar27 + 1) {
        local_7c = 0x80000000;
        FUN_00f7055c(&local_3c,uVar27 + 1,&local_7c);
      }
      uVar19 = local_28;
      pbVar1 = local_2c;
      uVar28 = local_30;
      if (local_34 <= uVar27) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar27,local_34,&DAT_01880984);
      }
      puVar9 = (uint *)(local_38 + uVar27 * 3);
      if ((*puVar9 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(puVar9[1]);
      }
      *puVar9 = uVar28;
      puVar9[1] = (uint)pbVar1;
      puVar9[2] = uVar19;
    }
  }
  goto LAB_00fa0f48;
}

