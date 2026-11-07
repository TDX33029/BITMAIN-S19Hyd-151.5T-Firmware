// FUN_006fe3a0 @ 006fe3a0 size=3128 calls_out=18 calls_in=2
// strings: internal error: entered unreachable code | internal error: entered unreachable code | internal error: entered unreachable code | backslash at end

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006fe3a0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  byte ***pppbVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  byte ***pppbVar10;
  byte *pbVar11;
  undefined8 *puVar13;
  undefined8 *puVar12;
  byte *pbVar14;
  byte bVar15;
  uint uVar16;
  int iVar17;
  byte ***pppbVar18;
  byte ***pppbVar19;
  int iVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  int iVar23;
  byte ****ppppbVar24;
  undefined4 uVar25;
  uint uVar26;
  byte ***pppbVar27;
  byte ***pppbVar28;
  undefined4 uVar29;
  undefined1 *puVar30;
  undefined4 uVar31;
  undefined *puVar32;
  byte *pbVar33;
  byte *pbVar34;
  undefined4 uVar35;
  undefined8 *puVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  byte ***local_1ac;
  byte ***local_198;
  int local_194;
  int local_190;
  uint local_18c;
  undefined4 local_188;
  uint local_184;
  byte ***local_180;
  byte ***local_17c;
  byte *local_178;
  char local_10b;
  char local_e3;
  byte ****local_e0;
  byte ***local_dc;
  byte *local_d8;
  byte ***local_d0;
  byte ***local_cc;
  byte *local_c8;
  byte *local_c4;
  undefined4 local_90;
  int local_8c;
  undefined2 local_88;
  char local_5b;
  char local_33;
  byte **local_2c;
  byte ***local_28;
  
  uVar25 = *param_2;
  iVar23 = param_2[4];
  uVar37 = FUN_0070093c(param_3,uVar25,iVar23);
  uVar31 = param_2[3];
  uVar29 = param_2[1];
  uVar35 = param_2[2];
  uVar7 = FUN_006fb3b4(uVar25,iVar23);
  FUN_006fb414(&local_d0,uVar25,uVar29,uVar35,uVar31,iVar23 + 1,uVar7);
  FUN_006fa500(&local_194,&local_d0);
  iVar23 = local_194;
  uVar8 = FUN_006fb3b4(local_194,local_184);
  uVar16 = *(uint *)(iVar23 + 0x10);
  if (uVar16 <= uVar8) {
    puVar32 = &DAT_01c06500;
    goto LAB_006ff000;
  }
  iVar20 = *(int *)(iVar23 + 0xc);
  pcVar9 = (char *)(iVar20 + uVar8 * 0x14);
  if (*pcVar9 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c06510);
  }
  cVar1 = pcVar9[1];
  if (cVar1 == '7') {
    puVar32 = &DAT_01c062d0;
    if (local_184 < uVar16) {
      iVar17 = 8;
      pcVar9 = (char *)(iVar20 + local_184 * 0x14);
      if (*pcVar9 != '\0') {
        iVar17 = 0x10;
      }
      uVar26 = *(uint *)(pcVar9 + iVar17);
      uVar8 = FUN_006fb3b4(iVar23,local_184);
      uVar16 = *(uint *)(iVar23 + 0x10);
      if (uVar16 <= uVar8) goto LAB_006ff000;
      iVar20 = 8;
      pcVar9 = (char *)(*(int *)(iVar23 + 0xc) + uVar8 * 0x14);
      if (*pcVar9 != '\0') {
        iVar20 = 0x10;
      }
      uVar8 = *(uint *)(pcVar9 + iVar20);
      if (uVar8 < uVar26) goto LAB_006fefa0;
      if (uVar26 != 0) {
        if (uVar26 < local_18c) {
          if (*(char *)(local_190 + uVar26) < -0x40) goto LAB_006fefa0;
        }
        else if (uVar26 != local_18c) goto LAB_006fefa0;
      }
      if (uVar8 != 0) {
        if (uVar8 < local_18c) {
          if (*(char *)(local_190 + uVar8) < -0x40) goto LAB_006fefa0;
        }
        else if (uVar8 != local_18c) goto LAB_006fefa0;
      }
      FUN_01306b30(&local_d0,local_190 + uVar26,uVar8 - uVar26,&DAT_00531047,2);
      local_88 = 1;
      local_90 = 0;
      local_8c = uVar8 - uVar26;
      FUN_01bed4e2(&local_180,&local_d0,0x50);
      local_e3 = '\x02';
      local_10b = '\x02';
      uVar38 = FUN_006f672c(&local_180);
      if ((int)uVar38 != 0) {
        ppppbVar24 = &local_d0;
        if (local_180 == (byte ***)0x2) {
          ppppbVar24 = &local_28;
          if (local_e3 != '\x02' || local_10b != '\x02') {
            ppppbVar24 = &local_d0;
          }
        }
        *ppppbVar24 = (byte ***)0x0;
        pppbVar10 = (byte ***)thunk_FUN_01be5118(0x20);
        if (pppbVar10 == (byte ***)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(4,0x20);
        }
        *(undefined8 *)pppbVar10 = uVar38;
        local_d8 = (byte *)0x1;
        local_e0 = (byte ****)0x4;
        local_dc = pppbVar10;
        FUN_01bed4e2(&local_d0,&local_180,0xa0);
        iVar23 = 0;
        while( true ) {
          uVar38 = FUN_006f672c(&local_d0);
          pppbVar18 = (byte ***)(iVar23 + 1);
          if ((int)uVar38 == 0) break;
          if ((byte ****)pppbVar18 == local_e0) {
            pppbVar10 = (byte ***)&local_28;
            if ((local_d0 == (byte ***)0x2) && (local_33 == '\x02' && local_5b == '\x02')) {
              pppbVar10 = &local_2c;
            }
            *pppbVar10 = (byte **)0x0;
            FUN_006520b4(&local_e0,pppbVar18,1,4,8);
            pppbVar10 = local_dc;
          }
          *(undefined8 *)((int)pppbVar10 + (iVar23 + 1) * 8) = uVar38;
          local_d8 = (byte *)(iVar23 + 2);
          iVar23 = iVar23 + 1;
        }
        pppbVar10 = (byte ***)0x0;
        local_1ac = (byte ***)local_e0;
        puVar36 = (undefined8 *)((int)local_dc + pppbVar18 * 8);
        puVar12 = (undefined8 *)((int)local_dc + 8);
        while (puVar12 != puVar36) {
          pbVar34 = *(byte **)puVar12;
          piVar2 = (int *)((int)puVar12 + 4);
          puVar12 = puVar12 + 1;
          if (*piVar2 != 0) {
            local_28 = (byte ***)0x0;
            pbVar33 = pbVar34;
            do {
              pbVar11 = pbVar33 + 1;
              uVar8 = (uint)*pbVar33;
              if (0x7fffffff < (uint)(int)(char)*pbVar33) {
                if (uVar8 < 0xe0) {
                  uVar8 = pbVar33[1] & 0x3f | (uVar8 & 0x1f) << 6;
                  pbVar11 = pbVar33 + 2;
                }
                else {
                  uVar16 = pbVar33[2] & 0x3f | (pbVar33[1] & 0x3f) << 6;
                  if (uVar8 < 0xf0) {
                    uVar8 = uVar16 | (uVar8 & 0x1f) << 0xc;
                    pbVar11 = pbVar33 + 3;
                  }
                  else {
                    uVar8 = pbVar33[3] & 0x3f | uVar16 << 6 | (uVar8 & 7) << 0x12;
                    pbVar11 = pbVar33 + 4;
                  }
                }
              }
              if (uVar8 != 0x20 && uVar8 != 9) {
                if (puVar12 == puVar36) goto LAB_006fe90c;
                uVar8 = 0;
                goto LAB_006fe84c;
              }
              local_28 = (byte ***)(pbVar11 + ((int)local_28 - (int)pbVar33));
              pbVar33 = pbVar11;
            } while (pbVar11 != pbVar34 + *piVar2);
          }
        }
        local_28 = (byte ***)0x0;
        goto LAB_006fe90c;
      }
      pppbVar10 = (byte ***)0x0;
      pppbVar18 = (byte ***)0x0;
      puVar36 = (undefined8 *)&SUB_00000004;
      local_28 = (byte ***)0x0;
      local_1ac = (byte ***)0x0;
      pppbVar28 = (byte ***)&SUB_00000004;
      goto LAB_006fe9b8;
    }
  }
  else {
    if (cVar1 != '9') {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c064a0);
    }
    puVar32 = &DAT_01c062d0;
    if (local_184 < uVar16) {
      iVar17 = 8;
      pcVar9 = (char *)(iVar20 + local_184 * 0x14);
      if (*pcVar9 != '\0') {
        iVar17 = 0x10;
      }
      uVar26 = *(uint *)(pcVar9 + iVar17);
      uVar8 = FUN_006fb3b4(iVar23,local_184);
      uVar16 = *(uint *)(iVar23 + 0x10);
      if (uVar16 <= uVar8) goto LAB_006ff000;
      iVar20 = 8;
      pcVar9 = (char *)(*(int *)(iVar23 + 0xc) + uVar8 * 0x14);
      if (*pcVar9 != '\0') {
        iVar20 = 0x10;
      }
      uVar8 = *(uint *)(pcVar9 + iVar20);
      if (uVar8 < uVar26) goto LAB_006fefa0;
      if (uVar26 != 0) {
        if (uVar26 < local_18c) {
          if (*(char *)(local_190 + uVar26) < -0x40) goto LAB_006fefa0;
        }
        else if (uVar26 != local_18c) goto LAB_006fefa0;
      }
      if (uVar8 != 0) {
        if (uVar8 < local_18c) {
          if (*(char *)(local_190 + uVar8) < -0x40) goto LAB_006fefa0;
        }
        else if (uVar8 != local_18c) {
LAB_006fefa0:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(local_190,local_18c,uVar26,uVar8,&DAT_01c064f0);
        }
      }
      local_c8 = (byte *)0x0;
      local_cc = (byte ***)0x1;
      local_d0 = (byte ***)0x0;
      if (uVar26 != uVar8) {
        pbVar33 = (byte *)(local_190 + uVar8);
        pbVar34 = (byte *)(local_190 + uVar26);
        local_198 = (byte ***)0x1;
        do {
          pbVar11 = local_c8;
          pbVar14 = pbVar34 + 1;
          puVar30 = (undefined1 *)(uint)*pbVar34;
          if (0x7fffffff < (uint)(int)(char)*pbVar34) {
            if (puVar30 < (undefined1 *)0xe0) {
              puVar30 = (undefined1 *)(pbVar34[1] & 0x3f | ((uint)puVar30 & 0x1f) << 6);
              pbVar14 = pbVar34 + 2;
            }
            else {
              uVar8 = pbVar34[2] & 0x3f | (pbVar34[1] & 0x3f) << 6;
              if (puVar30 < (undefined1 *)0xf0) {
                puVar30 = (undefined1 *)(uVar8 | ((uint)puVar30 & 0x1f) << 0xc);
                pbVar14 = pbVar34 + 3;
              }
              else {
                puVar30 = (undefined1 *)
                          (pbVar34[3] & 0x3f | uVar8 << 6 | ((uint)puVar30 & 7) << 0x12);
                pbVar14 = pbVar34 + 4;
              }
            }
          }
          if (puVar30 == (undefined1 *)0x5c) {
            if (pbVar14 == pbVar33) {
LAB_006fefb8:
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("backslash at end",0x10,&DAT_01c06540);
            }
            pbVar34 = pbVar14 + 1;
            puVar30 = (undefined1 *)(uint)*pbVar14;
            if (0x7fffffff < (uint)(int)(char)*pbVar14) {
              if (puVar30 < (undefined1 *)0xe0) {
                puVar30 = (undefined1 *)(pbVar14[1] & 0x3f | ((uint)puVar30 & 0x1f) << 6);
                pbVar34 = pbVar14 + 2;
              }
              else {
                uVar8 = pbVar14[2] & 0x3f | (pbVar14[1] & 0x3f) << 6;
                if (puVar30 < (undefined1 *)0xf0) {
                  puVar30 = (undefined1 *)(uVar8 | ((uint)puVar30 & 0x1f) << 0xc);
                  pbVar34 = pbVar14 + 3;
                }
                else {
                  puVar30 = (undefined1 *)
                            (pbVar14[3] & 0x3f | uVar8 << 6 | ((uint)puVar30 & 7) << 0x12);
                  if (puVar30 == &DAT_00110000) goto LAB_006fefb8;
                  pbVar34 = pbVar14 + 4;
                }
              }
            }
            if (puVar30 < (undefined1 *)0x62) {
              bVar5 = true;
              if (puVar30 != (undefined1 *)0x22 && puVar30 != (undefined1 *)0x2f) {
                uVar8 = 1;
                if (puVar30 != (undefined1 *)0x5c) goto switchD_006fed80_caseD_6f;
                goto LAB_006fecec;
              }
            }
            else {
              switch(puVar30) {
              case (undefined1 *)0x6e:
                puVar30 = (undefined1 *)0xa;
                break;
              case (undefined1 *)0x6f:
              case (undefined1 *)0x70:
              case (undefined1 *)0x71:
              case (undefined1 *)0x73:
switchD_006fed80_caseD_6f:
                    /* WARNING: Subroutine does not return */
                FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c06560);
              case (undefined1 *)0x72:
                puVar30 = (undefined1 *)0xd;
                break;
              case (undefined1 *)0x74:
                puVar30 = (undefined1 *)0x9;
                break;
              case (undefined1 *)0x75:
                puVar30 = (undefined1 *)0x0;
                iVar23 = 4;
                do {
                  if (pbVar34 == pbVar33) {
LAB_006fef94:
                    puVar32 = &DAT_01c06280;
                    goto LAB_006fef2c;
                  }
                  pbVar14 = pbVar34 + 1;
                  puVar21 = (undefined1 *)(uint)*pbVar34;
                  if (0x7fffffff < (uint)(int)(char)*pbVar34) {
                    if (puVar21 < (undefined1 *)0xe0) {
                      puVar21 = (undefined1 *)(pbVar34[1] & 0x3f | ((uint)puVar21 & 0x1f) << 6);
                      pbVar14 = pbVar34 + 2;
                    }
                    else {
                      uVar8 = pbVar34[2] & 0x3f | (pbVar34[1] & 0x3f) << 6;
                      if (puVar21 < (undefined1 *)0xf0) {
                        puVar21 = (undefined1 *)(uVar8 | ((uint)puVar21 & 0x1f) << 0xc);
                        pbVar14 = pbVar34 + 3;
                      }
                      else {
                        puVar21 = (undefined1 *)
                                  (pbVar34[3] & 0x3f | uVar8 << 6 | ((uint)puVar21 & 7) << 0x12);
                        if (puVar21 == &DAT_00110000) goto LAB_006fef94;
                        pbVar14 = pbVar34 + 4;
                      }
                    }
                  }
                  puVar22 = puVar21 + -0x30;
                  if ((undefined1 *)0x39 < puVar21) {
                    puVar22 = (undefined1 *)(((uint)(puVar21 + -0x41) & 0xffffffdf) + 10);
                  }
                  if ((undefined1 *)0xf < puVar22) {
                    puVar32 = &DAT_01c06290;
                    goto LAB_006fef2c;
                  }
                  puVar30 = (undefined1 *)((uint)puVar22 | (int)puVar30 << 4);
                  iVar23 = iVar23 + -1;
                  pbVar34 = pbVar14;
                } while (iVar23 != 0);
                if (((uint)puVar30 ^ 0xd800) - 0x110000 < 0xffef0800) {
                  puVar32 = &DAT_01c06550;
LAB_006fef2c:
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0cc(puVar32);
                }
                goto LAB_006fec14;
              default:
                if (puVar30 == (undefined1 *)0x62) {
                  puVar30 = (undefined1 *)0x8;
                }
                else {
                  if (puVar30 != (undefined1 *)0x66) goto switchD_006fed80_caseD_6f;
                  puVar30 = (undefined1 *)0xc;
                }
              }
            }
LAB_006fece8:
            bVar5 = true;
            uVar8 = 1;
          }
          else {
            if (puVar30 == &DAT_00110000) break;
LAB_006fec14:
            if (puVar30 == &DAT_00110000) break;
            pbVar34 = pbVar14;
            if (puVar30 < (undefined1 *)0x80) goto LAB_006fece8;
            uVar8 = 2;
            bVar5 = false;
            if (((undefined1 *)0x7ff < puVar30) && (uVar8 = 4, puVar30 < (undefined1 *)0x10000)) {
              uVar8 = 3;
            }
          }
LAB_006fecec:
          if ((uint)((int)local_d0 - (int)local_c8) < uVar8) {
            FUN_006520b4(&local_d0,local_c8,uVar8,1,1);
            local_198 = local_cc;
          }
          local_c8 = (byte *)((int)local_198 + (int)local_c8);
          if (bVar5) {
LAB_006fed10:
            *local_c8 = (byte)puVar30;
          }
          else {
            bVar3 = (byte)puVar30 & 0x3f | 0x80;
            bVar15 = (byte)((uint)puVar30 >> 6);
            if (puVar30 < (undefined1 *)0x800) {
              bVar15 = bVar15 | 0xc0;
              local_c8[1] = bVar3;
            }
            else {
              bVar4 = bVar15 & 0x3f | 0x80;
              bVar15 = (byte)((uint)puVar30 >> 0xc);
              if ((uint)puVar30 >> 0x10 != 0) {
                puVar30 = (undefined1 *)((uint)puVar30 >> 0x12 | 0xfffffff0);
                local_c8[3] = bVar3;
                local_c8[2] = bVar4;
                local_c8[1] = bVar15 & 0x3f | 0x80;
                goto LAB_006fed10;
              }
              local_c8[1] = bVar4;
              bVar15 = bVar15 | 0xe0;
              local_c8[2] = bVar3;
            }
            *local_c8 = bVar15;
          }
          local_c8 = pbVar11 + uVar8;
        } while (pbVar34 != pbVar33);
      }
      local_e0 = (byte ****)local_d0;
      local_dc = local_cc;
      local_d8 = local_c8;
      goto LAB_006feb40;
    }
  }
  puVar32 = &DAT_01c062d0;
  uVar8 = local_184;
LAB_006ff000:
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(uVar8,uVar16,puVar32);
LAB_006fe84c:
  do {
    pbVar34 = *(byte **)(puVar12 + uVar8);
    iVar23 = *(int *)((int)(puVar12 + uVar8) + 4);
    if (iVar23 != 0) {
      pppbVar27 = (byte ***)0x0;
      pbVar33 = pbVar34;
      do {
        pbVar11 = pbVar33 + 1;
        uVar16 = (uint)*pbVar33;
        if (0x7fffffff < (uint)(int)(char)*pbVar33) {
          if (uVar16 < 0xe0) {
            uVar16 = pbVar33[1] & 0x3f | (uVar16 & 0x1f) << 6;
            pbVar11 = pbVar33 + 2;
          }
          else {
            uVar26 = pbVar33[2] & 0x3f | (pbVar33[1] & 0x3f) << 6;
            if (uVar16 < 0xf0) {
              uVar16 = uVar26 | (uVar16 & 0x1f) << 0xc;
              pbVar11 = pbVar33 + 3;
            }
            else {
              pbVar11 = pbVar33 + 4;
              uVar16 = pbVar33[3] & 0x3f | uVar26 << 6 | (uVar16 & 7) << 0x12;
            }
          }
        }
        if (uVar16 != 0x20 && uVar16 != 9) {
          if (pppbVar27 <= local_28) {
            local_28 = pppbVar27;
          }
          break;
        }
        pppbVar27 = (byte ***)(pbVar11 + ((int)pppbVar27 - (int)pbVar33));
        pbVar33 = pbVar11;
      } while (pbVar11 != pbVar34 + iVar23);
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 != (uint)((int)puVar36 - (int)puVar12) >> 3);
LAB_006fe90c:
  pppbVar27 = local_dc;
  do {
    iVar23 = *(int *)((int)pppbVar27 + 4);
    if (iVar23 != 0) {
      pcVar9 = (char *)*pppbVar27;
      do {
        if (*pcVar9 != ' ' && *pcVar9 != '\t') goto LAB_006fe958;
        pcVar9 = pcVar9 + 1;
        iVar23 = iVar23 + -1;
      } while (iVar23 != 0);
    }
    pppbVar27 = (byte ***)((int)pppbVar27 + 8);
    pppbVar10 = (byte ***)((int)pppbVar10 + 1);
  } while (pppbVar27 != (byte ***)puVar36);
  pppbVar10 = pppbVar18;
LAB_006fe958:
  puVar12 = (undefined8 *)((int)local_dc + pppbVar18 * 8);
  pppbVar27 = pppbVar18;
  do {
    puVar13 = puVar12 + -1;
    pcVar9 = *(char **)puVar13;
    for (iVar23 = *(int *)((int)puVar12 + -4); pppbVar28 = local_dc, iVar23 != 0;
        iVar23 = iVar23 + -1) {
      if (*pcVar9 != ' ' && *pcVar9 != '\t') goto LAB_006fe9bc;
      pcVar9 = pcVar9 + 1;
    }
    pppbVar27 = (byte ***)((int)pppbVar27 - 1);
    puVar12 = puVar13;
  } while (local_dc != (byte ***)puVar13);
LAB_006fe9b8:
  pppbVar27 = (byte ***)0x0;
LAB_006fe9bc:
  pppbVar6 = local_28;
  local_17c = (byte ***)0x1;
  pppbVar19 = pppbVar18;
  if (pppbVar27 < pppbVar18) {
    pppbVar19 = pppbVar27;
  }
  ppppbVar24 = &local_d0;
  if (pppbVar19 <= pppbVar10) {
    ppppbVar24 = (byte ****)&local_e0;
  }
  if (pppbVar27 == (byte ***)0x0) {
    ppppbVar24 = (byte ****)&local_e0;
  }
  local_178 = (byte *)0x0;
  local_180 = (byte ***)0x0;
  *ppppbVar24 = (byte ***)0x0;
  local_e0 = &local_180;
  puVar12 = (undefined8 *)pppbVar28;
  if (pppbVar10 == (byte ***)0x0) {
LAB_006fea34:
    if ((byte ***)((uint)((int)puVar36 - (int)puVar12) >> 3) < pppbVar27) {
      pppbVar27 = (byte ***)((uint)((int)puVar36 - (int)puVar12) >> 3);
    }
    if (pppbVar27 != (byte ***)0x0) {
      pppbVar18 = (byte ***)0x0;
      do {
        pbVar34 = *(byte **)(puVar12 + -(int)pppbVar18);
        pppbVar19 = *(byte ****)((int)(puVar12 + -(int)pppbVar18) + 4);
        if ((pppbVar10 != pppbVar18) && (pppbVar6 <= pppbVar19)) {
          if ((pppbVar6 != (byte ***)0x0 && pppbVar6 < pppbVar19) &&
             ((char)*(byte *)((int)pppbVar6 + (int)pbVar34) < -0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb514(pbVar34,pppbVar19,pppbVar6,pppbVar19,&DAT_01c062a0);
          }
          pbVar34 = pbVar34 + (int)pppbVar6;
          pppbVar19 = (byte ***)((int)pppbVar19 - (int)pppbVar6);
        }
        local_c4 = pbVar34 + (int)pppbVar19;
        local_d0 = (byte ***)&DAT_0056e16c;
        if (pppbVar18 == (byte ***)0x0) {
          local_d0 = (byte ***)0x4;
        }
        local_cc = local_d0 + (pppbVar18 != (byte ***)0x0);
        local_c8 = pbVar34;
        FUN_00700760(&local_d0,&local_e0);
        pppbVar18 = (byte ***)((int)pppbVar18 - 1);
      } while ((byte ***)-(int)pppbVar18 != pppbVar27);
    }
  }
  else if (((byte ***)((int)pppbVar10 - 1U) < pppbVar27) &&
          ((byte ***)((int)pppbVar10 - 1U) < pppbVar18)) {
    pppbVar27 = (byte ***)((int)pppbVar27 - (int)pppbVar10);
    puVar12 = (undefined8 *)((int)pppbVar28 + pppbVar10 * 8);
    goto LAB_006fea34;
  }
  local_e0 = (byte ****)local_180;
  local_dc = local_17c;
  local_d8 = local_178;
  FUN_0134aee0(local_1ac,pppbVar28,4,8);
LAB_006feb40:
  param_1[3] = local_e0;
  param_1[4] = local_dc;
  param_1[5] = local_d8;
  *param_1 = 9;
  *(undefined8 *)(param_1 + 1) = uVar37;
  FUN_006f6e98(local_194,local_188);
  return;
}

