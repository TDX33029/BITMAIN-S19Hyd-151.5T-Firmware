// FUN_0003cf68 @ 0003cf68  size=700  callers=0
// program: bmminer


void FUN_0003cf68(byte *param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  iVar11 = *(int *)(param_1 + 4);
  uVar3 = FUN_0002009c();
  uVar4 = FUN_00059238(iVar11,uVar3);
  uVar2 = *(ushort *)(param_1 + 2);
  uVar10 = *param_1 & 0xf;
  iVar5 = FUN_00059230(iVar11);
  iVar6 = FUN_0002007c();
  if ((3 < uVar10) || (iVar7 = FUN_000201d8(uVar10), iVar7 == 0)) {
    *(int *)(&DAT_0080a888 + DAT_00507488) = *(int *)(&DAT_0080a888 + DAT_00507488) + 1;
    return;
  }
  bVar1 = *param_1;
  if ((bVar1 & 0x20) != 0) {
    iVar5 = DAT_00507488 + uVar10 * 4;
    *(int *)(&DAT_0080a828 + iVar5) = *(int *)(&DAT_0080a828 + iVar5) + 1;
    return;
  }
  if ((bVar1 & 0x40) != 0) {
    iVar5 = DAT_00507488 + uVar10 * 4;
    *(int *)(&DAT_0080a838 + iVar5) = *(int *)(&DAT_0080a838 + iVar5) + 1;
    return;
  }
  if ((bVar1 & 0x80) == 0) {
    iVar5 = DAT_00507488 + uVar10 * 4;
    *(int *)(&DAT_0080a848 + iVar5) = *(int *)(&DAT_0080a848 + iVar5) + 1;
    return;
  }
  uVar8 = FUN_0002002c();
  if (uVar8 <= uVar4) {
    iVar5 = DAT_00507488 + uVar10 * 4;
    *(int *)(&DAT_0080a88c + iVar5) = *(int *)(&DAT_0080a88c + iVar5) + 1;
    return;
  }
  uVar8 = (int)(uVar2 & 0x7fff) >> 7;
  uVar12 = iVar6 * iVar5 + (uVar2 & 3);
  uVar9 = FUN_0002006c();
  iVar5 = DAT_00507488;
  if (uVar9 <= uVar12 || 7 < uVar8) {
    iVar5 = DAT_00507488 + uVar10 * 4;
    *(int *)(&DAT_0080a868 + iVar5) = *(int *)(&DAT_0080a868 + iVar5) + 1;
    return;
  }
  if (*(int *)(*(int *)(DAT_00507488 + (int)(&DAT_00202a2a + uVar4) * 4 + 4) +
               uVar12 * 0x1a0 + uVar8 * 0x34 + 4) == iVar11) {
    iVar11 = uVar4 + uVar10 * 0x100;
    iVar6 = DAT_00507488 + (uVar12 + iVar11 * 0x400) * 4;
    if ((*(uint *)(iVar6 + 8) & 1 << uVar8) == 0) {
      *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) | 1 << uVar8;
      iVar11 = iVar5 + iVar11 * 4;
      iVar5 = iVar5 + uVar10 * 4;
      *(int *)(&DAT_00409008 + iVar6) = *(int *)(&DAT_00409008 + iVar6) + 1;
      *(int *)(&DAT_00809008 + iVar11) = *(int *)(&DAT_00809008 + iVar11) + 1;
      *(int *)(&DAT_0080a008 + iVar5) = *(int *)(&DAT_0080a008 + iVar5) + 1;
      return;
    }
    iVar5 = DAT_00507488 + uVar10 * 4;
    *(int *)(&DAT_0080a818 + iVar5) = *(int *)(&DAT_0080a818 + iVar5) + 1;
    return;
  }
  iVar5 = FUN_0003d9d8(DAT_00507488 + (short)(uVar2 & 0x7f) * 0x34 + uVar10 * 0x1a00 + 0x80acac,
                       iVar11);
  iVar6 = DAT_00507488 + uVar10 * 4;
  if (iVar5 == 0) {
    *(int *)(&DAT_0080a868 + iVar6) = *(int *)(&DAT_0080a868 + iVar6) + 1;
  }
  else {
    *(int *)(&DAT_0080a858 + iVar6) = *(int *)(&DAT_0080a858 + iVar6) + 1;
  }
  return;
}

