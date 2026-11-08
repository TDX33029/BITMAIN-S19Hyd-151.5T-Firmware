// FUN_0135f51c @ 0135f51c size=552 calls_out=3 calls_in=1
// strings: 

void FUN_0135f51c(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
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
  
  iVar8 = param_1[5];
  uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
  uVar1 = param_2 + uVar9;
  if (0xb < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00410b38,0x33,&DAT_01892420);
  }
  iVar16 = param_1[3];
  uVar18 = (uint)*(ushort *)(iVar16 + 0xb6);
  if (uVar18 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_004194e7,0x27,&DAT_018af458);
  }
  iVar12 = iVar8 + 4;
  iVar15 = uVar18 - param_2;
  *(short *)(iVar16 + 0xb6) = (short)iVar15;
  *(short *)(iVar8 + 0xb6) = (short)uVar1;
  FUN_016dd52c(iVar12 + param_2 * 4,iVar12);
  iVar17 = iVar8 + 0x30;
  FUN_016dd52c(iVar17 + param_2 * 0xc,iVar17,uVar9 * 0xc);
  iVar2 = iVar15 + 1;
  iVar10 = uVar18 - iVar2;
  if (iVar10 != param_2 - 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
  }
  FUN_016dd1aa(iVar12,iVar16 + 4 + iVar2 * 4,iVar10 * 4);
  FUN_016dd1aa(iVar17,iVar16 + 0x30 + iVar2 * 0xc,iVar10 * 0xc);
  iVar11 = *param_1 + param_1[2] * 4;
  puVar13 = (undefined4 *)(iVar16 + 0x30 + iVar15 * 0xc);
  uVar4 = *puVar13;
  uVar20 = *(undefined4 *)(iVar11 + 4);
  uVar19 = puVar13[2];
  iVar12 = *param_1 + param_1[2] * 0xc;
  uVar14 = puVar13[1];
  *(undefined4 *)(iVar11 + 4) = *(undefined4 *)(iVar16 + 4 + iVar15 * 4);
  uVar3 = *(undefined4 *)(iVar12 + 0x30);
  uVar5 = *(undefined4 *)(iVar12 + 0x34);
  uVar7 = *(undefined4 *)(iVar12 + 0x38);
  *(undefined4 *)(iVar12 + 0x30) = uVar4;
  *(undefined4 *)(iVar12 + 0x34) = uVar14;
  *(undefined4 *)(iVar12 + 0x38) = uVar19;
  *(undefined4 *)(iVar8 + param_2 * 4) = uVar20;
  puVar13 = (undefined4 *)(iVar17 + iVar10 * 0xc);
  *puVar13 = uVar3;
  iVar10 = param_1[6];
  iVar12 = param_1[4];
  puVar13[1] = uVar5;
  puVar13[2] = uVar7;
  if (iVar12 == 0) {
    if (iVar10 != 0) goto LAB_0135f72c;
  }
  else {
    if (iVar10 == 0) {
LAB_0135f72c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_01892430);
    }
    iVar10 = iVar8 + 0xb8;
    FUN_016dd52c(iVar10 + param_2 * 4,iVar10,uVar9 * 4 + 4);
    FUN_016dd1aa(iVar10,iVar16 + iVar2 * 4 + 0xb8,param_2 << 2);
    iVar16 = 0;
    do {
      piVar6 = *(int **)(iVar8 + iVar16 * 4 + 0xb8);
      *(short *)(piVar6 + 0x2d) = (short)iVar16;
      iVar16 = iVar16 + 1;
      *piVar6 = iVar8;
    } while (uVar1 + 1 != iVar16);
  }
  return;
}

