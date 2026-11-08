// FUN_009ebe80 @ 009ebe80 size=960 calls_out=6 calls_in=17
// strings: 

void FUN_009ebe80(int *param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int extraout_r2;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  
  uVar16 = thunk_FUN_016de0ee(param_1,param_2,0x29c);
  uVar7 = (uint)((ulonglong)uVar16 >> 0x20);
  piVar3 = (int *)((int)uVar16 + extraout_r2);
  DataMemoryBarrier(0xb);
  if (((char)piVar3[2] == '\x01') || (piVar3 = (int *)FUN_009e3840(), piVar3 != (int *)0x0)) {
    if (*piVar3 == 1) {
      iVar4 = piVar3[1];
    }
    else {
      iVar4 = FUN_009ee868();
    }
  }
  else {
    iVar4 = -1;
  }
  if (iVar4 == param_1[4]) {
    uVar9 = 0x20 - LZCOUNT((uVar7 & 0x3fffff) + 0x20 >> 6);
    if (uVar9 < (uint)param_1[3]) {
      if ((uint)param_1[1] <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar9,param_1[1],&DAT_018ae704);
      }
      piVar3 = (int *)(param_1[2] + uVar9 * 0x14);
      if ((*piVar3 != 0) && (uVar14 = (uVar7 & 0x3fffff) - piVar3[4], uVar14 < (uint)piVar3[1])) {
        iVar4 = *param_1;
        uVar10 = uVar7 >> 0x1e;
        iVar5 = *piVar3 + uVar14 * 0x40;
        DataMemoryBarrier(0xb);
        if (uVar10 == *(uint *)(iVar5 + 0x38) >> 0x1e) {
          uVar13 = 0;
          puVar11 = (uint *)(iVar5 + 0x38);
          bVar2 = false;
          uVar15 = *(uint *)(iVar5 + 0x38);
          do {
            while (uVar8 = *puVar11, uVar8 == uVar15) {
              DataMemoryBarrier(0xb);
              while (bVar1 = (bool)hasExclusiveAccess(puVar11), !bVar1) {
                uVar8 = *puVar11;
                if (uVar8 != uVar15) goto LAB_009ebf9c;
              }
              *puVar11 = uVar15 & 0x3fffffff | (uVar10 + ((int)uVar7 >> 0x1f ^ 1U)) * 0x40000000;
              DataMemoryBarrier(0xb);
              if ((uVar8 & 0x3ffffffc) == 0) {
                FUN_016a1db0(iVar5);
                *(undefined4 *)(iVar5 + 0x3c) = *(undefined4 *)(iVar4 + uVar9 * 4);
                *(uint *)(iVar4 + uVar9 * 4) = uVar14;
                return;
              }
              if ((uVar13 & 0x1f) == 0x1f) goto LAB_009ebfe0;
              iVar6 = 1 << (uVar13 & 0x1f);
              do {
                iVar6 = iVar6 + -1;
                HintYield();
              } while (iVar6 != 0);
              if (uVar13 < 8) {
                uVar13 = uVar13 + 1;
              }
              else {
LAB_009ebfe0:
                FUN_016da3a8();
              }
              bVar2 = true;
            }
LAB_009ebf9c:
            ClearExclusiveLocal();
            DataMemoryBarrier(0xb);
            uVar13 = 0;
            uVar15 = uVar8;
          } while ((bVar2) || (uVar13 = 0, uVar10 == uVar8 >> 0x1e));
        }
      }
    }
  }
  else {
    uVar9 = 0x20 - LZCOUNT((uVar7 & 0x3fffff) + 0x20 >> 6);
    if (uVar9 < (uint)param_1[3]) {
      piVar3 = (int *)(param_1[2] + uVar9 * 0x14);
      if ((*piVar3 != 0) && (uVar9 = (uVar7 & 0x3fffff) - piVar3[4], uVar9 < (uint)piVar3[1])) {
        iVar4 = *piVar3 + uVar9 * 0x40;
        uVar14 = uVar7 >> 0x1e;
        DataMemoryBarrier(0xb);
        if (uVar14 == *(uint *)(iVar4 + 0x38) >> 0x1e) {
          puVar11 = (uint *)(piVar3 + 2);
          puVar12 = (uint *)(iVar4 + 0x38);
          uVar15 = 0;
          bVar2 = false;
          uVar10 = *(uint *)(iVar4 + 0x38);
          do {
            while (uVar13 = *puVar12, uVar13 == uVar10) {
              DataMemoryBarrier(0xb);
              while (bVar1 = (bool)hasExclusiveAccess(puVar12), !bVar1) {
                uVar13 = *puVar12;
                if (uVar13 != uVar10) goto LAB_009ec0dc;
              }
              *puVar12 = uVar10 & 0x3fffffff | (uVar14 + ((int)uVar7 >> 0x1f ^ 1U)) * 0x40000000;
              DataMemoryBarrier(0xb);
              if ((uVar13 & 0x3ffffffc) == 0) {
                FUN_016a1db0(iVar4);
                uVar7 = *puVar11;
                do {
                  *(uint *)(iVar4 + 0x3c) = uVar7;
                  uVar14 = *puVar11;
                  if (*puVar11 == uVar7) {
                    DataMemoryBarrier(0xb);
                    do {
                      bVar2 = (bool)hasExclusiveAccess(puVar11);
                      if (bVar2) {
                        *puVar11 = uVar9;
                        return;
                      }
                      uVar14 = *puVar11;
                    } while (*puVar11 == uVar7);
                  }
                  uVar7 = uVar14;
                  ClearExclusiveLocal();
                } while( true );
              }
              if ((uVar15 & 0x1f) == 0x1f) goto LAB_009ec124;
              iVar5 = 1 << (uVar15 & 0x1f);
              do {
                iVar5 = iVar5 + -1;
                HintYield();
              } while (iVar5 != 0);
              if (uVar15 < 8) {
                uVar15 = uVar15 + 1;
              }
              else {
LAB_009ec124:
                FUN_016da3a8();
              }
              bVar2 = true;
            }
LAB_009ec0dc:
            ClearExclusiveLocal();
            DataMemoryBarrier(0xb);
            uVar15 = 0;
            uVar10 = uVar13;
          } while ((bVar2) || (uVar15 = 0, uVar14 == uVar13 >> 0x1e));
        }
      }
    }
  }
  return;
}

