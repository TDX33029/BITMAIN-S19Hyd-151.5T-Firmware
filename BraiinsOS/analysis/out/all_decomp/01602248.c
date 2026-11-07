// FUN_01602248 @ 01602248 size=768 calls_out=3 calls_in=1
// strings: 

void FUN_01602248(int *param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  
  iVar17 = param_1[3];
  uVar18 = (uint)*(ushort *)(iVar17 + 0x10e);
  if (0xb < param_2 + uVar18) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00410b6b,0x32,&DAT_018ab3a8);
  }
  iVar11 = param_1[5];
  uVar4 = (uint)*(ushort *)(iVar11 + 0x10e);
  if (uVar4 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00410b9d,0x28,&DAT_018ab3b8);
  }
  *(ushort *)(iVar17 + 0x10e) = (ushort)(param_2 + uVar18);
  iVar7 = param_2 * 0xc + -0xc;
  iVar12 = iVar11 + 0x88;
  iVar9 = uVar4 - param_2;
  puVar13 = (undefined4 *)(iVar12 + iVar7);
  uVar20 = *puVar13;
  iVar16 = iVar11 + 4;
  uVar2 = puVar13[2];
  uVar5 = puVar13[1];
  iVar15 = *param_1 + param_1[2] * 0xc;
  puVar13 = (undefined4 *)(iVar16 + iVar7);
  uVar6 = *puVar13;
  *(ushort *)(iVar11 + 0x10e) = (ushort)iVar9;
  uVar3 = puVar13[1];
  uVar8 = *(undefined4 *)(iVar15 + 0xc);
  *(undefined4 *)(iVar15 + 0xc) = puVar13[2];
  uVar10 = *(undefined4 *)(iVar15 + 4);
  uVar14 = *(undefined4 *)(iVar15 + 8);
  *(undefined4 *)(iVar15 + 8) = uVar3;
  uVar19 = *(undefined4 *)(iVar15 + 0x88);
  uVar21 = *(undefined4 *)(iVar15 + 0x8c);
  *(undefined4 *)(iVar15 + 4) = uVar6;
  uVar3 = *(undefined4 *)(iVar15 + 0x90);
  *(undefined4 *)(iVar15 + 0x88) = uVar20;
  *(undefined4 *)(iVar15 + 0x8c) = uVar5;
  *(undefined4 *)(iVar15 + 0x90) = uVar2;
  puVar13 = (undefined4 *)(iVar17 + 4 + uVar18 * 0xc);
  *puVar13 = uVar10;
  puVar13[1] = uVar14;
  puVar13[2] = uVar8;
  puVar13 = (undefined4 *)(iVar17 + 0x88 + uVar18 * 0xc);
  *puVar13 = uVar19;
  puVar13[1] = uVar21;
  puVar13[2] = uVar3;
  iVar15 = uVar18 * 0xc + 0xc;
  FUN_016dd1aa(iVar17 + 4 + iVar15,iVar16,iVar7);
  FUN_016dd1aa(iVar17 + 0x88 + iVar15,iVar12,iVar7);
  FUN_016dd52c(iVar16,iVar16 + param_2 * 0xc,iVar9 * 0xc);
  FUN_016dd52c(iVar12,iVar12 + param_2 * 0xc,iVar9 * 0xc);
  if (param_1[4] == 0) {
    if (param_1[6] != 0) goto LAB_01602530;
  }
  else {
    if (param_1[6] == 0) {
LAB_01602530:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018ab3c8);
    }
    iVar15 = uVar18 + 1;
    iVar12 = iVar17 + 0x110;
    iVar7 = iVar11 + 0x110;
    FUN_016dd1aa(iVar12 + iVar15 * 4,iVar7,param_2 << 2);
    FUN_016dd52c(iVar7,iVar7 + param_2 * 4,iVar9 * 4 + 4);
    piVar1 = *(int **)(iVar12 + iVar15 * 4);
    *piVar1 = iVar17;
    *(short *)(piVar1 + 0x43) = (short)iVar15;
    if (param_2 != 1) {
      piVar1 = *(int **)(iVar12 + (uVar18 + 2) * 4);
      *piVar1 = iVar17;
      *(short *)(piVar1 + 0x43) = (short)(uVar18 + 2);
      if (param_2 != 2) {
        piVar1 = *(int **)(iVar12 + (uVar18 + 3) * 4);
        *piVar1 = iVar17;
        *(short *)(piVar1 + 0x43) = (short)(uVar18 + 3);
        if (param_2 != 3) {
          piVar1 = *(int **)(iVar12 + (uVar18 + 4) * 4);
          *piVar1 = iVar17;
          *(short *)(piVar1 + 0x43) = (short)(uVar18 + 4);
          if (param_2 != 4) {
            piVar1 = *(int **)(iVar12 + (uVar18 + 5) * 4);
            *piVar1 = iVar17;
            *(short *)(piVar1 + 0x43) = (short)(uVar18 + 5);
          }
        }
      }
    }
    iVar17 = 0;
    do {
      piVar1 = *(int **)(iVar11 + iVar17 * 4 + 0x110);
      *piVar1 = iVar11;
      *(short *)(piVar1 + 0x43) = (short)iVar17;
      iVar17 = iVar17 + 1;
    } while (iVar9 + 1 != iVar17);
  }
  return;
}

