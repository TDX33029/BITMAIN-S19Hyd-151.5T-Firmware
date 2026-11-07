// FUN_0075c004 @ 0075c004 size=652 calls_out=2 calls_in=1
// strings: 

void FUN_0075c004(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  byte in_Q;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  iVar9 = *(int *)(param_1 + 0xe4);
  uVar16 = FUN_0107d010(*(int *)(param_1 + 0x1d4) + 8);
  uVar7 = (uint)((ulonglong)uVar16 >> 0x20);
  uVar17 = FUN_0107d010(iVar9 + 8);
  uVar8 = (uint)((ulonglong)uVar17 >> 0x20);
  iVar9 = *(int *)(param_1 + 0x2c4);
  uVar18 = FUN_0107d010(*(int *)(param_1 + 0x3b4) + 8);
  uVar5 = (uint)((ulonglong)uVar18 >> 0x20);
  uVar19 = FUN_0107d010(iVar9 + 8);
  uVar6 = (uint)((ulonglong)uVar19 >> 0x20);
  uVar1 = (int)uVar5 >> 0x1f;
  uVar5 = uVar1 >> 1 ^ uVar5;
  uVar2 = (int)uVar6 >> 0x1f;
  uVar6 = uVar2 >> 1 ^ uVar6;
  bVar13 = (((uint)((byte)((longlong)uVar18 >> 0x3f) & 1) << 0x1f | uVar1 >> 1) ^ (uint)uVar18) <
           (((uint)((byte)((longlong)uVar19 >> 0x3f) & 1) << 0x1f | uVar2 >> 1) ^ (uint)uVar19);
  iVar9 = 0x2d0;
  uVar1 = (int)uVar7 >> 0x1f;
  iVar4 = 0x1e0;
  if ((int)(uVar5 - (uVar6 + bVar13)) < 0 !=
      (SBORROW4(uVar5,uVar6) != SBORROW4(uVar5 - uVar6,(uint)bVar13))) {
    iVar9 = 0x1e0;
    iVar4 = 0x2d0;
  }
  uVar7 = uVar1 >> 1 ^ uVar7;
  iVar9 = param_1 + iVar9;
  uVar2 = (int)uVar8 >> 0x1f;
  uVar8 = uVar2 >> 1 ^ uVar8;
  bVar13 = (((uint)((byte)((longlong)uVar16 >> 0x3f) & 1) << 0x1f | uVar1 >> 1) ^ (uint)uVar16) <
           (((uint)((byte)((longlong)uVar17 >> 0x3f) & 1) << 0x1f | uVar2 >> 1) ^ (uint)uVar17);
  iVar4 = param_1 + iVar4;
  bVar15 = SBORROW4(uVar7,uVar8) != SBORROW4(uVar7 - uVar8,(uint)bVar13);
  bVar13 = (int)(uVar7 - (uVar8 + bVar13)) < 0;
  iVar12 = param_1 + (uint)(bVar13 != bVar15) * 0xf0;
  iVar10 = *(int *)(iVar12 + 0xe4);
  uVar16 = FUN_0107d010(*(int *)(iVar4 + 0xe4) + 8);
  uVar8 = (uint)((ulonglong)uVar16 >> 0x20);
  uVar17 = FUN_0107d010(iVar10 + 8);
  uVar5 = (uint)((ulonglong)uVar17 >> 0x20);
  param_1 = param_1 + (uint)(bVar13 == bVar15) * 0xf0;
  iVar10 = *(int *)(param_1 + 0xe4);
  uVar18 = FUN_0107d010(*(int *)(iVar9 + 0xe4) + 8);
  uVar6 = (uint)((ulonglong)uVar18 >> 0x20);
  uVar19 = FUN_0107d010(iVar10 + 8);
  uVar7 = (uint)((ulonglong)uVar19 >> 0x20);
  uVar1 = (int)uVar6 >> 0x1f;
  uVar6 = uVar1 >> 1 ^ uVar6;
  uVar2 = (int)uVar7 >> 0x1f;
  uVar7 = uVar2 >> 1 ^ uVar7;
  bVar13 = (((uint)((byte)((longlong)uVar18 >> 0x3f) & 1) << 0x1f | uVar1 >> 1) ^ (uint)uVar18) <
           (((uint)((byte)((longlong)uVar19 >> 0x3f) & 1) << 0x1f | uVar2 >> 1) ^ (uint)uVar19);
  bVar15 = SBORROW4(uVar6,uVar7) != SBORROW4(uVar6 - uVar7,(uint)bVar13);
  bVar13 = (int)(uVar6 - (uVar7 + bVar13)) < 0;
  iVar10 = param_1;
  if (bVar13 != bVar15) {
    iVar10 = iVar4;
  }
  uVar1 = (int)uVar8 >> 0x1f;
  uVar8 = uVar1 >> 1 ^ uVar8;
  uVar2 = (int)uVar5 >> 0x1f;
  uVar5 = uVar2 >> 1 ^ uVar5;
  bVar14 = (((uint)((byte)((longlong)uVar16 >> 0x3f) & 1) << 0x1f | uVar1 >> 1) ^ (uint)uVar16) <
           (((uint)((byte)((longlong)uVar17 >> 0x3f) & 1) << 0x1f | uVar2 >> 1) ^ (uint)uVar17);
  iVar11 = iVar4;
  iVar3 = iVar12;
  if ((int)(uVar8 - (uVar5 + bVar14)) < 0 !=
      (SBORROW4(uVar8,uVar5) != SBORROW4(uVar8 - uVar5,(uint)bVar14))) {
    iVar11 = param_1;
    iVar3 = iVar4;
    iVar10 = iVar12;
  }
  uVar1 = (byte)(bVar13 << 4 | bVar15 << 1 | in_Q) & 0x1f;
  bVar15 = (uVar1 >> 1 & 1) != 0;
  bVar13 = uVar1 >> 4 != 0;
  if (bVar13 != bVar15) {
    iVar11 = iVar9;
  }
  iVar4 = *(int *)(iVar10 + 0xe4);
  if (bVar13 != bVar15) {
    iVar9 = param_1;
  }
  uVar16 = FUN_0107d010(*(int *)(iVar11 + 0xe4) + 8);
  uVar5 = (uint)((ulonglong)uVar16 >> 0x20);
  uVar17 = FUN_0107d010(iVar4 + 8);
  uVar6 = (uint)((ulonglong)uVar17 >> 0x20);
  uVar1 = (int)uVar5 >> 0x1f;
  FUN_016dd1aa(param_2,iVar3,0xf0);
  uVar2 = (int)uVar6 >> 0x1f;
  uVar5 = uVar1 >> 1 ^ uVar5;
  uVar6 = uVar2 >> 1 ^ uVar6;
  bVar13 = (((uint)((byte)((longlong)uVar16 >> 0x3f) & 1) << 0x1f | uVar1 >> 1) ^ (uint)uVar16) <
           (((uint)((byte)((longlong)uVar17 >> 0x3f) & 1) << 0x1f | uVar2 >> 1) ^ (uint)uVar17);
  if ((int)(uVar5 - (uVar6 + bVar13)) < 0 ==
      (SBORROW4(uVar5,uVar6) != SBORROW4(uVar5 - uVar6,(uint)bVar13))) {
    iVar4 = iVar11;
    iVar11 = iVar10;
  }
  else {
    iVar4 = iVar10;
  }
  FUN_016dd1aa(param_2 + 0xf0,iVar11,0xf0);
  FUN_016dd1aa(param_2 + 0x1e0,iVar4,0xf0);
  FUN_016dd1aa(param_2 + 0x2d0,iVar9,0xf0);
  return;
}

