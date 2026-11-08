// FUN_00ebb27c @ 00ebb27c size=796 calls_out=5 calls_in=2
// strings: 

void FUN_00ebb27c(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  int local_34;
  uint local_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int iStack_24;
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    DataMemoryBarrier(0xb);
    if (*(int *)(iVar2 + 0x10) < 0) {
      puVar8 = (uint *)(iVar2 + 0x10);
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar8);
      } while (!bVar1);
      *puVar8 = *puVar8 & 0x7fffffff;
      DataMemoryBarrier(0xb);
      iVar2 = *param_1;
    }
    else {
      iVar2 = *param_1;
    }
    if (iVar2 != 0) {
      puVar8 = (uint *)((uint)&local_40 | 4);
      do {
        FUN_005bc180(&local_30,iVar2 + 8);
        piVar3 = (int *)(iVar2 + 0x10);
        if (local_30 == 0x80000014) {
          DataMemoryBarrier(0xb);
          if (*piVar3 == 0) {
            piVar3 = (int *)*param_1;
            if (piVar3 != (int *)0x0) {
              DataMemoryBarrier(0xb);
              do {
                iVar2 = *piVar3;
                bVar1 = (bool)hasExclusiveAccess(piVar3);
              } while (!bVar1);
              *piVar3 = iVar2 + -1;
              if (iVar2 == 1) {
                DataMemoryBarrier(0xb);
                FUN_00f36f34(*param_1);
              }
            }
            *param_1 = 0;
            return;
          }
          local_40 = 0x80000015;
LAB_00ebb384:
          if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_0187bde8);
          }
          DataMemoryBarrier(0xb);
          if (*(int *)(*param_1 + 0x10) == 0) {
            if ((local_40 & 0xfffffffe) == 0x80000014) {
              return;
            }
            uVar4 = 3;
            if ((int)local_40 < 0) {
              uVar4 = local_40 ^ 0x80000000;
            }
            puVar6 = local_38;
            if (uVar4 == 2) {
              for (; local_34 != 0; local_34 = local_34 + -1) {
                *puVar6 = 0;
                puVar6 = puVar6 + 1;
              }
              local_34 = 0;
              puVar5 = local_38;
              for (puVar6 = local_3c; puVar6 != (undefined1 *)0x0; puVar6 = puVar6 + -1) {
                *puVar5 = 0;
                puVar5 = puVar5 + 1;
              }
            }
            else {
              if (uVar4 != 3) {
                return;
              }
              if (local_38 != (undefined1 *)0x0) {
                puVar6 = local_3c;
                do {
                  *puVar6 = 0;
                  local_38 = local_38 + -1;
                  puVar6 = puVar6 + 1;
                } while (local_38 != (undefined1 *)0x0);
              }
              local_38 = (undefined1 *)0x0;
              puVar6 = local_3c;
              for (uVar4 = local_40; puVar8 = &local_40, uVar4 != 0; uVar4 = uVar4 - 1) {
                *puVar6 = 0;
                puVar6 = puVar6 + 1;
              }
            }
            if (*puVar8 == 0) {
              return;
            }
            thunk_FUN_016d3fb4(puVar8[1]);
            return;
          }
          FUN_016da3a8();
        }
        else {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar1);
          *piVar3 = *piVar3 + -1;
          DataMemoryBarrier(0xb);
          local_40 = local_30;
          local_3c = puStack_2c;
          local_38 = puStack_28;
          local_34 = iStack_24;
          if (local_30 == 0x80000015) goto LAB_00ebb384;
          if (local_30 == 0x80000014) {
            return;
          }
        }
        if ((local_40 & 0xfffffffe) != 0x80000014) {
          uVar4 = 3;
          if ((int)local_40 < 0) {
            uVar4 = local_40 ^ 0x80000000;
          }
          puVar6 = local_38;
          if (uVar4 == 2) {
            for (; local_34 != 0; local_34 = local_34 + -1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
            local_34 = 0;
            puVar6 = local_38;
            puVar5 = local_3c;
            puVar7 = puVar8;
            if (local_3c != (undefined1 *)0x0) {
              do {
                *puVar6 = 0;
                puVar5 = puVar5 + -1;
                puVar6 = puVar6 + 1;
              } while (puVar5 != (undefined1 *)0x0);
            }
          }
          else {
            if (uVar4 != 3) goto LAB_00ebb2fc;
            if (local_38 != (undefined1 *)0x0) {
              puVar6 = local_3c;
              do {
                *puVar6 = 0;
                local_38 = local_38 + -1;
                puVar6 = puVar6 + 1;
              } while (local_38 != (undefined1 *)0x0);
            }
            local_38 = (undefined1 *)0x0;
            uVar4 = local_40;
            puVar6 = local_3c;
            puVar7 = &local_40;
            if (local_40 != 0) {
              do {
                *puVar6 = 0;
                uVar4 = uVar4 - 1;
                puVar6 = puVar6 + 1;
              } while (uVar4 != 0);
              puVar7 = &local_40;
            }
          }
          if (*puVar7 != 0) {
            thunk_FUN_016d3fb4(puVar7[1]);
          }
        }
LAB_00ebb2fc:
        iVar2 = *param_1;
      } while (iVar2 != 0);
    }
  }
  return;
}

