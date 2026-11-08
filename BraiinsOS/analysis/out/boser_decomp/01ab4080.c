// FUN_01ab4080 @ 01ab4080 size=1260 calls_out=7 calls_in=1
// strings: 

uint * FUN_01ab4080(uint *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  bool bVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined1 auStack_9c [128];
  
  if ((char)param_1[4] == '\0') {
    uVar11 = param_1[3];
    *(undefined1 *)(param_1 + 4) = 1;
    puVar7 = (uint *)(param_1[2] + 0x38);
    uVar9 = *puVar7;
    if (uVar9 == uVar11) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar7);
        if (bVar1) {
          *puVar7 = uVar11 & 0xc0000000;
          bVar1 = true;
          goto LAB_01ab40e0;
        }
        uVar9 = *puVar7;
      } while (uVar9 == uVar11);
    }
    bVar1 = false;
    ClearExclusiveLocal();
LAB_01ab40e0:
    DataMemoryBarrier(0xb);
    if (!bVar1) {
      do {
        if ((uVar9 & 3) == 2) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005315bb,auStack_9c + 0x84,&DAT_01d2ecb0);
        }
        uVar11 = *puVar7;
        if (uVar11 == uVar9) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(puVar7);
            if (bVar1) {
              *puVar7 = param_1[3] & 0xc0000000 | 3;
              bVar1 = true;
              goto LAB_01ab4144;
            }
            uVar11 = *puVar7;
          } while (uVar11 == uVar9);
        }
        bVar1 = false;
        ClearExclusiveLocal();
LAB_01ab4144:
        DataMemoryBarrier(0xb);
        uVar9 = uVar11;
      } while (!bVar1);
      uVar9 = *param_1;
      piVar10 = (int *)param_1[1];
      uVar16 = thunk_FUN_01bee35a(piVar10,0x29c);
      piVar4 = (int *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
      DataMemoryBarrier(0xb);
      if (((char)piVar4[2] == '\x01') || (piVar4 = (int *)FUN_01abe644(), piVar4 != (int *)0x0)) {
        if (*piVar4 == 0) {
          iVar5 = FUN_01ac1a94();
        }
        else {
          iVar5 = piVar4[1];
        }
      }
      else {
        iVar5 = -1;
      }
      if (iVar5 == piVar10[4]) {
        puVar7 = (uint *)(0x20 - LZCOUNT((uVar9 & 0x3fffff) + 0x20 >> 6));
        if ((uint *)piVar10[3] <= puVar7) {
          return puVar7;
        }
        if ((uint *)piVar10[1] <= puVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(puVar7,(uint *)piVar10[1],&DAT_01d2ec80);
        }
        piVar4 = (int *)(piVar10[2] + (int)puVar7 * 0x14);
        if ((*piVar4 != 0) && (uVar11 = (uVar9 & 0x3fffff) - piVar4[4], uVar11 < (uint)piVar4[1])) {
          puVar7 = (uint *)(*piVar10 + (int)puVar7 * 4);
          uVar9 = uVar9 >> 0x1e;
          iVar5 = *piVar4 + uVar11 * 0x40;
          DataMemoryBarrier(0xb);
          if (uVar9 == *(uint *)(iVar5 + 0x38) >> 0x1e) {
            puVar12 = (uint *)(iVar5 + 0x38);
            iVar2 = 1;
            if (1 < uVar9) {
              iVar2 = -2;
            }
            uVar15 = 0;
            bVar1 = false;
            uVar14 = *(uint *)(iVar5 + 0x38);
            do {
              uVar6 = *puVar12;
              if (uVar6 == uVar14) {
                DataMemoryBarrier(0xb);
                do {
                  bVar8 = (bool)hasExclusiveAccess(puVar12);
                  if (bVar8) {
                    *puVar12 = uVar14 & 0x3fffffff | (uVar9 + iVar2) * 0x40000000;
                    bVar8 = true;
                    goto LAB_01ab386c;
                  }
                  uVar6 = *puVar12;
                } while (uVar6 == uVar14);
              }
              bVar8 = false;
              ClearExclusiveLocal();
LAB_01ab386c:
              DataMemoryBarrier(0xb);
              if (bVar8) {
                if ((uVar6 & 0x3ffffffc) == 0) {
                  FUN_01aba450(iVar5);
                  *(uint *)(iVar5 + 0x3c) = *puVar7;
                  *puVar7 = uVar11;
                  return (uint *)&DAT_00000001;
                }
                if ((uVar15 & 0x1f) == 0x1f) {
LAB_01ab38a8:
                  FUN_01bea67c();
                }
                else {
                  iVar3 = 1 << (uVar15 & 0x1f);
                  do {
                    iVar3 = iVar3 + -1;
                    HintYield();
                  } while (iVar3 != 0);
                  if (7 < uVar15) goto LAB_01ab38a8;
                  uVar15 = uVar15 + 1;
                }
                bVar1 = true;
                uVar6 = uVar14;
              }
              else {
                uVar15 = 0;
              }
              uVar14 = uVar6;
            } while ((bVar1) || (uVar9 == uVar6 >> 0x1e));
          }
          return (uint *)0x0;
        }
      }
      else {
        puVar7 = (uint *)(uVar9 & 0x3fffff);
        uVar11 = 0x20 - LZCOUNT((uint)(puVar7 + 8) >> 6);
        if (uVar11 < (uint)piVar10[3]) {
          piVar4 = (int *)(piVar10[2] + uVar11 * 0x14);
          if (*piVar4 != 0) {
            puVar12 = (uint *)((int)puVar7 - piVar4[4]);
            puVar7 = (uint *)piVar4[1];
            if (puVar12 < puVar7) {
              puVar7 = (uint *)(piVar4 + 2);
              uVar9 = uVar9 >> 0x1e;
              iVar5 = *piVar4 + (int)puVar12 * 0x40;
              DataMemoryBarrier(0xb);
              if (uVar9 == *(uint *)(iVar5 + 0x38) >> 0x1e) {
                puVar13 = (uint *)(iVar5 + 0x38);
                iVar2 = 1;
                if (1 < uVar9) {
                  iVar2 = -2;
                }
                uVar14 = 0;
                bVar1 = false;
                uVar11 = *(uint *)(iVar5 + 0x38);
                do {
                  uVar15 = *puVar13;
                  if (uVar15 == uVar11) {
                    DataMemoryBarrier(0xb);
                    do {
                      bVar8 = (bool)hasExclusiveAccess(puVar13);
                      if (bVar8) {
                        *puVar13 = uVar11 & 0x3fffffff | (uVar9 + iVar2) * 0x40000000;
                        bVar8 = true;
                        goto LAB_01ab3998;
                      }
                      uVar15 = *puVar13;
                    } while (uVar15 == uVar11);
                  }
                  bVar8 = false;
                  ClearExclusiveLocal();
LAB_01ab3998:
                  DataMemoryBarrier(0xb);
                  if (bVar8) {
                    if ((uVar15 & 0x3ffffffc) == 0) {
                      FUN_01aba450(iVar5);
                      uVar9 = *puVar7;
                      do {
                        *(uint *)(iVar5 + 0x3c) = uVar9;
                        uVar11 = *puVar7;
                        if (uVar11 == uVar9) {
                          DataMemoryBarrier(0xb);
                          do {
                            bVar1 = (bool)hasExclusiveAccess(puVar7);
                            if (bVar1) {
                              *puVar7 = (uint)puVar12;
                              bVar1 = true;
                              uVar9 = uVar11;
                              goto LAB_01ab3a58;
                            }
                            uVar11 = *puVar7;
                          } while (uVar11 == uVar9);
                        }
                        bVar1 = false;
                        ClearExclusiveLocal();
                        uVar9 = uVar11;
LAB_01ab3a58:
                        if (bVar1) {
                          return (uint *)&DAT_00000001;
                        }
                      } while( true );
                    }
                    if ((uVar14 & 0x1f) == 0x1f) {
LAB_01ab39d8:
                      FUN_01bea67c();
                    }
                    else {
                      iVar3 = 1 << (uVar14 & 0x1f);
                      do {
                        iVar3 = iVar3 + -1;
                        HintYield();
                      } while (iVar3 != 0);
                      if (7 < uVar14) goto LAB_01ab39d8;
                      uVar14 = uVar14 + 1;
                    }
                    bVar1 = true;
                    uVar15 = uVar11;
                  }
                  else {
                    uVar14 = 0;
                  }
                  uVar11 = uVar15;
                } while ((bVar1) || (uVar9 == uVar15 >> 0x1e));
              }
              return (uint *)0x0;
            }
          }
        }
      }
      return puVar7;
    }
  }
  return param_1;
}

