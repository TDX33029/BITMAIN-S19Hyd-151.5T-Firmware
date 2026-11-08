// FUN_01260d78 @ 01260d78 size=688 calls_out=3 calls_in=2
// strings: 

void FUN_01260d78(undefined4 *param_1,int param_2,int *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  
  if (0x7ffffffe < *(uint *)(param_2 + 8)) {
    FUN_00fb71b0(&DAT_0188ad58);
LAB_01261024:
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xfdee,0x1261024);
    (*pcVar2)();
  }
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) + 1;
  if (*(int *)(param_2 + 0x1c) == 0) {
LAB_01260f5c:
    *param_1 = 0;
LAB_01261004:
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
    return;
  }
  uVar4 = FUN_011e0114(param_2 + 0x20,param_3);
  uVar1 = uVar4 >> 0x19;
  piVar6 = param_3 + 1;
  uVar12 = *(uint *)(param_2 + 0x14);
  iVar16 = *(int *)(param_2 + 0x10);
  iVar7 = *param_3;
  if (*piVar6 == 0) {
    piVar6 = (int *)0x0;
  }
  iVar19 = 0;
  do {
    uVar4 = uVar12 & uVar4;
    uVar10 = *(uint *)(iVar16 + uVar4);
    uVar5 = uVar10 ^ uVar1 * 0x1010101;
    for (uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      iVar15 = iVar16 + (uVar4 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                                (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                        uVar12) * -0x1c;
      iVar8 = *(int *)(iVar15 + -0x1c);
      if ((iVar7 == iVar8) ||
         ((*(int *)(iVar7 + 0x10) == *(int *)(iVar8 + 0x10) &&
          (iVar8 = thunk_FUN_016dd50a(*(undefined4 *)(iVar7 + 0xc),*(undefined4 *)(iVar8 + 0xc)),
          iVar8 == 0)))) {
        piVar17 = (int *)(iVar15 + -0x18);
        piVar11 = piVar6;
        if (*piVar17 == 0) {
          piVar17 = (int *)0x0;
        }
        do {
          if (piVar11 == (int *)0x0) {
            if (piVar17 == (int *)0x0) {
              piVar6 = *(int **)(iVar15 + -0x14);
              do {
                iVar7 = *piVar6;
                bVar3 = (bool)hasExclusiveAccess(piVar6);
              } while (!bVar3);
              *piVar6 = iVar7 + 1;
              if (iVar7 < 0) goto LAB_01261024;
              piVar17 = *(int **)(iVar15 + -0x10);
              do {
                iVar7 = *piVar17;
                bVar3 = (bool)hasExclusiveAccess(piVar17);
              } while (!bVar3);
              *piVar17 = iVar7 + 1;
              if (iVar7 < 0) goto LAB_01261024;
              piVar11 = *(int **)(iVar15 + -4);
              uVar20 = *(undefined4 *)(iVar15 + -0xc);
              if (piVar11 != (int *)0x0) {
                do {
                  iVar7 = *piVar11;
                  bVar3 = (bool)hasExclusiveAccess(piVar11);
                } while (!bVar3);
                *piVar11 = iVar7 + 1;
                if (iVar7 < 0) goto LAB_01261024;
              }
              piVar14 = *(int **)(iVar15 + -8);
              do {
                iVar7 = *piVar14;
                bVar3 = (bool)hasExclusiveAccess(piVar14);
              } while (!bVar3);
              *piVar14 = iVar7 + 1;
              if (iVar7 < 0) goto LAB_01261024;
              *param_1 = piVar6;
              param_1[1] = piVar17;
              param_1[2] = uVar20;
              param_1[3] = piVar14;
              param_1[4] = piVar11;
              goto LAB_01261004;
            }
            break;
          }
          if (piVar17 == (int *)0x0) break;
          iVar8 = *(int *)(*piVar11 + 8);
          iVar9 = *(int *)(*piVar17 + 8);
          if (*(int *)(iVar8 + 0x10) != *(int *)(iVar9 + 0x10)) break;
          piVar17 = (int *)(*piVar17 + 0xc);
          iVar13 = *piVar17;
          piVar11 = (int *)(*piVar11 + 0xc);
          iVar18 = *piVar11;
          iVar8 = thunk_FUN_016dd50a(*(undefined4 *)(iVar8 + 0xc),*(undefined4 *)(iVar9 + 0xc));
          if (iVar18 == 0) {
            piVar11 = (int *)0x0;
          }
          if (iVar13 == 0) {
            piVar17 = (int *)0x0;
          }
        } while (iVar8 == 0);
      }
    }
    if ((uVar10 & 0x80808080 & uVar10 << 1) != 0) goto LAB_01260f5c;
    iVar19 = iVar19 + 4;
    uVar4 = uVar4 + iVar19;
  } while( true );
}

