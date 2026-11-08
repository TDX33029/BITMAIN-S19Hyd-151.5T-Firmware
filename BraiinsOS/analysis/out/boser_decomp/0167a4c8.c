// FUN_0167a4c8 @ 0167a4c8 size=512 calls_out=3 calls_in=1
// strings: assertion failed: count > 0 | internal error: entered unreachable code

void FUN_0167a4c8(int *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: count > 0",0x1b,&DAT_01d2ff40);
  }
  iVar9 = param_1[5];
  uVar10 = (uint)*(ushort *)(iVar9 + 0x8a);
  uVar1 = param_2 + uVar10;
  if (0xb < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00533a99,0x33,&DAT_01d30608);
  }
  iVar14 = param_1[3];
  uVar12 = (uint)*(ushort *)(iVar14 + 0x8a);
  if (uVar12 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00533acc,0x27,&DAT_01d30618);
  }
  iVar4 = iVar9 + 0x5c;
  iVar16 = uVar12 - param_2;
  *(short *)(iVar14 + 0x8a) = (short)iVar16;
  *(short *)(iVar9 + 0x8a) = (short)uVar1;
  FUN_01bed864(iVar4 + param_2 * 4);
  FUN_01bed864(iVar9 + param_2 * 8,iVar9,uVar10 << 3);
  iVar5 = iVar16 + 1;
  iVar17 = uVar12 - iVar5;
  if (iVar17 != param_2 - 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
  }
  FUN_01bed4e2(iVar4,iVar14 + 0x5c + iVar5 * 4,iVar17 * 4);
  FUN_01bed4e2(iVar9,iVar14 + iVar5 * 8,iVar17 * 8);
  iVar11 = param_1[2];
  iVar13 = *param_1;
  puVar2 = (undefined4 *)(iVar14 + iVar16 * 8);
  uVar6 = *puVar2;
  iVar15 = iVar13 + iVar11 * 4;
  iVar18 = param_1[6];
  uVar8 = puVar2[1];
  uVar3 = *(undefined4 *)(iVar15 + 0x5c);
  *(undefined4 *)(iVar15 + 0x5c) = *(undefined4 *)(iVar14 + 0x5c + iVar16 * 4);
  puVar2 = (undefined4 *)(iVar13 + iVar11 * 8);
  uVar7 = *puVar2;
  iVar16 = param_1[4];
  *puVar2 = uVar6;
  uVar6 = puVar2[1];
  puVar2[1] = uVar8;
  *(undefined4 *)(iVar4 + iVar17 * 4) = uVar3;
  puVar2 = (undefined4 *)(iVar9 + iVar17 * 8);
  *puVar2 = uVar7;
  puVar2[1] = uVar6;
  if (iVar16 == 0) {
    if (iVar18 != 0) goto LAB_0167a6b0;
  }
  else {
    if (iVar18 == 0) {
LAB_0167a6b0:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d30628);
    }
    iVar4 = iVar9 + 0x8c;
    FUN_01bed864(iVar4 + param_2 * 4,iVar4,uVar10 * 4 + 4);
    FUN_01bed4e2(iVar4,iVar14 + iVar5 * 4 + 0x8c,param_2 << 2);
    iVar14 = 0;
    do {
      iVar4 = *(int *)(iVar9 + iVar14 * 4 + 0x8c);
      *(short *)(iVar4 + 0x88) = (short)iVar14;
      iVar14 = iVar14 + 1;
      *(int *)(iVar4 + 0x58) = iVar9;
    } while (uVar1 + 1 != iVar14);
  }
  return;
}

