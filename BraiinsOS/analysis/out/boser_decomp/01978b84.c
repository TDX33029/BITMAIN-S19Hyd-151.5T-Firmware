// FUN_01978b84 @ 01978b84 size=956 calls_out=5 calls_in=0
// strings: 

void FUN_01978b84(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  code *pcVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  bool bVar20;
  int local_34;
  
  if (DAT_01d51a30 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d2745c);
  }
  DataMemoryBarrier(0xb);
  piVar16 = &DAT_01d51a4c + (DAT_01d51a60 & 1);
  do {
    iVar6 = *piVar16;
    bVar20 = (bool)hasExclusiveAccess(piVar16);
  } while (!bVar20);
  *piVar16 = iVar6 + 1;
  piVar10 = DAT_01d51a5c;
  DataMemoryBarrier(0xb);
  if (-1 < iVar6) {
    DataMemoryBarrier(0xb);
    DataMemoryBarrier(0xb);
    piVar19 = &DAT_01d51a34 + (DAT_01d51a48 & 1);
    do {
      iVar6 = *piVar19;
      bVar20 = (bool)hasExclusiveAccess(piVar19);
    } while (!bVar20);
    *piVar19 = iVar6 + 1;
    piVar4 = DAT_01d51a44;
    DataMemoryBarrier(0xb);
    if (-1 < iVar6) {
      DataMemoryBarrier(0xb);
      if (DAT_01d51a44[3] != 0) {
        uVar5 = FUN_01656218(DAT_01d51a44[4],DAT_01d51a44[5],DAT_01d51a44[6],DAT_01d51a44[7],param_1
                            );
        uVar15 = uVar5 >> 0x19;
        iVar6 = *piVar4;
        uVar8 = piVar4[1];
        local_34 = 0;
        while( true ) {
          uVar5 = uVar8 & uVar5;
          uVar12 = *(uint *)(iVar6 + uVar5);
          uVar11 = uVar12 ^ uVar15 * 0x1010101;
          uVar11 = ~uVar11 & 0x80808080 & uVar11 + 0xfefefeff;
          while (uVar11 != 0) {
            uVar14 = uVar11 >> 8;
            uVar1 = uVar11 >> 0x10;
            uVar2 = uVar11 >> 0x18;
            uVar3 = uVar11 << 0x18;
            uVar11 = uVar11 - 1 & uVar11;
            uVar14 = uVar5 + ((uint)LZCOUNT(uVar3 | (uVar14 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 |
                                            uVar2) >> 3) & uVar8;
            if (param_1 == *(int *)(iVar6 + -0xa0 + uVar14 * -0xa0)) {
              iVar6 = iVar6 + uVar14 * -0xa0;
              pcVar9 = *(code **)(iVar6 + -0x98);
              if (&DAT_00000001 < pcVar9) {
                if ((*(byte *)(iVar6 + -0x14) & 4) == 0) {
                  (*pcVar9)(param_1);
                }
                else {
                  (*pcVar9)(param_1,param_2,param_3);
                }
              }
              if (param_2 == 0) {
                FUN_01978f68();
                DataMemoryBarrier(0xb);
                do {
                  bVar20 = (bool)hasExclusiveAccess(piVar19);
                } while (!bVar20);
                *piVar19 = *piVar19 + -1;
                DataMemoryBarrier(0xb);
                do {
                  bVar20 = (bool)hasExclusiveAccess(piVar16);
                } while (!bVar20);
                *piVar16 = *piVar16 + -1;
                DataMemoryBarrier(0xb);
                    /* WARNING: Subroutine does not return */
                FUN_01307c48();
              }
              iVar17 = *(int *)(iVar6 + -4);
              uVar15 = *(uint *)(iVar6 + -8);
              iVar13 = *(int *)(iVar6 + -0xc);
              iVar6 = 0;
              if (iVar13 == 0) {
                iVar17 = 0;
                bVar20 = false;
              }
              else {
                bVar20 = true;
              }
              for (; iVar17 != 0; iVar17 = iVar17 + -1) {
                if (!bVar20) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0cc(&DAT_01d2ffe0);
                }
                if (iVar6 == 0) {
                  uVar5 = 0;
                  iVar6 = iVar13;
                  for (; uVar15 != 0; uVar15 = uVar15 - 1) {
                    iVar6 = *(int *)(iVar6 + 0x110);
                  }
                  iVar13 = 0;
                }
                else {
                  uVar5 = uVar15;
                }
                iVar18 = iVar6;
                if (*(ushort *)(iVar6 + 0x10e) <= uVar5) {
                  do {
                    iVar6 = *(int *)(iVar18 + 0x108);
                    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_012fb0cc(&DAT_01d2fff0);
                    }
                    uVar5 = (uint)*(ushort *)(iVar18 + 0x10c);
                    iVar13 = iVar13 + 1;
                    iVar18 = iVar6;
                  } while (*(ushort *)(iVar6 + 0x10e) <= uVar5);
                }
                if (iVar13 == 0) {
                  uVar15 = uVar5 + 1;
                  iVar18 = iVar6;
                }
                else {
                  piVar10 = (int *)(iVar6 + uVar5 * 4 + 0x114);
                  do {
                    iVar18 = *piVar10;
                    iVar13 = iVar13 + -1;
                    piVar10 = (int *)(iVar18 + 0x110);
                  } while (iVar13 != 0);
                  uVar15 = 0;
                }
                iVar6 = iVar6 + uVar5 * 8;
                bVar20 = true;
                iVar13 = 0;
                iVar7 = *(int *)(iVar6 + 0xb4);
                (**(code **)(iVar7 + 0x14))
                          (*(int *)(iVar6 + 0xb0) + (*(int *)(iVar7 + 8) - 1U & 0xfffffff8) + 8,
                           param_2);
                iVar6 = iVar18;
              }
              goto LAB_01978d40;
            }
          }
          if ((uVar12 & 0x80808080 & uVar12 << 1) != 0) break;
          local_34 = local_34 + 4;
          uVar5 = uVar5 + local_34;
        }
      }
      iVar6 = *piVar10;
      bVar20 = iVar6 == 1;
      if (bVar20) {
        iVar6 = piVar10[1];
      }
      if ((bVar20 && iVar6 == param_1) && (pcVar9 = (code *)piVar10[2], &DAT_00000001 < pcVar9)) {
        if ((*(byte *)(piVar10 + 0x23) & 4) == 0) {
          (*pcVar9)(param_1);
        }
        else {
          (*pcVar9)(param_1,param_2,param_3);
        }
      }
LAB_01978d40:
      DataMemoryBarrier(0xb);
      do {
        bVar20 = (bool)hasExclusiveAccess(piVar19);
      } while (!bVar20);
      *piVar19 = *piVar19 + -1;
      DataMemoryBarrier(0xb);
      do {
        bVar20 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar20);
      *piVar16 = *piVar16 + -1;
      DataMemoryBarrier(0xb);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01be32a0();
}

