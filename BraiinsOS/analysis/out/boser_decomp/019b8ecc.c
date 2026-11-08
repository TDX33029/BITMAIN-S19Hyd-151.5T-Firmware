// FUN_019b8ecc @ 019b8ecc size=684 calls_out=3 calls_in=1
// strings: assertion failed: old_left_len + count <= CAPACITY | assertion failed: old_right_len >= count | internal error: entered unreachable code

void FUN_019b8ecc(int *param_1,uint param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  
  iVar13 = param_1[3];
  uVar11 = (uint)*(ushort *)(iVar13 + 0x10e);
  if (0xb < param_2 + uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: old_left_len + count <= CAPACITY",0x32,&DAT_01d27fa4);
  }
  iVar14 = param_1[5];
  uVar18 = (uint)*(ushort *)(iVar14 + 0x10e);
  if (uVar18 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: old_right_len >= count",0x28,&DAT_01d27fb4);
  }
  *(ushort *)(iVar13 + 0x10e) = (ushort)(param_2 + uVar11);
  iVar12 = param_2 * 0xc + -0xc;
  iVar3 = iVar14 + 0x88;
  iVar9 = uVar18 - param_2;
  puVar4 = (undefined4 *)(iVar3 + iVar12);
  uVar20 = *puVar4;
  uVar16 = puVar4[1];
  uVar5 = puVar4[2];
  iVar6 = param_1[2];
  *(ushort *)(iVar14 + 0x10e) = (ushort)iVar9;
  iVar19 = *param_1 + iVar6 * 0xc;
  iVar6 = iVar14 + 4;
  puVar4 = (undefined4 *)(iVar6 + iVar12);
  uVar10 = *puVar4;
  uVar21 = *(undefined4 *)(iVar19 + 0xc);
  uVar7 = puVar4[1];
  *(undefined4 *)(iVar19 + 0xc) = puVar4[2];
  uVar15 = *(undefined4 *)(iVar19 + 4);
  uVar2 = *(undefined4 *)(iVar19 + 8);
  uVar17 = *(undefined4 *)(iVar19 + 0x88);
  *(undefined4 *)(iVar19 + 4) = uVar10;
  *(undefined4 *)(iVar19 + 8) = uVar7;
  uVar7 = *(undefined4 *)(iVar19 + 0x8c);
  uVar10 = *(undefined4 *)(iVar19 + 0x90);
  *(undefined4 *)(iVar19 + 0x88) = uVar20;
  *(undefined4 *)(iVar19 + 0x8c) = uVar16;
  *(undefined4 *)(iVar19 + 0x90) = uVar5;
  puVar4 = (undefined4 *)(iVar13 + 4 + uVar11 * 0xc);
  *puVar4 = uVar15;
  puVar4[1] = uVar2;
  puVar4[2] = uVar21;
  puVar4 = (undefined4 *)(iVar13 + 0x88 + uVar11 * 0xc);
  *puVar4 = uVar17;
  puVar4[1] = uVar7;
  puVar4[2] = uVar10;
  iVar19 = uVar11 * 0xc + 0xc;
  FUN_01bed4e2(iVar13 + 4 + iVar19,iVar6,iVar12);
  FUN_01bed4e2(iVar13 + 0x88 + iVar19,iVar3,iVar12);
  FUN_01bed864(iVar6,iVar6 + param_2 * 0xc,iVar9 * 0xc);
  FUN_01bed864(iVar3,iVar3 + param_2 * 0xc,iVar9 * 0xc);
  if (param_1[4] == 0) {
    if (param_1[6] != 0) goto LAB_019b9160;
  }
  else {
    if (param_1[6] == 0) {
LAB_019b9160:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d27fc4);
    }
    iVar3 = iVar14 + 0x110;
    FUN_01bed4e2(iVar13 + (uVar11 + 1) * 4 + 0x110,iVar3,param_2 << 2);
    FUN_01bed864(iVar3,iVar3 + param_2 * 4,iVar9 * 4 + 4);
    iVar3 = uVar11 + 0x45;
    do {
      piVar8 = *(int **)(iVar13 + iVar3 * 4);
      sVar1 = (short)iVar3;
      iVar3 = iVar3 + 1;
      param_2 = param_2 - 1;
      *piVar8 = iVar13;
      *(short *)(piVar8 + 0x43) = sVar1 + -0x44;
    } while (param_2 != 0);
    iVar13 = 0;
    do {
      piVar8 = *(int **)(iVar14 + iVar13 * 4 + 0x110);
      *piVar8 = iVar14;
      *(short *)(piVar8 + 0x43) = (short)iVar13;
      iVar13 = iVar13 + 1;
    } while (iVar9 + 1 != iVar13);
  }
  return;
}

