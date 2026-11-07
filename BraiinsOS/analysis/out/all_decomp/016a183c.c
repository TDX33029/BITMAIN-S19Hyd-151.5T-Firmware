// FUN_016a183c @ 016a183c size=1340 calls_out=7 calls_in=1
// strings: 

void FUN_016a183c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  bool bVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  int extraout_r2;
  uint uVar9;
  uint uVar10;
  int extraout_r3;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  undefined8 uVar19;
  undefined4 local_30;
  undefined4 *local_2c;
  code *local_28;
  
  uVar19 = thunk_FUN_016de0ee(param_1,param_1,param_3,0x298);
  piVar4 = (int *)((ulonglong)uVar19 >> 0x20);
  bVar1 = *(byte *)(piVar4 + 3);
  iVar15 = *(int *)((int)uVar19 + extraout_r3) + -1;
  *(int *)((int)uVar19 + extraout_r3) = iVar15;
  if ((iVar15 == 0) && ((bVar1 & 1) != 0)) {
    puVar3 = (undefined4 *)piVar4[2];
    uVar14 = *piVar4 - 1;
    uVar11 = (uVar14 & 0x3fffffff) >> 0x16;
    if (uVar11 < (uint)puVar3[1]) {
      uVar19 = thunk_FUN_016de0ee(puVar3,*puVar3,0x29c);
      piVar12 = *(int **)((int)((ulonglong)uVar19 >> 0x20) + uVar11 * 4);
      piVar4 = (int *)((int)uVar19 + extraout_r2);
      DataMemoryBarrier(0xb);
      if (((char)piVar4[2] == '\x01') || (piVar4 = (int *)FUN_016ac76c(), piVar4 != (int *)0x0)) {
        if (*piVar4 == 1) {
          uVar5 = piVar4[1];
        }
        else {
          uVar5 = FUN_009ee868();
        }
        if (uVar11 == uVar5) {
          if (piVar12 == (int *)0x0) {
            return;
          }
          uVar11 = 0x20 - LZCOUNT((uVar14 & 0x3fffff) + 0x20 >> 6);
          if ((uint)piVar12[3] <= uVar11) {
            return;
          }
          if ((uint)piVar12[1] <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar11,piVar12[1],&DAT_018ae704);
          }
          piVar4 = (int *)(piVar12[2] + uVar11 * 0x14);
          if (*piVar4 == 0) {
            return;
          }
          uVar5 = (uVar14 & 0x3fffff) - piVar4[4];
          if ((uint)piVar4[1] <= uVar5) {
            return;
          }
          iVar15 = *piVar12;
          iVar18 = *piVar4 + uVar5 * 0x40;
          puVar13 = (uint *)(iVar18 + 0x38);
          uVar10 = uVar14 >> 0x1e;
          DataMemoryBarrier(0xb);
          uVar9 = *(uint *)(iVar18 + 0x38);
          do {
            uVar17 = uVar9;
            if (uVar10 != uVar17 >> 0x1e) {
              return;
            }
            switch(uVar17 & 3) {
            case 1:
              goto switchD_016a1960_caseD_1;
            case 2:
              goto switchD_016a1960_caseD_2;
            case 3:
              return;
            }
            uVar9 = *puVar13;
            if (uVar9 == uVar17) {
              DataMemoryBarrier(0xb);
              do {
                bVar2 = (bool)hasExclusiveAccess(puVar13);
                if (bVar2) {
                  *puVar13 = uVar17 & 0xfffffffc | 1;
                  bVar2 = true;
                  goto LAB_016a19b4;
                }
                uVar9 = *puVar13;
              } while (uVar9 == uVar17);
            }
            bVar2 = false;
            ClearExclusiveLocal();
LAB_016a19b4:
            DataMemoryBarrier(0xb);
          } while (!bVar2);
switchD_016a1960_caseD_1:
          if ((uVar17 & 0x3ffffffc) != 0) {
            return;
          }
          DataMemoryBarrier(0xb);
          if (uVar10 != *puVar13 >> 0x1e) {
            return;
          }
          uVar17 = 0;
          bVar2 = false;
          uVar9 = *puVar13;
          do {
            uVar7 = *puVar13;
            if (uVar7 == uVar9) {
              DataMemoryBarrier(0xb);
              do {
                bVar8 = (bool)hasExclusiveAccess(puVar13);
                if (bVar8) {
                  *puVar13 = uVar9 & 0x3fffffff | (((int)uVar14 >> 0x1f ^ 1U) + uVar10) * 0x40000000
                  ;
                  bVar8 = true;
                  goto LAB_016a1a34;
                }
                uVar7 = *puVar13;
              } while (uVar7 == uVar9);
            }
            bVar8 = false;
            ClearExclusiveLocal();
LAB_016a1a34:
            DataMemoryBarrier(0xb);
            if (bVar8) {
              if ((uVar7 & 0x3ffffffc) == 0) {
                FUN_016a1db0(iVar18);
                *(undefined4 *)(iVar18 + 0x3c) = *(undefined4 *)(iVar15 + uVar11 * 4);
                *(uint *)(iVar15 + uVar11 * 4) = uVar5;
                return;
              }
              if ((uVar17 & 0x1f) == 0x1f) {
LAB_016a1a74:
                FUN_016da3a8();
              }
              else {
                iVar6 = 1 << (uVar17 & 0x1f);
                do {
                  iVar6 = iVar6 + -1;
                  HintYield();
                } while (iVar6 != 0);
                if (7 < uVar17) goto LAB_016a1a74;
                uVar17 = uVar17 + 1;
              }
              bVar2 = true;
              uVar7 = uVar9;
            }
            else {
              uVar17 = 0;
            }
            uVar9 = uVar7;
            if ((!bVar2) && (uVar10 != uVar7 >> 0x1e)) {
              return;
            }
          } while( true );
        }
      }
      if (piVar12 != (int *)0x0) {
        uVar11 = 0x20 - LZCOUNT((uVar14 & 0x3fffff) + 0x20 >> 6);
        if (uVar11 < (uint)piVar12[3]) {
          piVar4 = (int *)(piVar12[2] + uVar11 * 0x14);
          if ((*piVar4 != 0) && (uVar11 = (uVar14 & 0x3fffff) - piVar4[4], uVar11 < (uint)piVar4[1])
             ) {
            iVar15 = *piVar4 + uVar11 * 0x40;
            puVar16 = (uint *)(piVar4 + 2);
            puVar13 = (uint *)(iVar15 + 0x38);
            uVar5 = uVar14 >> 0x1e;
            DataMemoryBarrier(0xb);
            uVar10 = *(uint *)(iVar15 + 0x38);
            do {
              uVar9 = uVar10;
              if (uVar5 != uVar9 >> 0x1e) {
                return;
              }
              switch(uVar9 & 3) {
              case 1:
                goto switchD_016a1b88_caseD_1;
              case 2:
                goto switchD_016a1960_caseD_2;
              case 3:
                goto switchD_016a1960_caseD_3;
              }
              uVar10 = *puVar13;
              if (uVar10 == uVar9) {
                DataMemoryBarrier(0xb);
                do {
                  bVar2 = (bool)hasExclusiveAccess(puVar13);
                  if (bVar2) {
                    *puVar13 = uVar9 & 0xfffffffc | 1;
                    bVar2 = true;
                    goto LAB_016a1bdc;
                  }
                  uVar10 = *puVar13;
                } while (uVar10 == uVar9);
              }
              bVar2 = false;
              ClearExclusiveLocal();
LAB_016a1bdc:
              DataMemoryBarrier(0xb);
            } while (!bVar2);
switchD_016a1b88_caseD_1:
            if ((uVar9 & 0x3ffffffc) == 0) {
              DataMemoryBarrier(0xb);
              if (uVar5 == *puVar13 >> 0x1e) {
                uVar9 = 0;
                bVar2 = false;
                uVar10 = *puVar13;
                do {
                  uVar17 = *puVar13;
                  if (uVar17 == uVar10) {
                    DataMemoryBarrier(0xb);
                    do {
                      bVar8 = (bool)hasExclusiveAccess(puVar13);
                      if (bVar8) {
                        *puVar13 = uVar10 & 0x3fffffff |
                                   (((int)uVar14 >> 0x1f ^ 1U) + uVar5) * 0x40000000;
                        bVar8 = true;
                        goto LAB_016a1c5c;
                      }
                      uVar17 = *puVar13;
                    } while (uVar17 == uVar10);
                  }
                  bVar8 = false;
                  ClearExclusiveLocal();
LAB_016a1c5c:
                  DataMemoryBarrier(0xb);
                  if (bVar8) {
                    if ((uVar17 & 0x3ffffffc) == 0) {
                      FUN_016a1db0(iVar15);
                      uVar14 = *puVar16;
                      do {
                        *(uint *)(iVar15 + 0x3c) = uVar14;
                        uVar5 = *puVar16;
                        if (*puVar16 == uVar14) {
                          DataMemoryBarrier(0xb);
                          do {
                            bVar2 = (bool)hasExclusiveAccess(puVar16);
                            if (bVar2) {
                              *puVar16 = uVar11;
                              return;
                            }
                            uVar5 = *puVar16;
                          } while (*puVar16 == uVar14);
                        }
                        uVar14 = uVar5;
                        ClearExclusiveLocal();
                      } while( true );
                    }
                    if ((uVar9 & 0x1f) == 0x1f) {
LAB_016a1c9c:
                      FUN_016da3a8();
                    }
                    else {
                      iVar18 = 1 << (uVar9 & 0x1f);
                      do {
                        iVar18 = iVar18 + -1;
                        HintYield();
                      } while (iVar18 != 0);
                      if (7 < uVar9) goto LAB_016a1c9c;
                      uVar9 = uVar9 + 1;
                    }
                    bVar2 = true;
                    uVar17 = uVar10;
                  }
                  else {
                    uVar9 = 0;
                  }
                  uVar10 = uVar17;
                } while ((bVar2) || (uVar5 == uVar17 >> 0x1e));
              }
            }
          }
        }
      }
    }
    else {
      uVar19 = thunk_FUN_016de0ee(puVar3,0x29c);
      piVar4 = (int *)((int)uVar19 + (int)((ulonglong)uVar19 >> 0x20));
      if ((((char)piVar4[2] == '\x01') || (piVar4 = (int *)FUN_016ac76c(), piVar4 != (int *)0x0)) &&
         (*piVar4 == 0)) {
        FUN_009ee868();
        return;
      }
    }
  }
switchD_016a1960_caseD_3:
  return;
switchD_016a1960_caseD_2:
  local_30 = 2;
  local_28 = FUN_00facc48;
  local_2c = &local_30;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_0041504f,&local_2c,&DAT_018ae754);
}

