// FUN_01aba290 @ 01aba290 size=412 calls_out=4 calls_in=0
// strings: 

uint FUN_01aba290(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int *piVar7;
  int extraout_r3;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  undefined8 uVar16;
  
  uVar16 = thunk_FUN_01bee35a(param_1,param_1,param_3,0x298);
  piVar14 = (int *)((ulonglong)uVar16 >> 0x20);
  uVar4 = (uint)uVar16;
  bVar1 = *(byte *)(piVar14 + 3);
  iVar13 = *(int *)(uVar4 + extraout_r3) + -1;
  *(int *)(uVar4 + extraout_r3) = iVar13;
  if ((iVar13 == 0) && ((bVar1 & 1) != 0)) {
    uVar12 = *piVar14 - 1;
    uVar4 = (uVar12 & 0x3fffffff) >> 0x16;
    if ((uint)((int *)piVar14[2])[1] <= uVar4) {
      uVar4 = FUN_01ac1da4();
      return uVar4;
    }
    piVar14 = *(int **)(*(int *)piVar14[2] + uVar4 * 4);
    DataMemoryBarrier(0xb);
    uVar4 = FUN_01ac1da4();
    if (uVar4 == 0) {
      if (piVar14 != (int *)0x0) {
        uVar4 = uVar12 & 0x3fffff;
        uVar9 = 0x20 - LZCOUNT(uVar4 + 0x20 >> 6);
        if (uVar9 < (uint)piVar14[3]) {
          piVar14 = (int *)(piVar14[2] + uVar9 * 0x14);
          if (*piVar14 != 0) {
            uVar9 = uVar4 - piVar14[4];
            uVar4 = piVar14[1];
            if (uVar9 < uVar4) {
              uVar12 = uVar12 >> 0x1e;
              iVar13 = *piVar14 + uVar9 * 0x40;
              uVar10 = FUN_01ab36f8(iVar13,uVar12);
              uVar4 = 0;
              if ((uVar10 & 0xfd) != 0) {
                puVar8 = (uint *)(piVar14 + 2);
                DataMemoryBarrier(0xb);
                if (uVar12 == *(uint *)(iVar13 + 0x38) >> 0x1e) {
                  puVar11 = (uint *)(iVar13 + 0x38);
                  iVar15 = 1;
                  if (1 < uVar12) {
                    iVar15 = -2;
                  }
                  uVar10 = 0;
                  bVar2 = false;
                  uVar4 = *(uint *)(iVar13 + 0x38);
                  do {
                    uVar5 = *puVar11;
                    if (uVar5 == uVar4) {
                      DataMemoryBarrier(0xb);
                      do {
                        bVar6 = (bool)hasExclusiveAccess(puVar11);
                        if (bVar6) {
                          *puVar11 = uVar4 & 0x3fffffff | (uVar12 + iVar15) * 0x40000000;
                          bVar6 = true;
                          goto LAB_01ab3998;
                        }
                        uVar5 = *puVar11;
                      } while (uVar5 == uVar4);
                    }
                    bVar6 = false;
                    ClearExclusiveLocal();
LAB_01ab3998:
                    DataMemoryBarrier(0xb);
                    if (bVar6) {
                      if ((uVar5 & 0x3ffffffc) == 0) {
                        FUN_01aba450(iVar13);
                        uVar4 = *puVar8;
                        do {
                          *(uint *)(iVar13 + 0x3c) = uVar4;
                          uVar12 = *puVar8;
                          if (uVar12 == uVar4) {
                            DataMemoryBarrier(0xb);
                            do {
                              bVar2 = (bool)hasExclusiveAccess(puVar8);
                              if (bVar2) {
                                *puVar8 = uVar9;
                                bVar2 = true;
                                uVar4 = uVar12;
                                goto LAB_01ab3a58;
                              }
                              uVar12 = *puVar8;
                            } while (uVar12 == uVar4);
                          }
                          bVar2 = false;
                          ClearExclusiveLocal();
                          uVar4 = uVar12;
LAB_01ab3a58:
                          if (bVar2) {
                            return 1;
                          }
                        } while( true );
                      }
                      if ((uVar10 & 0x1f) == 0x1f) {
LAB_01ab39d8:
                        FUN_01bea67c();
                      }
                      else {
                        iVar3 = 1 << (uVar10 & 0x1f);
                        do {
                          iVar3 = iVar3 + -1;
                          HintYield();
                        } while (iVar3 != 0);
                        if (7 < uVar10) goto LAB_01ab39d8;
                        uVar10 = uVar10 + 1;
                      }
                      bVar2 = true;
                      uVar5 = uVar4;
                    }
                    else {
                      uVar10 = 0;
                    }
                    uVar4 = uVar5;
                  } while ((bVar2) || (uVar12 == uVar5 >> 0x1e));
                }
                return 0;
              }
            }
          }
        }
      }
    }
    else if (piVar14 != (int *)0x0) {
      uVar4 = uVar12 & 0x3fffff;
      uVar9 = 0x20 - LZCOUNT(uVar4 + 0x20 >> 6);
      if (uVar9 < (uint)piVar14[3]) {
        if ((uint)piVar14[1] <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar9,piVar14[1],&DAT_01d2ec80);
        }
        piVar7 = (int *)(piVar14[2] + uVar9 * 0x14);
        if (*piVar7 != 0) {
          uVar10 = uVar4 - piVar7[4];
          uVar4 = piVar7[1];
          if (uVar10 < uVar4) {
            iVar15 = *piVar14;
            iVar13 = *piVar7 + uVar10 * 0x40;
            uVar12 = uVar12 >> 0x1e;
            uVar5 = FUN_01ab36f8(iVar13,uVar12);
            uVar4 = 0;
            if ((uVar5 & 0xfd) != 0) {
              puVar8 = (uint *)(iVar15 + uVar9 * 4);
              DataMemoryBarrier(0xb);
              if (uVar12 == *(uint *)(iVar13 + 0x38) >> 0x1e) {
                puVar11 = (uint *)(iVar13 + 0x38);
                iVar15 = 1;
                if (1 < uVar12) {
                  iVar15 = -2;
                }
                uVar9 = 0;
                bVar2 = false;
                uVar4 = *(uint *)(iVar13 + 0x38);
                do {
                  uVar5 = *puVar11;
                  if (uVar5 == uVar4) {
                    DataMemoryBarrier(0xb);
                    do {
                      bVar6 = (bool)hasExclusiveAccess(puVar11);
                      if (bVar6) {
                        *puVar11 = uVar4 & 0x3fffffff | (uVar12 + iVar15) * 0x40000000;
                        bVar6 = true;
                        goto LAB_01ab386c;
                      }
                      uVar5 = *puVar11;
                    } while (uVar5 == uVar4);
                  }
                  bVar6 = false;
                  ClearExclusiveLocal();
LAB_01ab386c:
                  DataMemoryBarrier(0xb);
                  if (bVar6) {
                    if ((uVar5 & 0x3ffffffc) == 0) {
                      FUN_01aba450(iVar13);
                      *(uint *)(iVar13 + 0x3c) = *puVar8;
                      *puVar8 = uVar10;
                      return 1;
                    }
                    if ((uVar9 & 0x1f) == 0x1f) {
LAB_01ab38a8:
                      FUN_01bea67c();
                    }
                    else {
                      iVar3 = 1 << (uVar9 & 0x1f);
                      do {
                        iVar3 = iVar3 + -1;
                        HintYield();
                      } while (iVar3 != 0);
                      if (7 < uVar9) goto LAB_01ab38a8;
                      uVar9 = uVar9 + 1;
                    }
                    bVar2 = true;
                    uVar5 = uVar4;
                  }
                  else {
                    uVar9 = 0;
                  }
                  uVar4 = uVar5;
                } while ((bVar2) || (uVar12 == uVar5 >> 0x1e));
              }
              return 0;
            }
          }
        }
      }
    }
  }
  return uVar4;
}

