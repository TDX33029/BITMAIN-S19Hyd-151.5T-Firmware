// FUN_000589c4 @ 000589c4  size=728  callers=0
// program: bmminer


void FUN_000589c4(byte *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  
  iVar12 = *(int *)(param_1 + 4);
  uVar4 = FUN_0002a584();
  uVar5 = FUN_00083074(iVar12,uVar4);
  uVar2 = *(ushort *)(param_1 + 2);
  uVar3 = *(ushort *)(param_1 + 9);
  uVar11 = *param_1 & 0xf;
  iVar6 = FUN_0008306c(iVar12);
  iVar7 = FUN_0002a564();
  if ((3 < uVar11) || (iVar8 = FUN_0002a6f0(uVar11), iVar8 == 0)) {
    *(int *)(&DAT_00ffa888 + DAT_00944b80) = *(int *)(&DAT_00ffa888 + DAT_00944b80) + 1;
    return;
  }
  bVar1 = *param_1;
  if ((bVar1 & 0x20) != 0) {
    iVar6 = DAT_00944b80 + uVar11 * 4;
    *(int *)(&DAT_00ffa828 + iVar6) = *(int *)(&DAT_00ffa828 + iVar6) + 1;
    return;
  }
  if ((bVar1 & 0x40) != 0) {
    iVar6 = DAT_00944b80 + uVar11 * 4;
    *(int *)(&DAT_00ffa838 + iVar6) = *(int *)(&DAT_00ffa838 + iVar6) + 1;
    return;
  }
  if ((bVar1 & 0x80) == 0) {
    iVar6 = DAT_00944b80 + uVar11 * 4;
    *(int *)(&DAT_00ffa848 + iVar6) = *(int *)(&DAT_00ffa848 + iVar6) + 1;
    return;
  }
  uVar9 = FUN_0002a514();
  if (uVar9 <= uVar5) {
    iVar6 = DAT_00944b80 + uVar11 * 4;
    *(int *)(&DAT_00ffa88c + iVar6) = *(int *)(&DAT_00ffa88c + iVar6) + 1;
    return;
  }
  uVar9 = (int)(uVar2 & 0x7fff) >> 7;
  uVar13 = (uVar2 & 0x7f) + (uint)(uVar3 >> 9);
  uVar14 = iVar7 * iVar6 + (uVar13 & 3);
  uVar10 = FUN_0002a554();
  iVar6 = DAT_00944b80;
  if (uVar10 <= uVar14 || 7 < uVar9) {
    iVar6 = DAT_00944b80 + uVar11 * 4;
    *(int *)(&DAT_00ffa868 + iVar6) = *(int *)(&DAT_00ffa868 + iVar6) + 1;
    return;
  }
  if (*(int *)(*(int *)(DAT_00944b80 + (int)(&DAT_003fea2a + uVar5) * 4 + 4) +
               uVar14 * 0x2a0 + uVar9 * 0x54 + 4) == iVar12) {
    iVar7 = DAT_00944b80 + (uVar5 * 0x7f8 + uVar11 * 0x7f800 + uVar14) * 4;
    if ((*(uint *)(iVar7 + 8) & 1 << uVar9) == 0) {
      *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) | 1 << uVar9;
      iVar12 = iVar6 + (uVar11 * 0x100 + uVar5) * 4;
      iVar6 = iVar6 + uVar11 * 4;
      *(int *)(&DAT_00801008 + iVar7) = *(int *)(&DAT_00801008 + iVar7) + 1;
      *(int *)(&DAT_00ff9008 + iVar12) = *(int *)(&DAT_00ff9008 + iVar12) + 1;
      *(int *)(&DAT_00ffa008 + iVar6) = *(int *)(&DAT_00ffa008 + iVar6) + 1;
      return;
    }
    iVar6 = DAT_00944b80 + uVar11 * 4;
    *(int *)(&DAT_00ffa818 + iVar6) = *(int *)(&DAT_00ffa818 + iVar6) + 1;
    return;
  }
  iVar6 = FUN_00059434(DAT_00944b80 + uVar13 * 0x54 + uVar11 * 0x2a00 + 0xffacac,iVar12);
  iVar7 = DAT_00944b80 + uVar11 * 4;
  if (iVar6 == 0) {
    *(int *)(&DAT_00ffa868 + iVar7) = *(int *)(&DAT_00ffa868 + iVar7) + 1;
  }
  else {
    *(int *)(&DAT_00ffa858 + iVar7) = *(int *)(&DAT_00ffa858 + iVar7) + 1;
  }
  return;
}

