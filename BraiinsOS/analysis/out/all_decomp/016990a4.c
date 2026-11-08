// FUN_016990a4 @ 016990a4 size=684 calls_out=7 calls_in=1
// strings: 

undefined4 FUN_016990a4(int param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  byte bVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  
  DataMemoryBarrier(0xb);
  piVar9 = *(int **)(param_1 + 0x24);
  uVar7 = 1;
  DataMemoryBarrier(0xb);
  if ((*(uint *)(param_1 + 0x20) & 1) == 0) {
    piVar6 = (int *)(param_1 + 0x24);
    puVar13 = (uint *)(param_1 + 0x20);
    uVar8 = 0;
    piVar12 = (int *)0x0;
    uVar3 = *(uint *)(param_1 + 0x20);
    do {
      uVar11 = (uVar3 & 0x3f) >> 1;
      if (uVar11 != 0x1f) {
        if (uVar11 == 0x1e && piVar12 == (int *)0x0) {
          piVar12 = (int *)thunk_FUN_016d4a50(0x80);
          if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x80);
          }
          FUN_016dd606(piVar12,0,0x80);
        }
        if (piVar9 == (int *)0x0) {
          piVar4 = (int *)thunk_FUN_016d4a50(0x80);
          if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x80);
          }
          FUN_016dd606(piVar4,0,0x80);
          if (*piVar6 == 0) {
            DataMemoryBarrier(0xb);
            do {
              bVar2 = (bool)hasExclusiveAccess(piVar6);
              if (bVar2) {
                *piVar6 = (int)piVar4;
                DataMemoryBarrier(0xb);
                *(int **)(param_1 + 4) = piVar4;
                uVar10 = *puVar13;
                piVar9 = piVar4;
                goto joined_r0x01699204;
              }
            } while (*piVar6 == 0);
          }
          ClearExclusiveLocal();
          if (piVar12 != (int *)0x0) {
            thunk_FUN_016d3fb4(piVar12);
          }
          uVar10 = *puVar13;
          DataMemoryBarrier(0xb);
          piVar9 = (int *)*piVar6;
          DataMemoryBarrier(0xb);
          piVar12 = piVar4;
          goto LAB_01699128;
        }
        uVar10 = *puVar13;
joined_r0x01699204:
        if (uVar10 == uVar3) {
          DataMemoryBarrier(0xb);
          bVar5 = hasExclusiveAccess(puVar13);
          if ((bool)bVar5) {
            *puVar13 = uVar3 + 2;
          }
        }
        else {
          bVar5 = 0;
          ClearExclusiveLocal();
        }
        DataMemoryBarrier(0xb);
        if (!(bool)(bVar5 & 1)) {
          piVar9 = (int *)*piVar6;
          uVar11 = 1;
          uVar3 = uVar8;
          if (5 < uVar8) {
            uVar3 = 6;
          }
          DataMemoryBarrier(0xb);
          do {
            uVar1 = uVar11 >> (uVar3 & 0xff);
            uVar11 = uVar11 + 1;
            HintYield();
          } while (uVar1 == 0);
          if (uVar8 < 7) {
            uVar8 = uVar8 + 1;
          }
          goto LAB_01699128;
        }
        if (uVar11 == 0x1e) {
          if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018ae240);
          }
          DataMemoryBarrier(0xb);
          *piVar6 = (int)piVar12;
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(puVar13);
          } while (!bVar2);
          *puVar13 = *puVar13 + 2;
          puVar13 = (uint *)(piVar9 + 0x1f);
          DataMemoryBarrier(0xb);
          *piVar9 = (int)piVar12;
          goto LAB_016992b8;
        }
        goto LAB_01699294;
      }
      if (uVar8 < 7) {
        uVar3 = 1;
        do {
          uVar11 = uVar3 >> (uVar8 & 0xff);
          uVar3 = uVar3 + 1;
          HintYield();
        } while (uVar11 == 0);
        uVar8 = uVar8 + 1;
      }
      else {
        FUN_016da3a8();
        if (uVar8 < 0xb) {
          uVar8 = uVar8 + 1;
        }
      }
      uVar10 = *puVar13;
      DataMemoryBarrier(0xb);
      piVar9 = (int *)*piVar6;
      DataMemoryBarrier(0xb);
LAB_01699128:
      uVar3 = uVar10;
    } while ((uVar10 & 1) == 0);
    piVar9 = (int *)0x0;
    uVar11 = 0;
LAB_01699294:
    uVar7 = 1;
    if (piVar12 != (int *)0x0) {
      thunk_FUN_016d3fb4(piVar12);
    }
    if (piVar9 != (int *)0x0) {
      puVar13 = (uint *)(piVar9 + uVar11 + 1);
LAB_016992b8:
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar13);
      } while (!bVar2);
      *puVar13 = *puVar13 | 1;
      FUN_01699374(param_1 + 0x40);
      uVar7 = 2;
    }
  }
  return uVar7;
}

