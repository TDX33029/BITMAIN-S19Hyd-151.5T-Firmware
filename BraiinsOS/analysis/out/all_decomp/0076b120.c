// FUN_0076b120 @ 0076b120 size=636 calls_out=5 calls_in=25
// strings: BUG: halt done send failedbosminer::haltopen/bosminer/bosminer/src/halt.rsevent open/bosminer/bosminer/src/halt.rs:367

void FUN_0076b120(int *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint *puVar8;
  uint *puVar9;
  undefined1 local_11;
  
  if (param_1 != (int *)0x0) {
    uVar5 = param_1[4];
    puVar8 = (uint *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    while (0x7fffffff < uVar5) {
      if ((~uVar5 & 0x7fffffff) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_0040888b,0x46,&DAT_0187b670);
      }
      uVar2 = *puVar8;
      if (*puVar8 == uVar5) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar8);
          if (bVar1) {
            *puVar8 = uVar5 + 1 | 0x80000000;
            DataMemoryBarrier(0xb);
            puVar3 = (undefined4 *)thunk_FUN_016d4a50(8);
            if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,8);
            }
            piVar7 = param_1 + 2;
            *(undefined1 *)(puVar3 + 1) = 1;
            *puVar3 = 0;
            DataMemoryBarrier(0xb);
            do {
              puVar6 = (undefined4 *)*piVar7;
              bVar1 = (bool)hasExclusiveAccess(piVar7);
            } while (!bVar1);
            *piVar7 = (int)puVar3;
            DataMemoryBarrier(0xb);
            puVar9 = (uint *)(param_1 + 8);
            *puVar6 = puVar3;
            DataMemoryBarrier(0xb);
            do {
              uVar5 = *puVar9;
              bVar1 = (bool)hasExclusiveAccess(puVar9);
            } while (!bVar1);
            *puVar9 = uVar5 | 2;
            DataMemoryBarrier(0xb);
            if (uVar5 == 0) {
              iVar4 = param_1[6];
              param_1[6] = 0;
              DataMemoryBarrier(0xb);
              do {
                bVar1 = (bool)hasExclusiveAccess(puVar9);
              } while (!bVar1);
              *puVar9 = *puVar9 & 0xfffffffd;
              if (iVar4 != 0) {
                (**(code **)(iVar4 + 4))(param_1[7]);
              }
            }
            piVar7 = param_1 + 5;
            DataMemoryBarrier(0xb);
            do {
              iVar4 = *piVar7;
              bVar1 = (bool)hasExclusiveAccess(piVar7);
            } while (!bVar1);
            *piVar7 = iVar4 + -1;
            DataMemoryBarrier(0xb);
            if (iVar4 == 1) {
              DataMemoryBarrier(0xb);
              if (0x7fffffff < *puVar8) {
                DataMemoryBarrier(0xb);
                do {
                  bVar1 = (bool)hasExclusiveAccess(puVar8);
                } while (!bVar1);
                *puVar8 = *puVar8 & 0x7fffffff;
                DataMemoryBarrier(0xb);
              }
              DataMemoryBarrier(0xb);
              do {
                uVar5 = *puVar9;
                bVar1 = (bool)hasExclusiveAccess(puVar9);
              } while (!bVar1);
              *puVar9 = uVar5 | 2;
              DataMemoryBarrier(0xb);
              if (uVar5 == 0) {
                iVar4 = param_1[6];
                param_1[6] = 0;
                DataMemoryBarrier(0xb);
                do {
                  bVar1 = (bool)hasExclusiveAccess(puVar9);
                } while (!bVar1);
                *puVar9 = *puVar9 & 0xfffffffd;
                if (iVar4 != 0) {
                  (**(code **)(iVar4 + 4))(param_1[7]);
                }
              }
            }
            DataMemoryBarrier(0xb);
            do {
              iVar4 = *param_1;
              bVar1 = (bool)hasExclusiveAccess(param_1);
            } while (!bVar1);
            *param_1 = iVar4 + -1;
            if (iVar4 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0078cf4c(param_1);
              return;
            }
            return;
          }
          uVar2 = *puVar8;
        } while (*puVar8 == uVar5);
      }
      uVar5 = uVar2;
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    }
  }
  local_11 = 1;
                    /* WARNING: Subroutine does not return */
  FUN_00fb74f8("BUG: halt done send failedbosminer::haltopen/bosminer/bosminer/src/halt.rsevent open/bosminer/bosminer/src/halt.rs:367"
               ,0x1a,&local_11,&DAT_0185bac4,&DAT_0185bb94);
}

