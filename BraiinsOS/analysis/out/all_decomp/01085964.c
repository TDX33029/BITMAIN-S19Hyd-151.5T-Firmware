// FUN_01085964 @ 01085964 size=2328 calls_out=19 calls_in=1
// strings: 

void FUN_01085964(uint *param_1,int param_2,int *param_3,uint *param_4,undefined4 param_5)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  byte bVar12;
  int *piVar13;
  int iVar14;
  short *psVar15;
  short sVar16;
  uint uVar17;
  int *piVar18;
  int *piVar19;
  uint *puVar20;
  uint uVar21;
  undefined8 uVar22;
  int *local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  int *local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 local_2c;
  
  if (param_2 == 0) {
    uVar5 = param_3[0x12];
    if ((uVar5 & param_3[8]) == 0) {
      puVar20 = (uint *)(param_3 + 8);
      uVar21 = 0;
      uVar17 = param_3[8];
      do {
        uVar5 = uVar5 - 1 & uVar17;
        psVar15 = (short *)(param_3[0x25] + uVar5 * 0x28);
        DataMemoryBarrier(0xb);
        if (uVar17 == *(uint *)(psVar15 + 0x10)) {
          if (uVar5 + 1 < (uint)param_3[0x10]) {
            uVar5 = uVar17 + 1;
            uVar7 = *puVar20;
            if (uVar7 == uVar17) goto LAB_01086004;
LAB_01085f80:
            bVar3 = false;
            ClearExclusiveLocal();
          }
          else {
            uVar5 = param_3[0x11] + (uVar17 & -param_3[0x11]);
            uVar7 = *puVar20;
            if (uVar7 != uVar17) goto LAB_01085f80;
LAB_01086004:
            DataMemoryBarrier(0xb);
            bVar2 = (bool)hasExclusiveAccess(puVar20);
            if (bVar2) {
              *puVar20 = uVar5;
            }
            bVar3 = false;
            if (bVar2) {
              DataMemoryBarrier(0xb);
              bVar3 = true;
            }
          }
          if (bVar3) {
            *psVar15 = (short)*param_4;
            FUN_016dd1aa(psVar15 + 1,(short *)((int)param_4 + 2),0x1e);
            DataMemoryBarrier(0xb);
            *(uint *)(psVar15 + 0x10) = uVar17 + 1;
            FUN_0108b824(param_3 + 0x1c);
            goto LAB_010860a8;
          }
          uVar5 = 6;
          if (uVar21 < 6) {
            uVar5 = uVar21;
          }
          uVar17 = 1;
          do {
            uVar1 = uVar17 >> (uVar5 & 0xff);
            uVar17 = uVar17 + 1;
            HintYield();
          } while (uVar1 == 0);
          if (uVar21 < 7) {
            uVar21 = uVar21 + 1;
          }
        }
        else if (param_3[0x11] + *(uint *)(psVar15 + 0x10) == uVar17 + 1) {
          DataMemoryBarrier(0xb);
          if (param_3[0x11] + *param_3 == uVar17) {
            uVar5 = param_4[1];
            uVar17 = param_4[2];
            uVar21 = param_4[3];
            param_1[2] = *param_4;
            param_1[3] = uVar5;
            param_1[4] = uVar17;
            param_1[5] = uVar21;
            uVar5 = param_4[5];
            uVar17 = param_4[6];
            uVar21 = param_4[7];
            param_1[6] = param_4[4];
            param_1[7] = uVar5;
            param_1[8] = uVar17;
            param_1[9] = uVar21;
            *param_1 = 0;
            param_1[1] = 0;
            return;
          }
          uVar5 = 6;
          if (uVar21 < 6) {
            uVar5 = uVar21;
          }
          uVar17 = 1;
          do {
            uVar7 = uVar17 >> (uVar5 & 0xff);
            uVar17 = uVar17 + 1;
            HintYield();
          } while (uVar7 == 0);
          uVar7 = *puVar20;
          if (uVar21 < 7) {
            uVar21 = uVar21 + 1;
          }
        }
        else {
          if (uVar21 < 7) {
            uVar5 = 1;
            do {
              uVar17 = uVar5 >> (uVar21 & 0xff);
              uVar5 = uVar5 + 1;
              HintYield();
            } while (uVar17 == 0);
            uVar21 = uVar21 + 1;
          }
          else {
            FUN_016da3a8();
            if (uVar21 < 0xb) {
              uVar21 = uVar21 + 1;
            }
          }
          uVar7 = *puVar20;
        }
        uVar5 = param_3[0x12];
        uVar17 = uVar7;
      } while ((uVar5 & uVar7) == 0);
    }
    uVar5 = *param_4;
    if ((short)uVar5 != 2) {
      FUN_016dd1aa((int)param_1 + 10,(short *)((int)param_4 + 2),0x1e);
      *param_1 = 1;
      param_1[1] = 0;
      *(short *)(param_1 + 2) = (short)uVar5;
      return;
    }
    goto LAB_010860a8;
  }
  if (param_2 != 1) {
    piVar18 = param_3 + 2;
    do {
      if (*piVar18 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar18);
        goto LAB_01085bc0;
      }
      bVar2 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar2);
    *piVar18 = 1;
    DataMemoryBarrier(0xb);
LAB_01085bc0:
    uVar5 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar4 = (char)param_3[3];
    }
    else {
      uVar5 = FUN_015bf3f8();
      uVar5 = uVar5 ^ 1;
      cVar4 = (char)param_3[3];
    }
    if (cVar4 != '\0') {
      uVar17 = (uint)local_44 >> 8;
      local_44 = CONCAT31((int3)uVar17,(char)uVar5);
      local_48 = piVar18;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_48,&DAT_01883e40,&DAT_018ae1d0);
    }
    iVar14 = param_3[0xc];
    if (iVar14 != 0) {
      uVar22 = thunk_FUN_016de0ee(0,0x288);
      piVar9 = (int *)((int)uVar22 + (int)((ulonglong)uVar22 >> 0x20));
      if ((char)piVar9[2] == '\0') {
        piVar9 = (int *)FUN_009e3710();
      }
      uVar17 = 0;
      piVar19 = (int *)param_3[0xb];
      do {
        piVar13 = piVar19 + 3;
        iVar8 = *piVar19;
        if (*(int *)(iVar8 + 8) != *piVar9 || *(int *)(iVar8 + 0xc) != piVar9[1]) {
          piVar10 = (int *)(iVar8 + 0x14);
          if (*piVar10 == 0) {
            DataMemoryBarrier(0xb);
            do {
              bVar2 = (bool)hasExclusiveAccess(piVar10);
              if (bVar2) {
                *piVar10 = piVar19[1];
                DataMemoryBarrier(0xb);
                if (piVar19[2] != 0) {
                  DataMemoryBarrier(0xb);
                  *(int *)(iVar8 + 0x18) = piVar19[2];
                }
                DataMemoryBarrier(0xb);
                piVar9 = (int *)(*(int *)(iVar8 + 0x10) + 0x18);
                do {
                  iVar14 = *piVar9;
                  bVar2 = (bool)hasExclusiveAccess(piVar9);
                } while (!bVar2);
                *piVar9 = 1;
                if (iVar14 == -1) {
                  FUN_016d6968(0xf0,piVar9,0x81,1);
                }
                uVar21 = param_3[0xc];
                if (uVar17 < uVar21) {
                  puVar11 = (undefined4 *)(param_3[0xb] + uVar17 * 0xc);
                  piVar9 = (int *)*puVar11;
                  puVar20 = (uint *)puVar11[2];
                  FUN_016dd52c(puVar11,puVar11 + 3,(uVar21 + ~uVar17) * 0xc);
                  uVar21 = uVar21 - 1;
                  param_3[0xc] = uVar21;
                  if (piVar9 != (int *)0x0) {
                    if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
                       (iVar14 = FUN_015bf3f8(), iVar14 == 0)) {
                      *(undefined1 *)(param_3 + 3) = 1;
                    }
                    DataMemoryBarrier(0xb);
                    do {
                      iVar14 = *piVar18;
                      bVar2 = (bool)hasExclusiveAccess(piVar18);
                    } while (!bVar2);
                    *piVar18 = 0;
                    if (iVar14 == 2) {
                      FUN_016d6968(0xf0,piVar18,0x81,1);
                    }
                    if (puVar20 == (uint *)0x0) {
                      if ((short)*param_4 != 2) {
                        FUN_01070c5c(param_4);
                    /* WARNING: Subroutine does not return */
                        FUN_00faa444(&DAT_018ae1e0);
                      }
                    }
                    else {
                      uVar5 = param_4[1];
                      uVar17 = param_4[2];
                      uVar21 = param_4[3];
                      *puVar20 = *param_4;
                      puVar20[1] = uVar5;
                      puVar20[2] = uVar17;
                      puVar20[3] = uVar21;
                      uVar5 = param_4[5];
                      uVar17 = param_4[6];
                      uVar21 = param_4[7];
                      puVar20[4] = param_4[4];
                      puVar20[5] = uVar5;
                      puVar20[6] = uVar17;
                      puVar20[7] = uVar21;
                      DataMemoryBarrier(0xb);
                      *(undefined1 *)(puVar20 + 8) = 1;
                    }
                    *param_1 = 2;
                    param_1[1] = 0;
                    DataMemoryBarrier(0xb);
                    do {
                      iVar14 = *piVar9;
                      bVar2 = (bool)hasExclusiveAccess(piVar9);
                    } while (!bVar2);
                    *piVar9 = iVar14 + -1;
                    if (iVar14 == 1) {
                      DataMemoryBarrier(0xb);
                      FUN_00fbaa00(piVar9);
                      return;
                    }
                    return;
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_00602938(uVar17,uVar21,&DAT_018ae220);
              }
            } while (*piVar10 == 0);
          }
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        uVar17 = uVar17 + 1;
        piVar19 = piVar13;
      } while (piVar13 != (int *)param_3[0xb] + iVar14 * 3);
    }
    bVar12 = *(byte *)(param_3 + 0x10);
    uVar17 = param_4[1];
    uVar21 = param_4[2];
    uVar7 = param_4[3];
    param_1[2] = *param_4;
    param_1[3] = uVar17;
    param_1[4] = uVar21;
    param_1[5] = uVar7;
    uVar17 = param_4[5];
    uVar21 = param_4[6];
    uVar7 = param_4[7];
    param_1[6] = param_4[4];
    param_1[7] = uVar17;
    param_1[8] = uVar21;
    param_1[9] = uVar7;
    *param_1 = (uint)bVar12;
    param_1[1] = 0;
    if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar14 = FUN_015bf3f8(), iVar14 == 0)) {
      *(undefined1 *)(param_3 + 3) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar18;
      bVar2 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar2);
    *piVar18 = 0;
    if (iVar14 == 2) {
      software_interrupt(0);
      FUN_016d3496(piVar18,0x81,1,param_5);
      return;
    }
    return;
  }
  DataMemoryBarrier(0xb);
  iVar14 = param_3[9];
  DataMemoryBarrier(0xb);
  if ((param_3[8] & 1U) == 0) {
    piVar18 = param_3 + 9;
    puVar20 = (uint *)(param_3 + 8);
    uVar17 = 0;
    iVar8 = 0;
    uVar5 = param_3[8];
LAB_010859e0:
    do {
      uVar21 = (uVar5 & 0x3f) >> 1;
      if (uVar21 != 0x1f) {
        iVar6 = iVar8;
        if (uVar21 == 0x1e && iVar8 == 0) {
          iVar6 = thunk_FUN_016d4a50(0x4e0);
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x4e0);
          }
          FUN_016dd606(iVar6,0,0x4dc);
        }
        if (iVar14 == 0) {
          iVar8 = thunk_FUN_016d4a50(0x4e0);
          if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x4e0);
          }
          FUN_016dd606(iVar8,0,0x4dc);
          if (*piVar18 == 0) {
            DataMemoryBarrier(0xb);
            do {
              bVar2 = (bool)hasExclusiveAccess(piVar18);
              if (bVar2) {
                *piVar18 = iVar8;
                DataMemoryBarrier(0xb);
                param_3[1] = iVar8;
                uVar7 = *puVar20;
                iVar14 = iVar8;
                goto joined_r0x01085ae0;
              }
            } while (*piVar18 == 0);
          }
          ClearExclusiveLocal();
          if (iVar6 != 0) {
            thunk_FUN_016d3fb4();
          }
          goto LAB_010859c8;
        }
        uVar7 = *puVar20;
joined_r0x01085ae0:
        if (uVar7 == uVar5) {
          DataMemoryBarrier(0xb);
          bVar12 = hasExclusiveAccess(puVar20);
          if ((bool)bVar12) {
            *puVar20 = uVar5 + 2;
          }
        }
        else {
          bVar12 = 0;
          ClearExclusiveLocal();
        }
        DataMemoryBarrier(0xb);
        if (!(bool)(bVar12 & 1)) goto code_r0x01085af8;
        if (uVar21 == 0x1e) {
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018ae240);
          }
          DataMemoryBarrier(0xb);
          *piVar18 = iVar6;
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(puVar20);
          } while (!bVar2);
          *puVar20 = *puVar20 + 2;
          DataMemoryBarrier(0xb);
          *(int *)(iVar14 + 0x4d8) = iVar6;
          uVar21 = 0x1e;
          sVar16 = (short)*param_4;
          FUN_016dd1aa(&local_48,(short *)((int)param_4 + 2),0x1e);
          goto LAB_01085e7c;
        }
        goto LAB_01085e48;
      }
      if (uVar17 < 7) {
        uVar5 = 1;
        do {
          uVar21 = uVar5 >> (uVar17 & 0xff);
          uVar5 = uVar5 + 1;
          HintYield();
        } while (uVar21 == 0);
        uVar17 = uVar17 + 1;
      }
      else {
        FUN_016da3a8();
        if (uVar17 < 0xb) {
          uVar17 = uVar17 + 1;
        }
      }
LAB_010859c8:
      DataMemoryBarrier(0xb);
      iVar14 = *piVar18;
      DataMemoryBarrier(0xb);
      iVar6 = iVar8;
      uVar5 = *puVar20;
    } while ((*puVar20 & 1) == 0);
    goto LAB_01085e40;
  }
  sVar16 = (short)*param_4;
  FUN_016dd1aa(&local_48,(short *)((int)param_4 + 2),0x1e);
  goto LAB_01085ec0;
code_r0x01085af8:
  iVar14 = *piVar18;
  uVar21 = 1;
  uVar5 = uVar17;
  if (5 < uVar17) {
    uVar5 = 6;
  }
  DataMemoryBarrier(0xb);
  do {
    uVar1 = uVar21 >> (uVar5 & 0xff);
    uVar21 = uVar21 + 1;
    HintYield();
  } while (uVar1 == 0);
  if (uVar17 < 7) {
    uVar17 = uVar17 + 1;
  }
  iVar8 = iVar6;
  uVar5 = uVar7;
  if ((uVar7 & 1) != 0) goto LAB_01085e40;
  goto LAB_010859e0;
LAB_01085e40:
  iVar14 = 0;
  uVar21 = 0;
LAB_01085e48:
  if (iVar6 != 0) {
    thunk_FUN_016d3fb4(iVar6);
  }
  sVar16 = (short)*param_4;
  FUN_016dd1aa(&local_48,(short *)((int)param_4 + 2),0x1e);
  if (iVar14 != 0) {
LAB_01085e7c:
    psVar15 = (short *)(iVar14 + uVar21 * 0x28);
    *psVar15 = sVar16;
    FUN_016dd1aa(psVar15 + 1,&local_48,0x1e);
    puVar20 = (uint *)(psVar15 + 0x10);
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(puVar20);
    } while (!bVar2);
    *puVar20 = *puVar20 | 1;
    FUN_01075ae4(param_3 + 0x10);
    goto LAB_010860a8;
  }
LAB_01085ec0:
  local_68 = local_48;
  uStack_64 = local_44;
  uStack_60 = uStack_40;
  local_5c = local_3c;
  uStack_58 = uStack_38;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  local_4c = local_2c;
  if (sVar16 != 2) {
    FUN_016dd1aa((int)param_1 + 10,&local_68,0x1e);
    *param_1 = 1;
    param_1[1] = 0;
    *(short *)(param_1 + 2) = sVar16;
    return;
  }
LAB_010860a8:
  *param_1 = 2;
  param_1[1] = 0;
  return;
}

