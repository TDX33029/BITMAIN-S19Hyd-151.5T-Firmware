// FUN_0162766c @ 0162766c size=964 calls_out=3 calls_in=7
// strings: 

/* WARNING: Removing unreachable block (ram,0x01627900) */

void FUN_0162766c(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  
  uVar11 = *(uint *)(*param_2 + 0x80);
  puVar2 = (uint *)(*param_2 + 0x80);
  DataMemoryBarrier(0xb);
  do {
    if ((uVar11 & 1) != 0) {
      param_1[2] = param_3;
      param_1[3] = param_4;
      uVar10 = 1;
LAB_01627744:
      *param_1 = uVar10;
      param_1[1] = 0;
      return;
    }
    if (uVar11 + 2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_015bef44();
    }
    uVar12 = *puVar2;
    if (*puVar2 == uVar11) {
      DataMemoryBarrier(0xb);
      do {
        bVar16 = (bool)hasExclusiveAccess(puVar2);
        if (bVar16) {
          *puVar2 = uVar11 + 2;
          DataMemoryBarrier(0xb);
          iVar15 = *param_2;
          puVar2 = (uint *)(iVar15 + 0x24);
          piVar13 = (int *)(iVar15 + 0x20);
          do {
            uVar11 = *puVar2;
            bVar16 = (bool)hasExclusiveAccess(puVar2);
          } while (!bVar16);
          *puVar2 = uVar11 + 1;
          DataMemoryBarrier(0xb);
          uVar12 = uVar11 & 0xfffffff0;
          iVar3 = *piVar13;
          DataMemoryBarrier(0xb);
          if (uVar12 != *(uint *)(iVar3 + 0x80)) {
            bVar16 = (uVar11 & 0xf) < uVar12 - *(uint *)(iVar3 + 0x80) >> 4;
            iVar4 = iVar3;
            do {
              DataMemoryBarrier(0xb);
              iVar3 = *(int *)(iVar4 + 0x84);
              if (*(int *)(iVar4 + 0x84) == 0) {
                iVar14 = *(int *)(iVar4 + 0x80);
                iVar3 = thunk_FUN_016d4a50(0x90);
                if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600874(8,0x90);
                }
                piVar7 = (int *)(iVar4 + 0x84);
                *(int *)(iVar3 + 0x80) = iVar14 + 0x10;
                *(undefined4 *)(iVar3 + 0x84) = 0;
                *(undefined4 *)(iVar3 + 0x88) = 0;
                *(undefined4 *)(iVar3 + 0x8c) = 0;
                iVar14 = *piVar7;
                if (iVar14 != 0) {
LAB_016277f8:
                  ClearExclusiveLocal();
                  DataMemoryBarrier(0xb);
                  piVar7 = (int *)(iVar14 + 0x84);
                  *(int *)(iVar3 + 0x80) = *(int *)(iVar14 + 0x80) + 0x10;
                  iVar8 = *piVar7;
                  if (iVar8 == 0) {
                    DataMemoryBarrier(0xb);
                    do {
                      bVar1 = (bool)hasExclusiveAccess(piVar7);
                      if (bVar1) {
                        *piVar7 = iVar3;
                        bVar1 = true;
                        goto LAB_0162784c;
                      }
                      iVar8 = *piVar7;
                    } while (iVar8 == 0);
                  }
LAB_01627844:
                  do {
                    bVar1 = false;
                    ClearExclusiveLocal();
LAB_0162784c:
                    while( true ) {
                      DataMemoryBarrier(0xb);
                      if (bVar1) {
                        iVar3 = iVar14;
                        goto LAB_016278a4;
                      }
                      HintYield();
                      *(int *)(iVar3 + 0x80) = *(int *)(iVar8 + 0x80) + 0x10;
                      piVar7 = (int *)(iVar8 + 0x84);
                      iVar8 = *piVar7;
                      if (iVar8 != 0) break;
                      DataMemoryBarrier(0xb);
                      while (bVar1 = (bool)hasExclusiveAccess(piVar7), !bVar1) {
                        iVar8 = *piVar7;
                        if (iVar8 != 0) goto LAB_01627844;
                      }
                      *piVar7 = iVar3;
                      bVar1 = true;
                    }
                  } while( true );
                }
                DataMemoryBarrier(0xb);
                while (bVar1 = (bool)hasExclusiveAccess(piVar7), !bVar1) {
                  iVar14 = *piVar7;
                  if (iVar14 != 0) goto LAB_016277f8;
                }
                *piVar7 = iVar3;
                DataMemoryBarrier(0xb);
              }
LAB_016278a4:
              DataMemoryBarrier(0xb);
              if ((bool)(bVar16 & (~*(uint *)(iVar4 + 0x88) & 0xffff) == 0)) {
                if (*piVar13 == iVar4) {
                  DataMemoryBarrier(0xb);
                  do {
                    bVar16 = (bool)hasExclusiveAccess(piVar13);
                    if (bVar16) {
                      *piVar13 = iVar3;
                      puVar5 = (uint *)(iVar4 + 0x88);
                      DataMemoryBarrier(0xb);
                      do {
                        uVar9 = *puVar2;
                        bVar16 = (bool)hasExclusiveAccess(puVar2);
                      } while (!bVar16);
                      *puVar2 = uVar9;
                      *(uint *)(iVar4 + 0x8c) = uVar9;
                      DataMemoryBarrier(0xb);
                      do {
                        bVar16 = (bool)hasExclusiveAccess(puVar5);
                      } while (!bVar16);
                      *puVar5 = *puVar5 | 0x10000;
                      bVar16 = true;
                      goto LAB_01627780;
                    }
                  } while (*piVar13 == iVar4);
                }
                ClearExclusiveLocal();
                bVar16 = false;
              }
              else {
                bVar16 = false;
              }
LAB_01627780:
              HintYield();
              iVar4 = iVar3;
            } while (*(uint *)(iVar3 + 0x80) != uVar12);
          }
          puVar2 = (uint *)(iVar3 + 0x88);
          puVar6 = (undefined4 *)(iVar3 + (uVar11 & 0xf) * 8);
          *puVar6 = param_3;
          puVar6[1] = param_4;
          DataMemoryBarrier(0xb);
          do {
            bVar16 = (bool)hasExclusiveAccess(puVar2);
          } while (!bVar16);
          *puVar2 = *puVar2 | 1 << (uVar11 & 0xf);
          puVar2 = (uint *)(iVar15 + 0x48);
          DataMemoryBarrier(0xb);
          do {
            uVar11 = *puVar2;
            bVar16 = (bool)hasExclusiveAccess(puVar2);
          } while (!bVar16);
          *puVar2 = uVar11 | 2;
          uVar10 = 0;
          DataMemoryBarrier(0xb);
          if (uVar11 == 0) {
            iVar3 = *(int *)(iVar15 + 0x40);
            *(undefined4 *)(iVar15 + 0x40) = 0;
            DataMemoryBarrier(0xb);
            do {
              bVar16 = (bool)hasExclusiveAccess(puVar2);
            } while (!bVar16);
            *puVar2 = 0;
            if (iVar3 != 0) {
              (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar15 + 0x44));
            }
            *param_1 = 0;
            param_1[1] = 0;
            return;
          }
          goto LAB_01627744;
        }
        uVar12 = *puVar2;
      } while (*puVar2 == uVar11);
    }
    uVar11 = uVar12;
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
  } while( true );
}

