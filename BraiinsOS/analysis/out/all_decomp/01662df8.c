// FUN_01662df8 @ 01662df8 size=2020 calls_out=8 calls_in=9
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01662df8(int *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  undefined4 in_stack_00000000;
  int *local_34;
  int *local_30;
  int *local_2c;
  undefined1 local_28;
  
  piVar9 = param_1 + 6;
  do {
    if (*piVar9 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar9);
      goto LAB_01662e28;
    }
    bVar3 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar3);
  *piVar9 = 1;
  DataMemoryBarrier(0xb);
LAB_01662e28:
  uVar7 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = (char)param_1[7];
  }
  else {
    uVar7 = FUN_015bf3f8();
    uVar7 = uVar7 ^ 1;
    cVar2 = (char)param_1[7];
  }
  if (cVar2 != '\0') {
    local_28 = (undefined1)uVar7;
    local_2c = piVar9;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_018ad534,&DAT_018ad504);
  }
  if ((char)param_1[0xe] != '\0') {
    if (((uVar7 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar5 = FUN_015bf3f8(), iVar5 == 0)
       ) {
      *(undefined1 *)(param_1 + 7) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar9;
      bVar3 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar3);
    *piVar9 = 0;
    if (iVar5 == 2) {
      software_interrupt(0);
      FUN_016d3496(piVar9,0x81,1,in_stack_00000000);
      return;
    }
    return;
  }
  iVar5 = param_1[10];
  if (iVar5 != 0) {
    do {
      param_1[10] = iVar5 + -1;
      piVar14 = *(int **)(param_1[9] + (iVar5 + -1) * 4);
      piVar12 = piVar14 + 6;
      do {
        local_34 = piVar14;
        if (*piVar12 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680(piVar12);
          goto LAB_01662f28;
        }
        bVar3 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar3);
      *piVar12 = 1;
      DataMemoryBarrier(0xb);
LAB_01662f28:
      uVar10 = 0;
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
        cVar2 = (char)piVar14[7];
      }
      else {
        uVar10 = FUN_015bf3f8();
        uVar10 = uVar10 ^ 1;
        cVar2 = (char)piVar14[7];
      }
      if (cVar2 != '\0') {
        local_28 = (undefined1)uVar10;
        local_2c = piVar12;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_018ad534,&DAT_018ad514);
      }
      piVar6 = (int *)piVar14[0xb];
      if (piVar6 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar6;
          bVar3 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar3);
        *piVar6 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01665328();
        }
      }
      piVar14[0xb] = 0;
      piVar14[0xc] = 0;
      if ((char)piVar14[0xe] == '\0') {
        while (piVar14[10] != 0) {
          iVar5 = piVar14[10] + -1;
          piVar14[10] = iVar5;
          piVar13 = *(int **)(piVar14[9] + iVar5 * 4);
          piVar6 = piVar13 + 6;
          do {
            local_30 = piVar13;
            if (*piVar6 != 0) {
              ClearExclusiveLocal();
              FUN_015bf680(piVar6);
              goto LAB_01663050;
            }
            bVar3 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar3);
          *piVar6 = 1;
          DataMemoryBarrier(0xb);
LAB_01663050:
          uVar8 = 0;
          if ((DAT_018dd988 & 0x7fffffff) == 0) {
            cVar2 = (char)piVar13[7];
          }
          else {
            uVar8 = FUN_015bf3f8();
            uVar8 = uVar8 ^ 1;
            cVar2 = (char)piVar13[7];
          }
          if (cVar2 != '\0') {
            local_28 = (undefined1)uVar8;
            local_2c = piVar6;
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_018ad534,&DAT_018ad524);
          }
          piVar11 = piVar13 + 0xb;
          piVar4 = (int *)*piVar11;
          if (piVar4 != (int *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar5 = *piVar4;
              bVar3 = (bool)hasExclusiveAccess(piVar4);
            } while (!bVar3);
            *piVar4 = iVar5 + -1;
            if (iVar5 == 1) {
              DataMemoryBarrier(0xb);
              FUN_01665328(piVar11);
            }
          }
          piVar13[0xb] = 0;
          piVar13[0xc] = 0;
          if ((char)piVar13[0xe] == '\0') {
            if (piVar13[10] == 0) {
              *(undefined1 *)(piVar13 + 0xe) = 1;
              if (piVar13[8] != 0) {
                thunk_FUN_016d3fb4(piVar13[9]);
              }
              piVar13[8] = 0;
              piVar13[9] = 4;
              piVar13[10] = 0;
              if (((uVar8 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
                 (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
                *(undefined1 *)(piVar13 + 7) = 1;
              }
              DataMemoryBarrier(0xb);
              do {
                iVar5 = *piVar6;
                bVar3 = (bool)hasExclusiveAccess(piVar6);
              } while (!bVar3);
              *piVar6 = 0;
              if (iVar5 == 2) {
                FUN_016d6968(0xf0,piVar6,0x81,1);
              }
              FUN_0163b708(piVar13 + 2);
              DataMemoryBarrier(0xb);
              do {
                iVar5 = *piVar13;
                bVar3 = (bool)hasExclusiveAccess(piVar13);
              } while (!bVar3);
              *piVar13 = iVar5 + -1;
              goto LAB_01663288;
            }
            do {
              iVar5 = *param_1;
              bVar3 = (bool)hasExclusiveAccess(param_1);
            } while (!bVar3);
            *param_1 = iVar5 + 1;
            if (iVar5 < 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xfdee,0x1663594);
              (*pcVar1)();
            }
            piVar4 = (int *)*piVar11;
            if (piVar4 != (int *)0x0) {
              DataMemoryBarrier(0xb);
              do {
                iVar5 = *piVar4;
                bVar3 = (bool)hasExclusiveAccess(piVar4);
              } while (!bVar3);
              *piVar4 = iVar5 + -1;
              if (iVar5 == 1) {
                DataMemoryBarrier(0xb);
                FUN_01665328(piVar11);
              }
            }
            piVar13[0xb] = (int)param_1;
            piVar13[0xc] = param_1[10];
            if (((uVar8 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
               (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
              *(undefined1 *)(piVar13 + 7) = 1;
            }
            DataMemoryBarrier(0xb);
            do {
              iVar5 = *piVar6;
              bVar3 = (bool)hasExclusiveAccess(piVar6);
            } while (!bVar3);
            *piVar6 = 0;
            if (iVar5 == 2) {
              FUN_016d6968(0xf0,piVar6,0x81,1);
            }
            iVar5 = param_1[10];
            local_2c = piVar13;
            if (iVar5 == param_1[8]) {
              FUN_016639b4(param_1 + 8);
            }
            *(int **)(param_1[9] + iVar5 * 4) = piVar13;
            param_1[10] = iVar5 + 1;
          }
          else {
            if (((uVar8 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
               (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
              *(undefined1 *)(piVar13 + 7) = 1;
            }
            DataMemoryBarrier(0xb);
            do {
              iVar5 = *piVar6;
              bVar3 = (bool)hasExclusiveAccess(piVar6);
            } while (!bVar3);
            *piVar6 = 0;
            if (iVar5 == 2) {
              FUN_016d6968(0xf0,piVar6,0x81,1);
            }
            DataMemoryBarrier(0xb);
            do {
              iVar5 = *piVar13;
              bVar3 = (bool)hasExclusiveAccess(piVar13);
            } while (!bVar3);
            *piVar13 = iVar5 + -1;
LAB_01663288:
            if (iVar5 == 1) {
              DataMemoryBarrier(0xb);
              FUN_01665328(&local_30);
            }
          }
        }
        *(undefined1 *)(piVar14 + 0xe) = 1;
        if (piVar14[8] != 0) {
          thunk_FUN_016d3fb4(piVar14[9]);
        }
        piVar14[8] = 0;
        piVar14[9] = 4;
        piVar14[10] = 0;
        if (((uVar10 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
          *(undefined1 *)(piVar14 + 7) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar12;
          bVar3 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar3);
        *piVar12 = 0;
        if (iVar5 == 2) {
          FUN_016d6968(0xf0,piVar12,0x81,1);
        }
        FUN_0163b708(piVar14 + 2);
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar14;
          bVar3 = (bool)hasExclusiveAccess(piVar14);
        } while (!bVar3);
        *piVar14 = iVar5 + -1;
      }
      else {
        if (((uVar10 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
          *(undefined1 *)(piVar14 + 7) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar12;
          bVar3 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar3);
        *piVar12 = 0;
        if (iVar5 == 2) {
          FUN_016d6968(0xf0,piVar12,0x81,1);
        }
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar14;
          bVar3 = (bool)hasExclusiveAccess(piVar14);
        } while (!bVar3);
        *piVar14 = iVar5 + -1;
      }
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01665328(&local_34);
      }
      iVar5 = param_1[10];
    } while (iVar5 != 0);
  }
  *(undefined1 *)(param_1 + 0xe) = 1;
  if (param_1[8] != 0) {
    thunk_FUN_016d3fb4(param_1[9]);
  }
  param_1[9] = 4;
  param_1[8] = 0;
  param_1[10] = 0;
  if (((uVar7 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar5 = FUN_015bf3f8(), iVar5 == 0))
  {
    *(undefined1 *)(param_1 + 7) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar9;
    bVar3 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar3);
  *piVar9 = 0;
  if (iVar5 == 2) {
    FUN_016d6968(0xf0,piVar9,0x81,1);
    FUN_0163b708(param_1 + 2);
    return;
  }
  FUN_0163b708(param_1 + 2);
  return;
}

