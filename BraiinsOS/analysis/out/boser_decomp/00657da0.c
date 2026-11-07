// FUN_00657da0 @ 00657da0 size=4172 calls_out=16 calls_in=3
// strings: 

void FUN_00657da0(undefined4 *param_1,char param_2,uint param_3,uint *******param_4)

{
  code *pcVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint ******ppppppuVar6;
  uint *******pppppppuVar7;
  uint *******pppppppuVar8;
  uint *******pppppppuVar9;
  uint ******ppppppuVar10;
  undefined4 *puVar11;
  uint *****pppppuVar12;
  int iVar13;
  uint uVar14;
  undefined *puVar15;
  uint *******pppppppuVar16;
  uint *******pppppppuVar17;
  uint *******pppppppuVar18;
  bool bVar19;
  uint ******ppppppuVar20;
  uint ******ppppppuVar21;
  undefined4 uVar22;
  int iVar23;
  uint uVar24;
  uint ******ppppppuVar25;
  uint *******pppppppuVar26;
  uint *******pppppppuVar27;
  byte *pbVar28;
  uint *******pppppppuVar29;
  uint ******ppppppuVar30;
  uint uVar31;
  uint ******ppppppuVar32;
  undefined *puVar33;
  undefined *puVar34;
  uint *******pppppppuVar35;
  uint *******pppppppuVar36;
  uint *******pppppppuVar37;
  uint *******local_2ec;
  uint ******local_2e8;
  undefined1 auStack_2d0 [256];
  uint *******local_1d0;
  uint ******local_1cc;
  uint *******local_1c8;
  uint *******local_1c4;
  uint *******pppppppuStack_1c0;
  uint *******local_1bc;
  uint ******local_1b8;
  int local_1b4;
  uint ******local_1b0;
  undefined4 local_1ac;
  uint ******local_1a8;
  uint ******local_1a4;
  uint ******local_1a0;
  uint *******local_19c;
  int local_198;
  uint ******local_194;
  byte local_190 [191];
  byte local_d1;
  byte local_91;
  uint ******local_90;
  uint ******local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined1 local_78;
  uint ******local_74;
  int local_70;
  uint *******local_6c;
  uint *******local_68;
  int local_64;
  uint *******local_60;
  uint *******local_58;
  uint *******local_54;
  uint *******local_50;
  uint ******local_48;
  uint ******local_44;
  uint *******local_40;
  uint *******local_3c;
  uint *******local_38;
  uint *******local_34;
  uint *******local_30;
  uint *******local_2c;
  
  if ((param_3 & 1) == 0) {
    iVar23 = 0;
    FUN_01bed93e(&local_1d0,0,0x100);
    do {
      *(char *)((int)&local_1d0 + iVar23) = (char)iVar23;
      iVar23 = iVar23 + 1;
    } while (iVar23 != 0x100);
    FUN_01bed4e2(auStack_2d0,&local_1d0,0xff);
    bVar2 = local_d1;
  }
  else {
    FUN_01bed4e2(auStack_2d0,param_4 + 0x12,0xff);
    bVar2 = *(byte *)((int)param_4 + 0x147);
  }
  uVar31 = (uint)bVar2;
  pppppppuVar35 = (uint *******)param_4[2];
  if (param_2 == '\0') {
    if ((int)pppppppuVar35 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c03848);
    }
    if (pppppppuVar35 < (uint *******)0x2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c03858);
    }
    pppppppuVar35 = (uint *******)((int)pppppppuVar35 * 2 + -4);
  }
  ppppppuVar10 = (uint ******)0x0;
  if (uVar31 != 0) {
    ppppppuVar10 = (uint ******)(0x20U - LZCOUNT(uVar31));
  }
  uVar5 = 1 << (0x20U - LZCOUNT(uVar31) & 0xff);
  if (uVar31 == 0) {
    uVar5 = 1;
  }
  if ((uint)((int)pppppppuVar35 << ((uint)ppppppuVar10 & 0xff)) < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01c03868);
  }
  uVar5 = ((int)pppppppuVar35 << ((uint)ppppppuVar10 & 0xff)) - uVar5;
  if (0x7ffffffe < uVar5) {
    param_1[2] = 0;
    param_1[6] = uVar5;
    param_1[4] = 0x7ffffffe;
    param_1[5] = 0;
    param_1[7] = 0;
    *param_1 = 1;
    return;
  }
  ppppppuVar6 = param_4[0x55];
  if (param_2 == '\0') {
    if (ppppppuVar6 == (uint ******)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c03878);
    }
    if (ppppppuVar6 == (uint ******)0x0 || (int)((int)ppppppuVar6 - 1U) < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c03888);
    }
    pppppppuVar29 = (uint *******)(((int)ppppppuVar6 - 1U) * 2);
  }
  else {
    if (ppppppuVar6 == (uint ******)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c03898);
    }
    pppppppuVar29 = (uint *******)((int)ppppppuVar6 - 1);
  }
  FUN_0065ec80(&local_68);
  uVar22 = 0;
  iVar23 = (int)pppppppuVar29 * 0xc;
  if ((uint *******)0xaaaaaaa < pppppppuVar29) {
LAB_00657f00:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar22,iVar23);
  }
  if (iVar23 == 0) {
    pppppppuVar7 = (uint *******)&SUB_00000004;
    local_40 = (uint *******)0x0;
  }
  else {
    uVar22 = 4;
    pppppppuVar7 = (uint *******)FUN_01298504(iVar23,4);
    local_40 = pppppppuVar29;
    if (pppppppuVar7 == (uint *******)0x0) goto LAB_00657f00;
  }
  local_38 = (uint *******)0x0;
  local_3c = pppppppuVar7;
  if (pppppppuVar29 < (uint *******)0x2) {
    local_38 = (uint *******)&DAT_00000001;
    if (pppppppuVar29 != (uint *******)0x0) goto LAB_00657fac;
    local_38 = (uint *******)0x0;
    FUN_0134aee0(0,4,4,4);
  }
  else {
    iVar23 = 0;
    pppppppuVar18 = pppppppuVar7;
    do {
      FUN_01299464(&local_1d0,4,0);
      iVar23 = iVar23 + 1;
      pppppppuVar7 = pppppppuVar18 + 3;
      *pppppppuVar18 = (uint ******)local_1d0;
      pppppppuVar18[1] = local_1cc;
      pppppppuVar18[2] = (uint ******)local_1c8;
      pppppppuVar18 = pppppppuVar7;
    } while ((int)pppppppuVar29 + -1 != iVar23);
    local_38 = pppppppuVar29;
LAB_00657fac:
    *pppppppuVar7 = (uint ******)0x0;
    pppppppuVar7[1] = (uint ******)0x4;
    pppppppuVar7[2] = (uint ******)0x0;
  }
  ppppppuVar6 = (uint ******)0x0;
  local_58 = local_40;
  local_54 = local_3c;
  local_50 = local_38;
  ppppppuVar25 = param_4[0xe];
  if (((uint ******)0x3fffffff < ppppppuVar25) ||
     (pppppppuVar7 = (uint *******)((int)ppppppuVar25 * 4), (uint *******)0x7ffffffc < pppppppuVar7)
     ) {
LAB_0065801c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(ppppppuVar6,pppppppuVar7);
  }
  ppppppuVar30 = param_4[0xd];
  if (pppppppuVar7 == (uint *******)0x0) {
    iVar23 = 4;
  }
  else {
    ppppppuVar6 = (uint ******)0x4;
    iVar23 = FUN_01298504(pppppppuVar7,4);
    if (iVar23 == 0) goto LAB_0065801c;
    ppppppuVar6 = ppppppuVar25;
  }
  FUN_01bed4e2(iVar23,ppppppuVar30,pppppppuVar7);
  ppppppuVar30 = param_4[0xf];
  if (ppppppuVar30 == (uint ******)0x0) {
    ppppppuVar30 = (uint ******)0x0;
  }
  else {
    do {
      pppppuVar12 = *ppppppuVar30;
      bVar19 = (bool)hasExclusiveAccess(ppppppuVar30);
    } while (!bVar19);
    *ppppppuVar30 = (uint *****)((int)pppppuVar12 + 1);
    if ((int)pppppuVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x658d14);
      (*pcVar1)();
    }
    local_2ec = (uint *******)param_4[0x10];
    local_2e8 = param_4[0x11];
  }
  uVar3 = *(undefined1 *)(param_4 + 0x58);
  FUN_01bed4e2(local_190,auStack_2d0,0xff);
  uVar4 = 0;
  local_91 = bVar2;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_1d0 = local_68;
  local_1cc = (uint ******)local_64;
  local_1c8 = local_60;
  local_1c4 = local_58;
  pppppppuStack_1c0 = local_54;
  local_1bc = local_50;
  local_1a0 = local_2e8;
  local_1a4 = (uint ******)local_2ec;
  local_198 = uVar31 + 1;
  local_8c = param_4[0x53];
  local_78 = uVar3;
  local_1ac = 0;
  local_90 = param_4[0x52];
  local_1b8 = ppppppuVar6;
  local_1b4 = iVar23;
  local_1b0 = ppppppuVar25;
  local_1a8 = ppppppuVar30;
  local_19c = pppppppuVar35;
  local_194 = ppppppuVar10;
  if (param_2 == '\x02') {
    uVar4 = 1;
  }
  else if (param_2 != '\x01') {
    pppppppuVar16 = (uint *******)param_4[2];
    FUN_0065ec80(&local_74,pppppppuVar16);
    FUN_0065ec80(&local_68,pppppppuVar16);
    FUN_018a7af8(&local_58,local_19c);
    pppppppuVar7 = local_50;
    pppppppuVar29 = local_54;
    ppppppuVar32 = (uint ******)0x0;
    pppppppuVar35 = (uint *******)(1 << ((uint)ppppppuVar10 & 0xff));
    pppppppuVar8 = (uint *******)param_4[5];
    ppppppuVar6 = param_4[10];
    pppppppuVar26 = (uint *******)param_4[1];
    ppppppuVar25 = param_4[4];
    pppppppuVar9 = (uint *******)param_4[0x57];
    ppppppuVar30 = param_4[0xb];
    pppppppuVar36 = (uint *******)param_4[0x56];
    local_2ec = (uint *******)0x0;
    for (pppppppuVar18 = pppppppuVar26; pppppppuVar18 != pppppppuVar26 + (int)pppppppuVar16 * 5;
        pppppppuVar18 = pppppppuVar18 + 5) {
      if (local_2ec == pppppppuVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c03cd8);
      }
      ppppppuVar20 = ppppppuVar32;
      if (&DAT_00000001 < local_2ec) {
        if (local_2ec == pppppppuVar36) {
          if (local_6c <= pppppppuVar36) {
            pppppppuVar7 = local_6c;
            puVar34 = &DAT_01c039b8;
            local_2ec = pppppppuVar36;
            goto LAB_00658c84;
          }
          *(uint *******)(local_70 + (int)pppppppuVar36 * 4) = ppppppuVar32;
          if (local_60 <= pppppppuVar36) {
            pppppppuVar7 = local_60;
            puVar34 = &DAT_01c039c8;
            local_2ec = pppppppuVar36;
            goto LAB_00658c84;
          }
          *(undefined4 *)(local_64 + (int)pppppppuVar36 * 4) = 0;
        }
        else {
          if (local_2ec != pppppppuVar9) {
            ppppppuVar20 = (uint ******)((int)ppppppuVar32 + (int)pppppppuVar35);
            local_44 = ppppppuVar20;
            local_48 = ppppppuVar32;
            if (local_2ec < local_6c) {
              *(uint *******)(local_70 + (int)local_2ec * 4) = ppppppuVar32;
              if (local_2ec < local_60) {
                *(uint *******)(local_64 + (int)local_2ec * 4) = ppppppuVar20;
                pppppppuVar37 = (uint *******)((uint)ppppppuVar20 >> ((uint)ppppppuVar10 & 0xff));
                if ((uint *******)((uint)ppppppuVar20 >> ((uint)ppppppuVar10 & 0xff)) < pppppppuVar7
                   ) {
                  *(undefined1 *)((int)pppppppuVar29 + (int)pppppppuVar37) = 1;
                  if (pppppppuVar18[2] != (uint ******)0x0) {
                    FUN_00659164(&local_1d0,ppppppuVar32,ppppppuVar6,ppppppuVar30,
                                 pppppppuVar26[(int)local_2ec * 5 + 2]);
                    FUN_00659164(&local_1d0,local_44,ppppppuVar6,ppppppuVar30,
                                 pppppppuVar26[(int)local_2ec * 5 + 2]);
                  }
                  local_30 = &local_44;
                  local_34 = &local_48;
                  pppppppuVar27 = (uint *******)pppppppuVar26[(int)local_2ec * 5];
                  local_3c = param_4;
                  local_38 = (uint *******)&local_1d0;
                  local_40 = pppppppuVar18;
                  pppppppuVar37 = pppppppuVar18;
                  if (pppppppuVar27 == (uint *******)0x0) {
                    bVar19 = false;
                    uVar31 = 0;
                  }
                  else {
                    uVar31 = 0;
                    bVar19 = false;
                    do {
                      if (pppppppuVar8 <= pppppppuVar27) goto LAB_00658cc8;
                      pbVar28 = (byte *)((int)ppppppuVar25 + (int)pppppppuVar27 * 9);
                      uVar5 = (uint)*pbVar28;
                      uVar22 = *(undefined4 *)(pbVar28 + 1);
                      pppppppuVar27 = *(uint ********)(pbVar28 + 5);
                      if (uVar31 < uVar5) {
                        do {
                          pppppppuVar17 = (uint *******)(uint)local_190[uVar31 & 0xff];
                          if ((!bVar19) ||
                             ((uint *******)((uint)pppppppuVar37 & 0xff) != pppppppuVar17)) {
                            FUN_00658f88(&local_40,uVar31,pppppppuVar17,1);
                            pppppppuVar37 = pppppppuVar17;
                          }
                          uVar31 = uVar31 + 1;
                          bVar19 = true;
                        } while (uVar5 != uVar31);
                        uVar31 = uVar5;
                      }
                      pppppppuVar17 = (uint *******)(uint)local_190[uVar5];
                      if ((!bVar19) || ((uint *******)((uint)pppppppuVar37 & 0xff) != pppppppuVar17)
                         ) {
                        FUN_00658f88(&local_40,uVar5,pppppppuVar17,uVar22);
                        pppppppuVar37 = pppppppuVar17;
                      }
                      uVar31 = uVar31 + 1;
                      bVar19 = true;
                    } while (pppppppuVar27 != (uint *******)0x0);
                    if (0xff < uVar31) goto LAB_006586d8;
                  }
                  do {
                    pppppppuVar27 = (uint *******)(uint)local_190[uVar31];
                    uVar5 = uVar31;
                    if (uVar31 != 0xff) {
                      uVar5 = uVar31 + 1;
                    }
                    if ((!bVar19) || ((uint *******)((uint)pppppppuVar37 & 0xff) != pppppppuVar27))
                    {
                      FUN_00658f88(&local_40,uVar31,pppppppuVar27,1);
                      pppppppuVar37 = pppppppuVar27;
                    }
                    if (uVar31 == 0xff) break;
                    bVar19 = true;
                    uVar31 = uVar5;
                  } while (uVar5 < 0x100);
                  goto LAB_006586d8;
                }
                puVar34 = &DAT_01c03978;
                local_2ec = pppppppuVar37;
              }
              else {
                pppppppuVar7 = local_60;
                puVar34 = &DAT_01c03968;
              }
            }
            else {
              pppppppuVar7 = local_6c;
              puVar34 = &DAT_01c03958;
            }
            goto LAB_00658c84;
          }
          if (local_6c <= pppppppuVar9) {
            pppppppuVar7 = local_6c;
            puVar34 = &DAT_01c03988;
            local_2ec = pppppppuVar9;
            goto LAB_00658c84;
          }
          *(undefined4 *)(local_70 + (int)pppppppuVar9 * 4) = 0;
          if (local_60 <= pppppppuVar9) {
            pppppppuVar7 = local_60;
            puVar34 = &DAT_01c03998;
            local_2ec = pppppppuVar9;
            goto LAB_00658c84;
          }
          *(uint *******)(local_64 + (int)pppppppuVar9 * 4) = ppppppuVar32;
          pppppppuVar37 = (uint *******)((uint)ppppppuVar32 >> ((uint)ppppppuVar10 & 0xff));
          if (pppppppuVar7 <= (uint *******)((uint)ppppppuVar32 >> ((uint)ppppppuVar10 & 0xff))) {
            puVar34 = &DAT_01c039a8;
            local_2ec = pppppppuVar37;
            goto LAB_00658c84;
          }
          *(undefined1 *)((int)pppppppuVar29 + (int)pppppppuVar37) = 1;
        }
        if (pppppppuVar18[2] != (uint ******)0x0) {
          FUN_00659164(&local_1d0,ppppppuVar32,ppppppuVar6,ppppppuVar30,
                       pppppppuVar26[(int)local_2ec * 5 + 2]);
        }
        uVar31 = 0;
        pppppppuVar27 = (uint *******)pppppppuVar26[(int)local_2ec * 5];
        if (pppppppuVar27 == (uint *******)0x0) {
          bVar19 = false;
          uVar5 = 0;
        }
        else {
          bVar19 = false;
          uVar5 = 0;
          do {
            if (pppppppuVar8 <= pppppppuVar27) goto LAB_00658cc8;
            pbVar28 = (byte *)((int)ppppppuVar25 + (int)pppppppuVar27 * 9);
            uVar24 = (uint)*pbVar28;
            iVar23 = *(int *)(pbVar28 + 1);
            pppppppuVar27 = *(uint ********)(pbVar28 + 5);
            if (uVar31 < uVar24) {
              do {
                uVar14 = (uint)local_190[uVar31 & 0xff];
                if ((!bVar19) || (uVar5 != uVar14)) {
                  pppppppuVar37 = (uint *******)((int)ppppppuVar32 + uVar14);
                  if (local_1c8 <= pppppppuVar37) goto LAB_00658c78;
                  *(undefined4 *)((int)local_1cc + (int)pppppppuVar37 * 4) = 0;
                  uVar5 = uVar14;
                }
                uVar31 = uVar31 + 1;
                bVar19 = true;
              } while (uVar24 != uVar31);
              uVar31 = uVar24;
            }
            uVar24 = (uint)local_190[uVar24];
            if ((!bVar19) || (uVar5 != uVar24)) {
              pppppppuVar37 = (uint *******)((int)ppppppuVar32 + uVar24);
              if (local_1c8 <= pppppppuVar37) {
                local_6c = local_1c8;
                puVar34 = &DAT_01c03a38;
                pppppppuVar36 = pppppppuVar37;
                if (iVar23 != 1) {
                  puVar34 = &DAT_01c03a28;
                }
                goto LAB_00658cf0;
              }
              iVar13 = 0;
              if (iVar23 != 1) {
                iVar13 = iVar23;
              }
              *(int *)((int)local_1cc + (int)pppppppuVar37 * 4) = iVar13;
              uVar5 = uVar24;
            }
            uVar31 = uVar31 + 1;
            bVar19 = true;
          } while (pppppppuVar27 != (uint *******)0x0);
          bVar19 = true;
          if (0xff < uVar31) goto LAB_006586d8;
        }
        do {
          uVar14 = (uint)local_190[uVar31];
          uVar24 = uVar31;
          if (uVar31 != 0xff) {
            uVar24 = uVar31 + 1;
          }
          if ((!bVar19) || (uVar5 != uVar14)) {
            pppppppuVar37 = (uint *******)((int)ppppppuVar32 + uVar14);
            if (local_1c8 <= pppppppuVar37) goto LAB_00658c78;
            *(undefined4 *)((int)local_1cc + (int)pppppppuVar37 * 4) = 0;
            uVar5 = uVar14;
          }
          if (uVar31 == 0xff) break;
          bVar19 = true;
          uVar31 = uVar24;
        } while (uVar24 < 0x100);
      }
      else {
        if (local_6c <= local_2ec) {
          pppppppuVar7 = local_6c;
          puVar34 = &DAT_01c039d8;
          goto LAB_00658c84;
        }
        *(uint *******)(local_70 + (int)local_2ec * 4) = ppppppuVar32;
        if (local_60 <= local_2ec) {
          pppppppuVar7 = local_60;
          puVar34 = &DAT_01c039e8;
          goto LAB_00658c84;
        }
        *(uint *******)(local_64 + (int)local_2ec * 4) = ppppppuVar32;
      }
LAB_006586d8:
      local_2ec = (uint *******)((int)local_2ec + 1);
      ppppppuVar32 = (uint ******)((int)ppppppuVar20 + (int)pppppppuVar35);
    }
    if (local_19c != (uint *******)0x0) {
      pppppppuVar18 = (uint *******)0x0;
      puVar33 = &DAT_01c038f8;
      puVar15 = &DAT_01c03908;
      iVar23 = 4 << ((uint)ppppppuVar10 & 0xff);
      puVar34 = &DAT_01c03918;
      do {
        if (pppppppuVar18 == pppppppuVar7) {
          puVar34 = &DAT_01c038e8;
          local_2ec = pppppppuVar7;
          goto LAB_00658c84;
        }
        pppppppuVar8 = (uint *******)((int)pppppppuVar18 << ((uint)ppppppuVar10 & 0xff));
        pppppppuVar16 = local_1c8;
        if (*(char *)((int)pppppppuVar29 + (int)pppppppuVar18) == '\0') {
          if (local_1c8 < pppppppuVar8) {
            pppppppuVar35 = local_1c8;
            goto LAB_00658c28;
          }
          pppppppuVar16 = (uint *******)((int)local_1c8 - (int)pppppppuVar8);
          if (pppppppuVar16 < pppppppuVar35) goto LAB_00658c24;
          puVar11 = (undefined4 *)((int)local_1cc + (int)pppppppuVar8 * 4);
          iVar13 = iVar23;
          do {
            local_2ec = (uint *******)*puVar11;
            if (local_6c <= local_2ec) {
              pppppppuVar7 = local_6c;
              goto LAB_00658c84;
            }
            iVar13 = iVar13 + -4;
            *puVar11 = *(undefined4 *)(local_70 + (int)local_2ec * 4);
            puVar11 = puVar11 + 1;
          } while (iVar13 != 0);
        }
        else {
          if (local_1c8 < pppppppuVar8) {
            pppppppuVar35 = local_1c8;
            puVar33 = &DAT_01c03928;
            goto LAB_00658c28;
          }
          pppppppuVar16 = (uint *******)((int)local_1c8 - (int)pppppppuVar8);
          if (pppppppuVar16 < pppppppuVar35) {
            puVar15 = &DAT_01c03938;
LAB_00658c24:
            pppppppuVar8 = (uint *******)0x0;
            puVar33 = puVar15;
LAB_00658c28:
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(pppppppuVar8,pppppppuVar35,pppppppuVar16,puVar33);
          }
          puVar11 = (undefined4 *)((int)local_1cc + (int)pppppppuVar8 * 4);
          iVar13 = iVar23;
          do {
            local_2ec = (uint *******)*puVar11;
            if (local_60 <= local_2ec) {
              pppppppuVar7 = local_60;
              puVar34 = &DAT_01c03948;
              goto LAB_00658c84;
            }
            iVar13 = iVar13 + -4;
            *puVar11 = *(undefined4 *)(local_64 + (int)local_2ec * 4);
            puVar11 = puVar11 + 1;
          } while (iVar13 != 0);
        }
        pppppppuVar18 = (uint *******)((int)pppppppuVar18 + 1);
      } while (pppppppuVar18 != local_19c);
    }
    local_2ec = (uint *******)param_4[0x54];
    if (local_60 <= local_2ec) {
      pppppppuVar7 = local_60;
      puVar34 = &DAT_01c038a8;
LAB_00658c84:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(local_2ec,pppppppuVar7,puVar34);
    }
    local_88 = *(int *)(local_64 + (int)local_2ec * 4);
    local_2ec = (uint *******)param_4[0x55];
    if (local_60 <= local_2ec) {
      pppppppuVar7 = local_60;
      puVar34 = &DAT_01c038b8;
      goto LAB_00658c84;
    }
    local_84 = *(int *)(local_64 + (int)local_2ec * 4);
    if (local_6c <= pppppppuVar36) {
      puVar34 = &UNK_01c038c8;
LAB_00658cf0:
      pppppppuVar7 = local_6c;
      local_2ec = pppppppuVar36;
      goto LAB_00658c84;
    }
    local_80 = *(int *)(local_70 + (int)pppppppuVar36 * 4);
    if (local_60 <= pppppppuVar9) {
      pppppppuVar7 = local_60;
      puVar34 = &DAT_01c038d8;
      local_2ec = pppppppuVar9;
      goto LAB_00658c84;
    }
    local_7c = *(int *)(local_64 + (int)pppppppuVar9 * 4);
    FUN_019bb7e0(local_58,pppppppuVar29);
    FUN_0134aee0(local_68,local_64,4,4);
    FUN_0134aee0(local_74,local_70,4,4);
    goto LAB_00658b5c;
  }
  local_44 = (uint ******)CONCAT31(local_44._1_3_,uVar4);
  local_74 = ppppppuVar10;
  ppppppuVar32 = (uint ******)0x0;
  ppppppuVar30 = param_4[2];
  ppppppuVar10 = param_4[5];
  pppppppuVar29 = (uint *******)param_4[1];
  ppppppuVar20 = param_4[4];
  local_68 = &local_74;
  ppppppuVar6 = param_4[10];
  ppppppuVar25 = param_4[0xb];
  for (pppppppuVar35 = pppppppuVar29; pppppppuVar35 != pppppppuVar29 + (int)ppppppuVar30 * 5;
      pppppppuVar35 = pppppppuVar35 + 5) {
    if (ppppppuVar32 == ppppppuVar30) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c03cd8);
    }
    local_58 = (uint *******)((int)ppppppuVar32 << ((uint)*local_68 & 0x1f));
    if (pppppppuVar35[2] != (uint ******)0x0) {
      FUN_00659164(&local_1d0,local_58,ppppppuVar6,ppppppuVar25,
                   pppppppuVar29[(int)ppppppuVar32 * 5 + 2]);
    }
    local_2c = (uint *******)&local_68;
    local_30 = (uint *******)&local_58;
    local_34 = (uint *******)&local_1d0;
    ppppppuVar21 = pppppppuVar29[(int)ppppppuVar32 * 5];
    local_38 = param_4;
    local_3c = pppppppuVar35;
    pppppppuVar7 = &local_44;
    local_40 = pppppppuVar7;
    if (ppppppuVar21 == (uint ******)0x0) {
      bVar19 = false;
      uVar31 = 0;
LAB_006588b8:
      do {
        pppppppuVar18 = (uint *******)(uint)local_190[uVar31];
        uVar5 = uVar31;
        if (uVar31 != 0xff) {
          uVar5 = uVar31 + 1;
        }
        if ((!bVar19) || ((uint *******)((uint)pppppppuVar7 & 0xff) != pppppppuVar18)) {
          FUN_006592e0(&local_40,uVar31,pppppppuVar18,1);
          pppppppuVar7 = pppppppuVar18;
        }
        if (uVar31 == 0xff) break;
        bVar19 = true;
        uVar31 = uVar5;
      } while (uVar5 < 0x100);
    }
    else {
      uVar31 = 0;
      bVar19 = false;
      do {
        if (ppppppuVar10 <= ppppppuVar21) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(ppppppuVar21,ppppppuVar10,&DAT_01d08f58);
        }
        pbVar28 = (byte *)((int)ppppppuVar20 + (int)ppppppuVar21 * 9);
        uVar5 = (uint)*pbVar28;
        uVar22 = *(undefined4 *)(pbVar28 + 1);
        ppppppuVar21 = *(uint *******)(pbVar28 + 5);
        if (uVar31 < uVar5) {
          do {
            pppppppuVar18 = (uint *******)(uint)local_190[uVar31 & 0xff];
            if ((!bVar19) || ((uint *******)((uint)pppppppuVar7 & 0xff) != pppppppuVar18)) {
              FUN_006592e0(&local_40,uVar31,pppppppuVar18,1);
              pppppppuVar7 = pppppppuVar18;
            }
            uVar31 = uVar31 + 1;
            bVar19 = true;
          } while (uVar5 != uVar31);
          uVar31 = uVar5;
        }
        pppppppuVar18 = (uint *******)(uint)local_190[uVar5];
        if ((!bVar19) || ((uint *******)((uint)pppppppuVar7 & 0xff) != pppppppuVar18)) {
          FUN_006592e0(&local_40,uVar5,pppppppuVar18,uVar22);
          pppppppuVar7 = pppppppuVar18;
        }
        uVar31 = uVar31 + 1;
        bVar19 = true;
      } while (ppppppuVar21 != (uint ******)0x0);
      if (uVar31 < 0x100) goto LAB_006588b8;
    }
    ppppppuVar32 = (uint ******)((int)ppppppuVar32 + 1);
  }
  local_88 = (int)param_4[0x54] << ((uint)*local_68 & 0x1f);
  local_84 = (int)param_4[0x55] << ((uint)*local_68 & 0x1f);
  if ((char)local_44 == '\0') {
    local_80 = (int)param_4[0x56] << ((uint)*local_68 & 0x1f);
    local_7c = 0;
  }
  else {
    local_80 = 0;
    local_7c = (int)param_4[0x57] << ((uint)*local_68 & 0x1f);
  }
LAB_00658b5c:
  if ((((local_1c8 < local_1d0) &&
       (iVar23 = FUN_006641a8(&local_1d0,local_1c8,4,4), iVar23 != -0x7fffffff)) ||
      ((local_1b0 < local_1b8 &&
       (iVar23 = FUN_006641a8(&local_1b8,local_1b0,4,4), iVar23 != -0x7fffffff)))) ||
     ((local_1bc < local_1c4 &&
      (iVar23 = FUN_006641a8(&local_1c4,local_1bc,4,0xc), iVar23 != -0x7fffffff)))) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
  FUN_01bed4e2(param_1 + 1,&local_1d0,0x15c);
  *param_1 = 0;
  return;
LAB_00658cc8:
  pppppppuVar7 = pppppppuVar8;
  puVar34 = &DAT_01d08f58;
  local_2ec = pppppppuVar27;
  goto LAB_00658c84;
LAB_00658c78:
  pppppppuVar7 = local_1c8;
  puVar34 = &DAT_01c03a38;
  local_2ec = pppppppuVar37;
  goto LAB_00658c84;
}

