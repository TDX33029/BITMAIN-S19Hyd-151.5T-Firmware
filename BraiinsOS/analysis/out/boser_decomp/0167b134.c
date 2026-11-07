// FUN_0167b134 @ 0167b134 size=584 calls_out=3 calls_in=1
// strings: assertion failed: count > 0 | internal error: entered unreachable code

void FUN_0167b134(int *param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: count > 0",0x1b,&DAT_01d2ff40);
  }
  iVar16 = param_1[5];
  uVar10 = (uint)*(ushort *)(iVar16 + 0xb6);
  uVar8 = param_2 + uVar10;
  if (0xb < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00533a99,0x33,&DAT_01d30608);
  }
  iVar17 = param_1[3];
  uVar19 = (uint)*(ushort *)(iVar17 + 0xb6);
  if (uVar19 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00533acc,0x27,&DAT_01d30618);
  }
  iVar13 = iVar16 + 4;
  iVar18 = uVar19 - param_2;
  *(short *)(iVar17 + 0xb6) = (short)iVar18;
  *(short *)(iVar16 + 0xb6) = (short)uVar8;
  FUN_01bed864(iVar13 + param_2 * 4,iVar13);
  iVar2 = iVar16 + 0x30;
  FUN_01bed864(iVar2 + param_2 * 0xc,iVar2,uVar10 * 0xc);
  iVar3 = iVar18 + 1;
  iVar11 = uVar19 - iVar3;
  if (iVar11 != param_2 - 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
  }
  FUN_01bed4e2(iVar13,iVar17 + 4 + iVar3 * 4,iVar11 * 4);
  FUN_01bed4e2(iVar2,iVar17 + 0x30 + iVar3 * 0xc,iVar11 * 0xc);
  puVar1 = (undefined4 *)(iVar17 + 0x30 + iVar18 * 0xc);
  uVar4 = *puVar1;
  uVar12 = puVar1[1];
  uVar14 = puVar1[2];
  iVar7 = *param_1 + param_1[2] * 4;
  iVar13 = *param_1 + param_1[2] * 0xc;
  uVar20 = *(undefined4 *)(iVar7 + 4);
  *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar17 + 4 + iVar18 * 4);
  uVar5 = *(undefined4 *)(iVar13 + 0x30);
  uVar9 = *(undefined4 *)(iVar13 + 0x34);
  uVar15 = *(undefined4 *)(iVar13 + 0x38);
  *(undefined4 *)(iVar13 + 0x30) = uVar4;
  *(undefined4 *)(iVar13 + 0x34) = uVar12;
  *(undefined4 *)(iVar13 + 0x38) = uVar14;
  *(undefined4 *)(iVar16 + param_2 * 4) = uVar20;
  puVar1 = (undefined4 *)(iVar2 + iVar11 * 0xc);
  *puVar1 = uVar5;
  puVar1[1] = uVar9;
  puVar1[2] = uVar15;
  if (param_1[4] == 0) {
    if (param_1[6] != 0) goto LAB_0167b364;
  }
  else {
    if (param_1[6] == 0) {
LAB_0167b364:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d30628);
    }
    iVar2 = iVar16 + 0xb8;
    FUN_01bed864(iVar2 + param_2 * 4,iVar2,uVar10 * 4 + 4);
    FUN_01bed4e2(iVar2,iVar17 + iVar3 * 4 + 0xb8,param_2 << 2);
    iVar17 = 0;
    do {
      piVar6 = *(int **)(iVar16 + iVar17 * 4 + 0xb8);
      *(short *)(piVar6 + 0x2d) = (short)iVar17;
      iVar17 = iVar17 + 1;
      *piVar6 = iVar16;
    } while (uVar8 + 1 != iVar17);
  }
  return;
}

