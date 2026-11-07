// FUN_01601f8c @ 01601f8c size=668 calls_out=3 calls_in=1
// strings: 

void FUN_01601f8c(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  uint uVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  
  iVar15 = param_1[5];
  uVar11 = (uint)*(ushort *)(iVar15 + 0x10e);
  uVar13 = param_2 + uVar11;
  if (0xb < uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00410b38,0x33,&DAT_018ab378);
  }
  iVar6 = param_1[3];
  uVar19 = (uint)*(ushort *)(iVar6 + 0x10e);
  if (uVar19 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_004194e7,0x27,&DAT_018ab388);
  }
  iVar20 = uVar19 - param_2;
  *(ushort *)(iVar6 + 0x10e) = (ushort)iVar20;
  *(ushort *)(iVar15 + 0x10e) = (ushort)uVar13;
  iVar3 = iVar15 + 4;
  FUN_016dd52c(iVar3 + param_2 * 0xc,iVar3,uVar11 * 0xc);
  iVar4 = iVar15 + 0x88;
  FUN_016dd52c(iVar4 + param_2 * 0xc,iVar4,uVar11 * 0xc);
  iVar7 = iVar20 + 1;
  iVar1 = uVar19 - iVar7;
  if (iVar1 != param_2 - 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_004194bf,0x28,&DAT_018ab348);
  }
  FUN_016dd1aa(iVar3,iVar6 + 4 + iVar7 * 0xc,iVar1 * 0xc);
  FUN_016dd1aa(iVar4,iVar6 + 0x88 + iVar7 * 0xc,iVar1 * 0xc);
  puVar17 = (undefined4 *)(iVar6 + 0x88 + iVar20 * 0xc);
  uVar5 = *puVar17;
  uVar8 = puVar17[1];
  uVar12 = puVar17[2];
  puVar17 = (undefined4 *)(iVar6 + 4 + iVar20 * 0xc);
  uVar21 = *puVar17;
  iVar20 = *param_1 + param_1[2] * 0xc;
  uVar9 = puVar17[1];
  uVar14 = *(undefined4 *)(iVar20 + 0xc);
  *(undefined4 *)(iVar20 + 0xc) = puVar17[2];
  uVar2 = *(undefined4 *)(iVar20 + 0x88);
  uVar18 = *(undefined4 *)(iVar20 + 4);
  uVar16 = *(undefined4 *)(iVar20 + 8);
  *(undefined4 *)(iVar20 + 8) = uVar9;
  uVar22 = *(undefined4 *)(iVar20 + 0x8c);
  uVar9 = *(undefined4 *)(iVar20 + 0x90);
  *(undefined4 *)(iVar20 + 4) = uVar21;
  *(undefined4 *)(iVar20 + 0x88) = uVar5;
  *(undefined4 *)(iVar20 + 0x8c) = uVar8;
  *(undefined4 *)(iVar20 + 0x90) = uVar12;
  puVar17 = (undefined4 *)(iVar3 + iVar1 * 0xc);
  *puVar17 = uVar18;
  puVar17[1] = uVar16;
  puVar17[2] = uVar14;
  puVar17 = (undefined4 *)(iVar4 + iVar1 * 0xc);
  *puVar17 = uVar2;
  iVar1 = param_1[6];
  iVar3 = param_1[4];
  puVar17[1] = uVar22;
  puVar17[2] = uVar9;
  if (iVar3 == 0) {
    if (iVar1 != 0) goto LAB_01602210;
  }
  else {
    if (iVar1 == 0) {
LAB_01602210:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018ab398);
    }
    iVar1 = iVar15 + 0x110;
    FUN_016dd52c(iVar1 + param_2 * 4,iVar1,uVar11 * 4 + 4);
    FUN_016dd1aa(iVar1,iVar6 + iVar7 * 4 + 0x110,param_2 << 2);
    iVar6 = 0;
    do {
      piVar10 = *(int **)(iVar15 + iVar6 * 4 + 0x110);
      *piVar10 = iVar15;
      *(short *)(piVar10 + 0x43) = (short)iVar6;
      iVar6 = iVar6 + 1;
    } while (uVar13 + 1 != iVar6);
  }
  return;
}

