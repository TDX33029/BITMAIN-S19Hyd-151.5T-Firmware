// FUN_00bab438 @ 00bab438 size=2932 calls_out=9 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_00bab438(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  uint *****pppppuVar5;
  byte *pbVar6;
  undefined4 uVar7;
  uint *******pppppppuVar8;
  bool bVar9;
  uint *****pppppuVar10;
  uint *****pppppuVar11;
  byte *pbVar12;
  uint *puVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  uint *****pppppuVar17;
  byte *pbVar18;
  uint *****pppppuVar19;
  uint *****pppppuVar20;
  uint uVar21;
  uint ******ppppppuVar22;
  uint ******ppppppuVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  undefined4 *puVar27;
  bool bVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  uint *******pppppppuVar32;
  uint *****pppppuVar33;
  uint *****pppppuVar34;
  byte *pbVar35;
  uint ******ppppppuVar36;
  byte *pbVar37;
  byte *pbVar38;
  byte *pbVar39;
  uint *****pppppuVar40;
  uint *******local_8c;
  uint ******local_88;
  int local_74;
  uint *******local_70;
  uint *******local_6c;
  uint ******ppppppuStack_68;
  uint ******local_60;
  uint ******local_5c;
  int local_58;
  uint ******local_54;
  uint ******local_50;
  uint *******local_4c;
  uint ******local_48;
  int local_44;
  uint *******local_40;
  uint *******local_3c;
  uint ******local_38;
  uint *******local_34;
  int *local_30;
  undefined1 *local_2c;
  
  pppppuVar17 = (uint *****)param_2[2];
  uVar25 = 0;
  iVar29 = param_2[1];
  pppppuVar19 = (uint *****)0x0;
  if (pppppuVar17 != (uint *****)0x0) {
    uVar25 = *(uint *)(iVar29 + 8);
  }
  pppppuVar34 = (uint *****)(uint)(pppppuVar17 != (uint *****)0x0);
  if ((uint *****)0x1 < pppppuVar17) {
    iVar4 = ((int)pppppuVar17 * 0x18 - 0x18U >> 3) * -0x55555555;
    puVar13 = (uint *)(iVar29 + 0x20);
    do {
      if (uVar25 <= *puVar13) {
        uVar25 = *puVar13;
      }
      iVar4 = iVar4 + -1;
      puVar13 = puVar13 + 6;
    } while (iVar4 != 0);
    pppppuVar34 = pppppuVar17;
  }
  uVar14 = 100 - (uVar25 + 4);
  if (100 < uVar25 + 4) {
    uVar14 = 0;
  }
  if (uVar14 < 0x29) {
    uVar14 = 0x28;
  }
  if (pppppuVar34 == (uint *****)0x0) {
    iVar4 = 4;
  }
  else {
    iVar4 = thunk_FUN_016d4a50((int)pppppuVar34 * 0xc);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,(int)pppppuVar34 * 0xc);
    }
    pppppuVar19 = (uint *****)0x0;
    do {
      local_60 = (uint ******)(iVar29 + (int)pppppuVar19 * 0x18);
      pppppuVar10 = local_60[5];
      if (pppppuVar10 == (uint *****)0x0) {
        local_40 = &local_60;
        local_3c = (uint *******)&LAB_01110b14;
        FUN_00600d2c(&local_70,&DAT_005756c4,&local_40);
      }
      else {
        pppppuVar5 = local_60[4];
        local_74 = 4;
        ppppppuVar36 = (uint ******)0x0;
        local_54 = (uint ******)0x0;
        local_58 = 4;
        local_5c = (uint ******)0x0;
        pppppuVar20 = (uint *****)0x0;
        pppppuVar40 = (uint *****)0x0;
joined_r0x00bab584:
        do {
          pppppuVar11 = pppppuVar20;
          if (pppppuVar20 <= pppppuVar10) {
            uVar16 = (int)pppppuVar10 - (int)pppppuVar20;
            iVar24 = (int)pppppuVar5 + (int)pppppuVar20;
            pppppuVar11 = pppppuVar10;
            if (uVar16 < 8) {
              if (pppppuVar10 != pppppuVar20) {
                uVar30 = 0;
                do {
                  if (*(char *)(iVar24 + uVar30) == '\n') goto LAB_00bab6a8;
                  uVar30 = uVar30 + 1;
                } while (uVar16 != uVar30);
              }
            }
            else {
              uVar21 = (iVar24 + 3U & 0xfffffffc) - iVar24;
              if (uVar21 == 0) {
                uVar21 = 0;
                goto LAB_00bab620;
              }
              uVar30 = 0;
              do {
                if (*(char *)(iVar24 + uVar30) == '\n') goto LAB_00bab6a8;
                uVar30 = uVar30 + 1;
              } while (uVar21 != uVar30);
              for (; uVar21 <= uVar16 - 8; uVar21 = uVar21 + 8) {
LAB_00bab620:
                uVar26 = *(uint *)(iVar24 + uVar21);
                uVar30 = ((uint *)(iVar24 + uVar21))[1] ^ 0xa0a0a0a;
                if (((0x1010100 - (uVar26 ^ 0xa0a0a0a) | uVar26) & 0x80808080 &
                    (0x1010100 - uVar30 | uVar30)) != 0x80808080) break;
              }
              if (uVar16 != uVar21) {
                iVar31 = 0;
LAB_00bab688:
                if (*(char *)(iVar24 + uVar21 + iVar31) != '\n') goto code_r0x00bab694;
                uVar30 = iVar31 + uVar21;
LAB_00bab6a8:
                pppppuVar11 = (uint *****)(uVar30 + (int)pppppuVar20);
                pppppuVar20 = (uint *****)((int)pppppuVar11 + 1);
                if ((pppppuVar11 < pppppuVar10) && (*(char *)(iVar24 + uVar30) == '\n')) {
                  bVar28 = false;
                  pppppuVar11 = pppppuVar20;
                  pppppuVar33 = pppppuVar20;
                  goto LAB_00bab700;
                }
                goto joined_r0x00bab584;
              }
            }
          }
LAB_00bab6ec:
          bVar28 = true;
          pppppuVar20 = pppppuVar10;
          pppppuVar33 = pppppuVar40;
          if (pppppuVar10 == pppppuVar40) break;
LAB_00bab700:
          pbVar12 = (byte *)((int)pppppuVar20 - (int)pppppuVar40);
          pbVar6 = (byte *)((int)pppppuVar5 + (int)pppppuVar40);
          pbVar18 = pbVar12;
          if ((pbVar12 == (byte *)0x0) ||
             (*(char *)((int)pppppuVar5 + -1 + (int)pppppuVar20) != '\n')) {
LAB_00bab744:
            if (pbVar18 != (byte *)0x0) {
              local_4c = (uint *******)&DAT_00000004;
              local_88 = (uint ******)0x1;
              pbVar37 = (byte *)0x0;
              pbVar35 = (byte *)0x0;
              local_48 = (uint ******)0x0;
              local_50 = (uint ******)0x0;
              local_38 = (uint ******)0x0;
              local_3c = (uint *******)0x1;
              local_40 = (uint *******)0x0;
              pbVar12 = pbVar6;
              bVar9 = false;
              do {
                ppppppuVar36 = local_38;
                pppppppuVar32 = local_40;
                ppppppuVar23 = local_48;
                pppppppuVar8 = local_4c;
                ppppppuVar22 = local_50;
                pbVar39 = pbVar35;
                bVar1 = bVar9;
                do {
                  pbVar15 = pbVar39;
                  if (bVar9) {
                    if (local_38 == (uint ******)0x0) {
                      if (local_40 != (uint *******)0x0) {
                        thunk_FUN_016d3fb4(local_88);
                      }
                    }
                    else {
                      if (local_48 == local_50) {
                        FUN_015f37b0(&local_50);
                      }
                      pppppppuVar8 = local_4c + (int)ppppppuVar23 * 3;
                      *pppppppuVar8 = (uint ******)pppppppuVar32;
                      ppppppuVar23 = (uint ******)((int)ppppppuVar23 + 1);
                      pppppppuVar8[1] = local_88;
                      pppppppuVar8[2] = ppppppuVar36;
                      pppppppuVar8 = local_4c;
                      ppppppuVar22 = local_50;
                    }
                    local_34 = pppppppuVar8 + (int)ppppppuVar23 * 3;
                    local_40 = pppppppuVar8;
                    local_3c = pppppppuVar8;
                    local_38 = ppppppuVar22;
                    if ((uint ******)((int)local_5c - (int)local_54) < ppppppuVar23) {
                      FUN_00d653ec(&local_5c,local_54,ppppppuVar23,4,0xc);
                    }
                    ppppppuVar36 = local_54;
                    local_74 = local_58;
                    FUN_016dd1aa(local_58 + (int)local_54 * 0xc,pppppppuVar8,(int)ppppppuVar23 * 0xc
                                );
                    ppppppuVar36 = (uint ******)((int)ppppppuVar36 + (int)ppppppuVar23);
                    local_54 = ppppppuVar36;
                    if (ppppppuVar22 != (uint ******)0x0) {
                      thunk_FUN_016d3fb4(pppppppuVar8);
                    }
                    goto joined_r0x00babb54;
                  }
                  do {
                    while( true ) {
                      while( true ) {
                        do {
                          pbVar38 = pbVar37;
                          if (pbVar12 == pbVar6 + (int)pbVar18) {
                            bVar1 = true;
                            bVar9 = true;
                            pbVar2 = pbVar18;
                            pbVar39 = pbVar15;
                            pbVar3 = pbVar35;
                            pbVar37 = pbVar38;
                            goto joined_r0x00bab90c;
                          }
                          pbVar37 = pbVar12 + 1;
                          uVar16 = (uint)*pbVar12;
                          if (0x7fffffff < (uint)(int)(char)*pbVar12) {
                            if (uVar16 < 0xe0) {
                              uVar16 = pbVar12[1] & 0x3f | (uVar16 & 0x1f) << 6;
                              pbVar37 = pbVar12 + 2;
                            }
                            else {
                              uVar21 = pbVar12[2] & 0x3f | (pbVar12[1] & 0x3f) << 6;
                              if (uVar16 < 0xf0) {
                                uVar16 = uVar21 | (uVar16 & 0x1f) << 0xc;
                                pbVar37 = pbVar12 + 3;
                              }
                              else {
                                pbVar37 = pbVar12 + 4;
                                uVar16 = pbVar12[3] & 0x3f | uVar21 << 6 | (uVar16 & 7) << 0x12;
                              }
                            }
                          }
                          pbVar39 = pbVar37 + ((int)pbVar38 - (int)pbVar12);
                          bVar9 = false;
                          pbVar12 = pbVar37;
                          pbVar37 = pbVar39;
                          pbVar2 = pbVar38;
                          pbVar3 = pbVar39;
                          if ((uVar16 - 9 < 0x18) && ((1 << (uVar16 - 9 & 0xff) & 0x80001fU) != 0))
                          goto joined_r0x00bab90c;
                        } while (uVar16 < 0x80);
                        uVar21 = uVar16 >> 8;
                        if (0x1f < uVar21) break;
                        if (uVar21 == 0) {
                          if (((&DAT_0041951b)[uVar16 & 0xff] & 1) != 0) goto joined_r0x00bab90c;
                        }
                        else if ((uVar21 == 0x16) && (uVar16 == 0x1680)) goto joined_r0x00bab90c;
                      }
                      if (uVar21 == 0x20) break;
                      if ((uVar21 == 0x30) && (uVar16 == 0x3000)) goto joined_r0x00bab90c;
                    }
                  } while (((&DAT_0041951b)[uVar16 & 0xff] & 2) == 0);
joined_r0x00bab90c:
                  pbVar35 = pbVar3;
                } while (pbVar2 == pbVar15);
                uVar16 = (int)pbVar2 - (int)pbVar15;
                ppppppuVar22 = (uint ******)0x0;
                if (local_38 != (uint ******)0x0) {
                  if (uVar14 < (int)local_38 + uVar16 + 1) {
                    local_38 = (uint ******)0x0;
                    local_3c = (uint *******)0x1;
                    local_40 = (uint *******)0x0;
                    if (local_48 == local_50) {
                      FUN_015f37b0(&local_50);
                    }
                    pppppppuVar8 = local_4c + (int)ppppppuVar23 * 3;
                    *pppppppuVar8 = (uint ******)pppppppuVar32;
                    pppppppuVar8[1] = local_88;
                    pppppppuVar8[2] = ppppppuVar36;
                    local_48 = (uint ******)((int)ppppppuVar23 + 1);
                  }
                  else {
                    if (local_40 == (uint *******)local_38) {
                      FUN_00d653ec(&local_40,local_38,1,1,1);
                      local_88 = (uint ******)local_3c;
                    }
                    ppppppuVar22 = (uint ******)((int)ppppppuVar36 + 1);
                    *(undefined1 *)((int)local_88 + (int)local_38) = 0x20;
                    local_38 = ppppppuVar22;
                  }
                }
                if ((uint)((int)local_40 - (int)ppppppuVar22) < uVar16) {
                  FUN_00d653ec(&local_40,ppppppuVar22,uVar16,1,1);
                  ppppppuVar22 = local_38;
                }
                local_88 = (uint ******)local_3c;
                FUN_016dd1aa((int)local_3c + (int)ppppppuVar22,pbVar6 + (int)pbVar15,uVar16);
                local_38 = (uint ******)((int)ppppppuVar22 + uVar16);
                bVar9 = bVar1;
              } while( true );
            }
          }
          else {
            pbVar18 = pbVar12 + -1;
            if (pbVar18 != (byte *)0x0) {
              if (*(char *)((int)pppppuVar5 + -2 + (int)pppppuVar20) == '\r') {
                pbVar18 = pbVar12 + -2;
              }
              goto LAB_00bab744;
            }
          }
          if (ppppppuVar36 == local_5c) {
            FUN_015f37b0(&local_5c);
            local_74 = local_58;
          }
          local_54 = (uint ******)((int)ppppppuVar36 + 1);
          puVar27 = (undefined4 *)(local_74 + (int)ppppppuVar36 * 0xc);
          *puVar27 = 0;
          puVar27[1] = 1;
          puVar27[2] = 0;
          ppppppuVar36 = local_54;
joined_r0x00babb54:
          pppppuVar20 = pppppuVar11;
          pppppuVar40 = pppppuVar33;
        } while (!bVar28);
        iVar24 = local_58;
        uVar7 = 0;
        if ((uint ******)0xaaaaaaa < ppppppuVar36) {
LAB_00babfac:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar7,local_8c);
        }
        if (ppppppuVar36 == (uint ******)0x0) {
          ppppppuVar22 = (uint ******)0x0;
          pppppppuVar8 = (uint *******)&DAT_00000004;
        }
        else {
          local_8c = (uint *******)((int)ppppppuVar36 * 0xc);
          pppppppuVar8 = (uint *******)thunk_FUN_016d4a50(local_8c);
          if (pppppppuVar8 == (uint *******)0x0) {
            uVar7 = 4;
            goto LAB_00babfac;
          }
          local_44 = iVar24;
          local_70 = (uint *******)local_60[1];
          local_6c = (uint *******)local_60[2];
          if (uVar25 >> 0x10 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00565850,0x41,&DAT_01870ef8);
          }
          local_30 = &local_44;
          local_40 = (uint *******)&local_70;
          local_34 = (uint *******)CONCAT22(local_34._2_2_,(short)uVar25);
          local_38 = (uint ******)0x0;
          local_2c = &LAB_01110b14;
          local_3c = (uint *******)&DAT_0157d360;
          FUN_00600d2c(&local_50,&DAT_0034fb22,&local_40);
          *pppppppuVar8 = local_50;
          pppppppuVar8[1] = (uint ******)local_4c;
          pppppppuVar8[2] = local_48;
          if (ppppppuVar36 != (uint ******)0x1) {
            ppppppuVar22 = (uint ******)0x1;
            iVar31 = 0;
            do {
              local_44 = iVar24 + iVar31 + 0xc;
              if (*(int *)(iVar24 + iVar31 + 0x14) == 0) {
                local_4c = (uint *******)&DAT_00000001;
                local_48 = (uint ******)0x0;
                local_50 = (uint ******)0x0;
              }
              else {
                local_70 = (uint *******)&DAT_00000001;
                local_6c = (uint *******)0x0;
                local_38 = (uint ******)0x0;
                local_2c = &LAB_01110b14;
                local_30 = &local_44;
                local_34 = (uint *******)CONCAT22(local_34._2_2_,(short)uVar25);
                local_3c = (uint *******)&DAT_0157d360;
                local_40 = (uint *******)&local_70;
                FUN_00600d2c(&local_50,&DAT_0034fb22,&local_40);
              }
              ppppppuVar22 = (uint ******)((int)ppppppuVar22 + 1);
              *(uint *******)((int)pppppppuVar8 + iVar31 + 0xc) = local_50;
              *(uint ********)((int)pppppppuVar8 + iVar31 + 0x10) = local_4c;
              *(uint *******)((int)pppppppuVar8 + iVar31 + 0x14) = local_48;
              iVar31 = iVar31 + 0xc;
            } while (ppppppuVar36 != ppppppuVar22);
          }
          ppppppuVar22 = ppppppuVar36;
        }
        local_50 = ppppppuVar22;
        local_4c = pppppppuVar8;
        local_48 = ppppppuVar22;
        FUN_00c4406c(&local_40,pppppppuVar8,ppppppuVar22,&DAT_0041950e,1);
        pppppppuVar32 = pppppppuVar8 + 1;
        local_70 = local_40;
        local_6c = local_3c;
        ppppppuStack_68 = local_38;
        for (ppppppuVar23 = ppppppuVar22; ppppppuVar23 != (uint ******)0x0;
            ppppppuVar23 = (uint ******)((int)ppppppuVar23 - 1)) {
          if (pppppppuVar32[-1] != (uint ******)0x0) {
            thunk_FUN_016d3fb4(*pppppppuVar32);
          }
          pppppppuVar32 = pppppppuVar32 + 3;
        }
        if (ppppppuVar22 != (uint ******)0x0) {
          thunk_FUN_016d3fb4(pppppppuVar8);
        }
        puVar27 = (undefined4 *)(iVar24 + 4);
        for (; ppppppuVar36 != (uint ******)0x0; ppppppuVar36 = (uint ******)((int)ppppppuVar36 - 1)
            ) {
          if (puVar27[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar27);
          }
          puVar27 = puVar27 + 3;
        }
        local_8c = pppppppuVar8;
        if (local_5c != (uint ******)0x0) {
          thunk_FUN_016d3fb4(iVar24);
        }
      }
      pppppuVar10 = (uint *****)((int)pppppuVar19 + 1);
      puVar27 = (undefined4 *)(iVar4 + (int)pppppuVar19 * 0xc);
      *puVar27 = local_70;
      puVar27[1] = local_6c;
      puVar27[2] = ppppppuStack_68;
      pppppuVar19 = pppppuVar10;
    } while (pppppuVar10 != pppppuVar34);
    pppppuVar19 = pppppuVar34;
  }
  local_50 = (uint ******)pppppuVar19;
  local_4c = (uint *******)iVar4;
  local_48 = (uint ******)pppppuVar19;
  FUN_00c4406c(&local_40,iVar4,pppppuVar19,&DAT_0041950e,1);
  puVar27 = (undefined4 *)(iVar4 + 4);
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = local_38;
  for (; pppppuVar34 != (uint *****)0x0; pppppuVar34 = (uint *****)((int)pppppuVar34 - 1)) {
    if (puVar27[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar27);
    }
    puVar27 = puVar27 + 3;
  }
  if (pppppuVar19 != (uint *****)0x0) {
    thunk_FUN_016d3fb4(iVar4);
  }
  puVar27 = (undefined4 *)(iVar29 + 0x10);
  for (; pppppuVar17 != (uint *****)0x0; pppppuVar17 = (uint *****)((int)pppppuVar17 - 1)) {
    if (puVar27[-4] != 0) {
      thunk_FUN_016d3fb4(puVar27[-3]);
    }
    if (puVar27[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar27);
    }
    puVar27 = puVar27 + 6;
  }
  if (*param_2 != 0) {
    thunk_FUN_016d3fb4(iVar29);
  }
  return;
code_r0x00bab694:
  iVar31 = iVar31 + 1;
  if ((int)pppppuVar10 + (-(int)pppppuVar20 - uVar21) == iVar31) goto LAB_00bab6ec;
  goto LAB_00bab688;
}

