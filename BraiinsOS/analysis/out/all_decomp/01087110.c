// FUN_01087110 @ 01087110 size=464 calls_out=5 calls_in=2
// strings: assertion failed: !ptr.is_null()

void FUN_01087110(uint *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  
  DataMemoryBarrier(0xb);
  if (param_2 != 0) {
    puVar9 = param_1 + param_2 * 2;
    do {
      uVar8 = *param_1;
      while (puVar6 = (undefined4 *)(uVar8 & 0xfffffffc), puVar6 != (undefined4 *)0x0) {
        uVar11 = puVar6[3];
        puVar10 = (uint *)*puVar6;
        puVar5 = puVar10 + puVar6[1];
        if (uVar11 < 4) {
          while (puVar10 != puVar5) {
            uVar2 = *puVar10;
            puVar10 = puVar10 + 1;
            if (7 < uVar2) {
              puVar7 = (undefined4 *)(uVar2 & 0xfffffff8);
              DataMemoryBarrier(0xb);
              if ((uVar2 & 2) == 0) {
                FUN_0109d7e0(puVar7[1]);
                piVar3 = (int *)*puVar7;
                DataMemoryBarrier(0xb);
                do {
                  iVar4 = *piVar3;
                  bVar1 = (bool)hasExclusiveAccess(piVar3);
                } while (!bVar1);
                *piVar3 = iVar4 + -1;
              }
              else {
                piVar3 = (int *)*puVar7;
                DataMemoryBarrier(0xb);
                do {
                  iVar4 = *piVar3;
                  bVar1 = (bool)hasExclusiveAccess(piVar3);
                } while (!bVar1);
                *piVar3 = iVar4 + -1;
              }
              if (iVar4 == 1) {
                DataMemoryBarrier(0xb);
                FUN_0108a158(*puVar7);
              }
              thunk_FUN_016d3fb4(puVar7);
            }
          }
        }
        else {
          while (puVar10 != puVar5) {
            uVar2 = *puVar10;
            puVar10 = puVar10 + 1;
            if ((7 < uVar2) && ((uVar2 & 2) == 0)) {
              puVar7 = (undefined4 *)(uVar2 & 0xfffffff8);
              DataMemoryBarrier(0xb);
              FUN_0109d7e0(puVar7[1]);
              piVar3 = (int *)*puVar7;
              DataMemoryBarrier(0xb);
              do {
                iVar4 = *piVar3;
                bVar1 = (bool)hasExclusiveAccess(piVar3);
              } while (!bVar1);
              *piVar3 = iVar4 + -1;
              if (iVar4 == 1) {
                DataMemoryBarrier(0xb);
                FUN_0108a158(*puVar7);
              }
              thunk_FUN_016d3fb4(puVar7);
            }
          }
        }
        if (uVar8 < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464("assertion failed: !ptr.is_null()",0x20,&DAT_01883b20);
        }
        DataMemoryBarrier(0xb);
        if (puVar6[1] != 0) {
          thunk_FUN_016d3fb4(*puVar6);
        }
        piVar3 = (int *)puVar6[2];
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00784894(puVar6[2]);
        }
        thunk_FUN_016d3fb4(puVar6);
        uVar8 = uVar11;
      }
      param_1 = param_1 + 2;
    } while (param_1 != puVar9);
  }
  return;
}

