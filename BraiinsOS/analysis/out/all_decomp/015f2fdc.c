// FUN_015f2fdc @ 015f2fdc size=612 calls_out=3 calls_in=1
// strings: 

void FUN_015f2fdc(int *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 *puVar22;
  undefined4 uVar23;
  int iVar24;
  
  iVar13 = param_1[5];
  uVar14 = (uint)*(ushort *)(iVar13 + 0x13a);
  uVar21 = param_2 + uVar14;
  if (0xb < uVar21) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00410b38,0x33,&DAT_018ab378);
  }
  iVar6 = param_1[3];
  uVar19 = (uint)*(ushort *)(iVar6 + 0x13a);
  if (uVar19 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_004194e7,0x27,&DAT_018ab388);
  }
  iVar2 = iVar13 + 0x10c;
  iVar24 = uVar19 - param_2;
  *(ushort *)(iVar6 + 0x13a) = (ushort)iVar24;
  *(ushort *)(iVar13 + 0x13a) = (ushort)uVar21;
  FUN_016dd52c(iVar2 + param_2 * 4,iVar2,uVar14 * 4);
  FUN_016dd52c(iVar13 + param_2 * 0x18,iVar13,uVar14 * 0x18);
  iVar3 = iVar24 + 1;
  iVar7 = uVar19 - iVar3;
  if (iVar7 != param_2 - 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_004194bf,0x28,&DAT_018ab348);
  }
  FUN_016dd1aa(iVar2,iVar6 + 0x10c + iVar3 * 4,iVar7 * 4);
  FUN_016dd1aa(iVar13,iVar6 + iVar3 * 0x18,iVar7 * 0x18);
  puVar22 = (undefined4 *)(iVar6 + iVar24 * 0x18);
  uVar1 = *puVar22;
  uVar4 = puVar22[1];
  uVar8 = puVar22[2];
  uVar15 = puVar22[3];
  uVar17 = puVar22[4];
  uVar20 = puVar22[5];
  iVar9 = *param_1 + param_1[2] * 4;
  puVar22 = (undefined4 *)(*param_1 + param_1[2] * 0x18);
  uVar11 = *(undefined4 *)(iVar9 + 0x10c);
  *(undefined4 *)(iVar9 + 0x10c) = *(undefined4 *)(iVar6 + 0x10c + iVar24 * 4);
  uVar5 = *puVar22;
  uVar10 = puVar22[1];
  uVar12 = puVar22[2];
  uVar16 = puVar22[3];
  uVar18 = puVar22[4];
  uVar23 = puVar22[5];
  *puVar22 = uVar1;
  puVar22[1] = uVar4;
  puVar22[2] = uVar8;
  puVar22[3] = uVar15;
  puVar22[4] = uVar17;
  puVar22[5] = uVar20;
  *(undefined4 *)(iVar2 + iVar7 * 4) = uVar11;
  puVar22 = (undefined4 *)(iVar13 + iVar7 * 0x18);
  *puVar22 = uVar5;
  puVar22[1] = uVar10;
  puVar22[2] = uVar12;
  puVar22[3] = uVar16;
  puVar22[4] = uVar18;
  puVar22[5] = uVar23;
  if (param_1[4] == 0) {
    if (param_1[6] != 0) goto LAB_015f3228;
  }
  else {
    if (param_1[6] == 0) {
LAB_015f3228:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018ab398);
    }
    iVar2 = iVar13 + 0x140;
    FUN_016dd52c(iVar2 + param_2 * 4,iVar2,uVar14 * 4 + 4);
    FUN_016dd1aa(iVar2,iVar6 + iVar3 * 4 + 0x140,param_2 << 2);
    iVar6 = 0;
    do {
      iVar2 = *(int *)(iVar13 + iVar6 * 4 + 0x140);
      *(short *)(iVar2 + 0x138) = (short)iVar6;
      iVar6 = iVar6 + 1;
      *(int *)(iVar2 + 0x108) = iVar13;
    } while (uVar21 + 1 != iVar6);
  }
  return;
}

