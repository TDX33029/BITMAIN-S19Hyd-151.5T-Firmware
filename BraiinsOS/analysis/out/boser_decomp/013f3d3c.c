// FUN_013f3d3c @ 013f3d3c size=2180 calls_out=21 calls_in=1
// strings: 

void FUN_013f3d3c(int *param_1,char *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  char cVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  char *pcVar16;
  undefined4 uVar17;
  int *piVar18;
  undefined4 uVar19;
  uint uVar20;
  bool bVar21;
  undefined8 uVar22;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_4c;
  char local_4a;
  int *local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_2c;
  undefined1 local_28;
  
  iVar13 = param_1[4];
  if (*param_1 == 0) {
    uVar3 = FUN_01403928(param_1[1]);
  }
  else {
    uVar3 = 0;
    if (*param_1 == 1) {
      uVar3 = FUN_01407524();
    }
  }
  iVar8 = param_1[5];
  if (iVar8 != 0) {
    if ((*(char *)(iVar8 + 0x28) != '\x01') ||
       (DataMemoryBarrier(0xb), *(char *)(iVar8 + 0x29) == '\0')) {
      if (*(char *)(iVar8 + 0x2b) == '\0') goto LAB_013f3df4;
      if (uVar3 < 0x40) {
        uVar4 = *(uint *)(iVar8 + 0x18);
        uVar7 = *(uint *)(iVar8 + 0x1c);
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        if ((uVar4 & uVar7) == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d05e30);
        }
        uVar3 = param_4 - (uVar7 + (uVar4 > param_3));
        if (param_4 <= uVar7 && (uint)(uVar4 <= param_3) <= param_4 - uVar7) goto LAB_013f3df4;
      }
    }
    uVar3 = FUN_014080b0(iVar8 + 8,iVar13 + 8);
  }
LAB_013f3df4:
  piVar18 = (int *)param_1[1];
  if (*param_1 == 2) {
    FUN_01656cb0(&local_48,piVar18 + 2);
    if (local_48 != (int *)0x0) {
      local_28 = (undefined1)local_40;
      local_2c = local_44;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01cf3758,&DAT_01cf3738);
    }
    uVar3 = (uint)local_40 & 0xff;
    iVar13 = *(int *)(local_44 + 0x28);
    if (iVar13 != 0) {
      uVar22 = thunk_FUN_01bee35a(0,0x280);
      piVar18 = (int *)((int)uVar22 + (int)((ulonglong)uVar22 >> 0x20));
      if ((char)piVar18[2] == '\0') {
        piVar18 = (int *)FUN_0140afe8();
      }
      iVar8 = 0;
      piVar14 = *(int **)(local_44 + 0x24);
      do {
        piVar10 = piVar14 + 3;
        iVar15 = *piVar14;
        if (*(int *)(iVar15 + 8) != *piVar18 || *(int *)(iVar15 + 0xc) != piVar18[1]) {
          piVar9 = (int *)(iVar15 + 0x14);
          if (*piVar9 == 0) {
            DataMemoryBarrier(0xb);
LAB_013f405c:
            bVar21 = (bool)hasExclusiveAccess(piVar9);
            if (!bVar21) goto code_r0x013f4068;
            *piVar9 = piVar14[1];
            DataMemoryBarrier(0xb);
            if (piVar14[2] != 0) {
              DataMemoryBarrier(0xb);
              *(int *)(iVar15 + 0x18) = piVar14[2];
            }
            DataMemoryBarrier(0xb);
            piVar18 = (int *)(*(int *)(iVar15 + 0x10) + 0x18);
            do {
              iVar13 = *piVar18;
              bVar21 = (bool)hasExclusiveAccess(piVar18);
            } while (!bVar21);
            *piVar18 = 1;
            if (iVar13 == -1) {
              FUN_01be6c3c(0xf0,piVar18,0x81,1);
            }
            FUN_0140982c(&local_48,local_44 + 0x20,iVar8,&DAT_01cf3aa8);
            if (local_48 != (int *)0x0) {
              FUN_00a97e8c(local_44,uVar3);
              if (local_40 == (undefined4 *)0x0) {
                if (*param_2 != '\x02') {
                  if (*param_2 == '\0') {
                    FUN_01406bcc(*(undefined4 *)(param_2 + 4));
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0cc(&DAT_01cf3748);
                }
              }
              else {
                uVar19 = *(undefined4 *)(param_2 + 4);
                uVar11 = *(undefined4 *)(param_2 + 8);
                uVar17 = *(undefined4 *)(param_2 + 0xc);
                *local_40 = *(undefined4 *)param_2;
                local_40[1] = uVar19;
                local_40[2] = uVar11;
                local_40[3] = uVar17;
                DataMemoryBarrier(0xb);
                *(undefined1 *)(local_40 + 4) = 1;
              }
              DataMemoryBarrier(0xb);
              do {
                iVar13 = *local_48;
                bVar21 = (bool)hasExclusiveAccess(local_48);
              } while (!bVar21);
              *local_48 = iVar13 + -1;
              if (iVar13 == 1) {
                DataMemoryBarrier(0xb);
                FUN_01319d44(local_48);
                return;
              }
              return;
            }
            break;
          }
LAB_013f4074:
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        iVar8 = iVar8 + 1;
        piVar14 = piVar10;
      } while (piVar10 != *(int **)(local_44 + 0x24) + iVar13 * 3);
    }
    uVar19 = *(undefined4 *)(param_2 + 4);
    local_58 = *(undefined4 *)(param_2 + 8);
    local_54 = *(undefined4 *)(param_2 + 0xc);
    local_4c = *(undefined2 *)(param_2 + 1);
    cVar12 = *param_2;
    local_4a = param_2[3];
    piVar18 = (int *)(uint)*(byte *)(local_44 + 0x38);
    FUN_00a97e8c(local_44,uVar3);
    if (piVar18 == (int *)0x0) {
LAB_013f43c8:
      if (cVar12 == '\0') {
        FUN_01406bcc(uVar19);
        return;
      }
      return;
    }
  }
  else {
    if (*param_1 == 1) {
      uVar4 = piVar18[8];
      DataMemoryBarrier(0xb);
      iVar13 = piVar18[9];
      DataMemoryBarrier(0xb);
      if ((uVar4 & 1) == 0) {
        piVar14 = piVar18 + 9;
        puVar5 = (uint *)(piVar18 + 8);
        uVar7 = 0;
        iVar8 = 0;
        do {
          uVar20 = (uVar4 & 0x3f) >> 1;
          if (uVar20 == 0x1f) {
            if (uVar7 < 7) {
              uVar3 = 1;
              do {
                uVar4 = uVar3 >> (uVar7 & 0xff);
                uVar3 = uVar3 + 1;
                HintYield();
              } while (uVar4 == 0);
              uVar7 = uVar7 + 1;
            }
            else {
              uVar3 = FUN_01bea67c(uVar3);
              if (uVar7 < 0xb) {
                uVar7 = uVar7 + 1;
              }
            }
LAB_013f3e70:
            DataMemoryBarrier(0xb);
            iVar13 = *piVar14;
            DataMemoryBarrier(0xb);
            uVar4 = *puVar5;
          }
          else {
            if (uVar20 == 0x1e && iVar8 == 0) {
              iVar8 = thunk_FUN_01be5118(0x2f0);
              if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0066439c(8,0x2f0);
              }
              FUN_01bed93e(iVar8,0,0x2ec);
            }
            if (iVar13 == 0) {
              iVar13 = thunk_FUN_01be5118(0x2f0);
              if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0066439c(8,0x2f0);
              }
              FUN_01bed93e(iVar13,0,0x2ec);
              if (*piVar14 == 0) {
                DataMemoryBarrier(0xb);
                do {
                  bVar21 = (bool)hasExclusiveAccess(piVar14);
                  if (bVar21) {
                    *piVar14 = iVar13;
                    bVar21 = true;
                    goto LAB_013f3f14;
                  }
                } while (*piVar14 == 0);
              }
              bVar21 = false;
              ClearExclusiveLocal();
LAB_013f3f14:
              if (!bVar21) {
                bVar21 = iVar8 != 0;
                uVar3 = 0;
                iVar8 = iVar13;
                if (bVar21) {
                  uVar3 = thunk_FUN_01be4678();
                }
                goto LAB_013f3e70;
              }
              DataMemoryBarrier(0xb);
              piVar18[1] = iVar13;
            }
            uVar3 = *puVar5;
            if (uVar3 == uVar4) {
              DataMemoryBarrier(0xb);
              bVar6 = hasExclusiveAccess(puVar5);
              if ((bool)bVar6) {
                *puVar5 = uVar4 + 2;
              }
            }
            else {
              bVar6 = 0;
              ClearExclusiveLocal();
            }
            DataMemoryBarrier(0xb);
            if ((bool)(bVar6 & 1)) {
              if (uVar20 == 0x1e) {
                if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0cc(&DAT_01cf3ad8);
                }
                DataMemoryBarrier(0xb);
                *piVar14 = iVar8;
                DataMemoryBarrier(0xb);
                do {
                  bVar21 = (bool)hasExclusiveAccess(puVar5);
                } while (!bVar21);
                *puVar5 = *puVar5 + 2;
                DataMemoryBarrier(0xb);
                *(int *)(iVar13 + 0x2e8) = iVar8;
                uVar20 = 0x1e;
                cVar12 = *param_2;
                goto LAB_013f4260;
              }
              goto LAB_013f423c;
            }
            iVar13 = *piVar14;
            uVar20 = 1;
            uVar4 = uVar7;
            if (5 < uVar7) {
              uVar4 = 6;
            }
            DataMemoryBarrier(0xb);
            do {
              uVar1 = uVar20 >> (uVar4 & 0xff);
              uVar20 = uVar20 + 1;
              HintYield();
            } while (uVar1 == 0);
            uVar4 = uVar3;
            if (uVar7 < 7) {
              uVar7 = uVar7 + 1;
            }
          }
        } while ((uVar4 & 1) == 0);
        uVar20 = 0;
        iVar13 = 0;
LAB_013f423c:
        if (iVar8 != 0) {
          thunk_FUN_01be4678(iVar8);
        }
        cVar12 = *param_2;
        if (iVar13 != 0) {
LAB_013f4260:
          pcVar16 = (char *)(iVar13 + uVar20 * 0x18);
          *pcVar16 = cVar12;
          FUN_01bed4e2(pcVar16 + 1,param_2 + 1,0xf);
          puVar5 = (uint *)(pcVar16 + 0x10);
          DataMemoryBarrier(0xb);
          do {
            bVar21 = (bool)hasExclusiveAccess(puVar5);
          } while (!bVar21);
          *puVar5 = *puVar5 | 1;
          FUN_0140757c(piVar18 + 0x10);
          return;
        }
      }
      else {
        cVar12 = *param_2;
      }
      if (cVar12 == '\x02') {
        return;
      }
      uVar19 = *(undefined4 *)(param_2 + 4);
      local_58 = *(undefined4 *)(param_2 + 8);
      local_54 = *(undefined4 *)(param_2 + 0xc);
      local_4c = *(undefined2 *)(param_2 + 1);
      local_4a = param_2[3];
    }
    else {
      uVar3 = piVar18[0x12];
      if ((uVar3 & piVar18[8]) == 0) {
        puVar5 = (uint *)(piVar18 + 8);
        uVar7 = 0;
        uVar4 = piVar18[8];
        do {
          uVar3 = uVar3 - 1 & uVar4;
          pcVar16 = (char *)(piVar18[0x25] + uVar3 * 0x18);
          DataMemoryBarrier(0xb);
          if (uVar4 == *(uint *)(pcVar16 + 0x10)) {
            if (uVar3 + 1 < (uint)piVar18[0x10]) {
              uVar3 = uVar4 + 1;
            }
            else {
              uVar3 = piVar18[0x11] + (uVar4 & -piVar18[0x11]);
            }
            uVar20 = *puVar5;
            if (uVar20 == uVar4) {
              DataMemoryBarrier(0xb);
              bVar2 = (bool)hasExclusiveAccess(puVar5);
              if (bVar2) {
                *puVar5 = uVar3;
              }
              bVar21 = false;
              if (bVar2) {
                DataMemoryBarrier(0xb);
                bVar21 = true;
              }
            }
            else {
              bVar21 = false;
              ClearExclusiveLocal();
            }
            if (bVar21) {
              *pcVar16 = *param_2;
              FUN_01bed4e2(pcVar16 + 1,param_2 + 1,0xf);
              DataMemoryBarrier(0xb);
              *(uint *)(pcVar16 + 0x10) = uVar4 + 1;
              FUN_01403998(piVar18 + 0x1c);
              return;
            }
            uVar3 = 6;
            if (uVar7 < 6) {
              uVar3 = uVar7;
            }
            uVar4 = 1;
            do {
              uVar1 = uVar4 >> (uVar3 & 0xff);
              uVar4 = uVar4 + 1;
              HintYield();
            } while (uVar1 == 0);
LAB_013f41d8:
            if (uVar7 < 7) {
              uVar7 = uVar7 + 1;
            }
          }
          else {
            if (piVar18[0x11] + *(uint *)(pcVar16 + 0x10) == uVar4 + 1) {
              DataMemoryBarrier(0xb);
              if (piVar18[0x11] + *piVar18 != uVar4) {
                uVar3 = 6;
                if (uVar7 < 6) {
                  uVar3 = uVar7;
                }
                uVar4 = 1;
                do {
                  uVar20 = uVar4 >> (uVar3 & 0xff);
                  uVar4 = uVar4 + 1;
                  HintYield();
                } while (uVar20 == 0);
                uVar20 = *puVar5;
                goto LAB_013f41d8;
              }
              uVar19 = *(undefined4 *)(param_2 + 4);
              cVar12 = *param_2;
              goto LAB_013f43c8;
            }
            if (uVar7 < 7) {
              uVar3 = 1;
              do {
                uVar4 = uVar3 >> (uVar7 & 0xff);
                uVar3 = uVar3 + 1;
                HintYield();
              } while (uVar4 == 0);
              uVar7 = uVar7 + 1;
            }
            else {
              FUN_01bea67c();
              if (uVar7 < 0xb) {
                uVar7 = uVar7 + 1;
              }
            }
            uVar20 = *puVar5;
          }
          uVar3 = piVar18[0x12];
          uVar4 = uVar20;
        } while ((uVar3 & uVar20) == 0);
      }
      cVar12 = *param_2;
      if (cVar12 == '\x02') {
        return;
      }
      local_4a = param_2[3];
      local_4c = *(undefined2 *)(param_2 + 1);
      uVar19 = *(undefined4 *)(param_2 + 4);
      local_58 = *(undefined4 *)(param_2 + 8);
      local_54 = *(undefined4 *)(param_2 + 0xc);
    }
    piVar18 = (int *)0x1;
  }
  local_34 = local_54;
  local_38 = local_58;
  local_40 = (undefined4 *)CONCAT13(local_4a,CONCAT21(local_4c,cVar12));
  local_44 = 0;
  local_48 = piVar18;
  local_3c = uVar19;
                    /* WARNING: Subroutine does not return */
  FUN_013073dc(&DAT_00475c90,0x19,&local_48,&DAT_01cf34d0,&DAT_01cf34e0);
code_r0x013f4068:
  if (*piVar9 != 0) goto LAB_013f4074;
  goto LAB_013f405c;
}

