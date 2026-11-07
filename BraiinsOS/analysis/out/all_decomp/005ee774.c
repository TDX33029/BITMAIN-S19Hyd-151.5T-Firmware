// FUN_005ee774 @ 005ee774 size=6136 calls_out=12 calls_in=3
// strings: 

/* WARNING: Removing unreachable block (ram,0x005eef34) */
/* WARNING: Removing unreachable block (ram,0x005eecc4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_005ee774(undefined4 *param_1,char param_2,undefined4 *param_3)

{
  int iVar1;
  code *pcVar2;
  byte bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  undefined4 ******ppppppuVar11;
  undefined4 ******ppppppuVar12;
  undefined4 *******pppppppuVar13;
  undefined4 ******ppppppuVar14;
  uint uVar15;
  undefined4 ******ppppppuVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  int iVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 *******pppppppuVar22;
  undefined4 uVar23;
  int iVar24;
  undefined4 ******ppppppuVar25;
  undefined4 ******ppppppuVar26;
  uint uVar27;
  undefined4 ******ppppppuVar28;
  int iVar29;
  undefined4 *******pppppppuVar30;
  int iVar31;
  undefined4 ******ppppppuVar32;
  byte *pbVar33;
  undefined4 *******pppppppuVar34;
  undefined *puVar35;
  undefined4 ******ppppppuVar36;
  int iVar37;
  undefined4 ******ppppppuVar38;
  uint uVar39;
  uint uVar40;
  undefined4 ******ppppppuVar41;
  bool bVar42;
  bool bVar43;
  undefined *local_324;
  int local_300;
  undefined4 ******local_2f0;
  int local_2ec;
  undefined4 ******local_2dc;
  undefined1 *local_2cc;
  undefined4 local_2c8;
  undefined1 auStack_2b8 [256];
  undefined4 *******local_1b8;
  undefined4 *local_1b4;
  undefined4 ******local_1b0;
  undefined4 *******local_1ac;
  undefined4 *local_1a8;
  undefined4 *******local_1a4;
  uint local_1a0;
  int local_19c;
  uint local_198;
  undefined4 local_194;
  int *local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 ******local_184;
  int local_180;
  uint local_17c;
  byte local_178 [255];
  byte local_79;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60;
  int local_5c;
  int local_58;
  undefined4 ******local_54;
  undefined4 ******local_50;
  int local_4c;
  undefined4 ******local_48;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined4 *******local_38;
  undefined4 *local_34;
  undefined4 *******local_30;
  undefined1 **local_2c;
  undefined1 **local_28;
  
  puVar17 = param_3 + 0x12;
  FUN_016dd1aa(auStack_2b8,puVar17,0xff);
  ppppppuVar25 = (undefined4 ******)param_3[2];
  bVar3 = *(byte *)((int)param_3 + 0x147);
  uVar27 = (uint)bVar3;
  if (param_2 == '\0') {
    if ((int)ppppppuVar25 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01856d48);
    }
    if ((uint)((int)ppppppuVar25 * 2) < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01856d38);
    }
    ppppppuVar25 = (undefined4 ******)((int)ppppppuVar25 * 2 - 4);
  }
  uVar20 = 0;
  if (uVar27 != 0) {
    uVar20 = 0x20U - LZCOUNT(uVar27);
  }
  uVar5 = 1 << (0x20U - LZCOUNT(uVar27) & 0xff);
  if (uVar27 == 0) {
    uVar5 = 1;
  }
  if ((uint)((int)ppppppuVar25 << (uVar20 & 0xff)) < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01856d88);
  }
  uVar5 = ((int)ppppppuVar25 << (uVar20 & 0xff)) - uVar5;
  if (0x7ffffffe < uVar5) {
    param_1[2] = 0;
    param_1[6] = uVar5;
    param_1[4] = 0x7ffffffe;
    param_1[5] = 0;
    param_1[7] = 0;
    *param_1 = 1;
    return;
  }
  iVar6 = param_3[0x55];
  if (param_2 == '\0') {
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01856d68);
    }
    if (iVar6 + -1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01856d58);
    }
    pppppppuVar30 = (undefined4 *******)((iVar6 + -1) * 2);
  }
  else {
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01856d78);
    }
    pppppppuVar30 = (undefined4 *******)(iVar6 + -1);
  }
  FUN_005ff9d4(&local_50);
  iVar6 = (int)pppppppuVar30 * 0xc;
  uVar7 = 0;
  if ((undefined4 *******)0xaaaaaaa < pppppppuVar30) {
LAB_005ee884:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar7,iVar6);
  }
  if (iVar6 == 0) {
    local_1b4 = (undefined4 *)&DAT_00000004;
    local_1b8 = (undefined4 *******)0x0;
    if (&DAT_00000001 < pppppppuVar30) goto LAB_005ee8bc;
LAB_005ee8f8:
    puVar8 = local_1b4;
    if (pppppppuVar30 != (undefined4 *******)0x0) goto LAB_005ee900;
    pppppppuVar30 = (undefined4 *******)0x0;
  }
  else {
    local_1b4 = (undefined4 *)thunk_FUN_016d4a50(iVar6);
    if (local_1b4 == (undefined4 *)0x0) {
      uVar7 = 4;
      goto LAB_005ee884;
    }
    local_1b8 = pppppppuVar30;
    if (pppppppuVar30 < &SUB_00000002) goto LAB_005ee8f8;
LAB_005ee8bc:
    puVar18 = (undefined1 *)((int)pppppppuVar30 + -1);
    puVar8 = local_1b4;
    do {
      *puVar8 = 0;
      puVar8[1] = 4;
      puVar18 = puVar18 + -1;
      puVar8[2] = 0;
      puVar8 = puVar8 + 3;
    } while (puVar18 != (undefined1 *)0x0);
LAB_005ee900:
    *puVar8 = 0;
    puVar8[1] = 4;
    puVar8[2] = 0;
  }
  uVar5 = param_3[0xe];
  local_38 = local_1b8;
  local_34 = local_1b4;
  uVar7 = 0;
  local_30 = pppppppuVar30;
  if ((0x3fffffff < uVar5) ||
     (pppppppuVar30 = (undefined4 *******)(uVar5 * 4),
     (undefined4 *******)0x7ffffffc < pppppppuVar30)) {
LAB_005ee96c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar7,pppppppuVar30);
  }
  uVar7 = param_3[0xd];
  if (pppppppuVar30 == (undefined4 *******)0x0) {
    iVar6 = 4;
    uVar15 = 0;
  }
  else {
    iVar6 = thunk_FUN_016d4a50(pppppppuVar30);
    if (iVar6 == 0) {
      uVar7 = 4;
      goto LAB_005ee96c;
    }
    uVar15 = uVar5;
  }
  FUN_016dd1aa(iVar6,uVar7,pppppppuVar30);
  piVar9 = (int *)param_3[0xf];
  if (piVar9 == (int *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    do {
      iVar19 = *piVar9;
      bVar43 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar43);
    *piVar9 = iVar19 + 1;
    if (iVar19 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xfdee,0x5efe5c);
      (*pcVar2)();
    }
    local_2c8 = param_3[0x10];
    local_2cc = (undefined1 *)param_3[0x11];
  }
  uVar4 = *(undefined1 *)(param_3 + 0x58);
  FUN_016dd1aa(local_178,auStack_2b8,0xff);
  local_188 = local_2cc;
  local_1b8 = (undefined4 *******)local_50;
  local_1ac = local_38;
  local_180 = uVar27 + 1;
  local_18c = local_2c8;
  local_78 = param_3[0x52];
  local_74 = param_3[0x53];
  local_1b4 = (undefined4 *)local_4c;
  bVar43 = false;
  local_194 = 0;
  local_1b0 = local_48;
  local_1a8 = local_34;
  local_1a4 = local_30;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_1a0 = uVar15;
  local_19c = iVar6;
  local_198 = uVar5;
  local_190 = piVar9;
  local_184 = ppppppuVar25;
  local_17c = uVar20;
  local_79 = bVar3;
  local_60 = uVar4;
  if (param_2 == '\x02') {
    bVar43 = true;
LAB_005eeb00:
    iVar19 = param_3[1];
    ppppppuVar25 = (undefined4 ******)param_3[2];
    uVar7 = param_3[10];
    iVar24 = param_3[4];
    ppppppuVar26 = (undefined4 ******)param_3[5];
    iVar29 = param_3[7];
    ppppppuVar28 = (undefined4 ******)param_3[8];
    uVar21 = param_3[0xb];
    ppppppuVar36 = (undefined4 ******)0x0;
    iVar6 = iVar19;
LAB_005eeb50:
    local_2ec = iVar6;
    if (local_2ec != iVar19 + (int)ppppppuVar25 * 0x14) {
      if (ppppppuVar36 == ppppppuVar25) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01857438);
      }
      iVar1 = (int)ppppppuVar36 << (uVar20 & 0xff);
      if (*(int *)(local_2ec + 8) != 0) {
        FUN_005f03dc(&local_1b8,iVar1,uVar7,uVar21,
                     *(undefined4 *)(iVar19 + (int)ppppppuVar36 * 0x14 + 8));
      }
      iVar6 = local_2ec + 0x14;
      ppppppuVar41 = (undefined4 ******)((int)ppppppuVar36 + 1);
      ppppppuVar11 = *(undefined4 *******)(iVar19 + (int)ppppppuVar36 * 0x14);
      ppppppuVar36 = ppppppuVar41;
      if (ppppppuVar11 != (undefined4 ******)0x0) goto code_r0x005eebc8;
      bVar42 = false;
      uVar40 = 1;
      uVar5 = 0;
      uVar39 = (uint)local_178[0];
      goto LAB_005eef90;
    }
    local_64 = 0;
    if (bVar43) {
      local_64 = param_3[0x57] << (uVar20 & 0xff);
    }
    local_70 = param_3[0x54] << (uVar20 & 0xff);
    local_6c = param_3[0x55] << (uVar20 & 0xff);
    local_68 = param_3[0x56] << (uVar20 & 0xff);
    if (bVar43) {
      local_68 = 0;
    }
  }
  else {
    if (param_2 == '\x01') goto LAB_005eeb00;
    ppppppuVar36 = (undefined4 ******)param_3[2];
    FUN_005ff9d4(&local_5c,ppppppuVar36);
    FUN_005ff9d4(&local_50,ppppppuVar36);
    ppppppuVar25 = local_184;
    if ((int)local_184 < 0) {
      uVar7 = 0;
LAB_005eeaec:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar7,ppppppuVar25);
    }
    local_300 = 1;
    ppppppuVar28 = (undefined4 ******)0x0;
    if (local_184 != (undefined4 ******)0x0) {
      local_300 = FUN_016d38c8(local_184,1);
      if (local_300 == 0) {
        uVar7 = 1;
        goto LAB_005eeaec;
      }
      ppppppuVar28 = ppppppuVar25;
    }
    local_2f0 = (undefined4 ******)(1 << (uVar20 & 0xff));
    ppppppuVar41 = (undefined4 ******)0x0;
    pppppppuVar34 = (undefined4 *******)param_3[1];
    uVar21 = param_3[0xb];
    uVar7 = param_3[10];
    ppppppuVar11 = (undefined4 ******)param_3[0x56];
    ppppppuVar12 = (undefined4 ******)param_3[0x57];
    iVar6 = param_3[4];
    ppppppuVar26 = (undefined4 ******)param_3[5];
    iVar19 = param_3[7];
    ppppppuVar38 = (undefined4 ******)param_3[8];
    local_2dc = local_48;
    local_324 = &DAT_01856e68;
    local_2cc = (undefined1 *)0x0;
    for (pppppppuVar30 = pppppppuVar34; pppppppuVar30 != pppppppuVar34 + (int)ppppppuVar36 * 5;
        pppppppuVar30 = pppppppuVar30 + 5) {
      if (ppppppuVar41 == ppppppuVar36) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01857438);
      }
      puVar18 = local_2cc;
      if (ppppppuVar41 < (undefined4 ******)0x2) {
        if (local_54 <= ppppppuVar41) {
          local_324 = &DAT_01856e48;
          local_2dc = local_54;
          goto LAB_005efe44;
        }
        *(undefined1 **)(local_58 + (int)ppppppuVar41 * 4) = local_2cc;
        if (local_48 <= ppppppuVar41) {
          local_324 = &DAT_01856e58;
          goto LAB_005efe44;
        }
        *(undefined1 **)(local_4c + (int)ppppppuVar41 * 4) = local_2cc;
      }
      else {
        ppppppuVar32 = ppppppuVar11;
        if (ppppppuVar41 != ppppppuVar11) {
          ppppppuVar32 = ppppppuVar12;
        }
        if (ppppppuVar41 != ppppppuVar11 && ppppppuVar41 != ppppppuVar32) {
          local_40 = local_2cc;
          puVar18 = local_2cc + (int)local_2f0;
          local_3c = puVar18;
          if (local_54 <= ppppppuVar41) {
            ppppppuVar25 = ppppppuVar41;
            local_2dc = local_54;
            goto LAB_005efe48;
          }
          *(undefined1 **)(local_58 + (int)ppppppuVar41 * 4) = local_2cc;
          if (local_48 <= ppppppuVar41) {
            local_324 = &DAT_01856e78;
            goto LAB_005efe44;
          }
          *(undefined1 **)(local_4c + (int)ppppppuVar41 * 4) = puVar18;
          ppppppuVar32 = (undefined4 ******)((uint)puVar18 >> (uVar20 & 0xff));
          if (ppppppuVar25 <= (undefined4 ******)((uint)puVar18 >> (uVar20 & 0xff))) {
            local_2dc = ppppppuVar25;
            local_324 = &DAT_01856e88;
            ppppppuVar41 = ppppppuVar32;
            goto LAB_005efe44;
          }
          *(undefined1 *)(local_300 + (int)ppppppuVar32) = 1;
          if (pppppppuVar30[2] != (undefined4 ******)0x0) {
            FUN_005f03dc(&local_1b8,local_2cc,uVar7,uVar21,pppppppuVar34[(int)ppppppuVar41 * 5 + 2])
            ;
            FUN_005f03dc(&local_1b8,local_3c,uVar7,uVar21,pppppppuVar34[(int)ppppppuVar41 * 5 + 2]);
          }
          ppppppuVar32 = pppppppuVar34[(int)ppppppuVar41 * 5];
          local_28 = &local_3c;
          local_2c = &local_40;
          local_30 = &local_1b8;
          local_38 = pppppppuVar30;
          local_34 = param_3;
          if (ppppppuVar32 == (undefined4 ******)0x0) {
            bVar43 = false;
            uVar27 = 1;
            uVar5 = 0;
            pppppppuVar22 = (undefined4 *******)(uint)local_178[0];
LAB_005ef98c:
            pppppppuVar13 = pppppppuVar22;
            FUN_005f0224(&local_38,uVar5,pppppppuVar13,1);
          }
          else {
            bVar43 = false;
            uVar5 = 0;
            pppppppuVar13 = pppppppuVar30;
            do {
              if (ppppppuVar26 <= ppppppuVar32) goto LAB_005efe38;
              pbVar33 = (byte *)(iVar6 + (int)ppppppuVar32 * 9);
              uVar27 = (uint)*pbVar33;
              uVar23 = *(undefined4 *)(pbVar33 + 1);
              ppppppuVar32 = *(undefined4 *******)(pbVar33 + 5);
              if (uVar5 < uVar27) {
                do {
                  pppppppuVar22 = (undefined4 *******)(uint)local_178[uVar5];
                  if ((!bVar43) ||
                     ((undefined4 *******)((uint)pppppppuVar13 & 0xff) != pppppppuVar22)) {
                    ppppppuVar16 = pppppppuVar30[3];
                    if (ppppppuVar16 != (undefined4 ******)0x0) {
                      if (ppppppuVar16 < ppppppuVar36) {
                        ppppppuVar14 = ppppppuVar16;
                        do {
                          if (pppppppuVar34[(int)ppppppuVar14 * 5 + 1] == (undefined4 ******)0x0) {
                            ppppppuVar16 = pppppppuVar34[(int)ppppppuVar14 * 5];
                            while (ppppppuVar16 != (undefined4 ******)0x0) {
                              if (ppppppuVar26 <= ppppppuVar16) {
                                puVar35 = &DAT_01894598;
                                goto LAB_005efd30;
                              }
                              pbVar33 = (byte *)(iVar6 + (int)ppppppuVar16 * 9);
                              if (uVar5 <= *pbVar33) {
                                if (*pbVar33 == uVar5) {
                                  pbVar33 = pbVar33 + 1;
                                  goto LAB_005ef5c0;
                                }
                                break;
                              }
                              ppppppuVar16 = *(undefined4 *******)(pbVar33 + 5);
                            }
                          }
                          else {
                            ppppppuVar16 = (undefined4 ******)
                                           ((int)pppppppuVar34[(int)ppppppuVar14 * 5 + 1] +
                                           (uint)*(byte *)((int)puVar17 + (uVar5 & 0xff)));
                            if (ppppppuVar38 <= ppppppuVar16) {
                              ppppppuVar26 = ppppppuVar38;
                              puVar35 = &DAT_01894588;
                              goto LAB_005efd30;
                            }
                            pbVar33 = (byte *)(iVar19 + (int)ppppppuVar16 * 4);
LAB_005ef5c0:
                            iVar24 = *(int *)pbVar33;
                            if (iVar24 != 1) goto LAB_005ef554;
                          }
                          ppppppuVar16 = pppppppuVar34[(int)ppppppuVar14 * 5 + 3];
                          ppppppuVar14 = ppppppuVar16;
                          if (ppppppuVar36 <= ppppppuVar16) break;
                        } while( true );
                      }
                      ppppppuVar26 = ppppppuVar36;
                      puVar35 = &DAT_01894578;
                      goto LAB_005efd30;
                    }
                    iVar24 = 0;
LAB_005ef554:
                    ppppppuVar16 = (undefined4 ******)(local_40 + (int)pppppppuVar22);
                    if (local_1b0 <= ppppppuVar16) {
                      ppppppuVar26 = local_1b0;
                      puVar35 = &DAT_01856ee8;
                      goto LAB_005efd30;
                    }
                    *(int *)((int)local_1b4 + (int)ppppppuVar16 * 4) = iVar24;
                    pppppppuVar13 = pppppppuVar22;
                  }
                  uVar5 = uVar5 + 1;
                  bVar43 = true;
                } while (uVar5 != uVar27);
                uVar15 = uVar27;
              }
              else {
                uVar15 = uVar5;
              }
              pppppppuVar22 = (undefined4 *******)(uint)local_178[uVar27];
              if ((!bVar43) || ((undefined4 *******)((uint)pppppppuVar13 & 0xff) != pppppppuVar22))
              {
                FUN_005f0224(&local_38,uVar27,pppppppuVar22,uVar23);
                pppppppuVar13 = pppppppuVar22;
              }
              uVar5 = uVar15 + 1;
              bVar43 = true;
            } while (ppppppuVar32 != (undefined4 ******)0x0);
            if (0xff < uVar5) goto LAB_005ef354;
            pppppppuVar22 = (undefined4 *******)(uint)local_178[uVar5];
            uVar27 = uVar5;
            if (uVar5 != 0xff) {
              uVar27 = uVar15 + 2;
            }
            bVar43 = uVar15 == 0xfe;
            if ((undefined4 *******)((uint)pppppppuVar13 & 0xff) != pppppppuVar22)
            goto LAB_005ef98c;
          }
          if (!bVar43) {
            do {
              if (0xff < uVar27) break;
              uVar5 = uVar27;
              if (uVar27 != 0xff) {
                uVar5 = uVar27 + 1;
              }
              pppppppuVar22 = (undefined4 *******)(uint)local_178[uVar27];
              if ((undefined4 *******)((uint)pppppppuVar13 & 0xff) != pppppppuVar22) {
                FUN_005f0224(&local_38,uVar27,pppppppuVar22,1);
                pppppppuVar13 = pppppppuVar22;
              }
              bVar43 = uVar27 != 0xff;
              uVar27 = uVar5;
            } while (bVar43);
          }
        }
        else {
          if (ppppppuVar41 == ppppppuVar11) {
            if (local_54 <= ppppppuVar11) {
              local_324 = &DAT_01856ec8;
              ppppppuVar41 = ppppppuVar11;
              local_2dc = local_54;
              goto LAB_005efe44;
            }
            *(undefined1 **)(local_58 + (int)ppppppuVar11 * 4) = local_2cc;
            if (local_48 <= ppppppuVar11) {
              local_324 = &DAT_01856ed8;
              ppppppuVar41 = ppppppuVar11;
              goto LAB_005efe44;
            }
            *(undefined4 *)(local_4c + (int)ppppppuVar11 * 4) = 0;
          }
          else {
            if (local_54 <= ppppppuVar41) {
              local_324 = &DAT_01856e98;
              local_2dc = local_54;
              goto LAB_005efe44;
            }
            *(undefined4 *)(local_58 + (int)ppppppuVar41 * 4) = 0;
            if (local_48 <= ppppppuVar41) {
              local_324 = &DAT_01856ea8;
              goto LAB_005efe44;
            }
            *(undefined1 **)(local_4c + (int)ppppppuVar41 * 4) = local_2cc;
            ppppppuVar32 = (undefined4 ******)((uint)local_2cc >> (uVar20 & 0xff));
            if (ppppppuVar25 <= (undefined4 ******)((uint)local_2cc >> (uVar20 & 0xff))) {
              local_2dc = ppppppuVar25;
              local_324 = &DAT_01856eb8;
              ppppppuVar41 = ppppppuVar32;
              goto LAB_005efe44;
            }
            *(undefined1 *)(local_300 + (int)ppppppuVar32) = 1;
          }
          if (pppppppuVar30[2] != (undefined4 ******)0x0) {
            FUN_005f03dc(&local_1b8,local_2cc,uVar7,uVar21,pppppppuVar34[(int)ppppppuVar41 * 5 + 2])
            ;
          }
          ppppppuVar32 = pppppppuVar34[(int)ppppppuVar41 * 5];
          if (ppppppuVar32 == (undefined4 ******)0x0) {
            bVar43 = false;
            uVar27 = 1;
            uVar5 = (uint)local_178[0];
LAB_005ef8fc:
            uVar15 = uVar5;
            ppppppuVar16 = (undefined4 ******)(local_2cc + uVar15);
            if (local_1b0 <= ppppppuVar16) {
              ppppppuVar26 = local_1b0;
              puVar35 = &DAT_01856f18;
LAB_005efd30:
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(ppppppuVar16,ppppppuVar26,puVar35);
            }
            *(undefined4 *)((int)local_1b4 + (int)ppppppuVar16 * 4) = 0;
          }
          else {
            bVar43 = false;
            uVar15 = 0;
            uVar27 = 0;
            do {
              uVar40 = uVar27;
              if (ppppppuVar26 <= ppppppuVar32) goto LAB_005efe38;
              pbVar33 = (byte *)(iVar6 + (int)ppppppuVar32 * 9);
              uVar27 = (uint)*pbVar33;
              iVar24 = *(int *)(pbVar33 + 1);
              ppppppuVar32 = *(undefined4 *******)(pbVar33 + 5);
              if (uVar40 < uVar27) {
                uVar5 = (uint)local_178[uVar40];
                if (!(bool)(bVar43 & uVar15 == uVar5)) {
                  ppppppuVar16 = (undefined4 ******)(local_2cc + uVar5);
                  if (local_1b0 <= ppppppuVar16) {
                    ppppppuVar26 = local_1b0;
                    puVar35 = &DAT_01856f18;
                    goto LAB_005efd30;
                  }
                  *(undefined4 *)((int)local_1b4 + (int)ppppppuVar16 * 4) = 0;
                  uVar15 = uVar5;
                }
                if (uVar40 + 1 != uVar27) {
                  iVar29 = ~uVar40 + uVar27;
                  pbVar33 = local_178 + uVar40 + 1;
                  do {
                    uVar5 = (uint)*pbVar33;
                    if (uVar15 != uVar5) {
                      ppppppuVar16 = (undefined4 ******)(local_2cc + uVar5);
                      if (local_1b0 <= ppppppuVar16) {
                        ppppppuVar26 = local_1b0;
                        puVar35 = &DAT_01856f18;
                        goto LAB_005efd30;
                      }
                      *(undefined4 *)((int)local_1b4 + (int)ppppppuVar16 * 4) = 0;
                      uVar15 = uVar5;
                    }
                    iVar29 = iVar29 + -1;
                    pbVar33 = pbVar33 + 1;
                  } while (iVar29 != 0);
                }
                uVar5 = (uint)local_178[uVar27];
                uVar40 = uVar27;
LAB_005ef8b0:
                if (uVar15 != uVar5) goto LAB_005ef76c;
              }
              else {
                uVar5 = (uint)local_178[uVar27];
                if (bVar43) goto LAB_005ef8b0;
LAB_005ef76c:
                uVar15 = uVar5;
                ppppppuVar16 = (undefined4 ******)(local_2cc + uVar15);
                if (local_1b0 <= ppppppuVar16) {
                  ppppppuVar26 = local_1b0;
                  puVar35 = &DAT_01856f18;
                  if (iVar24 != 1) {
                    puVar35 = &DAT_01856f28;
                  }
                  goto LAB_005efd30;
                }
                iVar29 = 0;
                if (iVar24 != 1) {
                  iVar29 = iVar24;
                }
                *(int *)((int)local_1b4 + (int)ppppppuVar16 * 4) = iVar29;
              }
              uVar27 = uVar40 + 1;
              bVar43 = true;
            } while (ppppppuVar32 != (undefined4 ******)0x0);
            if (0xff < uVar27) goto LAB_005ef354;
            uVar5 = (uint)local_178[uVar27];
            if (uVar27 != 0xff) {
              uVar27 = uVar40 + 2;
            }
            bVar43 = uVar40 == 0xfe;
            if (uVar15 != uVar5) goto LAB_005ef8fc;
          }
          if (!bVar43) {
            do {
              if (0xff < uVar27) break;
              uVar40 = (uint)local_178[uVar27];
              uVar5 = uVar27;
              if (uVar27 != 0xff) {
                uVar5 = uVar27 + 1;
              }
              if (uVar15 != uVar40) {
                ppppppuVar16 = (undefined4 ******)(local_2cc + uVar40);
                if (local_1b0 <= ppppppuVar16) {
                  ppppppuVar26 = local_1b0;
                  puVar35 = &DAT_01856f18;
                  goto LAB_005efd30;
                }
                *(undefined4 *)((int)local_1b4 + (int)ppppppuVar16 * 4) = 0;
                uVar15 = uVar40;
              }
              bVar43 = uVar27 != 0xff;
              uVar27 = uVar5;
            } while (bVar43);
          }
        }
      }
LAB_005ef354:
      ppppppuVar41 = (undefined4 ******)((int)ppppppuVar41 + 1);
      local_2cc = puVar18 + (int)local_2f0;
    }
    if (local_184 != (undefined4 ******)0x0) {
      ppppppuVar36 = (undefined4 ******)0x0;
      iVar6 = 4 << (uVar20 & 0xff);
      local_324 = &DAT_01856dd8;
      puVar35 = &DAT_01856e08;
      do {
        if (ppppppuVar36 == ppppppuVar25) {
          local_2dc = ppppppuVar25;
          goto LAB_005efe48;
        }
        ppppppuVar26 = (undefined4 ******)((int)ppppppuVar36 << (uVar20 & 0xff));
        ppppppuVar41 = local_1b0;
        if (*(char *)(local_300 + (int)ppppppuVar36) == '\0') {
          if (local_1b0 < ppppppuVar26) {
            local_2f0 = local_1b0;
            goto LAB_005efdc4;
          }
          ppppppuVar41 = (undefined4 ******)((int)local_1b0 - (int)ppppppuVar26);
          if (ppppppuVar41 < local_2f0) {
            ppppppuVar26 = (undefined4 ******)0x0;
            puVar35 = &DAT_01856df8;
            goto LAB_005efdc4;
          }
          puVar17 = (undefined4 *)((int)local_1b4 + (int)ppppppuVar26 * 4);
          iVar19 = iVar6;
          do {
            ppppppuVar26 = (undefined4 ******)*puVar17;
            if (local_54 <= ppppppuVar26) {
              local_2dc = local_54;
              local_324 = &DAT_01856de8;
              ppppppuVar25 = ppppppuVar26;
              goto LAB_005efe48;
            }
            iVar19 = iVar19 + -4;
            *puVar17 = *(undefined4 *)(local_58 + (int)ppppppuVar26 * 4);
            puVar17 = puVar17 + 1;
          } while (iVar19 != 0);
        }
        else {
          if (local_1b0 < ppppppuVar26) {
            local_2f0 = local_1b0;
            puVar35 = &DAT_01856e38;
LAB_005efdc4:
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(ppppppuVar26,local_2f0,ppppppuVar41,puVar35);
          }
          ppppppuVar41 = (undefined4 ******)((int)local_1b0 - (int)ppppppuVar26);
          if (ppppppuVar41 < local_2f0) {
            ppppppuVar26 = (undefined4 ******)0x0;
            puVar35 = &DAT_01856e28;
            goto LAB_005efdc4;
          }
          puVar17 = (undefined4 *)((int)local_1b4 + (int)ppppppuVar26 * 4);
          iVar19 = iVar6;
          do {
            ppppppuVar26 = (undefined4 ******)*puVar17;
            if (local_48 <= ppppppuVar26) {
              local_324 = &DAT_01856e18;
              ppppppuVar25 = ppppppuVar26;
              goto LAB_005efe48;
            }
            iVar19 = iVar19 + -4;
            *puVar17 = *(undefined4 *)(local_4c + (int)ppppppuVar26 * 4);
            puVar17 = puVar17 + 1;
          } while (iVar19 != 0);
        }
        ppppppuVar36 = (undefined4 ******)((int)ppppppuVar36 + 1);
      } while (ppppppuVar36 != local_184);
    }
    ppppppuVar41 = (undefined4 ******)param_3[0x54];
    if (local_48 <= ppppppuVar41) {
      local_324 = &DAT_01856d98;
LAB_005efe44:
      ppppppuVar25 = ppppppuVar41;
LAB_005efe48:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(ppppppuVar25,local_2dc,local_324);
    }
    local_70 = *(int *)(local_4c + (int)ppppppuVar41 * 4);
    ppppppuVar41 = (undefined4 ******)param_3[0x55];
    if (local_48 <= ppppppuVar41) {
      local_324 = &DAT_01856da8;
      goto LAB_005efe44;
    }
    local_6c = *(int *)(local_4c + (int)ppppppuVar41 * 4);
    if (local_54 <= ppppppuVar11) {
      local_2dc = local_54;
      local_324 = &DAT_01856db8;
      ppppppuVar41 = ppppppuVar11;
      goto LAB_005efe44;
    }
    local_68 = *(int *)(local_58 + (int)ppppppuVar11 * 4);
    if (local_48 <= ppppppuVar12) {
      local_324 = &DAT_01856dc8;
      ppppppuVar41 = ppppppuVar12;
      goto LAB_005efe44;
    }
    local_64 = *(int *)(local_4c + (int)ppppppuVar12 * 4);
    if (ppppppuVar28 != (undefined4 ******)0x0) {
      thunk_FUN_016d3fb4(local_300);
    }
    if (local_50 != (undefined4 ******)0x0) {
      thunk_FUN_016d3fb4(local_4c);
    }
    if (local_5c != 0) {
      thunk_FUN_016d3fb4(local_58);
    }
  }
  ppppppuVar25 = local_1b0;
  if (local_1b0 < local_1b8) {
    if (local_1b0 == (undefined4 ******)0x0) {
      thunk_FUN_016d3fb4(local_1b4);
      iVar6 = 4;
    }
    else {
      iVar19 = (int)local_1b0 << 2;
      iVar6 = thunk_FUN_016d4ea4(local_1b4,iVar19);
      if (iVar6 == 0) goto LAB_005efc80;
    }
    local_1b8 = (undefined4 *******)ppppppuVar25;
    local_1b4 = (undefined4 *)iVar6;
  }
  uVar27 = local_198;
  if (local_198 < local_1a0) {
    if (local_198 == 0) {
      thunk_FUN_016d3fb4(local_19c);
      iVar6 = 4;
    }
    else {
      iVar19 = local_198 << 2;
      iVar6 = thunk_FUN_016d4ea4(local_19c,iVar19);
      if (iVar6 == 0) goto LAB_005efc80;
    }
    local_1a0 = uVar27;
    local_19c = iVar6;
  }
  pppppppuVar30 = local_1a4;
  if (local_1a4 < local_1ac) {
    if (local_1a4 == (undefined4 *******)0x0) {
      thunk_FUN_016d3fb4(local_1a8);
      puVar17 = (undefined4 *)&DAT_00000004;
    }
    else {
      iVar19 = (int)local_1a4 * 0xc;
      puVar17 = (undefined4 *)thunk_FUN_016d4ea4(local_1a8,iVar19);
      if (puVar17 == (undefined4 *)0x0) {
LAB_005efc80:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,iVar19);
      }
    }
    local_1ac = pppppppuVar30;
    local_1a8 = puVar17;
  }
  FUN_016dd1aa(param_1 + 1,&local_1b8,0x15c);
  *param_1 = 0;
  return;
code_r0x005eebc8:
  bVar42 = false;
  uVar27 = 0;
  uVar5 = 0;
  do {
    uVar15 = uVar5;
    if (ppppppuVar26 <= ppppppuVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(ppppppuVar11,ppppppuVar26,&DAT_01894598);
    }
    pbVar33 = (byte *)(iVar24 + (int)ppppppuVar11 * 9);
    uVar5 = (uint)*pbVar33;
    iVar10 = *(int *)(pbVar33 + 1);
    ppppppuVar11 = *(undefined4 *******)(pbVar33 + 5);
    if (uVar15 < uVar5) {
      if (bVar43) {
        uVar40 = (uint)local_178[uVar15];
        if (!(bool)(bVar42 & uVar27 == uVar40)) {
          ppppppuVar41 = (undefined4 ******)(iVar1 + uVar40);
          if (local_1b0 <= ppppppuVar41) goto LAB_005efd4c;
          *(undefined4 *)((int)local_1b4 + (int)ppppppuVar41 * 4) = 0;
          uVar27 = uVar40;
        }
        if (uVar15 + 1 != uVar5) {
          iVar31 = ~uVar15 + uVar5;
          pbVar33 = local_178 + uVar15 + 1;
          do {
            uVar15 = (uint)*pbVar33;
            if (uVar27 != uVar15) {
              ppppppuVar41 = (undefined4 ******)(iVar1 + uVar15);
              if (local_1b0 <= ppppppuVar41) goto LAB_005efd4c;
              *(undefined4 *)((int)local_1b4 + (int)ppppppuVar41 * 4) = 0;
              uVar27 = uVar15;
            }
            iVar31 = iVar31 + -1;
            pbVar33 = pbVar33 + 1;
          } while (iVar31 != 0);
          uVar40 = (uint)local_178[uVar5];
          uVar15 = uVar5;
          goto LAB_005eedec;
        }
      }
      else {
        do {
          uVar40 = (uint)local_178[uVar15];
          if ((!bVar42) || (uVar27 != uVar40)) {
            ppppppuVar41 = *(undefined4 *******)(local_2ec + 0xc);
            if (ppppppuVar41 != (undefined4 ******)0x0) {
              if (ppppppuVar41 < ppppppuVar25) {
                do {
                  iVar37 = iVar19 + (int)ppppppuVar41 * 0x14;
                  iVar31 = *(int *)(iVar37 + 4);
                  if (iVar31 == 0) {
                    ppppppuVar41 = *(undefined4 *******)(iVar19 + (int)ppppppuVar41 * 0x14);
                    while (ppppppuVar41 != (undefined4 ******)0x0) {
                      if (ppppppuVar26 <= ppppppuVar41) goto LAB_005efbe8;
                      pbVar33 = (byte *)(iVar24 + (int)ppppppuVar41 * 9);
                      if (uVar15 <= *pbVar33) {
                        if (*pbVar33 == uVar15) {
                          iVar31 = *(int *)(pbVar33 + 1);
                          goto joined_r0x005eeda0;
                        }
                        break;
                      }
                      ppppppuVar41 = *(undefined4 *******)(pbVar33 + 5);
                    }
                  }
                  else {
                    ppppppuVar41 = (undefined4 ******)
                                   (iVar31 + (uint)*(byte *)((int)puVar17 + (uVar15 & 0xff)));
                    if (ppppppuVar28 <= ppppppuVar41) goto LAB_005efccc;
                    iVar31 = *(int *)(iVar29 + (int)ppppppuVar41 * 4);
joined_r0x005eeda0:
                    if (iVar31 != 1) goto LAB_005eedac;
                  }
                  ppppppuVar41 = *(undefined4 *******)(iVar37 + 0xc);
                  if (ppppppuVar25 <= ppppppuVar41) break;
                } while( true );
              }
              goto LAB_005efcc0;
            }
            iVar31 = 0;
LAB_005eedac:
            ppppppuVar41 = (undefined4 ******)(iVar1 + uVar40);
            if (local_1b0 <= ppppppuVar41) goto LAB_005efd4c;
            *(int *)((int)local_1b4 + (int)ppppppuVar41 * 4) = iVar31 << (uVar20 & 0xff);
            uVar27 = uVar40;
          }
          uVar15 = uVar15 + 1;
          bVar42 = true;
        } while (uVar15 != uVar5);
      }
      uVar40 = (uint)local_178[uVar5];
      uVar15 = uVar5;
LAB_005eedec:
      if (uVar27 != uVar40) goto LAB_005eedf4;
    }
    else {
      uVar40 = (uint)local_178[uVar5];
      if (bVar42) goto LAB_005eedec;
LAB_005eedf4:
      uVar27 = uVar40;
      bVar42 = iVar10 == 1;
      if (bVar42) {
        iVar10 = 0;
      }
      if (!bVar43 && bVar42) {
        ppppppuVar41 = *(undefined4 *******)(local_2ec + 0xc);
        if (ppppppuVar41 != (undefined4 ******)0x0) {
          do {
            if (ppppppuVar25 <= ppppppuVar41) goto LAB_005efcc0;
            iVar31 = iVar19 + (int)ppppppuVar41 * 0x14;
            iVar10 = *(int *)(iVar31 + 4);
            if (iVar10 == 0) {
              ppppppuVar41 = *(undefined4 *******)(iVar19 + (int)ppppppuVar41 * 0x14);
              while (ppppppuVar41 != (undefined4 ******)0x0) {
                if (ppppppuVar26 <= ppppppuVar41) goto LAB_005efbe8;
                pbVar33 = (byte *)(iVar24 + (int)ppppppuVar41 * 9);
                if (uVar5 <= *pbVar33) {
                  if (uVar5 == *pbVar33) {
                    iVar10 = *(int *)(pbVar33 + 1);
                    goto joined_r0x005eeebc;
                  }
                  break;
                }
                ppppppuVar41 = *(undefined4 *******)(pbVar33 + 5);
              }
            }
            else {
              ppppppuVar41 = (undefined4 ******)(iVar10 + (uint)*(byte *)((int)puVar17 + uVar5));
              if (ppppppuVar28 <= ppppppuVar41) goto LAB_005efccc;
              iVar10 = *(int *)(iVar29 + (int)ppppppuVar41 * 4);
joined_r0x005eeebc:
              if (iVar10 != 1) goto LAB_005eebe8;
            }
            ppppppuVar41 = *(undefined4 *******)(iVar31 + 0xc);
          } while( true );
        }
        iVar10 = 0;
      }
LAB_005eebe8:
      ppppppuVar41 = (undefined4 ******)(iVar1 + uVar27);
      if (local_1b0 <= ppppppuVar41) goto LAB_005efd4c;
      *(int *)((int)local_1b4 + (int)ppppppuVar41 * 4) = iVar10 << (uVar20 & 0xff);
    }
    uVar5 = uVar15 + 1;
    bVar42 = true;
  } while (ppppppuVar11 != (undefined4 ******)0x0);
  if (0xff < uVar5) goto LAB_005eeb50;
  uVar39 = (uint)local_178[uVar5];
  uVar40 = uVar5;
  if (uVar5 != 0xff) {
    uVar40 = uVar15 + 2;
  }
  bVar42 = uVar15 == 0xfe;
  if (uVar27 == uVar39) {
    if (bVar42) goto LAB_005eeb50;
  }
  else {
LAB_005eef90:
    uVar27 = uVar39;
    iVar10 = 0;
    if ((!bVar43) &&
       (ppppppuVar41 = *(undefined4 *******)(local_2ec + 0xc),
       ppppppuVar41 != (undefined4 ******)0x0)) {
      do {
        if (ppppppuVar25 <= ppppppuVar41) goto LAB_005efcc0;
        iVar31 = iVar19 + (int)ppppppuVar41 * 0x14;
        iVar10 = *(int *)(iVar31 + 4);
        if (iVar10 == 0) {
          ppppppuVar41 = *(undefined4 *******)(iVar19 + (int)ppppppuVar41 * 0x14);
          while (ppppppuVar41 != (undefined4 ******)0x0) {
            if (ppppppuVar26 <= ppppppuVar41) goto LAB_005efbe8;
            pbVar33 = (byte *)(iVar24 + (int)ppppppuVar41 * 9);
            if (uVar5 <= *pbVar33) {
              if (*pbVar33 == uVar5) {
                iVar10 = *(int *)(pbVar33 + 1);
                goto joined_r0x005ef0f8;
              }
              break;
            }
            ppppppuVar41 = *(undefined4 *******)(pbVar33 + 5);
          }
        }
        else {
          ppppppuVar41 = (undefined4 ******)(iVar10 + (uint)*(byte *)((int)puVar17 + uVar5));
          if (ppppppuVar28 <= ppppppuVar41) goto LAB_005efccc;
          iVar10 = *(int *)(iVar29 + (int)ppppppuVar41 * 4);
joined_r0x005ef0f8:
          if (iVar10 != 1) break;
        }
        ppppppuVar41 = *(undefined4 *******)(iVar31 + 0xc);
      } while( true );
    }
    ppppppuVar41 = (undefined4 ******)(iVar1 + uVar27);
    if (local_1b0 <= ppppppuVar41) {
LAB_005efd4c:
      puVar35 = &DAT_01856d28;
      ppppppuVar25 = local_1b0;
      goto LAB_005efcd8;
    }
    *(int *)((int)local_1b4 + (int)ppppppuVar41 * 4) = iVar10 << (uVar20 & 0xff);
    if (bVar42) goto LAB_005eeb50;
  }
  if (uVar40 < 0x100) {
    if (bVar43) {
      do {
        uVar5 = uVar40;
        if (uVar40 != 0xff) {
          uVar5 = uVar40 + 1;
        }
        uVar15 = (uint)local_178[uVar40];
        if (uVar27 != uVar15) {
          ppppppuVar41 = (undefined4 ******)(iVar1 + uVar15);
          if (local_1b0 <= ppppppuVar41) goto LAB_005efd4c;
          *(undefined4 *)((int)local_1b4 + (int)ppppppuVar41 * 4) = 0;
          uVar27 = uVar15;
        }
        if (uVar40 == 0xff) {
          goto LAB_005eeb50;
        }
        uVar40 = uVar5;
      } while (uVar5 < 0x100);
    }
    else {
      do {
        uVar5 = uVar40;
        if (uVar40 != 0xff) {
          uVar5 = uVar40 + 1;
        }
        uVar15 = (uint)local_178[uVar40];
        if (uVar27 != uVar15) {
          ppppppuVar41 = *(undefined4 *******)(local_2ec + 0xc);
          if (ppppppuVar41 != (undefined4 ******)0x0) {
            do {
              if (ppppppuVar25 <= ppppppuVar41) goto LAB_005efcc0;
              iVar10 = iVar19 + (int)ppppppuVar41 * 0x14;
              iVar31 = *(int *)(iVar10 + 4);
              if (iVar31 == 0) {
                ppppppuVar41 = *(undefined4 *******)(iVar19 + (int)ppppppuVar41 * 0x14);
                while (ppppppuVar41 != (undefined4 ******)0x0) {
                  if (ppppppuVar26 <= ppppppuVar41) goto LAB_005efbe8;
                  pbVar33 = (byte *)(iVar24 + (int)ppppppuVar41 * 9);
                  if (uVar40 <= *pbVar33) {
                    if (*pbVar33 == uVar40) {
                      pbVar33 = pbVar33 + 1;
                      goto LAB_005ef16c;
                    }
                    break;
                  }
                  ppppppuVar41 = *(undefined4 *******)(pbVar33 + 5);
                }
              }
              else {
                ppppppuVar41 = (undefined4 ******)(iVar31 + (uint)*(byte *)((int)puVar17 + uVar40));
                if (ppppppuVar28 <= ppppppuVar41) goto LAB_005efccc;
                pbVar33 = (byte *)(iVar29 + (int)ppppppuVar41 * 4);
LAB_005ef16c:
                iVar31 = *(int *)pbVar33;
                if (iVar31 != 1) goto LAB_005ef134;
              }
              ppppppuVar41 = *(undefined4 *******)(iVar10 + 0xc);
            } while( true );
          }
          iVar31 = 0;
LAB_005ef134:
          ppppppuVar41 = (undefined4 ******)(iVar1 + uVar15);
          if (local_1b0 <= ppppppuVar41) goto LAB_005efd4c;
          *(int *)((int)local_1b4 + (int)ppppppuVar41 * 4) = iVar31 << (uVar20 & 0xff);
          uVar27 = uVar15;
        }
        if (uVar40 == 0xff) {
          goto LAB_005eeb50;
        }
        uVar40 = uVar5;
      } while (uVar5 < 0x100);
    }
  }
  goto LAB_005eeb50;
LAB_005efcc0:
  puVar35 = &DAT_01894578;
  goto LAB_005efcd8;
LAB_005efbe8:
  puVar35 = &DAT_01894598;
  ppppppuVar25 = ppppppuVar26;
  goto LAB_005efcd8;
LAB_005efe38:
  local_324 = &DAT_01894598;
  ppppppuVar41 = ppppppuVar32;
  local_2dc = ppppppuVar26;
  goto LAB_005efe44;
LAB_005efccc:
  puVar35 = &DAT_01894588;
  ppppppuVar25 = ppppppuVar28;
LAB_005efcd8:
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(ppppppuVar41,ppppppuVar25,puVar35);
}

