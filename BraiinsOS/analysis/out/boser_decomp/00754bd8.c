// FUN_00754bd8 @ 00754bd8 size=648 calls_out=2 calls_in=1
// strings: 

void FUN_00754bd8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  byte in_Q;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar16 = FUN_01404030(*(int *)(param_1 + 0x1d4) + 8);
  uVar13 = (uint)((ulonglong)uVar16 >> 0x20);
  uVar17 = FUN_01404030(*(int *)(param_1 + 0xe4) + 8);
  uVar4 = (uint)((ulonglong)uVar17 >> 0x20);
  uVar18 = FUN_01404030(*(int *)(param_1 + 0x3b4) + 8);
  uVar3 = (uint)((ulonglong)uVar18 >> 0x20);
  uVar19 = FUN_01404030(*(int *)(param_1 + 0x2c4) + 8);
  uVar7 = (uint)((ulonglong)uVar19 >> 0x20);
  uVar5 = (int)uVar3 >> 0x1f;
  uVar3 = uVar5 >> 1 ^ uVar3;
  uVar1 = (int)uVar7 >> 0x1f;
  uVar7 = uVar1 >> 1 ^ uVar7;
  bVar14 = (((uint)((byte)((longlong)uVar18 >> 0x3f) & 1) << 0x1f | uVar5 >> 1) ^ (uint)uVar18) <
           (((uint)((byte)((longlong)uVar19 >> 0x3f) & 1) << 0x1f | uVar1 >> 1) ^ (uint)uVar19);
  iVar11 = 0x1e0;
  bVar15 = SBORROW4(uVar3,uVar7) != SBORROW4(uVar3 - uVar7,(uint)bVar14);
  bVar14 = (int)(uVar3 - (uVar7 + bVar14)) < 0;
  if (bVar14 != bVar15) {
    iVar11 = 0x2d0;
  }
  iVar11 = param_1 + iVar11;
  iVar9 = 0x2d0;
  if (bVar14 != bVar15) {
    iVar9 = 0x1e0;
  }
  uVar18 = FUN_01404030(*(int *)(iVar11 + 0xe4) + 8);
  uVar6 = (uint)((ulonglong)uVar18 >> 0x20);
  iVar9 = param_1 + iVar9;
  uVar5 = (int)uVar13 >> 0x1f;
  uVar13 = uVar5 >> 1 ^ uVar13;
  uVar1 = (int)uVar4 >> 0x1f;
  uVar4 = uVar1 >> 1 ^ uVar4;
  bVar14 = (((uint)((byte)((longlong)uVar16 >> 0x3f) & 1) << 0x1f | uVar5 >> 1) ^ (uint)uVar16) <
           (((uint)((byte)((longlong)uVar17 >> 0x3f) & 1) << 0x1f | uVar1 >> 1) ^ (uint)uVar17);
  bVar15 = SBORROW4(uVar13,uVar4) != SBORROW4(uVar13 - uVar4,(uint)bVar14);
  bVar14 = (int)(uVar13 - (uVar4 + bVar14)) < 0;
  iVar12 = param_1 + (uint)(bVar14 != bVar15) * 0xf0;
  uVar16 = FUN_01404030(*(int *)(iVar12 + 0xe4) + 8);
  uVar3 = (uint)((ulonglong)uVar16 >> 0x20);
  param_1 = param_1 + (uint)(bVar14 == bVar15) * 0xf0;
  uVar17 = FUN_01404030(*(int *)(iVar9 + 0xe4) + 8);
  uVar4 = (uint)((ulonglong)uVar17 >> 0x20);
  uVar19 = FUN_01404030(*(int *)(param_1 + 0xe4) + 8);
  uVar7 = (uint)((ulonglong)uVar19 >> 0x20);
  uVar5 = (int)uVar4 >> 0x1f;
  uVar4 = uVar5 >> 1 ^ uVar4;
  uVar1 = (int)uVar7 >> 0x1f;
  uVar7 = uVar1 >> 1 ^ uVar7;
  bVar14 = (((uint)((byte)((longlong)uVar17 >> 0x3f) & 1) << 0x1f | uVar5 >> 1) ^ (uint)uVar17) <
           (((uint)((byte)((longlong)uVar19 >> 0x3f) & 1) << 0x1f | uVar1 >> 1) ^ (uint)uVar19);
  bVar15 = SBORROW4(uVar4,uVar7) != SBORROW4(uVar4 - uVar7,(uint)bVar14);
  bVar14 = (int)(uVar4 - (uVar7 + bVar14)) < 0;
  iVar10 = param_1;
  if (bVar14 != bVar15) {
    iVar10 = iVar11;
  }
  uVar5 = (int)uVar6 >> 0x1f;
  uVar6 = uVar5 >> 1 ^ uVar6;
  uVar1 = (int)uVar3 >> 0x1f;
  uVar5 = ((uint)((byte)((longlong)uVar18 >> 0x3f) & 1) << 0x1f | uVar5 >> 1) ^ (uint)uVar18;
  uVar4 = ((uint)((byte)((longlong)uVar16 >> 0x3f) & 1) << 0x1f | uVar1 >> 1) ^ (uint)uVar16;
  uVar3 = uVar1 >> 1 ^ uVar3;
  iVar8 = iVar11;
  iVar2 = iVar12;
  if ((int)(uVar6 - (uVar3 + (uVar5 < uVar4))) < 0 !=
      (SBORROW4(uVar6,uVar3) != SBORROW4(uVar6 - uVar3,(uint)(uVar5 < uVar4)))) {
    iVar8 = param_1;
    iVar2 = iVar11;
    iVar10 = iVar12;
  }
  uVar1 = (byte)(bVar14 << 4 | bVar15 << 1 | in_Q) & 0x1f;
  iVar11 = iVar9;
  if ((uVar1 >> 4 != 0) != ((uVar1 >> 1 & 1) != 0)) {
    iVar11 = param_1;
    iVar8 = iVar9;
  }
  uVar16 = FUN_01404030(*(int *)(iVar8 + 0xe4) + 8,uVar5 - uVar4);
  uVar3 = (uint)((ulonglong)uVar16 >> 0x20);
  uVar17 = FUN_01404030(*(int *)(iVar10 + 0xe4) + 8);
  uVar4 = (uint)((ulonglong)uVar17 >> 0x20);
  uVar5 = (int)uVar3 >> 0x1f;
  FUN_01bed4e2(param_2,iVar2,0xf0);
  uVar1 = (int)uVar4 >> 0x1f;
  uVar3 = uVar5 >> 1 ^ uVar3;
  uVar4 = uVar1 >> 1 ^ uVar4;
  bVar14 = (((uint)((byte)((longlong)uVar16 >> 0x3f) & 1) << 0x1f | uVar5 >> 1) ^ (uint)uVar16) <
           (((uint)((byte)((longlong)uVar17 >> 0x3f) & 1) << 0x1f | uVar1 >> 1) ^ (uint)uVar17);
  if ((int)(uVar3 - (uVar4 + bVar14)) < 0 ==
      (SBORROW4(uVar3,uVar4) != SBORROW4(uVar3 - uVar4,(uint)bVar14))) {
    iVar9 = iVar8;
    iVar8 = iVar10;
  }
  else {
    iVar9 = iVar10;
  }
  FUN_01bed4e2(param_2 + 0xf0,iVar8,0xf0);
  FUN_01bed4e2(param_2 + 0x1e0,iVar9,0xf0);
  FUN_01bed4e2(param_2 + 0x2d0,iVar11,0xf0);
  return;
}

