// FUN_016c3df0 @ 016c3df0 size=2040 calls_out=17 calls_in=2
// strings: 

void FUN_016c3df0(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  uint local_98 [4];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  uint local_78 [4];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58 [4];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  iVar19 = *param_1;
  iVar8 = 0xc;
  if ((*(byte *)(iVar19 + 0x51) & 1) != 0) {
    iVar8 = *(int *)(*(int *)(iVar19 + 0x278) + 0x154) * 6 + 0xc;
  }
  iVar16 = param_1[1];
  FUN_016c29d4(iVar16 + 0x80,iVar8);
  uVar20 = FUN_01689fcc();
  iVar8 = (int)((ulonglong)uVar20 >> 0x20);
  piVar3 = (int *)uVar20;
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + 1;
  if (-1 < iVar4) {
    iVar4 = FUN_016c47d4(iVar16);
    if (((*(uint *)(iVar19 + 0x280) <
          iVar4 + iVar8 + (4 << (*(uint *)(iVar19 + 0x27c) & 0x1f)) + 0x14U) &&
        (iVar4 = FUN_016c4838(param_1), iVar4 != 0)) ||
       (uVar21 = FUN_016c48d0(param_1), (uVar21 & 1) != 0)) {
      DataMemoryBarrier(0xb);
      do {
        iVar19 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar19 + -1;
      puVar11 = &UNK_01d09310;
LAB_016c4598:
      if (iVar19 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(piVar3,iVar8);
      }
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_28,&DAT_01d09450,puVar11);
    }
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(0,0,&DAT_01d0785c);
    }
    uVar15 = 0x88000000;
    if ((*(byte *)(piVar3 + 2) & 1) == 0) {
      uVar15 = 0x80000000;
    }
    iVar4 = iVar16 + 0x74;
    FUN_016c29d4(iVar4,1 << (*(uint *)(iVar19 + 0x27c) & 0x1f));
    iVar5 = iVar19 + 600;
    uVar15 = (uint)(uVar21 >> 0x20) | uVar15;
    iVar6 = thunk_FUN_01bed842(iVar5,"",0x20);
    if ((iVar6 != 0) && (iVar6 = FUN_016c4790(iVar19,uVar15), iVar6 == 0)) {
      uVar7 = FUN_016c4958(*(undefined4 *)(iVar19 + 0x27c));
      uVar13 = 0;
      while( true ) {
        uVar14 = uVar13;
        if (uVar13 < 0x101) {
          uVar14 = 0x100;
        }
        do {
          uVar17 = uVar13;
          if (uVar14 == uVar17) goto LAB_016c3f24;
          puVar12 = (uint *)(iVar5 + (uVar17 >> 3 & 0xfffffff0));
          local_58[3] = puVar12[3];
          local_3c = 0;
          local_40 = 0;
          local_44 = 0;
          local_48 = 0;
          local_58[0] = *puVar12;
          local_58[2] = puVar12[2];
          local_58[1] = puVar12[1];
          uVar13 = uVar17 + 1;
        } while ((*(uint *)((int)local_58 + ((uVar17 & 0x60) >> 3)) >> (uVar17 & 0x1f) & 1) == 0);
        if (0xff < uVar17) break;
        FUN_016c49b8(iVar19,iVar16,uVar15,uVar17 << 8,uVar7);
      }
    }
LAB_016c3f24:
    *(int *)(iVar16 + 0x68) = *(int *)(iVar16 + 0x68) + iVar8;
    do {
      iVar6 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar6 + 1;
    if (-1 < iVar6) {
      piVar9 = (int *)(iVar16 + 0x8c);
      iVar6 = *(int *)(iVar16 + 0x94);
      if (iVar6 == *piVar9) {
        FUN_015f5ab8(piVar9);
      }
      *(undefined8 *)(*(int *)(iVar16 + 0x90) + iVar6 * 8) = uVar20;
      *(int *)(iVar16 + 0x94) = iVar6 + 1;
      FUN_016c920c(iVar16,piVar3,iVar8,uVar15);
      do {
        iVar6 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar6 + 1;
      local_34 = uVar15;
      if (-1 < iVar6) {
        iVar6 = FUN_016c47d4(iVar16);
        if (((*(uint *)(iVar19 + 0x280) <
              iVar6 + iVar8 + (4 << (*(uint *)(iVar19 + 0x27c) & 0x1f)) + 0x14U) &&
            (iVar6 = FUN_016c4838(param_1), iVar6 != 0)) ||
           (uVar21 = FUN_016c48d0(param_1), (uVar21 & 1) != 0)) {
          DataMemoryBarrier(0xb);
          do {
            iVar19 = *piVar3;
            bVar2 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar2);
          *piVar3 = iVar19 + -1;
          puVar11 = &UNK_01d09320;
          goto LAB_016c4598;
        }
        uVar13 = 0x48000000;
        if ((*(byte *)(piVar3 + 2) & 1) == 0) {
          uVar13 = 0x40000000;
        }
        FUN_016c29d4(iVar4,1 << (*(uint *)(iVar19 + 0x27c) & 0x1f));
        uVar13 = (uint)(uVar21 >> 0x20) | uVar13;
        iVar6 = thunk_FUN_01bed842(iVar5,"",0x20);
        if ((iVar6 != 0) && (iVar6 = FUN_016c4790(iVar19,uVar13), iVar6 == 0)) {
          uVar7 = FUN_016c4958(*(undefined4 *)(iVar19 + 0x27c));
          uVar14 = 0;
          while( true ) {
            uVar17 = uVar14;
            if (uVar14 < 0x101) {
              uVar17 = 0x100;
            }
            do {
              uVar10 = uVar14;
              if (uVar17 == uVar10) goto LAB_016c4078;
              puVar12 = (uint *)(iVar5 + (uVar10 >> 3 & 0xfffffff0));
              local_78[0] = *puVar12;
              local_78[3] = puVar12[3];
              uVar14 = uVar10 + 1;
              local_5c = 0;
              local_60 = 0;
              local_64 = 0;
              local_68 = 0;
              local_78[2] = puVar12[2];
              local_78[1] = puVar12[1];
            } while ((*(uint *)((int)local_78 + ((uVar10 & 0x60) >> 3)) >> (uVar10 & 0x1f) & 1) == 0
                    );
            if (0xff < uVar10) break;
            FUN_016c49b8(iVar19,iVar16,uVar13,uVar10 << 8,uVar7);
          }
        }
LAB_016c4078:
        *(int *)(iVar16 + 0x68) = *(int *)(iVar16 + 0x68) + iVar8;
        do {
          iVar6 = *piVar3;
          bVar2 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar2);
        *piVar3 = iVar6 + 1;
        if (-1 < iVar6) {
          iVar6 = *(int *)(iVar16 + 0x94);
          if (iVar6 == *(int *)(iVar16 + 0x8c)) {
            FUN_015f5ab8(piVar9);
          }
          *(undefined8 *)(*(int *)(iVar16 + 0x90) + iVar6 * 8) = uVar20;
          *(int *)(iVar16 + 0x94) = iVar6 + 1;
          FUN_016c920c(iVar16,piVar3,iVar8,uVar13);
          do {
            iVar6 = *piVar3;
            bVar2 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar2);
          *piVar3 = iVar6 + 1;
          local_30 = uVar13;
          if (-1 < iVar6) {
            iVar6 = FUN_016c47d4(iVar16);
            if (((*(uint *)(iVar19 + 0x280) <
                  iVar6 + iVar8 + (4 << (*(uint *)(iVar19 + 0x27c) & 0x1f)) + 0x14U) &&
                (iVar6 = FUN_016c4838(param_1), iVar6 != 0)) ||
               (uVar21 = FUN_016c48d0(param_1), (uVar21 & 1) != 0)) {
              DataMemoryBarrier(0xb);
              do {
                iVar19 = *piVar3;
                bVar2 = (bool)hasExclusiveAccess(piVar3);
              } while (!bVar2);
              *piVar3 = iVar19 + -1;
              puVar11 = &DAT_01d09330;
              goto LAB_016c4598;
            }
            uVar14 = 0x28000000;
            if ((*(byte *)(piVar3 + 2) & 1) == 0) {
              uVar14 = 0x20000000;
            }
            FUN_016c29d4(iVar4,1 << (*(uint *)(iVar19 + 0x27c) & 0x1f));
            uVar14 = (uint)(uVar21 >> 0x20) | uVar14;
            iVar4 = thunk_FUN_01bed842(iVar5,"",0x20);
            if ((iVar4 != 0) && (iVar4 = FUN_016c4790(iVar19,uVar14), iVar4 == 0)) {
              uVar7 = FUN_016c4958(*(undefined4 *)(iVar19 + 0x27c));
              uVar17 = 0;
              while( true ) {
                uVar10 = uVar17;
                if (uVar17 < 0x101) {
                  uVar10 = 0x100;
                }
                do {
                  uVar18 = uVar17;
                  if (uVar10 == uVar18) goto LAB_016c41c4;
                  puVar12 = (uint *)(iVar5 + (uVar18 >> 3 & 0xfffffff0));
                  local_98[3] = puVar12[3];
                  local_98[0] = *puVar12;
                  local_98[1] = puVar12[1];
                  local_98[2] = puVar12[2];
                  uVar17 = uVar18 + 1;
                  local_7c = 0;
                  local_80 = 0;
                  local_84 = 0;
                  local_88 = 0;
                } while ((*(uint *)((int)local_98 + ((uVar18 & 0x60) >> 3)) >> (uVar18 & 0x1f) & 1)
                         == 0);
                if (0xff < uVar18) break;
                FUN_016c49b8(iVar19,iVar16,uVar14,uVar18 << 8,uVar7);
              }
            }
LAB_016c41c4:
            *(int *)(iVar16 + 0x68) = *(int *)(iVar16 + 0x68) + iVar8;
            do {
              iVar4 = *piVar3;
              bVar2 = (bool)hasExclusiveAccess(piVar3);
            } while (!bVar2);
            *piVar3 = iVar4 + 1;
            if (-1 < iVar4) {
              iVar4 = *(int *)(iVar16 + 0x94);
              if (iVar4 == *(int *)(iVar16 + 0x8c)) {
                FUN_015f5ab8(piVar9);
              }
              *(undefined8 *)(*(int *)(iVar16 + 0x90) + iVar4 * 8) = uVar20;
              *(int *)(iVar16 + 0x94) = iVar4 + 1;
              FUN_016c920c(iVar16,piVar3,iVar8,uVar14);
              local_28 = 0x80000000;
              local_2c = uVar14;
              if (uVar15 == 0x80000000) {
                local_28 = FUN_016c4c8c(*(undefined4 *)(iVar19 + 0x27c));
                if (uVar13 == local_28) {
                  local_28 = FUN_016c4958(*(undefined4 *)(iVar19 + 0x27c));
                  if (uVar14 == local_28) {
                    FUN_016c4cec(iVar19,iVar16,0x80000000,0x80000000);
                    FUN_016c4cec(iVar19,iVar16,uVar13,uVar13);
                    FUN_016c4cec(iVar19,iVar16,uVar14,uVar14);
                    FUN_016c920c(iVar16,piVar3,iVar8,uVar13);
                    return;
                  }
                  puVar12 = &local_2c;
                  puVar11 = &DAT_01d09360;
                }
                else {
                  puVar12 = &local_30;
                  puVar11 = &DAT_01d09350;
                }
              }
              else {
                puVar12 = &local_34;
                puVar11 = &DAT_01d09340;
              }
              FUN_016cbeac(puVar12,&local_28,puVar11);
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x16c45e8);
  (*pcVar1)();
}

