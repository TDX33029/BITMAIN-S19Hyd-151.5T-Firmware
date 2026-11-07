// FUN_0109717c @ 0109717c size=780 calls_out=7 calls_in=9
// strings: assertion failed: !new_ptr.is_null() | assertion failed: !ptr.is_null()

void FUN_0109717c(uint *param_1,int param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined1 auStack_830 [1032];
  undefined4 local_428 [257];
  
  uVar13 = *(uint *)(param_4 + 0x10);
  if (*(uint *)(param_3 + 0x10) < uVar13) {
    iVar6 = param_2 + 8;
    uVar12 = param_3;
    do {
      if (*param_1 == uVar12) {
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(param_1);
        if (!bVar1) goto LAB_010973c8;
        *param_1 = param_4;
        DataMemoryBarrier(0xb);
        if (uVar12 < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464("assertion failed: !ptr.is_null()",0x20,&DAT_01883b20);
        }
        if (param_2 == 0) {
          puVar7 = (undefined4 *)(uVar12 & 0xfffffffc);
          DataMemoryBarrier(0xb);
          if (puVar7[1] != 0) {
            thunk_FUN_016d3fb4(*puVar7);
          }
          piVar5 = (int *)puVar7[2];
          DataMemoryBarrier(0xb);
          do {
            iVar9 = *piVar5;
            bVar1 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar1);
          *piVar5 = iVar9 + -1;
          if (iVar9 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00784894(puVar7[2]);
          }
          thunk_FUN_016d3fb4(puVar7);
        }
        else {
          uVar2 = *(uint *)(param_2 + 0x408);
          if (0x3f < uVar2) {
LAB_0109728c:
            iVar15 = *(int *)(param_2 + 4);
            iVar9 = 0;
            do {
              local_428[iVar9 * 4] = &DAT_01040efc;
              iVar3 = iVar9 + 1;
              local_428[iVar9 * 4 + 1] = 0;
              local_428[iVar9 * 4 + 2] = 0;
              local_428[iVar9 * 4 + 3] = 0;
              iVar9 = iVar3;
            } while (iVar3 != 0x40);
            FUN_016dd1aa(auStack_830,iVar6,0x404);
            FUN_016dd1aa(iVar6,local_428,0x400);
            *(undefined4 *)(param_2 + 0x408) = 0;
            DataMemoryBarrier(0xb);
            uVar14 = *(undefined4 *)(iVar15 + 0x60);
            uVar2 = thunk_FUN_016d4a50(0x40c);
            if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0x40c);
            }
            FUN_016dd1aa(uVar2,auStack_830,0x404);
            puVar4 = (uint *)(iVar15 + 0x40);
            *(undefined4 *)(uVar2 + 0x404) = uVar14;
            *(undefined4 *)(uVar2 + 0x408) = 0;
LAB_01097330:
            do {
              uVar8 = *puVar4;
              DataMemoryBarrier(0xb);
              uVar11 = *(uint *)((uVar8 & 0xfffffffc) + 0x408);
              DataMemoryBarrier(0xb);
              if (uVar11 < 4) {
                puVar10 = (uint *)((uVar8 & 0xfffffffc) + 0x408);
                if (*puVar10 == 0) {
                  DataMemoryBarrier(0xb);
                  do {
                    bVar1 = (bool)hasExclusiveAccess(puVar10);
                    if (bVar1) {
                      *puVar10 = uVar2;
                      if (*puVar4 != uVar8) goto LAB_01097278;
                      DataMemoryBarrier(0xb);
                      goto LAB_010973a8;
                    }
                  } while (*puVar10 == 0);
                }
              }
              else if (*puVar4 == uVar8) {
                DataMemoryBarrier(0xb);
                do {
                  bVar1 = (bool)hasExclusiveAccess(puVar4);
                  if (bVar1) {
                    *puVar4 = uVar11;
                    goto LAB_01097330;
                  }
                } while (*puVar4 == uVar8);
              }
              ClearExclusiveLocal();
            } while( true );
          }
LAB_01097240:
          *(int *)(param_2 + 0x408) = *(int *)(param_2 + 0x408) + 1;
          puVar7 = (undefined4 *)(iVar6 + uVar2 * 0x10);
          *puVar7 = FUN_0109c12c;
          puVar7[1] = uVar12;
        }
      }
      else {
        ClearExclusiveLocal();
LAB_010973c8:
        uVar12 = *param_1;
        if (uVar12 < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464("assertion failed: !new_ptr.is_null()",0x24,&DAT_018840d0);
        }
        param_3 = uVar12 & 0xfffffffc;
        if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018840e0);
        }
      }
    } while (*(uint *)(param_3 + 0x10) < uVar13);
  }
  return;
  while (*puVar4 == uVar8) {
LAB_010973a8:
    bVar1 = (bool)hasExclusiveAccess(puVar4);
    if (bVar1) {
      *puVar4 = uVar2;
      goto LAB_0109727c;
    }
  }
LAB_01097278:
  ClearExclusiveLocal();
LAB_0109727c:
  uVar2 = *(uint *)(param_2 + 0x408);
  if (uVar2 < 0x40) goto LAB_01097240;
  goto LAB_0109728c;
}

