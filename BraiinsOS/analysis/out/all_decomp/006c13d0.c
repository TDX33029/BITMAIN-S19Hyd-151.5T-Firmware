// FUN_006c13d0 @ 006c13d0 size=1520 calls_out=12 calls_in=1
// strings: assertion failed: (*tail).value.is_none() | assertion failed: (*next).value.is_some()

/* WARNING: Removing unreachable block (ram,0x006c1914) */

void FUN_006c13d0(int *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  code *pcVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *local_5c;
  int *local_58;
  int *local_54;
  int local_50;
  int iStack_4c;
  int *local_48;
  int *piStack_44;
  int iStack_40;
  int iStack_3c;
  int *local_38;
  int *local_34;
  int iStack_30;
  int iStack_2c;
  
  iVar4 = *param_1;
  if (iVar4 != 0) {
    DataMemoryBarrier(0xb);
    if (0x7fffffff < *(uint *)(iVar4 + 0x1c)) {
      puVar7 = (uint *)(iVar4 + 0x1c);
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar2);
      *puVar7 = *puVar7 & 0x7fffffff;
      DataMemoryBarrier(0xb);
    }
    while (piVar5 = (int *)FUN_00d3f614(iVar4 + 0x10), piVar5 != (int *)0x0) {
      piVar11 = piVar5 + 2;
      do {
        if (*piVar11 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680(piVar11);
          goto LAB_006c145c;
        }
        bVar2 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar2);
      *piVar11 = 1;
      DataMemoryBarrier(0xb);
LAB_006c145c:
      uVar9 = 0;
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
        cVar1 = (char)piVar5[3];
      }
      else {
        uVar9 = FUN_015bf3f8();
        uVar9 = uVar9 ^ 1;
        cVar1 = (char)piVar5[3];
      }
      if (cVar1 != '\0') {
        uVar3 = (uint)local_58 >> 8;
        local_58 = (int *)CONCAT31((int3)uVar3,(char)uVar9);
        local_5c = piVar11;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_5c,&DAT_01858988,&DAT_018a4b20);
      }
      iVar6 = piVar5[4];
      *(undefined1 *)(piVar5 + 6) = 0;
      piVar5[4] = 0;
      if (iVar6 != 0) {
        (**(code **)(iVar6 + 4))(piVar5[5]);
      }
      if (((uVar9 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar6 = FUN_015bf3f8(), iVar6 == 0)) {
        *(undefined1 *)(piVar5 + 3) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar11;
        bVar2 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar2);
      *piVar11 = 0;
      if (iVar6 == 2) {
        FUN_016d6968(0xf0,piVar11,0x81,1);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010b4e7c(piVar5);
      }
    }
    iVar4 = *param_1;
    if (iVar4 != 0) {
LAB_006c15a0:
      do {
        piVar11 = *(int **)(iVar4 + 0xc);
        piVar5 = (int *)piVar11[5];
        DataMemoryBarrier(0xb);
        if (piVar5 == (int *)0x0) {
          DataMemoryBarrier(0xb);
          if (*(int **)(iVar4 + 8) != piVar11) {
            FUN_016da3a8();
            goto LAB_006c15a0;
          }
          DataMemoryBarrier(0xb);
          if (*(int *)(*param_1 + 0x1c) == 0) {
            piVar5 = (int *)*param_1;
            if (piVar5 != (int *)0x0) {
              DataMemoryBarrier(0xb);
              do {
                iVar4 = *piVar5;
                bVar2 = (bool)hasExclusiveAccess(piVar5);
              } while (!bVar2);
              *piVar5 = iVar4 + -1;
              if (iVar4 == 1) {
                DataMemoryBarrier(0xb);
                FUN_010b52b8(*param_1);
              }
            }
            *param_1 = 0;
            return;
          }
          local_5c = (int *)0x2;
          if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018a4cc8);
          }
          DataMemoryBarrier(0xb);
          if (*(int *)(*param_1 + 0x1c) == 0) {
            return;
          }
          FUN_016da3a8();
          piVar5 = local_54;
          if (((uint)local_5c & 0xfffffffd) != 0) goto joined_r0x006c1818;
        }
        else {
          *(int **)(iVar4 + 0xc) = piVar5;
          if (*piVar11 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464("assertion failed: (*tail).value.is_none()",0x29,&DAT_018a4e90);
          }
          if (*piVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464("assertion failed: (*next).value.is_some()",0x29,&DAT_018a4ea0);
          }
          local_38 = (int *)piVar5[1];
          local_34 = (int *)piVar5[2];
          iStack_30 = piVar5[3];
          iStack_2c = piVar5[4];
          *piVar5 = 0;
          if (*piVar11 != 0) {
            if (piVar11[1] == 0) {
              piVar5 = (int *)piVar11[2];
              iVar4 = *piVar5;
              if (iVar4 != 0) {
                puVar10 = (undefined4 *)piVar5[1];
                pcVar8 = (code *)*puVar10;
                if (pcVar8 != (code *)0x0) {
                  (*pcVar8)(iVar4);
                }
                if (puVar10[1] != 0) {
                  thunk_FUN_016d3fb4(iVar4);
                }
              }
              thunk_FUN_016d3fb4(piVar5);
            }
            else {
              (**(code **)(piVar11[1] + 0x10))(piVar11 + 4,piVar11[2],piVar11[3]);
            }
          }
          thunk_FUN_016d3fb4(piVar11);
          iVar4 = *param_1;
          local_48 = local_38;
          piStack_44 = local_34;
          iStack_40 = iStack_30;
          iStack_3c = iStack_2c;
          if (iVar4 != 0) {
            piVar5 = (int *)FUN_00d3f614(iVar4 + 0x10);
            if (piVar5 != (int *)0x0) {
              piVar11 = piVar5 + 2;
              do {
                if (*piVar11 != 0) {
                  ClearExclusiveLocal();
                  FUN_015bf680(piVar11);
                  goto LAB_006c1724;
                }
                bVar2 = (bool)hasExclusiveAccess(piVar11);
              } while (!bVar2);
              *piVar11 = 1;
              DataMemoryBarrier(0xb);
LAB_006c1724:
              uVar9 = 0;
              if ((DAT_018dd988 & 0x7fffffff) == 0) {
                cVar1 = (char)piVar5[3];
              }
              else {
                uVar9 = FUN_015bf3f8();
                uVar9 = uVar9 ^ 1;
                cVar1 = (char)piVar5[3];
              }
              if (cVar1 != '\0') {
                uVar3 = (uint)local_34 >> 8;
                local_34 = (int *)CONCAT31((int3)uVar3,(char)uVar9);
                local_38 = piVar11;
                    /* WARNING: Subroutine does not return */
                FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_38,&DAT_01858988,&DAT_018a4b10);
              }
              iVar4 = piVar5[4];
              *(undefined1 *)(piVar5 + 6) = 0;
              piVar5[4] = 0;
              if (iVar4 != 0) {
                (**(code **)(iVar4 + 4))(piVar5[5]);
              }
              if (((uVar9 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
                 (iVar4 = FUN_015bf3f8(), iVar4 == 0)) {
                *(undefined1 *)(piVar5 + 3) = 1;
              }
              DataMemoryBarrier(0xb);
              do {
                iVar4 = *piVar11;
                bVar2 = (bool)hasExclusiveAccess(piVar11);
              } while (!bVar2);
              *piVar11 = 0;
              if (iVar4 == 2) {
                FUN_016d6968(0xf0,piVar11,0x81,1);
              }
              DataMemoryBarrier(0xb);
              do {
                iVar4 = *piVar5;
                bVar2 = (bool)hasExclusiveAccess(piVar5);
              } while (!bVar2);
              *piVar5 = iVar4 + -1;
              if (iVar4 == 1) {
                DataMemoryBarrier(0xb);
                FUN_010b4e7c(piVar5);
              }
              iVar4 = *param_1;
              if (iVar4 == 0) goto LAB_006c1800;
            }
            piVar5 = (int *)(iVar4 + 0x1c);
            DataMemoryBarrier(0xb);
            do {
              bVar2 = (bool)hasExclusiveAccess(piVar5);
            } while (!bVar2);
            *piVar5 = *piVar5 + -1;
            DataMemoryBarrier(0xb);
          }
LAB_006c1800:
          local_5c = (int *)0x1;
          local_58 = local_48;
          piVar5 = piStack_44;
          local_50 = iStack_40;
          iStack_4c = iStack_3c;
joined_r0x006c1818:
          local_54 = piVar5;
          if (local_58 == (int *)0x0) {
            iVar4 = *piVar5;
            if (iVar4 != 0) {
              puVar10 = (undefined4 *)piVar5[1];
              pcVar8 = (code *)*puVar10;
              if (pcVar8 != (code *)0x0) {
                (*pcVar8)(iVar4);
              }
              if (puVar10[1] != 0) {
                thunk_FUN_016d3fb4(iVar4);
              }
            }
            thunk_FUN_016d3fb4(piVar5);
          }
          else {
            (*(code *)local_58[4])(&iStack_4c,piVar5,local_50);
          }
        }
        iVar4 = *param_1;
      } while (iVar4 != 0);
    }
  }
  return;
}

