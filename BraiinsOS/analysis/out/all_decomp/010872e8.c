// FUN_010872e8 @ 010872e8 size=732 calls_out=6 calls_in=2
// strings: assertion failed: !ptr.is_null()

void FUN_010872e8(uint *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  
  DataMemoryBarrier(0xb);
  if (param_2 != 0) {
    puVar5 = param_1 + param_2 * 2;
    do {
      uVar12 = *param_1;
      while (puVar7 = (undefined4 *)(uVar12 & 0xfffffffc), puVar7 != (undefined4 *)0x0) {
        uVar11 = puVar7[3];
        puVar6 = (uint *)*puVar7;
        puVar10 = puVar6 + puVar7[1];
        if (uVar11 < 4) {
          while (puVar6 != puVar10) {
            uVar2 = *puVar6;
            puVar6 = puVar6 + 1;
            if (7 < uVar2) {
              puVar9 = (undefined4 *)(uVar2 & 0xfffffff8);
              DataMemoryBarrier(0xb);
              if ((uVar2 & 2) == 0) {
                piVar8 = (int *)puVar9[5];
                DataMemoryBarrier(0xb);
                do {
                  iVar3 = *piVar8;
                  bVar1 = (bool)hasExclusiveAccess(piVar8);
                } while (!bVar1);
                *piVar8 = iVar3 + -1;
                if (iVar3 == 1) {
                  DataMemoryBarrier(0xb);
                  if ((undefined1 *)piVar8[0x20] < (undefined1 *)0x3b9aca01) {
                    if ((undefined1 *)piVar8[0x20] == &DAT_3b9aca00) {
                      piVar4 = (int *)piVar8[4];
                      DataMemoryBarrier(0xb);
                      do {
                        iVar3 = *piVar4;
                        bVar1 = (bool)hasExclusiveAccess(piVar4);
                      } while (!bVar1);
                      *piVar4 = iVar3 + -1;
                      if (iVar3 == 1) {
                        DataMemoryBarrier(0xb);
                        FUN_015614d8(piVar8[4],piVar8[5]);
                      }
                    }
                    else {
                      FUN_0109d528();
                    }
                  }
                  thunk_FUN_016d3fb4(piVar8);
                }
                piVar8 = (int *)*puVar9;
                DataMemoryBarrier(0xb);
                do {
                  iVar3 = *piVar8;
                  bVar1 = (bool)hasExclusiveAccess(piVar8);
                } while (!bVar1);
                *piVar8 = iVar3 + -1;
              }
              else {
                piVar8 = (int *)*puVar9;
                DataMemoryBarrier(0xb);
                do {
                  iVar3 = *piVar8;
                  bVar1 = (bool)hasExclusiveAccess(piVar8);
                } while (!bVar1);
                *piVar8 = iVar3 + -1;
              }
              if (iVar3 == 1) {
                DataMemoryBarrier(0xb);
                FUN_0108a158(*puVar9);
              }
              thunk_FUN_016d3fb4(puVar9);
            }
          }
        }
        else {
          while (puVar6 != puVar10) {
            uVar2 = *puVar6;
            puVar6 = puVar6 + 1;
            if ((7 < uVar2) && ((uVar2 & 2) == 0)) {
              puVar9 = (undefined4 *)(uVar2 & 0xfffffff8);
              DataMemoryBarrier(0xb);
              piVar8 = (int *)puVar9[5];
              DataMemoryBarrier(0xb);
              do {
                iVar3 = *piVar8;
                bVar1 = (bool)hasExclusiveAccess(piVar8);
              } while (!bVar1);
              *piVar8 = iVar3 + -1;
              if (iVar3 == 1) {
                DataMemoryBarrier(0xb);
                if ((undefined1 *)piVar8[0x20] < (undefined1 *)0x3b9aca01) {
                  if ((undefined1 *)piVar8[0x20] == &DAT_3b9aca00) {
                    piVar4 = (int *)piVar8[4];
                    DataMemoryBarrier(0xb);
                    do {
                      iVar3 = *piVar4;
                      bVar1 = (bool)hasExclusiveAccess(piVar4);
                    } while (!bVar1);
                    *piVar4 = iVar3 + -1;
                    if (iVar3 == 1) {
                      DataMemoryBarrier(0xb);
                      FUN_015614d8(piVar8[4],piVar8[5]);
                    }
                  }
                  else {
                    FUN_0109d528();
                  }
                }
                thunk_FUN_016d3fb4(piVar8);
              }
              piVar8 = (int *)*puVar9;
              DataMemoryBarrier(0xb);
              do {
                iVar3 = *piVar8;
                bVar1 = (bool)hasExclusiveAccess(piVar8);
              } while (!bVar1);
              *piVar8 = iVar3 + -1;
              if (iVar3 == 1) {
                DataMemoryBarrier(0xb);
                FUN_0108a158(*puVar9);
              }
              thunk_FUN_016d3fb4(puVar9);
            }
          }
        }
        if (uVar12 < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464("assertion failed: !ptr.is_null()",0x20,&DAT_01883b20);
        }
        DataMemoryBarrier(0xb);
        if (puVar7[1] != 0) {
          thunk_FUN_016d3fb4(*puVar7);
        }
        piVar8 = (int *)puVar7[2];
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar8;
          bVar1 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar1);
        *piVar8 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00784894(puVar7[2]);
        }
        thunk_FUN_016d3fb4(puVar7);
        uVar12 = uVar11;
      }
      param_1 = param_1 + 2;
    } while (param_1 != puVar5);
  }
  return;
}

