// FUN_0167b5b0 @ 0167b5b0 size=572 calls_out=3 calls_in=1
// strings: assertion failed: count > 0 | assertion failed: old_left_len + count <= CAPACITY | assertion failed: old_right_len >= count | internal error: entered unreachable code

void FUN_0167b5b0(int *param_1,uint param_2)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: count > 0",0x1b,&DAT_01d2ff50);
  }
  iVar13 = param_1[3];
  uVar3 = (uint)*(ushort *)(iVar13 + 0xb6);
  if (0xb < param_2 + uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: old_left_len + count <= CAPACITY",0x32,&DAT_01d2ff60);
  }
  iVar14 = param_1[5];
  uVar1 = *(ushort *)(iVar14 + 0xb6);
  if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: old_right_len >= count",0x28,&DAT_01d2ff70);
  }
  *(short *)(iVar13 + 0xb6) = (short)(param_2 + uVar3);
  iVar19 = uVar1 - param_2;
  iVar4 = param_2 * 0xc + -0xc;
  iVar18 = iVar14 + 0x30;
  *(short *)(iVar14 + 0xb6) = (short)iVar19;
  puVar7 = (undefined4 *)(iVar18 + iVar4);
  uVar5 = *puVar7;
  uVar9 = puVar7[1];
  uVar15 = puVar7[2];
  iVar10 = *param_1 + param_1[2] * 4;
  iVar6 = *param_1 + param_1[2] * 0xc;
  uVar11 = *(undefined4 *)(iVar10 + 4);
  *(undefined4 *)(iVar10 + 4) = *(undefined4 *)(iVar14 + param_2 * 4);
  uVar12 = *(undefined4 *)(iVar6 + 0x30);
  uVar16 = *(undefined4 *)(iVar6 + 0x34);
  uVar17 = *(undefined4 *)(iVar6 + 0x38);
  *(undefined4 *)(iVar6 + 0x30) = uVar5;
  *(undefined4 *)(iVar6 + 0x34) = uVar9;
  *(undefined4 *)(iVar6 + 0x38) = uVar15;
  *(undefined4 *)(iVar13 + 4 + uVar3 * 4) = uVar11;
  iVar10 = iVar13 + uVar3 * 0xc;
  *(undefined4 *)(iVar10 + 0x30) = uVar12;
  *(undefined4 *)(iVar10 + 0x34) = uVar16;
  *(undefined4 *)(iVar10 + 0x38) = uVar17;
  iVar6 = iVar14 + 4;
  FUN_01bed4e2(iVar13 + 4 + (uVar3 + 1) * 4,iVar6,(param_2 - 1) * 4);
  FUN_01bed4e2(iVar10 + 0x3c,iVar18,iVar4);
  FUN_01bed864(iVar6,iVar6 + param_2 * 4,iVar19 * 4);
  FUN_01bed864(iVar18,iVar18 + param_2 * 0xc,iVar19 * 0xc);
  if (param_1[4] == 0) {
    if (param_1[6] != 0) goto LAB_0167b7d4;
  }
  else {
    if (param_1[6] == 0) {
LAB_0167b7d4:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ff80);
    }
    iVar4 = iVar14 + 0xb8;
    FUN_01bed4e2(iVar13 + (uVar3 + 1) * 4 + 0xb8,iVar4,param_2 << 2);
    FUN_01bed864(iVar4,iVar4 + param_2 * 4,iVar19 * 4 + 4);
    iVar4 = uVar3 + 0x2f;
    do {
      piVar8 = *(int **)(iVar13 + iVar4 * 4);
      sVar2 = (short)iVar4;
      iVar4 = iVar4 + 1;
      param_2 = param_2 - 1;
      *(short *)(piVar8 + 0x2d) = sVar2 + -0x2e;
      *piVar8 = iVar13;
    } while (param_2 != 0);
    iVar13 = 0;
    do {
      piVar8 = *(int **)(iVar14 + iVar13 * 4 + 0xb8);
      *(short *)(piVar8 + 0x2d) = (short)iVar13;
      iVar13 = iVar13 + 1;
      *piVar8 = iVar14;
    } while (iVar19 + 1 != iVar13);
  }
  return;
}

