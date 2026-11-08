// FUN_0106ff20 @ 0106ff20 size=2864 calls_out=19 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x01070804) */

void FUN_0106ff20(int *param_1,char *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  byte bVar11;
  uint uVar12;
  undefined4 uVar13;
  char cVar14;
  undefined4 uVar15;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  int *piVar19;
  char *pcVar20;
  int *piVar21;
  int *piVar22;
  undefined4 *puVar23;
  int *piVar24;
  undefined1 *puVar25;
  bool bVar26;
  undefined8 uVar27;
  int *local_60;
  undefined4 local_5c;
  undefined2 local_54;
  char local_52;
  int *local_50;
  undefined4 local_4c;
  char local_48;
  undefined2 local_47;
  char local_45;
  undefined4 local_44;
  int *local_40;
  undefined4 local_3c;
  int *local_38;
  undefined4 local_34;
  undefined2 local_2c;
  char local_2a;
  undefined2 local_28;
  char local_26;
  
  puVar16 = (uint *)param_1[1];
  puVar25 = (undefined1 *)0x0;
  if (*param_1 == 0) {
    do {
      uVar3 = puVar16[8];
      DataMemoryBarrier(0xb);
      DataMemoryBarrier(0xb);
      DataMemoryBarrier(0xb);
    } while (puVar16[8] != uVar3);
    uVar4 = puVar16[0x12] - 1;
    piVar5 = (int *)(uVar4 & uVar3);
    piVar24 = (int *)(uVar4 & *puVar16);
    if (piVar24 < piVar5) {
      puVar25 = (undefined1 *)((int)piVar5 - (int)piVar24);
      iVar18 = param_1[5];
    }
    else {
      if (piVar5 < piVar24) {
        piVar5 = (int *)((int)piVar5 - (int)piVar24);
        puVar25 = (undefined1 *)((int)piVar5 + puVar16[0x10]);
        goto LAB_01070018;
      }
      piVar5 = (int *)(uVar3 & ~puVar16[0x12]);
      if (piVar5 != (int *)*puVar16) {
        puVar25 = (undefined1 *)puVar16[0x10];
      }
      iVar18 = param_1[5];
    }
  }
  else {
    piVar5 = param_1;
    if (*param_1 == 1) {
      do {
        uVar3 = puVar16[8];
        DataMemoryBarrier(0xb);
        DataMemoryBarrier(0xb);
        DataMemoryBarrier(0xb);
      } while (puVar16[8] != uVar3);
      uVar17 = uVar3 & 0xfffffffe;
      uVar4 = *puVar16 & 0xfffffffe;
      if ((~uVar3 & 0x3e) == 0) {
        uVar17 = uVar17 + 2;
      }
      if ((~*puVar16 & 0x3e) == 0) {
        uVar4 = uVar4 + 2;
      }
      uVar17 = uVar17 - (uVar4 & 0xffffffc1);
      piVar5 = (int *)(((uVar4 & 0x3f) >> 1) + (uVar17 >> 6));
      puVar25 = (undefined1 *)((uVar17 >> 1) - (int)piVar5);
      iVar18 = param_1[5];
    }
    else {
LAB_01070018:
      iVar18 = param_1[5];
    }
  }
  if (iVar18 != 0) {
    if ((*(char *)(iVar18 + 0x28) != '\x01') ||
       (DataMemoryBarrier(0xb), *(char *)(iVar18 + 0x29) == '\0')) {
      piVar5 = (int *)0x0;
      if (*(char *)(iVar18 + 0x2b) == '\0') goto LAB_01070088;
      if (puVar25 < (undefined1 *)0x40) {
        uVar3 = *(uint *)(iVar18 + 0x18);
        uVar4 = *(uint *)(iVar18 + 0x1c);
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        if ((uVar3 & uVar4) == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_0188b4b8);
        }
        bVar26 = uVar3 <= param_3;
        param_3 = param_3 - uVar3;
        piVar5 = (int *)(param_4 - (uVar4 + !bVar26));
        if (param_4 <= uVar4 && (uint)bVar26 <= param_4 - uVar4) goto LAB_01070088;
      }
    }
    piVar5 = (int *)FUN_0109d5dc(iVar18 + 8,param_1[4] + 8,param_3);
  }
LAB_01070088:
  piVar24 = (int *)param_1[1];
  if (*param_1 == 2) {
    piVar22 = piVar24 + 2;
    do {
      if (*piVar22 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar22);
        goto LAB_0107028c;
      }
      bVar26 = (bool)hasExclusiveAccess(piVar22);
    } while (!bVar26);
    *piVar22 = 1;
    DataMemoryBarrier(0xb);
LAB_0107028c:
    uVar3 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar14 = (char)piVar24[3];
    }
    else {
      uVar3 = FUN_015bf3f8();
      uVar3 = uVar3 ^ 1;
      cVar14 = (char)piVar24[3];
    }
    if (cVar14 != '\0') {
      uVar4 = (uint)local_4c >> 8;
      local_4c = CONCAT31((int3)uVar4,(char)uVar3);
      local_50 = piVar22;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_50,&DAT_01883e40,&DAT_018ae1d0);
    }
    iVar18 = piVar24[0xc];
    if (iVar18 != 0) {
      uVar27 = thunk_FUN_016de0ee(0,0x288);
      piVar5 = (int *)((int)uVar27 + (int)((ulonglong)uVar27 >> 0x20));
      if ((char)piVar5[2] == '\0') {
        piVar5 = (int *)FUN_009e3710();
      }
      uVar4 = 0;
      piVar19 = (int *)piVar24[0xb];
      do {
        piVar21 = piVar19 + 3;
        iVar7 = *piVar19;
        if (*(int *)(iVar7 + 8) != *piVar5 || *(int *)(iVar7 + 0xc) != piVar5[1]) {
          piVar8 = (int *)(iVar7 + 0x14);
          if (*piVar8 == 0) {
            DataMemoryBarrier(0xb);
            do {
              bVar26 = (bool)hasExclusiveAccess(piVar8);
              if (bVar26) {
                *piVar8 = piVar19[1];
                DataMemoryBarrier(0xb);
                if (piVar19[2] != 0) {
                  DataMemoryBarrier(0xb);
                  *(int *)(iVar7 + 0x18) = piVar19[2];
                }
                DataMemoryBarrier(0xb);
                piVar5 = (int *)(*(int *)(iVar7 + 0x10) + 0x18);
                do {
                  iVar18 = *piVar5;
                  bVar26 = (bool)hasExclusiveAccess(piVar5);
                } while (!bVar26);
                *piVar5 = 1;
                if (iVar18 == -1) {
                  FUN_016d6968(0xf0,piVar5,0x81,1);
                }
                uVar17 = piVar24[0xc];
                if (uVar4 < uVar17) {
                  puVar9 = (undefined4 *)(piVar24[0xb] + uVar4 * 0xc);
                  piVar5 = (int *)*puVar9;
                  puVar23 = (undefined4 *)puVar9[2];
                  FUN_016dd52c(puVar9,puVar9 + 3,(uVar17 + ~uVar4) * 0xc);
                  uVar17 = uVar17 - 1;
                  piVar24[0xc] = uVar17;
                  if (piVar5 != (int *)0x0) {
                    if (((uVar3 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
                       (iVar18 = FUN_015bf3f8(), iVar18 == 0)) {
                      *(undefined1 *)(piVar24 + 3) = 1;
                    }
                    DataMemoryBarrier(0xb);
                    do {
                      iVar18 = *piVar22;
                      bVar26 = (bool)hasExclusiveAccess(piVar22);
                    } while (!bVar26);
                    *piVar22 = 0;
                    if (iVar18 == 2) {
                      FUN_016d6968(0xf0,piVar22,0x81,1);
                    }
                    if (puVar23 == (undefined4 *)0x0) {
                      if (*param_2 != '\x02') {
                        if (*param_2 == '\0') {
                          FUN_0109d7e0(*(undefined4 *)(param_2 + 4));
                        }
                    /* WARNING: Subroutine does not return */
                        FUN_00faa444(&DAT_018ae1e0);
                      }
                    }
                    else {
                      uVar10 = *(undefined4 *)(param_2 + 4);
                      uVar13 = *(undefined4 *)(param_2 + 8);
                      uVar15 = *(undefined4 *)(param_2 + 0xc);
                      *puVar23 = *(undefined4 *)param_2;
                      puVar23[1] = uVar10;
                      puVar23[2] = uVar13;
                      puVar23[3] = uVar15;
                      DataMemoryBarrier(0xb);
                      *(undefined1 *)(puVar23 + 4) = 1;
                    }
                    DataMemoryBarrier(0xb);
                    do {
                      iVar18 = *piVar5;
                      bVar26 = (bool)hasExclusiveAccess(piVar5);
                    } while (!bVar26);
                    *piVar5 = iVar18 + -1;
                    if (iVar18 == 1) {
                      DataMemoryBarrier(0xb);
                      FUN_00fbaa00(piVar5);
                      return;
                    }
                    return;
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_00602938(uVar4,uVar17,&DAT_018ae220);
              }
            } while (*piVar8 == 0);
          }
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        uVar4 = uVar4 + 1;
        piVar19 = piVar21;
      } while (piVar21 != (int *)piVar24[0xb] + iVar18 * 3);
    }
    cVar14 = *param_2;
    piVar5 = (int *)(uint)*(byte *)(piVar24 + 0x10);
    uVar10 = *(undefined4 *)(param_2 + 4);
    local_60 = *(int **)(param_2 + 8);
    local_5c = *(undefined4 *)(param_2 + 0xc);
    local_54 = *(undefined2 *)(param_2 + 1);
    local_52 = param_2[3];
    if (((uVar3 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar18 = FUN_015bf3f8(), iVar18 == 0)) {
      *(undefined1 *)(piVar24 + 3) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar18 = *piVar22;
      bVar26 = (bool)hasExclusiveAccess(piVar22);
    } while (!bVar26);
    *piVar22 = 0;
    if (iVar18 == 2) {
      FUN_016d6968(0xf0,piVar22,0x81,1);
    }
    if (piVar5 == (int *)0x0) {
LAB_010703f4:
      if (cVar14 == '\0') {
        FUN_0109d7e0(uVar10);
        return;
      }
      return;
    }
  }
  else {
    if (*param_1 == 1) {
      DataMemoryBarrier(0xb);
      iVar18 = piVar24[9];
      DataMemoryBarrier(0xb);
      if (((uint)piVar24[8] & 1) == 0) {
        piVar19 = piVar24 + 9;
        piVar21 = piVar24 + 8;
        uVar3 = 0;
        iVar7 = 0;
        piVar22 = (int *)piVar24[8];
        do {
          while (uVar4 = ((uint)piVar22 & 0x3f) >> 1, uVar4 == 0x1f) {
            if (uVar3 < 7) {
              piVar5 = (int *)&DAT_00000001;
              do {
                uVar4 = (uint)piVar5 >> (uVar3 & 0xff);
                piVar5 = (int *)((int)piVar5 + 1);
                HintYield();
              } while (uVar4 == 0);
              uVar3 = uVar3 + 1;
            }
            else {
              piVar5 = (int *)FUN_016da3a8(piVar5);
              if (uVar3 < 0xb) {
                uVar3 = uVar3 + 1;
              }
            }
LAB_01070104:
            DataMemoryBarrier(0xb);
            iVar18 = *piVar19;
            DataMemoryBarrier(0xb);
            iVar6 = iVar7;
            piVar22 = (int *)*piVar21;
            if (((uint)*piVar21 & 1) != 0) goto LAB_01070520;
          }
          iVar6 = iVar7;
          if (uVar4 == 0x1e && iVar7 == 0) {
            iVar6 = thunk_FUN_016d4a50(0x2f0);
            if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(8,0x2f0);
            }
            FUN_016dd606(iVar6,0,0x2ec);
          }
          if (iVar18 == 0) {
            iVar7 = thunk_FUN_016d4a50(0x2f0);
            if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(8,0x2f0);
            }
            FUN_016dd606(iVar7,0,0x2ec);
            if (*piVar19 == 0) {
              DataMemoryBarrier(0xb);
              do {
                bVar26 = (bool)hasExclusiveAccess(piVar19);
                if (bVar26) {
                  *piVar19 = iVar7;
                  DataMemoryBarrier(0xb);
                  piVar24[1] = iVar7;
                  piVar5 = (int *)*piVar21;
                  iVar18 = iVar7;
                  goto joined_r0x010701f0;
                }
              } while (*piVar19 == 0);
            }
            ClearExclusiveLocal();
            piVar5 = (int *)0x0;
            if (iVar6 != 0) {
              piVar5 = (int *)thunk_FUN_016d3fb4();
            }
            goto LAB_01070104;
          }
          piVar5 = (int *)*piVar21;
joined_r0x010701f0:
          if (piVar5 == piVar22) {
            DataMemoryBarrier(0xb);
            bVar11 = hasExclusiveAccess(piVar21);
            if ((bool)bVar11) {
              *piVar21 = (int)((int)piVar22 + 2);
            }
          }
          else {
            bVar11 = 0;
            ClearExclusiveLocal();
          }
          DataMemoryBarrier(0xb);
          if ((bool)(bVar11 & 1)) {
            if (uVar4 == 0x1e) {
              if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa444(&DAT_018ae240);
              }
              DataMemoryBarrier(0xb);
              *piVar19 = iVar6;
              DataMemoryBarrier(0xb);
              do {
                bVar26 = (bool)hasExclusiveAccess(piVar21);
              } while (!bVar26);
              *piVar21 = *piVar21 + 2;
              DataMemoryBarrier(0xb);
              *(int *)(iVar18 + 0x2e8) = iVar6;
              uVar4 = 0x1e;
              uVar10 = *(undefined4 *)(param_2 + 4);
              local_50 = *(int **)(param_2 + 8);
              local_4c = *(undefined4 *)(param_2 + 0xc);
              local_28 = *(undefined2 *)(param_2 + 1);
              cVar14 = *param_2;
              local_26 = param_2[3];
              goto LAB_01070564;
            }
            goto LAB_01070528;
          }
          iVar18 = *piVar19;
          uVar17 = 1;
          uVar4 = uVar3;
          if (5 < uVar3) {
            uVar4 = 6;
          }
          DataMemoryBarrier(0xb);
          do {
            uVar12 = uVar17 >> (uVar4 & 0xff);
            uVar17 = uVar17 + 1;
            HintYield();
          } while (uVar12 == 0);
          if (uVar3 < 7) {
            uVar3 = uVar3 + 1;
          }
          iVar7 = iVar6;
          piVar22 = piVar5;
        } while (((uint)piVar5 & 1) == 0);
LAB_01070520:
        iVar18 = 0;
        uVar4 = 0;
LAB_01070528:
        if (iVar6 != 0) {
          thunk_FUN_016d3fb4(iVar6);
        }
        cVar14 = *param_2;
        uVar10 = *(undefined4 *)(param_2 + 4);
        local_50 = *(int **)(param_2 + 8);
        local_4c = *(undefined4 *)(param_2 + 0xc);
        local_28 = *(undefined2 *)(param_2 + 1);
        local_26 = param_2[3];
        if (iVar18 != 0) {
LAB_01070564:
          pcVar20 = (char *)(iVar18 + uVar4 * 0x18);
          *pcVar20 = cVar14;
          *(undefined2 *)(pcVar20 + 1) = local_28;
          pcVar20[3] = local_26;
          *(undefined4 *)(pcVar20 + 4) = uVar10;
          *(int **)(pcVar20 + 8) = local_50;
          puVar16 = (uint *)(pcVar20 + 0x10);
          *(undefined4 *)(pcVar20 + 0xc) = local_4c;
          DataMemoryBarrier(0xb);
          do {
            bVar26 = (bool)hasExclusiveAccess(puVar16);
          } while (!bVar26);
          *puVar16 = *puVar16 | 1;
          FUN_01075ae4(piVar24 + 0x10);
          return;
        }
      }
      else {
        cVar14 = *param_2;
        uVar10 = *(undefined4 *)(param_2 + 4);
        local_50 = *(int **)(param_2 + 8);
        local_4c = *(undefined4 *)(param_2 + 0xc);
        local_28 = *(undefined2 *)(param_2 + 1);
        local_26 = param_2[3];
      }
      local_34 = local_4c;
      local_38 = local_50;
      local_2a = local_26;
      local_2c = local_28;
      if (cVar14 == '\x02') {
        return;
      }
      local_52 = local_26;
      local_54 = local_28;
    }
    else {
      uVar3 = piVar24[0x12];
      if ((uVar3 & piVar24[8]) == 0) {
        puVar16 = (uint *)(piVar24 + 8);
        uVar17 = 0;
        uVar4 = piVar24[8];
        do {
          uVar3 = uVar3 - 1 & uVar4;
          pcVar20 = (char *)(piVar24[0x25] + uVar3 * 0x18);
          DataMemoryBarrier(0xb);
          if (uVar4 == *(uint *)(pcVar20 + 0x10)) {
            if (uVar3 + 1 < (uint)piVar24[0x10]) {
              uVar3 = uVar4 + 1;
              uVar12 = *puVar16;
              if (uVar12 != uVar4) goto LAB_01070668;
LAB_010706ec:
              DataMemoryBarrier(0xb);
              bVar2 = (bool)hasExclusiveAccess(puVar16);
              if (bVar2) {
                *puVar16 = uVar3;
              }
              bVar26 = false;
              if (bVar2) {
                DataMemoryBarrier(0xb);
                bVar26 = true;
              }
            }
            else {
              uVar3 = piVar24[0x11] + (uVar4 & -piVar24[0x11]);
              uVar12 = *puVar16;
              if (uVar12 == uVar4) goto LAB_010706ec;
LAB_01070668:
              bVar26 = false;
              ClearExclusiveLocal();
            }
            if (bVar26) {
              uVar10 = *(undefined4 *)(param_2 + 1);
              uVar13 = *(undefined4 *)(param_2 + 5);
              cVar14 = *param_2;
              uVar15 = *(undefined4 *)(param_2 + 0xc);
              *(undefined4 *)(pcVar20 + 9) = *(undefined4 *)(param_2 + 9);
              *pcVar20 = cVar14;
              *(undefined4 *)(pcVar20 + 1) = uVar10;
              *(undefined4 *)(pcVar20 + 5) = uVar13;
              *(undefined4 *)(pcVar20 + 0xc) = uVar15;
              DataMemoryBarrier(0xb);
              *(uint *)(pcVar20 + 0x10) = uVar4 + 1;
              FUN_0108b824(piVar24 + 0x1c);
              return;
            }
            uVar3 = 6;
            if (uVar17 < 6) {
              uVar3 = uVar17;
            }
            uVar4 = 1;
            do {
              uVar1 = uVar4 >> (uVar3 & 0xff);
              uVar4 = uVar4 + 1;
              HintYield();
            } while (uVar1 == 0);
            if (uVar17 < 7) {
              uVar17 = uVar17 + 1;
            }
          }
          else if (piVar24[0x11] + *(uint *)(pcVar20 + 0x10) == uVar4 + 1) {
            DataMemoryBarrier(0xb);
            if (piVar24[0x11] + *piVar24 == uVar4) {
              uVar10 = *(undefined4 *)(param_2 + 4);
              cVar14 = *param_2;
              goto LAB_010703f4;
            }
            uVar3 = 6;
            if (uVar17 < 6) {
              uVar3 = uVar17;
            }
            uVar4 = 1;
            do {
              uVar12 = uVar4 >> (uVar3 & 0xff);
              uVar4 = uVar4 + 1;
              HintYield();
            } while (uVar12 == 0);
            uVar12 = *puVar16;
            if (uVar17 < 7) {
              uVar17 = uVar17 + 1;
            }
          }
          else {
            if (uVar17 < 7) {
              uVar3 = 1;
              do {
                uVar4 = uVar3 >> (uVar17 & 0xff);
                uVar3 = uVar3 + 1;
                HintYield();
              } while (uVar4 == 0);
              uVar17 = uVar17 + 1;
            }
            else {
              FUN_016da3a8();
              if (uVar17 < 0xb) {
                uVar17 = uVar17 + 1;
              }
            }
            uVar12 = *puVar16;
          }
          uVar3 = piVar24[0x12];
          uVar4 = uVar12;
        } while ((uVar3 & uVar12) == 0);
      }
      cVar14 = *param_2;
      if (cVar14 == '\x02') {
        return;
      }
      uVar10 = *(undefined4 *)(param_2 + 4);
      local_50 = *(int **)(param_2 + 8);
      local_4c = *(undefined4 *)(param_2 + 0xc);
      local_52 = param_2[3];
      local_54 = *(undefined2 *)(param_2 + 1);
    }
    piVar5 = (int *)0x1;
    local_60 = local_50;
    local_5c = local_4c;
  }
  local_3c = local_5c;
  local_40 = local_60;
  local_47 = local_54;
  local_45 = local_52;
  local_4c = 0;
  local_50 = piVar5;
  local_48 = cVar14;
  local_44 = uVar10;
                    /* WARNING: Subroutine does not return */
  FUN_00fb74f8(&DAT_00384d0a,0x19,&local_50,&DAT_01883ae0,&DAT_01883af0);
}

