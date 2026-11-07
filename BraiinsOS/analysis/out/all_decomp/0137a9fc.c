// FUN_0137a9fc @ 0137a9fc size=9740 calls_out=20 calls_in=12
// strings: no in-progress search to update | no quit in start without look-behind | no in-progress search to finish | internal error: entered unreachable code: sid being unknown is a bug

/* WARNING: Removing unreachable block (ram,0x0137b4bc) */
/* WARNING: Removing unreachable block (ram,0x0137b004) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0137a9fc(undefined4 *param_1,uint ***param_2,uint ***param_3,int *param_4)

{
  byte bVar1;
  undefined4 ****ppppuVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint ***pppuVar6;
  uint ***pppuVar7;
  uint **ppuVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  int iVar11;
  uint **ppuVar12;
  uint **ppuVar13;
  uint ***pppuVar14;
  uint ****ppppuVar15;
  undefined4 uVar16;
  int iVar17;
  uint *puVar18;
  uint ***pppuVar19;
  uint *puVar20;
  uint **ppuVar21;
  uint ***pppuVar22;
  uint uVar23;
  byte bVar24;
  char *pcVar25;
  uint uVar26;
  code *pcVar27;
  uint ***pppuVar28;
  uint ***pppuVar29;
  uint **ppuVar30;
  bool bVar31;
  bool bVar32;
  ulonglong uVar33;
  undefined4 local_1b0;
  uint ***local_1a4;
  undefined4 local_19c;
  uint ***local_18c;
  uint ***local_188;
  uint ***local_17c;
  undefined4 local_178;
  int local_174;
  uint local_168 [4];
  undefined4 uStack_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  uint local_148 [4];
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  uint local_128 [4];
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  uint local_108 [4];
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  uint local_e8 [4];
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  uint local_c8 [4];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  uint local_a8 [4];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  uint local_88 [4];
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68;
  uint ***local_64;
  undefined4 ****local_58;
  uint ***local_54;
  undefined4 ****local_50;
  undefined1 *local_4c;
  uint ***local_48;
  int local_44;
  int iStack_40;
  uint ***local_38;
  uint ***local_34;
  uint ***local_30;
  uint ***local_2c;
  
  pppuVar19 = (uint ***)param_4[4];
  pppuVar28 = (uint ***)param_4[5];
  if (pppuVar28 < pppuVar19) {
    *param_1 = 0;
    return;
  }
  iVar17 = *param_4;
  if (1 < iVar17 - 1U) {
    pcVar25 = "";
    if (*(char *)(param_2 + 0x13) != '\x03') {
      pcVar25 = (char *)(param_2 + 0x10);
    }
    if (*(char *)((int)pcVar25 + 0xc) != '\x02') {
      if ((char)param_4[6] != '\0') {
        ppuVar30 = param_2[0x9e];
        puVar20 = ppuVar30[0x4d];
        if ((pppuVar19 == (uint ***)0x0) ||
           ((undefined1 *)param_4[3] <= (undefined1 *)((int)pppuVar19 + -1))) {
          iVar4 = param_4[1];
          ppuVar13 = (uint **)0x2;
        }
        else {
          iVar4 = param_4[1];
          bVar24 = ((undefined1 *)((int)pppuVar19 + -1))[param_4[2]];
          uVar26 = (uint)bVar24;
          iVar5 = thunk_FUN_016dd50a(param_2 + 0x96,"",0x20);
          if (iVar5 != 0) {
            puVar18 = (uint *)((int)(param_2 + 0x96) + (bVar24 >> 3 & 0xfffffff0));
            local_e8[0] = *puVar18;
            local_e8[1] = puVar18[1];
            local_e8[2] = puVar18[2];
            local_e8[3] = puVar18[3];
            uStack_d8 = 0;
            local_cc = 0;
            local_d0 = 0;
            local_d4 = 0;
            if ((local_e8[(uVar26 & 0x7f) >> 5] >> (uVar26 & 0x1f) & 1) != 0) {
LAB_0137adac:
              local_64 = (uint ***)CONCAT31(local_64._1_3_,bVar24);
              local_68 = 4;
              goto LAB_0137adb8;
            }
          }
          ppuVar13 = (uint **)(uint)*(byte *)((int)param_2 + uVar26 + 0x58);
        }
        ppuVar12 = param_3[0x22];
        if (ppuVar12 <= ppuVar13) goto LAB_0137cf28;
        pppuVar29 = (uint ***)param_3[0x21][(int)ppuVar13];
        if ((int)param_3[0x21][(int)ppuVar13] < 0) {
          local_58 = (undefined4 ****)param_2;
          local_54 = param_3;
          FUN_01390a98(&local_68,&local_58,iVar17,iVar4,ppuVar13);
          if (local_68 != 5) goto LAB_0137adb8;
          pppuVar29 = local_64;
        }
        pcVar27 = (code *)(*(uint ***)((int)pcVar25 + 4))[4];
        iVar4 = param_4[2];
        local_188 = (uint ***)param_4[3];
        iVar17 = (int)*(uint ***)pcVar25 +
                 ((int)(*(uint ***)((int)pcVar25 + 4))[2] - 1U & 0xfffffff8) + 8;
        (*pcVar27)(&local_68,iVar17,iVar4,local_188,pppuVar19,pppuVar28);
        pppuVar19 = local_64;
        uVar10 = 0;
        if (local_68 != 1) goto LAB_0137bc84;
        if (puVar20 == (uint *)0x0) {
LAB_0137bce4:
          if (((uint)param_3[0x2c] & 1) != 0) {
            ppuVar13 = param_3[0x2d];
            ppuVar12 = param_3[0x2e];
            iVar5 = (int)ppuVar13 - (int)ppuVar12;
            if (ppuVar13 < ppuVar12 || iVar5 == 0) {
              iVar5 = (int)ppuVar12 - (int)ppuVar13;
            }
            param_3[0x1c] = (uint **)((int)param_3[0x1c] + iVar5);
          }
          param_3[0x2c] = (uint **)0x1;
          param_3[0x2d] = (uint **)pppuVar19;
          param_3[0x2e] = (uint **)pppuVar19;
          if (pppuVar19 < pppuVar28) {
            ppuVar21 = param_2[0x9f];
            bVar24 = *(byte *)((int)param_2 + 0x51);
            do {
              if (pppuVar29 < (uint ***)0x8000000) {
                if (pppuVar19 < pppuVar28) {
                  ppuVar13 = param_3[0x1e];
                  ppuVar12 = param_3[0x1f];
                  pppuVar22 = pppuVar29;
                  do {
                    pppuVar6 = (uint ***)
                               ppuVar13[(int)((int)pppuVar22 +
                                             (uint)*(byte *)((int)param_2 +
                                                            *(byte *)(iVar4 + (int)pppuVar19) +
                                                            0x158))];
                    if (pppuVar28 <= (uint ***)((int)pppuVar19 + 3) ||
                        (uint ***)0x7ffffff < pppuVar6) {
LAB_0137be80:
                      if (-1 < (int)pppuVar6) goto LAB_0137becc;
                      if (param_3[0x2c] != (uint **)0x1) goto LAB_0137ca98;
                      param_3[0x2e] = (uint **)pppuVar19;
                      ppuVar8 = (uint **)((int)pppuVar22 +
                                         (uint)*(byte *)((int)param_2 +
                                                        *(byte *)(iVar4 + (int)pppuVar19) + 0x158));
                      if (ppuVar12 <= ppuVar8) goto LAB_0137cf88;
                      pppuVar6 = (uint ***)ppuVar13[(int)ppuVar8];
                      if (-1 < (int)pppuVar6) goto LAB_0137becc;
                      local_58 = (undefined4 ****)param_2;
                      local_54 = param_3;
                      uVar33 = FUN_01390198(&local_58,pppuVar22,
                                            (uint)*(byte *)(iVar4 + (int)pppuVar19) << 8);
                      pppuVar6 = (uint ***)(uVar33 >> 0x20);
                      if ((uVar33 & 1) == 0) goto LAB_0137becc;
                      goto LAB_0137c158;
                    }
                    pppuVar29 = (uint ***)
                                ppuVar13[(int)((int)pppuVar6 +
                                              (uint)*(byte *)((int)param_2 +
                                                             *(byte *)((int)pppuVar19 + iVar4 + 1) +
                                                             0x158))];
                    if ((uint ***)0x7ffffff < pppuVar29) {
                      pppuVar19 = (uint ***)((int)pppuVar19 + 1);
                      pppuVar22 = pppuVar6;
                      pppuVar6 = pppuVar29;
                      goto LAB_0137be80;
                    }
                    pppuVar6 = (uint ***)
                               ppuVar13[(int)((int)pppuVar29 +
                                             (uint)*(byte *)((int)param_2 +
                                                            *(byte *)((int)pppuVar19 + iVar4 + 2) +
                                                            0x158))];
                    if ((uint ***)0x7ffffff < pppuVar6) {
                      pppuVar19 = (uint ***)((int)pppuVar19 + 2);
                      pppuVar22 = pppuVar29;
                      goto LAB_0137be80;
                    }
                    pppuVar29 = (uint ***)
                                ppuVar13[(int)((int)pppuVar6 +
                                              (uint)*(byte *)((int)param_2 +
                                                             *(byte *)((int)pppuVar19 + iVar4 + 3) +
                                                             0x158))];
                    if ((uint ***)0x7ffffff < pppuVar29) {
                      pppuVar22 = pppuVar6;
                      pppuVar6 = pppuVar29;
                      pppuVar19 = (uint ***)((int)pppuVar19 + 3);
                      goto LAB_0137be80;
                    }
                    pppuVar19 = pppuVar19 + 1;
                    pppuVar22 = pppuVar29;
                  } while (pppuVar19 < pppuVar28);
                }
LAB_0137bd54:
                pppuVar6 = (uint ***)((int)pppuVar19 + 1);
              }
              else {
                if (param_3[0x2c] == (uint **)0x0) goto LAB_0137ca98;
                param_3[0x2e] = (uint **)pppuVar19;
                if (local_188 <= pppuVar19) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(pppuVar19,local_188,&DAT_01892a50);
                }
                ppuVar12 = param_3[0x1f];
                ppuVar13 = (uint **)(((uint)pppuVar29 & 0x7ffffff) +
                                    (uint)*(byte *)((int)param_2 +
                                                   *(byte *)(iVar4 + (int)pppuVar19) + 0x158));
                if (ppuVar12 <= ppuVar13) {
LAB_0137cf78:
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(ppuVar13,ppuVar12,&DAT_01893ad0);
                }
                pppuVar6 = (uint ***)param_3[0x1e][(int)ppuVar13];
                if ((int)pppuVar6 < 0) {
                  local_58 = (undefined4 ****)param_2;
                  local_54 = param_3;
                  uVar33 = FUN_01390198(&local_58,pppuVar29,
                                        (uint)*(byte *)(iVar4 + (int)pppuVar19) << 8);
                  pppuVar6 = (uint ***)(uVar33 >> 0x20);
                  if ((uVar33 & 1) != 0) goto LAB_0137c158;
                }
LAB_0137becc:
                pppuVar29 = pppuVar6;
                if (pppuVar6 < (uint ***)0x8000000) goto LAB_0137bd54;
                if (((uint)pppuVar6 & 0x10000000) == 0) {
                  if (((uint)pppuVar6 & 0x8000000) == 0) {
                    if (((uint)pppuVar6 & 0x40000000) == 0) {
                      if (((uint)pppuVar6 & 0x20000000) == 0) goto LAB_0137ced8;
                      ppuVar30 = param_3[0x2c];
                      pppuVar28 = (uint ***)param_3[0x2d];
                      param_3[0x2c] = (uint **)0x0;
                      if (((uint)ppuVar30 & 1) == 0) goto LAB_0137cec0;
                      iVar17 = (int)pppuVar19 - (int)pppuVar28;
                      if (pppuVar19 < pppuVar28) {
                        iVar17 = (int)pppuVar28 - (int)pppuVar19;
                      }
                      param_3[0x1c] = (uint **)((int)param_3[0x1c] + iVar17);
                      if (local_188 <= pppuVar19) {
                    /* WARNING: Subroutine does not return */
                        FUN_00faa4a4(pppuVar19,local_188,&DAT_01892a70);
                      }
                      uVar10 = FUN_013c7204(*(undefined1 *)(iVar4 + (int)pppuVar19),pppuVar19);
                      goto LAB_0137c1cc;
                    }
                    pppuVar28 = (uint ***)param_3[0x2d];
                    ppuVar30 = param_3[0x2c];
                    param_3[0x2c] = (uint **)0x0;
                    if (((uint)ppuVar30 & 1) == 0) goto LAB_0137cec0;
                    *param_1 = 0;
                  }
                  else {
                    uVar10 = FUN_0137a834(ppuVar30[0x55],ppuVar21,param_3[0x24],param_3[0x25],
                                          pppuVar6,0);
                    pppuVar28 = (uint ***)param_3[0x2d];
                    ppuVar30 = param_3[0x2c];
                    param_3[0x2c] = (uint **)0x0;
                    if (((uint)ppuVar30 & 1) == 0) goto LAB_0137cec0;
                    param_1[1] = uVar10;
                    param_1[2] = pppuVar19;
                    *param_1 = 1;
                  }
                  iVar17 = (int)pppuVar19 - (int)pppuVar28;
                  if (pppuVar19 < pppuVar28) {
                    iVar17 = (int)pppuVar28 - (int)pppuVar19;
                  }
                  param_3[0x1c] = (uint **)((int)param_3[0x1c] + iVar17);
                  return;
                }
                (*pcVar27)(&local_68,iVar17,iVar4,local_188,pppuVar19,pppuVar28);
                pppuVar6 = local_64;
                if (local_68 == 0) {
                  pppuVar19 = (uint ***)param_3[0x2d];
                  ppuVar30 = param_3[0x2c];
                  param_3[0x2c] = (uint **)0x0;
                  if (((uint)ppuVar30 & 1) != 0) {
                    iVar17 = (int)pppuVar28 - (int)pppuVar19;
                    if (pppuVar28 < pppuVar19) {
                      iVar17 = (int)pppuVar19 - (int)pppuVar28;
                    }
                    param_3[0x1c] = (uint **)((int)param_3[0x1c] + iVar17);
                    *param_1 = 0;
                    return;
                  }
                  goto LAB_0137cec0;
                }
                if (local_64 <= pppuVar19) goto LAB_0137bd54;
                if (puVar20 != (uint *)0x0) {
                  local_58 = (undefined4 ****)*param_4;
                  local_54 = (uint ***)param_4[1];
                  local_50 = (undefined4 ****)param_4[2];
                  local_4c = (undefined1 *)param_4[3];
                  local_48 = (uint ***)param_4[4];
                  local_44 = param_4[5];
                  iStack_40 = param_4[6];
                  FUN_0137d0ac(&local_58,local_64,local_44);
                  pppuVar19 = local_48;
                  pppuVar22 = local_54;
                  ppppuVar2 = local_58;
                  if ((local_48 != (uint ***)0x0) && ((undefined1 *)((int)local_48 + -1) < local_4c)
                     ) {
                    bVar1 = ((undefined1 *)((int)local_48 + -1))[(int)local_50];
                    uVar26 = (uint)bVar1;
                    iVar5 = thunk_FUN_016dd50a(param_2 + 0x96,"",0x20);
                    if (iVar5 == 0) {
LAB_0137bff4:
                      ppuVar8 = (uint **)(uint)*(byte *)((int)param_2 + uVar26 + 0x58);
                      goto LAB_0137c034;
                    }
                    puVar18 = (uint *)((int)(param_2 + 0x96) + (bVar1 >> 3 & 0xfffffff0));
                    local_128[3] = puVar18[3];
                    local_128[0] = *puVar18;
                    local_128[1] = puVar18[1];
                    local_128[2] = puVar18[2];
                    local_10c = 0;
                    local_110 = 0;
                    local_114 = 0;
                    local_118 = 0;
                    if ((local_128[(uVar26 & 0x7f) >> 5] >> (uVar26 & 0x1f) & 1) == 0)
                    goto LAB_0137bff4;
                    local_34 = (uint ***)CONCAT31(local_34._1_3_,bVar1);
                    local_38 = (uint ***)0x4;
LAB_0137cb08:
                    local_2c = local_34;
                    ppppuVar15 = &local_30;
                    local_30 = local_38;
LAB_0137cb50:
                    uVar10 = FUN_0137d134(pppuVar19,ppppuVar15);
                    goto LAB_0137c15c;
                  }
                  ppuVar8 = (uint **)0x2;
LAB_0137c034:
                  if (ppppuVar2 == (undefined4 ****)0x0) {
                    ppuVar13 = ppuVar8;
LAB_0137c07c:
                    ppuVar12 = param_3[0x22];
                    if (ppuVar12 <= ppuVar13) goto LAB_0137cf28;
                    pppuVar29 = (uint ***)param_3[0x21][(int)ppuVar13];
                  }
                  else {
                    if (ppppuVar2 != (undefined4 ****)0x2) {
                      ppuVar13 = (uint **)((int)ppuVar8 + 6);
                      goto LAB_0137c07c;
                    }
                    if ((bVar24 & 1) == 0) {
                      local_38 = (uint ***)0x2;
                      local_34 = pppuVar22;
                      goto LAB_0137cb08;
                    }
                    if (pppuVar22 < ppuVar30[0x55]) {
                      ppuVar13 = (uint **)((int)ppuVar8 + (int)pppuVar22 * 6 + 0xc);
                      goto LAB_0137c07c;
                    }
                    pppuVar29 = (uint ***)FUN_01391aa4(ppuVar21);
                  }
                  if ((uint ***)0x7fffffff < pppuVar29) {
                    local_30 = param_2;
                    local_2c = param_3;
                    FUN_01390a98(&local_38,&local_30,ppppuVar2,pppuVar22,ppuVar8);
                    if (local_38 != (uint ***)0x5) goto LAB_0137cb08;
                    pppuVar29 = local_34;
                  }
                }
              }
              pppuVar19 = pppuVar6;
            } while (pppuVar6 < pppuVar28);
          }
          if (pppuVar28 < local_188) {
            uVar3 = *(undefined1 *)(iVar4 + (int)pppuVar28);
            uVar33 = FUN_0137a984(param_2,param_3,pppuVar29,uVar3);
            uVar16 = (undefined4)(uVar33 >> 0x20);
            uVar10 = (undefined4)uVar33;
            if ((uVar33 & 1) == 0) {
              if ((uVar33 & 0x800000000000000) != 0) {
                local_188 = pppuVar28;
                goto LAB_0137c3b8;
              }
              if ((uVar33 & 0x2000000000000000) != 0) {
                uVar10 = FUN_013c7204(uVar3,pppuVar28);
                goto LAB_0137c1cc;
              }
LAB_0137c210:
              uVar16 = 0;
              goto LAB_0137c3e8;
            }
            pppuVar19 = pppuVar28;
          }
          else {
            uVar33 = FUN_0137a900(param_2,param_3,pppuVar29);
            uVar16 = (undefined4)(uVar33 >> 0x20);
            uVar10 = (undefined4)uVar33;
            if ((uVar33 & 1) == 0) {
              if ((uVar33 & 0x800000000000000) == 0) goto LAB_0137c210;
LAB_0137c3b8:
              uVar10 = FUN_0137a834(ppuVar30[0x55],param_2[0x9f],param_3[0x24],param_3[0x25],uVar16,
                                    0);
              uVar16 = 1;
LAB_0137c3e8:
              ppuVar30 = param_3[0x2c];
              pppuVar19 = (uint ***)param_3[0x2d];
              param_3[0x2c] = (uint **)0x0;
              if (((uint)ppuVar30 & 1) != 0) {
                param_1[1] = uVar10;
                *param_1 = uVar16;
                param_1[2] = local_188;
                goto LAB_0137ce44;
              }
              goto LAB_0137cec0;
            }
            pppuVar19 = local_188;
          }
LAB_0137c1c8:
          uVar10 = FUN_013c723c(pppuVar19);
LAB_0137c1cc:
          *param_1 = 2;
          param_1[1] = uVar10;
          return;
        }
        local_58 = (undefined4 ****)*param_4;
        local_54 = (uint ***)param_4[1];
        local_50 = (undefined4 ****)param_4[2];
        local_4c = (undefined1 *)param_4[3];
        local_48 = (uint ***)param_4[4];
        local_44 = param_4[5];
        iStack_40 = param_4[6];
        FUN_0137d0ac(&local_58,local_64,local_44);
        pppuVar7 = local_48;
        pppuVar6 = local_54;
        ppppuVar2 = local_58;
        if ((local_48 == (uint ***)0x0) || (local_4c <= (undefined1 *)((int)local_48 + -1))) {
          ppuVar21 = (uint **)0x2;
LAB_0137bbd0:
          if (ppppuVar2 == (undefined4 ****)0x0) {
            ppuVar13 = ppuVar21;
LAB_0137bcc4:
            ppuVar12 = param_3[0x22];
            if (ppuVar12 <= ppuVar13) goto LAB_0137cf28;
            pppuVar29 = (uint ***)param_3[0x21][(int)ppuVar13];
            if (-1 < (int)param_3[0x21][(int)ppuVar13]) goto LAB_0137bce4;
          }
          else {
            if (ppppuVar2 != (undefined4 ****)0x2) {
              ppuVar13 = (uint **)((int)ppuVar21 + 6);
              goto LAB_0137bcc4;
            }
            if ((*(byte *)((int)param_2 + 0x51) & 1) == 0) {
              local_38 = (uint ***)0x2;
              local_34 = pppuVar6;
              goto LAB_0137bc74;
            }
            if (pppuVar6 < ppuVar30[0x55]) {
              ppuVar13 = (uint **)((int)ppuVar21 + (int)pppuVar6 * 6 + 0xc);
              goto LAB_0137bcc4;
            }
            pppuVar29 = (uint ***)FUN_01391aa4(param_2[0x9f]);
            if (pppuVar29 < &DAT_80000000) goto LAB_0137bce4;
          }
          local_30 = param_2;
          local_2c = param_3;
          FUN_01390a98(&local_38,&local_30,ppppuVar2,pppuVar6,ppuVar21);
          pppuVar29 = local_34;
          if (local_38 == (uint ***)0x5) goto LAB_0137bce4;
        }
        else {
          bVar24 = ((undefined1 *)((int)local_48 + -1))[(int)local_50];
          uVar26 = (uint)bVar24;
          iVar5 = thunk_FUN_016dd50a(param_2 + 0x96,"",0x20);
          if (iVar5 == 0) {
LAB_0137bbc0:
            ppuVar21 = (uint **)(uint)*(byte *)((int)param_2 + uVar26 + 0x58);
            goto LAB_0137bbd0;
          }
          puVar18 = (uint *)((int)(param_2 + 0x96) + (bVar24 >> 3 & 0xfffffff0));
          local_108[0] = *puVar18;
          local_108[1] = puVar18[1];
          local_108[2] = puVar18[2];
          local_108[3] = puVar18[3];
          uStack_f8 = 0;
          local_ec = 0;
          local_f0 = 0;
          local_f4 = 0;
          if ((local_108[(uVar26 & 0x7f) >> 5] >> (uVar26 & 0x1f) & 1) == 0) goto LAB_0137bbc0;
          local_34 = (uint ***)CONCAT31(local_34._1_3_,bVar24);
          local_38 = (uint ***)0x4;
        }
LAB_0137bc74:
        local_30 = local_38;
        local_2c = local_34;
        uVar10 = FUN_0137d134(pppuVar7,&local_30);
        param_1[1] = uVar10;
        uVar10 = 2;
LAB_0137bc84:
        *param_1 = uVar10;
        return;
      }
      ppuVar30 = param_2[0x9e];
      puVar20 = ppuVar30[0x4d];
      if ((pppuVar19 == (uint ***)0x0) ||
         ((undefined1 *)param_4[3] <= (undefined1 *)((int)pppuVar19 + -1))) {
        local_18c = (uint ***)param_4[1];
        ppuVar13 = (uint **)0x2;
        ppuVar12 = param_3[0x22];
        if (ppuVar12 < (uint **)0x3) goto LAB_0137cf28;
      }
      else {
        local_18c = (uint ***)param_4[1];
        bVar24 = ((undefined1 *)((int)pppuVar19 + -1))[param_4[2]];
        uVar26 = (uint)bVar24;
        iVar4 = thunk_FUN_016dd50a(param_2 + 0x96,"",0x20);
        if (iVar4 != 0) {
          puVar18 = (uint *)((int)(param_2 + 0x96) + (bVar24 >> 3 & 0xfffffff0));
          local_88[0] = *puVar18;
          local_88[1] = puVar18[1];
          local_88[2] = puVar18[2];
          local_88[3] = puVar18[3];
          uStack_78 = 0;
          local_6c = 0;
          local_70 = 0;
          local_74 = 0;
          if ((local_88[(uVar26 & 0x7f) >> 5] >> (uVar26 & 0x1f) & 1) != 0) goto LAB_0137adac;
        }
        ppuVar13 = (uint **)(uint)*(byte *)((int)param_2 + uVar26 + 0x58);
        ppuVar12 = param_3[0x22];
        if (ppuVar12 <= ppuVar13) goto LAB_0137cf28;
      }
      pppuVar29 = (uint ***)param_3[0x21][(int)ppuVar13];
      if ((int)param_3[0x21][(int)ppuVar13] < 0) {
        local_58 = (undefined4 ****)param_2;
        local_54 = param_3;
        FUN_01390a98(&local_68,&local_58,iVar17,local_18c,ppuVar13);
        if (local_68 != 5) {
LAB_0137adb8:
          iVar17 = 2;
          if (2 < local_68) {
            iVar17 = local_68 - 3;
          }
          if (iVar17 != 0) {
            if (iVar17 != 1) {
              uVar10 = FUN_013c71d0();
              goto LAB_0137c1cc;
            }
            if (pppuVar19 != (uint ***)0x0) {
              uVar10 = FUN_013c7204(local_64,(undefined1 *)((int)pppuVar19 + -1));
              goto LAB_0137c1cc;
            }
            goto LAB_0137ce60;
          }
          goto LAB_0137c1c8;
        }
        pppuVar29 = local_64;
      }
      pcVar27 = (code *)(*(uint ***)((int)pcVar25 + 4))[4];
      iVar5 = param_4[2];
      pppuVar6 = (uint ***)param_4[3];
      iVar4 = (int)*(uint ***)pcVar25 +
              ((int)(*(uint ***)((int)pcVar25 + 4))[2] - 1U & 0xfffffff8) + 8;
      (*pcVar27)(&local_68,iVar4,iVar5,pppuVar6,pppuVar19,pppuVar28);
      pppuVar19 = local_64;
      uVar10 = 0;
      if (local_68 != 1) goto LAB_0137bc84;
      if (puVar20 == (uint *)0x0) {
LAB_0137c254:
        ppuVar13 = param_3[0x2c];
      }
      else {
        local_58 = (undefined4 ****)*param_4;
        local_54 = (uint ***)param_4[1];
        local_50 = (undefined4 ****)param_4[2];
        local_4c = (undefined1 *)param_4[3];
        local_48 = (uint ***)param_4[4];
        local_44 = param_4[5];
        iStack_40 = param_4[6];
        FUN_0137d0ac(&local_58,local_64,local_44);
        pppuVar7 = local_48;
        pppuVar22 = local_54;
        ppppuVar2 = local_58;
        if ((local_48 == (uint ***)0x0) || (local_4c <= (undefined1 *)((int)local_48 + -1))) {
          ppuVar21 = (uint **)0x2;
        }
        else {
          bVar24 = ((undefined1 *)((int)local_48 + -1))[(int)local_50];
          uVar26 = (uint)bVar24;
          iVar11 = thunk_FUN_016dd50a(param_2 + 0x96,"",0x20);
          if (iVar11 != 0) {
            puVar18 = (uint *)((int)(param_2 + 0x96) + (bVar24 >> 3 & 0xfffffff0));
            local_a8[2] = puVar18[2];
            local_8c = 0;
            local_90 = 0;
            local_94 = 0;
            local_98 = 0;
            local_a8[0] = *puVar18;
            local_a8[3] = puVar18[3];
            local_a8[1] = puVar18[1];
            if ((local_a8[(uVar26 & 0x7f) >> 5] >> (uVar26 & 0x1f) & 1) != 0) {
              local_34 = (uint ***)CONCAT31(local_34._1_3_,bVar24);
              local_38 = (uint ***)0x4;
              goto LAB_0137bc74;
            }
          }
          ppuVar21 = (uint **)(uint)*(byte *)((int)param_2 + uVar26 + 0x58);
        }
        if (ppppuVar2 == (undefined4 ****)0x0) {
          ppuVar13 = ppuVar21;
LAB_0137c238:
          ppuVar12 = param_3[0x22];
          if (ppuVar12 <= ppuVar13) goto LAB_0137cf28;
          pppuVar29 = (uint ***)param_3[0x21][(int)ppuVar13];
          if (-1 < (int)pppuVar29) goto LAB_0137c254;
        }
        else {
          if (ppppuVar2 != (undefined4 ****)0x2) {
            ppuVar13 = (uint **)((int)ppuVar21 + 6);
            goto LAB_0137c238;
          }
          if ((*(byte *)((int)param_2 + 0x51) & 1) == 0) {
            local_38 = (uint ***)0x2;
            local_34 = pppuVar22;
            goto LAB_0137bc74;
          }
          if (pppuVar22 < ppuVar30[0x55]) {
            ppuVar13 = (uint **)((int)ppuVar21 + (int)pppuVar22 * 6 + 0xc);
            goto LAB_0137c238;
          }
          pppuVar29 = (uint ***)FUN_01391aa4(param_2[0x9f]);
          if (pppuVar29 < (uint ***)0x80000000) goto LAB_0137c254;
        }
        local_30 = param_2;
        local_2c = param_3;
        FUN_01390a98(&local_38,&local_30,ppppuVar2,pppuVar22,ppuVar21);
        if (local_38 != (uint ***)0x5) goto LAB_0137bc74;
        ppuVar13 = param_3[0x2c];
        local_38 = (uint ***)&DAT_00000005;
        pppuVar29 = local_34;
      }
      if (((uint)ppuVar13 & 1) != 0) {
        ppuVar13 = param_3[0x2d];
        ppuVar12 = param_3[0x2e];
        iVar11 = (int)ppuVar13 - (int)ppuVar12;
        if (ppuVar13 < ppuVar12 || iVar11 == 0) {
          iVar11 = (int)ppuVar12 - (int)ppuVar13;
        }
        param_3[0x1c] = (uint **)((int)param_3[0x1c] + iVar11);
      }
      param_3[0x2c] = (uint **)0x1;
      param_3[0x2d] = (uint **)pppuVar19;
      param_3[0x2e] = (uint **)pppuVar19;
      if (pppuVar19 < pppuVar28) {
        ppuVar21 = param_2[0x9f];
        bVar24 = *(byte *)((int)param_2 + 0x51);
        uVar26 = (uint)ppuVar21 & 0x1f;
        local_19c = 0;
        pppuVar22 = pppuVar29;
        do {
          if (pppuVar22 < (uint ***)0x8000000) {
            pppuVar29 = pppuVar22;
            if (pppuVar19 < pppuVar28) {
              ppuVar13 = param_3[0x1e];
              ppuVar12 = param_3[0x1f];
              do {
                pppuVar29 = (uint ***)
                            ppuVar13[(int)((int)pppuVar22 +
                                          (uint)*(byte *)((int)param_2 +
                                                         *(byte *)(iVar5 + (int)pppuVar19) + 0x158))
                                    ];
                if (pppuVar28 <= (uint ***)((int)pppuVar19 + 3) || (uint ***)0x7ffffff < pppuVar29)
                {
LAB_0137c63c:
                  pppuVar7 = pppuVar19;
                  if (-1 < (int)pppuVar29) goto LAB_0137c688;
                  if (param_3[0x2c] != (uint **)0x1) goto LAB_0137ca98;
                  param_3[0x2e] = (uint **)pppuVar19;
                  ppuVar8 = (uint **)((int)pppuVar22 +
                                     (uint)*(byte *)((int)param_2 +
                                                    *(byte *)(iVar5 + (int)pppuVar19) + 0x158));
                  if (ppuVar12 <= ppuVar8) goto LAB_0137cf88;
                  pppuVar29 = (uint ***)ppuVar13[(int)ppuVar8];
                  if (-1 < (int)pppuVar29) goto LAB_0137c688;
                  local_58 = (undefined4 ****)param_2;
                  local_54 = param_3;
                  uVar33 = FUN_01390198(&local_58,pppuVar22,
                                        (uint)*(byte *)(iVar5 + (int)pppuVar19) << 8);
                  pppuVar29 = (uint ***)(uVar33 >> 0x20);
                  if ((uVar33 & 1) != 0) goto LAB_0137c158;
                  goto LAB_0137c688;
                }
                pppuVar7 = (uint ***)
                           ppuVar13[(int)((int)pppuVar29 +
                                         (uint)*(byte *)((int)param_2 +
                                                        *(byte *)((int)pppuVar19 + iVar5 + 1) +
                                                        0x158))];
                if ((uint ***)0x7ffffff < pppuVar7) {
                  pppuVar19 = (uint ***)((int)pppuVar19 + 1);
                  pppuVar22 = pppuVar29;
                  pppuVar29 = pppuVar7;
                  goto LAB_0137c63c;
                }
                pppuVar14 = (uint ***)
                            ppuVar13[(int)((int)pppuVar7 +
                                          (uint)*(byte *)((int)param_2 +
                                                         *(byte *)((int)pppuVar19 + iVar5 + 2) +
                                                         0x158))];
                if ((uint ***)0x7ffffff < pppuVar14) {
                  pppuVar19 = (uint ***)((int)pppuVar19 + 2);
                  pppuVar22 = pppuVar7;
                  pppuVar29 = pppuVar14;
                  goto LAB_0137c63c;
                }
                pppuVar29 = (uint ***)
                            ppuVar13[(int)((int)pppuVar14 +
                                          (uint)*(byte *)((int)param_2 +
                                                         *(byte *)((int)pppuVar19 + iVar5 + 3) +
                                                         0x158))];
                if ((uint ***)0x7ffffff < pppuVar29) {
                  pppuVar22 = pppuVar14;
                  pppuVar19 = (uint ***)((int)pppuVar19 + 3);
                  goto LAB_0137c63c;
                }
                pppuVar19 = pppuVar19 + 1;
                pppuVar22 = pppuVar29;
              } while (pppuVar19 < pppuVar28);
            }
            pppuVar19 = (uint ***)((int)pppuVar19 + 1);
            goto LAB_0137c510;
          }
          if (param_3[0x2c] == (uint **)0x0) goto LAB_0137ca98;
          param_3[0x2e] = (uint **)pppuVar19;
          if (pppuVar6 <= pppuVar19) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(pppuVar19,pppuVar6,&DAT_01892a50);
          }
          ppuVar12 = param_3[0x1f];
          ppuVar13 = (uint **)(((uint)pppuVar22 & 0x7ffffff) +
                              (uint)*(byte *)((int)param_2 +
                                             *(byte *)(iVar5 + (int)pppuVar19) + 0x158));
          if (ppuVar12 <= ppuVar13) goto LAB_0137cf78;
          pppuVar29 = (uint ***)param_3[0x1e][(int)ppuVar13];
          if ((int)pppuVar29 < 0) {
            local_58 = (undefined4 ****)param_2;
            local_54 = param_3;
            uVar33 = FUN_01390198(&local_58,pppuVar22,(uint)*(byte *)(iVar5 + (int)pppuVar19) << 8);
            pppuVar29 = (uint ***)(uVar33 >> 0x20);
            if ((uVar33 & 1) != 0) goto LAB_0137c158;
          }
          pppuVar7 = pppuVar19;
LAB_0137c688:
          if (pppuVar29 < (uint ***)0x8000000) {
LAB_0137c50c:
            pppuVar19 = (uint ***)((int)pppuVar7 + 1);
          }
          else {
            if (((uint)pppuVar29 & 0x10000000) == 0) {
              if (((uint)pppuVar29 & 0x8000000) != 0) {
                local_19c = 1;
                local_1a4 = pppuVar7;
                if (ppuVar30[0x55] == (uint *)0x1) {
                  local_1b0 = 0;
                }
                else {
                  uVar23 = ((uint)pppuVar29 & 0x7ffffff) >> uVar26;
                  if (param_3[0x25] <= (uint **)(((uint)pppuVar29 & 0x7ffffff) >> uVar26)) {
                    /* WARNING: Subroutine does not return */
                    FUN_00faa4a4(uVar23,param_3[0x25],&DAT_01893ae0);
                  }
                  local_1b0 = FUN_013c706c(param_3[0x24][uVar23 * 2],(param_3[0x24] + uVar23 * 2)[1]
                                           ,0);
LAB_0137c504:
                }
                goto LAB_0137c50c;
              }
              if (((uint)pppuVar29 & 0x40000000) != 0) {
                ppuVar30 = param_3[0x2c];
                pppuVar19 = (uint ***)param_3[0x2d];
                param_3[0x2c] = (uint **)0x0;
                if (((uint)ppuVar30 & 1) != 0) {
                  *param_1 = local_19c;
                  param_1[1] = local_1b0;
                  param_1[2] = local_1a4;
                  iVar17 = (int)pppuVar7 - (int)pppuVar19;
                  if (pppuVar7 < pppuVar19) {
                    iVar17 = (int)pppuVar19 - (int)pppuVar7;
                  }
                  param_3[0x1c] = (uint **)((int)param_3[0x1c] + iVar17);
                  return;
                }
                goto LAB_0137cec0;
              }
              if (((uint)pppuVar29 & 0x20000000) == 0) goto LAB_0137ced8;
              ppuVar30 = param_3[0x2c];
              pppuVar19 = (uint ***)param_3[0x2d];
              param_3[0x2c] = (uint **)0x0;
              if (((uint)ppuVar30 & 1) == 0) goto LAB_0137cec0;
              iVar17 = (int)pppuVar7 - (int)pppuVar19;
              if (pppuVar7 < pppuVar19) {
                iVar17 = (int)pppuVar19 - (int)pppuVar7;
              }
              param_3[0x1c] = (uint **)((int)param_3[0x1c] + iVar17);
              if (pppuVar6 <= pppuVar7) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(pppuVar7,pppuVar6,&DAT_01892a70);
              }
              uVar10 = FUN_013c7204(*(undefined1 *)(iVar5 + (int)pppuVar7),pppuVar7);
              goto LAB_0137c1cc;
            }
            (*pcVar27)(&local_68,iVar4,iVar5,pppuVar6,pppuVar7,pppuVar28);
            pppuVar19 = local_64;
            if (local_68 == 0) {
              ppuVar30 = param_3[0x2c];
              pppuVar19 = (uint ***)param_3[0x2d];
              param_3[0x2c] = (uint **)0x0;
              if (((uint)ppuVar30 & 1) == 0) goto LAB_0137cec0;
              *param_1 = local_19c;
              param_1[1] = local_1b0;
              local_17c = local_1a4;
              goto LAB_0137cd6c;
            }
            if (local_64 <= pppuVar7) goto LAB_0137c504;
            if (puVar20 == (uint *)0x0) goto LAB_0137c510;
            bVar32 = (uint ***)((int)pppuVar28 + 1) <= local_64;
            bVar31 = local_64 == (uint ***)((int)pppuVar28 + 1);
            local_30 = local_64;
            if (!bVar32 || bVar31) {
              bVar32 = pppuVar6 <= pppuVar28;
              bVar31 = pppuVar28 == pppuVar6;
            }
            local_2c = pppuVar28;
            if (bVar32 && !bVar31) {
              local_54 = (uint ***)FUN_005ffff4;
              local_58 = &local_30;
              local_50 = &local_38;
              local_4c = &LAB_00fac484;
              local_38 = pppuVar6;
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_0057a181,&local_58,&DAT_01893ee0);
            }
            if ((uint ***)((int)local_64 + -1) < pppuVar6) {
              bVar1 = *(byte *)(iVar5 + (int)local_64 + -1);
              uVar23 = (uint)bVar1;
              iVar11 = thunk_FUN_016dd50a(param_2 + 0x96,"",0x20);
              if (iVar11 == 0) {
LAB_0137c778:
                ppuVar8 = (uint **)(uint)*(byte *)((int)param_2 + uVar23 + 0x58);
                goto LAB_0137c794;
              }
              puVar18 = (uint *)((int)(param_2 + 0x96) + (bVar1 >> 3 & 0xfffffff0));
              local_c8[3] = puVar18[3];
              local_c8[0] = *puVar18;
              local_c8[1] = puVar18[1];
              local_c8[2] = puVar18[2];
              local_ac = 0;
              local_b0 = 0;
              local_b4 = 0;
              local_b8 = 0;
              if ((local_c8[(uVar23 & 0x7f) >> 5] >> (uVar23 & 0x1f) & 1) == 0) goto LAB_0137c778;
              local_2c = (uint ***)CONCAT31(local_2c._1_3_,bVar1);
              local_30 = (uint ***)0x4;
LAB_0137cb3c:
              local_54 = local_2c;
              ppppuVar15 = (uint ****)&local_58;
              local_58 = (undefined4 ****)local_30;
              goto LAB_0137cb50;
            }
            ppuVar8 = (uint **)0x2;
LAB_0137c794:
            if (iVar17 == 0) {
              ppuVar13 = ppuVar8;
LAB_0137c7dc:
              ppuVar12 = param_3[0x22];
              if (ppuVar12 <= ppuVar13) goto LAB_0137cf28;
              pppuVar29 = (uint ***)param_3[0x21][(int)ppuVar13];
            }
            else {
              if (iVar17 != 2) {
                ppuVar13 = (uint **)((int)ppuVar8 + 6);
                goto LAB_0137c7dc;
              }
              if ((bVar24 & 1) == 0) {
                local_2c = local_18c;
                local_30 = (uint ***)0x2;
                goto LAB_0137cb3c;
              }
              if (local_18c < ppuVar30[0x55]) {
                ppuVar13 = (uint **)((int)local_18c * 6 + 0xc + (int)ppuVar8);
                goto LAB_0137c7dc;
              }
              pppuVar29 = (uint ***)FUN_01391aa4(ppuVar21);
            }
            if ((uint ***)0x7fffffff < pppuVar29) {
              local_58 = (undefined4 ****)param_2;
              local_54 = param_3;
              FUN_01390a98(&local_30,&local_58,iVar17,local_18c,ppuVar8);
              if (local_30 != (uint ***)0x5) goto LAB_0137cb3c;
              pppuVar29 = local_2c;
            }
          }
LAB_0137c510:
          pppuVar22 = pppuVar29;
        } while (pppuVar19 < pppuVar28);
      }
      else {
        local_19c = 0;
      }
      if (pppuVar28 < pppuVar6) {
        uVar3 = *(undefined1 *)(iVar5 + (int)pppuVar28);
        uVar33 = FUN_0137a984(param_2,param_3,pppuVar29,uVar3);
        uVar10 = (undefined4)(uVar33 >> 0x20);
        if ((uVar33 & 1) != 0) {
          uVar10 = FUN_013c723c(pppuVar28);
          goto LAB_0137c358;
        }
        if ((uVar33 & 0x800000000000000) != 0) {
          pppuVar6 = pppuVar28;
          goto LAB_0137c4b0;
        }
        if ((uVar33 & 0x2000000000000000) != 0) {
          uVar10 = FUN_013c7204(uVar3,pppuVar28);
          goto LAB_0137c358;
        }
      }
      else {
        uVar33 = FUN_0137a900(param_2,param_3,pppuVar29);
        uVar10 = (undefined4)(uVar33 >> 0x20);
        if ((uVar33 & 1) != 0) {
          uVar10 = FUN_013c723c(pppuVar6);
LAB_0137c358:
          *param_1 = 2;
          param_1[1] = uVar10;
          return;
        }
        if ((uVar33 & 0x800000000000000) != 0) {
LAB_0137c4b0:
          local_1b0 = FUN_0137a834(ppuVar30[0x55],param_2[0x9f],param_3[0x24],param_3[0x25],uVar10,0
                                  );
          local_19c = 1;
          local_1a4 = pppuVar6;
        }
      }
      ppuVar30 = param_3[0x2c];
      pppuVar19 = (uint ***)param_3[0x2d];
      param_3[0x2c] = (uint **)0x0;
      if (((uint)ppuVar30 & 1) != 0) {
        *param_1 = local_19c;
        param_1[1] = local_1b0;
        param_1[2] = local_1a4;
        goto LAB_0137cd70;
      }
      goto LAB_0137cec0;
    }
  }
  if ((char)param_4[6] == '\0') {
    ppuVar30 = param_2[0x9e];
    if ((pppuVar19 == (uint ***)0x0) ||
       ((undefined1 *)param_4[3] <= (undefined1 *)((int)pppuVar19 + -1))) {
      pppuVar29 = (uint ***)param_4[1];
      ppuVar21 = (uint **)0x2;
      ppuVar13 = ppuVar21;
      if (iVar17 != 0) goto LAB_0137ac24;
LAB_0137b2d0:
      ppuVar12 = param_3[0x22];
      ppuVar21 = ppuVar13;
      if (ppuVar12 <= ppuVar13) {
LAB_0137cf28:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(ppuVar13,ppuVar12,&DAT_01893b00);
      }
LAB_0137b2e0:
      pppuVar6 = (uint ***)param_3[0x21][(int)ppuVar13];
      if (-1 < (int)pppuVar6) goto LAB_0137b2f0;
LAB_0137b898:
      local_58 = (undefined4 ****)param_2;
      local_54 = param_3;
      FUN_01390a98(&local_68,&local_58,iVar17,pppuVar29,ppuVar21);
      if (local_68 != 5) goto LAB_0137b0ec;
      ppuVar13 = param_3[0x2c];
      pppuVar6 = local_64;
    }
    else {
      bVar24 = ((undefined1 *)((int)pppuVar19 + -1))[param_4[2]];
      uVar26 = (uint)bVar24;
      pppuVar29 = (uint ***)param_4[1];
      iVar4 = thunk_FUN_016dd50a(param_2 + 0x96,"",0x20);
      if (iVar4 != 0) {
        puVar20 = (uint *)((int)(param_2 + 0x96) + (bVar24 >> 3 & 0xfffffff0));
        local_148[0] = *puVar20;
        local_148[1] = puVar20[1];
        local_148[2] = puVar20[2];
        local_148[3] = puVar20[3];
        uStack_138 = 0;
        local_12c = 0;
        local_130 = 0;
        local_134 = 0;
        if ((local_148[(uVar26 & 0x7f) >> 5] >> (uVar26 & 0x1f) & 1) != 0) goto LAB_0137abc8;
      }
      ppuVar21 = (uint **)(uint)*(byte *)((int)param_2 + uVar26 + 0x58);
      ppuVar13 = ppuVar21;
      local_174 = iVar17;
      if (iVar17 == 0) goto LAB_0137b2d0;
LAB_0137ac24:
      if (iVar17 == 1) {
        ppuVar13 = (uint **)((int)ppuVar21 + 6);
        ppuVar12 = param_3[0x22];
        if (ppuVar12 <= ppuVar13) goto LAB_0137cf28;
        goto LAB_0137b2e0;
      }
      if ((*(byte *)((int)param_2 + 0x51) & 1) == 0) goto LAB_0137b0e0;
      if (pppuVar29 < ppuVar30[0x55]) {
        ppuVar13 = (uint **)((int)ppuVar21 + (int)pppuVar29 * 6 + 0xc);
        ppuVar12 = param_3[0x22];
        if (ppuVar12 <= ppuVar13) goto LAB_0137cf28;
        goto LAB_0137b2e0;
      }
      pppuVar6 = (uint ***)FUN_01391aa4(param_2[0x9f]);
      local_174 = iVar17;
      if ((uint ***)0x7fffffff < pppuVar6) goto LAB_0137b898;
LAB_0137b2f0:
      ppuVar13 = param_3[0x2c];
    }
    if (((uint)ppuVar13 & 1) != 0) {
      ppuVar13 = param_3[0x2d];
      ppuVar12 = param_3[0x2e];
      iVar17 = (int)ppuVar13 - (int)ppuVar12;
      if (ppuVar13 < ppuVar12 || iVar17 == 0) {
        iVar17 = (int)ppuVar12 - (int)ppuVar13;
      }
      param_3[0x1c] = (uint **)((int)param_3[0x1c] + iVar17);
    }
    param_3[0x2c] = (uint **)0x1;
    param_3[0x2d] = (uint **)pppuVar19;
    param_3[0x2e] = (uint **)pppuVar19;
    if (pppuVar19 < pppuVar28) {
      ppuVar13 = param_2[0x9f];
      pppuVar29 = (uint ***)param_4[3];
      iVar17 = param_4[2];
      local_178 = 0;
      do {
        if (pppuVar6 < (uint ***)0x8000000) {
          if (pppuVar19 < pppuVar28) {
            ppuVar12 = param_3[0x1e];
            do {
              pppuVar22 = (uint ***)
                          ppuVar12[(int)((int)pppuVar6 +
                                        (uint)*(byte *)((int)param_2 +
                                                       *(byte *)(iVar17 + (int)pppuVar19) + 0x158))]
              ;
              if (pppuVar28 <= (uint ***)((int)pppuVar19 + 3) || (uint ***)0x7ffffff < pppuVar22) {
                pppuVar7 = pppuVar22;
                pppuVar14 = pppuVar6;
                if (pppuVar22 < (uint ***)0x80000000) {
LAB_0137b4d0:
                  pppuVar6 = pppuVar7;
                  goto LAB_0137b4d4;
                }
LAB_0137b47c:
                if (param_3[0x2c] == (uint **)0x0) goto LAB_0137ca98;
                param_3[0x2e] = (uint **)pppuVar19;
                ppuVar21 = (uint **)((int)pppuVar14 +
                                    (uint)*(byte *)((int)param_2 +
                                                   *(byte *)(iVar17 + (int)pppuVar19) + 0x158));
                if (param_3[0x1f] <= ppuVar21) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(ppuVar21,param_3[0x1f],&DAT_01893ad0);
                }
                pppuVar6 = (uint ***)ppuVar12[(int)ppuVar21];
                if (-1 < (int)pppuVar6) goto LAB_0137b4d4;
                local_58 = (undefined4 ****)param_2;
                local_54 = param_3;
                uVar33 = FUN_01390198(&local_58,pppuVar14,
                                      (uint)*(byte *)(iVar17 + (int)pppuVar19) << 8);
                pppuVar6 = (uint ***)(uVar33 >> 0x20);
                if ((uVar33 & 1) != 0) goto LAB_0137c158;
                goto LAB_0137b4d4;
              }
              pppuVar6 = (uint ***)
                         ppuVar12[(int)((int)pppuVar22 +
                                       (uint)*(byte *)((int)param_2 +
                                                      *(byte *)((int)pppuVar19 + iVar17 + 1) + 0x158
                                                      ))];
              if ((uint ***)0x7ffffff < pppuVar6) {
                pppuVar7 = (uint ***)((int)pppuVar19 + 1);
LAB_0137b4c4:
                pppuVar19 = pppuVar7;
                pppuVar7 = pppuVar6;
                pppuVar14 = pppuVar22;
                if ((int)pppuVar6 < 0) goto LAB_0137b47c;
                goto LAB_0137b4d0;
              }
              pppuVar22 = (uint ***)
                          ppuVar12[(int)((int)pppuVar6 +
                                        (uint)*(byte *)((int)param_2 +
                                                       *(byte *)((int)pppuVar19 + iVar17 + 2) +
                                                       0x158))];
              if ((uint ***)0x7ffffff < pppuVar22) {
                pppuVar19 = (uint ***)((int)pppuVar19 + 2);
                pppuVar7 = pppuVar22;
                pppuVar14 = pppuVar6;
                if ((uint ***)0x7fffffff < pppuVar22) goto LAB_0137b47c;
                goto LAB_0137b4d0;
              }
              pppuVar6 = (uint ***)
                         ppuVar12[(int)((int)pppuVar22 +
                                       (uint)*(byte *)((int)param_2 +
                                                      *(byte *)((int)pppuVar19 + iVar17 + 3) + 0x158
                                                      ))];
              pppuVar7 = (uint ***)((int)pppuVar19 + 3);
              if ((uint ***)0x7ffffff < pppuVar6) goto LAB_0137b4c4;
              pppuVar19 = pppuVar19 + 1;
            } while (pppuVar19 < pppuVar28);
          }
        }
        else {
          if (param_3[0x2c] == (uint **)0x0) goto LAB_0137ca98;
          param_3[0x2e] = (uint **)pppuVar19;
          if (pppuVar29 <= pppuVar19) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(pppuVar19,pppuVar29,&DAT_01892a50);
          }
          ppuVar12 = param_3[0x1f];
          ppuVar21 = (uint **)(((uint)pppuVar6 & 0x7ffffff) +
                              (uint)*(byte *)((int)param_2 +
                                             *(byte *)(iVar17 + (int)pppuVar19) + 0x158));
          if (ppuVar12 <= ppuVar21) goto LAB_0137cef0;
          pppuVar22 = (uint ***)param_3[0x1e][(int)ppuVar21];
          if ((int)param_3[0x1e][(int)ppuVar21] < 0) {
            local_58 = (undefined4 ****)param_2;
            local_54 = param_3;
            uVar33 = FUN_01390198(&local_58,pppuVar6,(uint)*(byte *)(iVar17 + (int)pppuVar19) << 8);
            pppuVar22 = (uint ***)(uVar33 >> 0x20);
            if ((uVar33 & 1) != 0) goto LAB_0137c158;
          }
          pppuVar6 = pppuVar22;
LAB_0137b4d4:
          if (((uint ***)0x7ffffff < pppuVar6) && (((uint)pppuVar6 & 0x10000000) == 0)) {
            if (((uint)pppuVar6 & 0x8000000) == 0) {
              if (((uint)pppuVar6 & 0x40000000) != 0) {
                ppuVar30 = param_3[0x2c];
                pppuVar28 = (uint ***)param_3[0x2d];
                param_3[0x2c] = (uint **)0x0;
                if (((uint)ppuVar30 & 1) != 0) {
                  *param_1 = local_178;
                  param_1[1] = local_174;
                  param_1[2] = local_17c;
                  iVar17 = (int)pppuVar19 - (int)pppuVar28;
                  if (pppuVar19 < pppuVar28) {
                    iVar17 = (int)pppuVar28 - (int)pppuVar19;
                  }
                  param_3[0x1c] = (uint **)((int)param_3[0x1c] + iVar17);
                  return;
                }
                goto LAB_0137cec0;
              }
              if (((uint)pppuVar6 & 0x20000000) == 0) goto LAB_0137ced8;
              ppuVar30 = param_3[0x2c];
              pppuVar28 = (uint ***)param_3[0x2d];
              param_3[0x2c] = (uint **)0x0;
              if (((uint)ppuVar30 & 1) == 0) goto LAB_0137cec0;
              iVar4 = (int)pppuVar19 - (int)pppuVar28;
              if (pppuVar19 < pppuVar28) {
                iVar4 = (int)pppuVar28 - (int)pppuVar19;
              }
              param_3[0x1c] = (uint **)((int)param_3[0x1c] + iVar4);
              if (pppuVar29 <= pppuVar19) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(pppuVar19,pppuVar29,&DAT_01892a70);
              }
              uVar10 = FUN_013c7204(*(undefined1 *)(iVar17 + (int)pppuVar19));
              goto LAB_0137c15c;
            }
            local_178 = 1;
            if (ppuVar30[0x55] == (uint *)0x1) {
              local_174 = 0;
            }
            else {
              uVar26 = ((uint)pppuVar6 & 0x7ffffff) >> ((uint)ppuVar13 & 0x1f);
              if (param_3[0x25] <=
                  (uint **)(((uint)pppuVar6 & 0x7ffffff) >> ((uint)ppuVar13 & 0x1f))) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar26,param_3[0x25],&DAT_01893ae0);
              }
              local_174 = 0;
              puVar20 = param_3[0x24][uVar26 * 2];
              puVar18 = (param_3[0x24] + uVar26 * 2)[1];
              if (puVar18 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(0,0,&DAT_018942e8);
              }
              if ((puVar20[2] & 2) != 0) {
                if (puVar18 < (uint *)0xd) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa36c(0xd,puVar18,puVar18,&DAT_018942f8);
                }
                if ((int)puVar18 - 0xdU < 4) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa36c(0,4,(int)puVar18 - 0xdU,&DAT_01892db0);
                }
                local_174 = *(int *)((int)puVar20 + 0x15);
              }
            }
            local_17c = pppuVar19;
          }
        }
        pppuVar19 = (uint ***)((int)pppuVar19 + 1);
      } while (pppuVar19 < pppuVar28);
      if (pppuVar28 < pppuVar29) goto LAB_0137b628;
LAB_0137b67c:
      ppuVar13 = param_3[0x1f];
      iVar17 = *(byte *)((int)param_2 + 599) + 1;
      ppuVar12 = (uint **)(iVar17 + ((uint)pppuVar6 & 0x7ffffff));
      if (ppuVar13 <= ppuVar12) goto LAB_0137cf68;
      puVar20 = param_3[0x1e][(int)ppuVar12];
      if ((int)puVar20 < 0) {
        uVar10 = FUN_0138d580(iVar17);
        local_58 = (undefined4 ****)param_2;
        local_54 = param_3;
        uVar33 = FUN_01390198(&local_58,pppuVar6,uVar10);
        puVar20 = (uint *)(uVar33 >> 0x20);
        if ((uVar33 & 1) == 0) goto LAB_0137cd14;
        goto LAB_0137b758;
      }
LAB_0137cd14:
      if (((uint)puVar20 & 0x8000000) != 0) goto LAB_0137cd1c;
    }
    else {
      pppuVar29 = (uint ***)param_4[3];
      local_178 = 0;
      if (pppuVar29 <= pppuVar28) goto LAB_0137b67c;
LAB_0137b628:
      uVar26 = (uint)*(byte *)(param_4[2] + (int)pppuVar28);
      ppuVar13 = param_3[0x1f];
      ppuVar12 = (uint **)(((uint)pppuVar6 & 0x7ffffff) +
                          (uint)*(byte *)((int)param_2 + uVar26 + 0x158));
      if (ppuVar13 <= ppuVar12) {
LAB_0137cf58:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(ppuVar12,ppuVar13,&DAT_01893ad0);
      }
      puVar20 = param_3[0x1e][(int)ppuVar12];
      if ((int)puVar20 < 0) {
        local_58 = (undefined4 ****)param_2;
        local_54 = param_3;
        uVar33 = FUN_01390198(&local_58,pppuVar6,uVar26 << 8);
        puVar20 = (uint *)(uVar33 >> 0x20);
        if ((uVar33 & 1) != 0) goto LAB_0137b668;
      }
      pppuVar29 = pppuVar28;
      if (((uint)puVar20 & 0x8000000) == 0) {
        if (((uint)puVar20 & 0x20000000) != 0) {
LAB_0137ccbc:
          uVar10 = FUN_013c7204(uVar26,pppuVar28);
          goto LAB_0137b75c;
        }
      }
      else {
LAB_0137cd1c:
        local_174 = FUN_0137a834(ppuVar30[0x55],param_2[0x9f],param_3[0x24],param_3[0x25],puVar20,0)
        ;
        local_178 = 1;
        local_17c = pppuVar29;
      }
    }
    ppuVar30 = param_3[0x2c];
    pppuVar19 = (uint ***)param_3[0x2d];
    param_3[0x2c] = (uint **)0x0;
    if (((uint)ppuVar30 & 1) != 0) {
      param_1[1] = local_174;
      *param_1 = local_178;
LAB_0137cd6c:
      param_1[2] = local_17c;
LAB_0137cd70:
      iVar17 = (int)pppuVar28 - (int)pppuVar19;
      if (pppuVar28 < pppuVar19) {
        iVar17 = (int)pppuVar19 - (int)pppuVar28;
      }
      param_3[0x1c] = (uint **)((int)param_3[0x1c] + iVar17);
      return;
    }
    goto LAB_0137cec0;
  }
  ppuVar30 = param_2[0x9e];
  if ((pppuVar19 == (uint ***)0x0) ||
     ((undefined1 *)param_4[3] <= (undefined1 *)((int)pppuVar19 + -1))) {
    pppuVar29 = (uint ***)param_4[1];
    ppuVar21 = (uint **)0x2;
    ppuVar13 = ppuVar21;
    if (iVar17 == 0) goto LAB_0137ab28;
LAB_0137abe4:
    if (iVar17 != 2) {
      ppuVar13 = (uint **)((int)ppuVar21 + 6);
      goto LAB_0137ae00;
    }
    if ((*(byte *)((int)param_2 + 0x51) & 1) == 0) {
LAB_0137b0e0:
      local_68 = 2;
      local_64 = pppuVar29;
      goto LAB_0137b0ec;
    }
    if (pppuVar29 < ppuVar30[0x55]) {
      ppuVar13 = (uint **)((int)ppuVar21 + (int)pppuVar29 * 6 + 0xc);
      goto LAB_0137ae00;
    }
    pppuVar6 = (uint ***)FUN_01391aa4(param_2[0x9f]);
    if ((uint ***)0x7fffffff < pppuVar6) goto LAB_0137b81c;
LAB_0137ae1c:
    ppuVar13 = param_3[0x2c];
  }
  else {
    bVar24 = ((undefined1 *)((int)pppuVar19 + -1))[param_4[2]];
    uVar26 = (uint)bVar24;
    pppuVar29 = (uint ***)param_4[1];
    iVar4 = thunk_FUN_016dd50a(param_2 + 0x96,"",0x20);
    if (iVar4 != 0) {
      puVar20 = (uint *)((int)(param_2 + 0x96) + (bVar24 >> 3 & 0xfffffff0));
      local_168[0] = *puVar20;
      local_168[1] = puVar20[1];
      local_168[2] = puVar20[2];
      local_168[3] = puVar20[3];
      uStack_158 = 0;
      local_14c = 0;
      local_150 = 0;
      local_154 = 0;
      if ((local_168[(uVar26 & 0x7f) >> 5] >> (uVar26 & 0x1f) & 1) == 0) goto LAB_0137ab08;
LAB_0137abc8:
      local_64 = (uint ***)CONCAT31(local_64._1_3_,bVar24);
      local_68 = 4;
LAB_0137b0ec:
      pppuVar28 = local_64;
      uVar26 = local_68;
      iVar17 = 2;
      if (2 < local_68) {
        iVar17 = local_68 - 3;
      }
      if (iVar17 == 0) {
        puVar9 = (undefined1 *)thunk_FUN_016d4a50(0xc);
        if (puVar9 == (undefined1 *)0x0) {
LAB_0137cb5c:
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
        *(uint ****)(puVar9 + 4) = pppuVar19;
        uVar3 = 1;
      }
      else if (iVar17 == 1) {
        if (pppuVar19 == (uint ***)0x0) {
LAB_0137ce60:
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("no quit in start without look-behind",0x24,&DAT_01892a10);
        }
        puVar9 = (undefined1 *)thunk_FUN_016d4a50(0xc);
        if (puVar9 == (undefined1 *)0x0) goto LAB_0137cb5c;
        *(undefined1 **)(puVar9 + 4) = (undefined1 *)((int)pppuVar19 + -1);
        uVar3 = 0;
        puVar9[1] = (char)pppuVar28;
      }
      else {
        puVar9 = (undefined1 *)thunk_FUN_016d4a50(0xc);
        if (puVar9 == (undefined1 *)0x0) goto LAB_0137cb5c;
        uVar3 = 3;
        *(uint *)(puVar9 + 4) = uVar26;
        *(uint ****)(puVar9 + 8) = pppuVar28;
      }
      *puVar9 = uVar3;
      *param_1 = 2;
      param_1[1] = puVar9;
      return;
    }
LAB_0137ab08:
    ppuVar21 = (uint **)(uint)*(byte *)((int)param_2 + uVar26 + 0x58);
    ppuVar13 = ppuVar21;
    if (iVar17 != 0) goto LAB_0137abe4;
LAB_0137ab28:
    ppuVar21 = ppuVar13;
LAB_0137ae00:
    ppuVar12 = param_3[0x22];
    if (ppuVar12 <= ppuVar13) goto LAB_0137cf28;
    pppuVar6 = (uint ***)param_3[0x21][(int)ppuVar13];
    if (-1 < (int)pppuVar6) goto LAB_0137ae1c;
LAB_0137b81c:
    local_58 = (undefined4 ****)param_2;
    local_54 = param_3;
    FUN_01390a98(&local_68,&local_58,iVar17,pppuVar29,ppuVar21);
    if (local_68 != 5) goto LAB_0137b0ec;
    ppuVar13 = param_3[0x2c];
    pppuVar6 = local_64;
  }
  if (((uint)ppuVar13 & 1) != 0) {
    ppuVar13 = param_3[0x2d];
    ppuVar12 = param_3[0x2e];
    iVar17 = (int)ppuVar13 - (int)ppuVar12;
    if (ppuVar13 < ppuVar12 || iVar17 == 0) {
      iVar17 = (int)ppuVar12 - (int)ppuVar13;
    }
    param_3[0x1c] = (uint **)((int)param_3[0x1c] + iVar17);
  }
  param_3[0x2c] = (uint **)0x1;
  param_3[0x2d] = (uint **)pppuVar19;
  param_3[0x2e] = (uint **)pppuVar19;
  if (pppuVar19 < pppuVar28) {
    iVar17 = param_4[2];
    pppuVar29 = (uint ***)param_4[3];
    do {
      if (pppuVar6 < (uint ***)0x8000000) {
        if (pppuVar19 < pppuVar28) {
          ppuVar13 = param_3[0x1e];
          ppuVar12 = param_3[0x1f];
          do {
            pppuVar22 = (uint ***)
                        ppuVar13[(int)((int)pppuVar6 +
                                      (uint)*(byte *)((int)param_2 +
                                                     *(byte *)(iVar17 + (int)pppuVar19) + 0x158))];
            if (pppuVar28 <= (uint ***)((int)pppuVar19 + 3) || (uint ***)0x7ffffff < pppuVar22) {
              if (pppuVar22 < (uint ***)0x80000000) goto LAB_0137aee8;
LAB_0137afc8:
              if (param_3[0x2c] == (uint **)0x0) goto LAB_0137ca98;
              param_3[0x2e] = (uint **)pppuVar19;
              ppuVar8 = (uint **)((int)pppuVar6 +
                                 (uint)*(byte *)((int)param_2 +
                                                *(byte *)(iVar17 + (int)pppuVar19) + 0x158));
              if (ppuVar12 <= ppuVar8) {
LAB_0137cf88:
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(ppuVar8,ppuVar12,&DAT_01893ad0);
              }
              pppuVar22 = (uint ***)ppuVar13[(int)ppuVar8];
              if (-1 < (int)ppuVar13[(int)ppuVar8]) goto LAB_0137aee8;
              local_58 = (undefined4 ****)param_2;
              local_54 = param_3;
              uVar33 = FUN_01390198(&local_58,pppuVar6,(uint)*(byte *)(iVar17 + (int)pppuVar19) << 8
                                   );
              pppuVar22 = (uint ***)(uVar33 >> 0x20);
              if ((uVar33 & 1) == 0) goto LAB_0137aee8;
              goto LAB_0137c158;
            }
            pppuVar7 = (uint ***)
                       ppuVar13[(int)((int)pppuVar22 +
                                     (uint)*(byte *)((int)param_2 +
                                                    *(byte *)((int)pppuVar19 + iVar17 + 1) + 0x158))
                               ];
            if ((uint ***)0x7ffffff < pppuVar7) {
              pppuVar14 = (uint ***)((int)pppuVar19 + 1);
joined_r0x0137afc4:
              pppuVar19 = pppuVar14;
              pppuVar6 = pppuVar22;
              pppuVar22 = pppuVar7;
              if ((uint ***)0x7fffffff < pppuVar7) goto LAB_0137afc8;
              goto LAB_0137aee8;
            }
            pppuVar14 = (uint ***)
                        ppuVar13[(int)((int)pppuVar7 +
                                      (uint)*(byte *)((int)param_2 +
                                                     *(byte *)((int)pppuVar19 + iVar17 + 2) + 0x158)
                                      )];
            if ((uint ***)0x7ffffff < pppuVar14) {
              pppuVar22 = pppuVar7;
              pppuVar7 = pppuVar14;
              pppuVar14 = (uint ***)((int)pppuVar19 + 2);
              goto joined_r0x0137afc4;
            }
            pppuVar6 = (uint ***)
                       ppuVar13[(int)((int)pppuVar14 +
                                     (uint)*(byte *)((int)param_2 +
                                                    *(byte *)((int)pppuVar19 + iVar17 + 3) + 0x158))
                               ];
            pppuVar22 = pppuVar14;
            pppuVar7 = pppuVar6;
            pppuVar14 = (uint ***)((int)pppuVar19 + 3);
            if ((uint ***)0x7ffffff < pppuVar6) goto joined_r0x0137afc4;
            pppuVar19 = pppuVar19 + 1;
          } while (pppuVar19 < pppuVar28);
        }
      }
      else {
        if (param_3[0x2c] == (uint **)0x0) {
LAB_0137ca98:
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("no in-progress search to update",0x1f,&DAT_01892a40);
        }
        param_3[0x2e] = (uint **)pppuVar19;
        if (pppuVar29 <= pppuVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(pppuVar19,pppuVar29,&DAT_01892a50);
        }
        ppuVar12 = param_3[0x1f];
        ppuVar21 = (uint **)(((uint)pppuVar6 & 0x7ffffff) +
                            (uint)*(byte *)((int)param_2 +
                                           *(byte *)(iVar17 + (int)pppuVar19) + 0x158));
        if (ppuVar12 <= ppuVar21) {
LAB_0137cef0:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(ppuVar21,ppuVar12,&DAT_01893ad0);
        }
        pppuVar22 = (uint ***)param_3[0x1e][(int)ppuVar21];
        if ((int)pppuVar22 < 0) {
          local_58 = (undefined4 ****)param_2;
          local_54 = param_3;
          uVar33 = FUN_01390198(&local_58,pppuVar6,(uint)*(byte *)(iVar17 + (int)pppuVar19) << 8);
          pppuVar22 = (uint ***)(uVar33 >> 0x20);
          if ((uVar33 & 1) != 0) goto LAB_0137c158;
        }
LAB_0137aee8:
        pppuVar6 = pppuVar22;
        if (((uint ***)0x7ffffff < pppuVar6) && (((uint)pppuVar6 & 0x10000000) == 0)) {
          if (((uint)pppuVar6 & 0x8000000) == 0) {
            if (((uint)pppuVar6 & 0x40000000) == 0) {
              if (((uint)pppuVar6 & 0x20000000) == 0) {
LAB_0137ced8:
                    /* WARNING: Subroutine does not return */
                FUN_00faa478("internal error: entered unreachable code: sid being unknown is a bug",
                             0x89,&DAT_01892a60);
              }
              ppuVar30 = param_3[0x2c];
              pppuVar28 = (uint ***)param_3[0x2d];
              param_3[0x2c] = (uint **)0x0;
              if (((uint)ppuVar30 & 1) == 0) goto LAB_0137cec0;
              iVar4 = (int)pppuVar19 - (int)pppuVar28;
              if (pppuVar19 < pppuVar28) {
                iVar4 = (int)pppuVar28 - (int)pppuVar19;
              }
              param_3[0x1c] = (uint **)((int)param_3[0x1c] + iVar4);
              if (pppuVar29 <= pppuVar19) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(pppuVar19,pppuVar29,&DAT_01892a70);
              }
              uVar10 = FUN_013c7204(*(undefined1 *)(iVar17 + (int)pppuVar19),pppuVar19);
              goto LAB_0137c15c;
            }
            pppuVar28 = (uint ***)param_3[0x2d];
            ppuVar30 = param_3[0x2c];
            param_3[0x2c] = (uint **)0x0;
            if (((uint)ppuVar30 & 1) == 0) goto LAB_0137cec0;
            *param_1 = 0;
          }
          else {
            uVar10 = FUN_0137a834(ppuVar30[0x55],param_2[0x9f],param_3[0x24],param_3[0x25],pppuVar6,
                                  0);
            pppuVar28 = (uint ***)param_3[0x2d];
            ppuVar30 = param_3[0x2c];
            param_3[0x2c] = (uint **)0x0;
            if (((uint)ppuVar30 & 1) == 0) goto LAB_0137cec0;
            param_1[1] = uVar10;
            param_1[2] = pppuVar19;
            *param_1 = 1;
          }
          iVar17 = (int)pppuVar19 - (int)pppuVar28;
          if (pppuVar19 < pppuVar28) {
            iVar17 = (int)pppuVar28 - (int)pppuVar19;
          }
          param_3[0x1c] = (uint **)((int)param_3[0x1c] + iVar17);
          return;
        }
      }
      pppuVar19 = (uint ***)((int)pppuVar19 + 1);
    } while (pppuVar19 < pppuVar28);
    if (pppuVar28 < pppuVar29) goto LAB_0137b07c;
LAB_0137b71c:
    ppuVar13 = param_3[0x1f];
    iVar17 = *(byte *)((int)param_2 + 599) + 1;
    ppuVar12 = (uint **)(iVar17 + ((uint)pppuVar6 & 0x7ffffff));
    if (ppuVar13 <= ppuVar12) {
LAB_0137cf68:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(ppuVar12,ppuVar13,&DAT_01893af0);
    }
    if ((int)param_3[0x1e][(int)ppuVar12] < 0) {
      uVar10 = FUN_0138d580(iVar17);
      local_58 = (undefined4 ****)param_2;
      local_54 = param_3;
      uVar33 = FUN_01390198(&local_58,pppuVar6,uVar10);
      if ((uVar33 & 1) != 0) {
LAB_0137b758:
        uVar10 = FUN_013c723c(pppuVar29);
LAB_0137b75c:
        *param_1 = 2;
        param_1[1] = uVar10;
        return;
      }
    }
    else {
      uVar33 = ZEXT48(param_3[0x1e][(int)ppuVar12]) << 0x20;
    }
    uVar16 = (undefined4)(uVar33 >> 0x20);
    uVar10 = (undefined4)uVar33;
    if ((uVar33 & 0x800000000000000) != 0) goto LAB_0137ce04;
LAB_0137cdfc:
    uVar16 = 0;
  }
  else {
    pppuVar29 = (uint ***)param_4[3];
    if (pppuVar29 <= pppuVar28) goto LAB_0137b71c;
LAB_0137b07c:
    uVar26 = (uint)*(byte *)(param_4[2] + (int)pppuVar28);
    ppuVar13 = param_3[0x1f];
    ppuVar12 = (uint **)(((uint)pppuVar6 & 0x7ffffff) +
                        (uint)*(byte *)((int)param_2 + uVar26 + 0x158));
    if (ppuVar13 <= ppuVar12) goto LAB_0137cf58;
    if ((int)param_3[0x1e][(int)ppuVar12] < 0) {
      local_58 = (undefined4 ****)param_2;
      local_54 = param_3;
      uVar33 = FUN_01390198(&local_58,pppuVar6,uVar26 << 8);
      if ((uVar33 & 1) == 0) goto LAB_0137b0bc;
LAB_0137b668:
      pppuVar29 = pppuVar28;
      goto LAB_0137b758;
    }
    uVar33 = ZEXT48(param_3[0x1e][(int)ppuVar12]) << 0x20;
LAB_0137b0bc:
    uVar16 = (undefined4)(uVar33 >> 0x20);
    uVar10 = (undefined4)uVar33;
    pppuVar29 = pppuVar28;
    if ((uVar33 & 0x800000000000000) == 0) {
      if ((uVar33 & 0x2000000000000000) != 0) goto LAB_0137ccbc;
      goto LAB_0137cdfc;
    }
LAB_0137ce04:
    uVar10 = FUN_0137a834(ppuVar30[0x55],param_2[0x9f],param_3[0x24],param_3[0x25],uVar16,0);
    uVar16 = 1;
  }
  ppuVar30 = param_3[0x2c];
  pppuVar19 = (uint ***)param_3[0x2d];
  param_3[0x2c] = (uint **)0x0;
  if (((uint)ppuVar30 & 1) != 0) {
    param_1[1] = uVar10;
    param_1[2] = pppuVar29;
    *param_1 = uVar16;
LAB_0137ce44:
    iVar17 = (int)pppuVar28 - (int)pppuVar19;
    if (pppuVar28 < pppuVar19) {
      iVar17 = (int)pppuVar19 - (int)pppuVar28;
    }
    param_3[0x1c] = (uint **)((int)param_3[0x1c] + iVar17);
    return;
  }
LAB_0137cec0:
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8("no in-progress search to finish",0x1f,&DAT_01892a30);
LAB_0137c158:
  uVar10 = FUN_013c723c(pppuVar19);
LAB_0137c15c:
  *param_1 = 2;
  param_1[1] = uVar10;
  return;
}

