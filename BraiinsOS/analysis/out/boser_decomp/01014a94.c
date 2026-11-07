// FUN_01014a94 @ 01014a94 size=520 calls_out=1 calls_in=1
// strings: 

void FUN_01014a94(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  byte in_Q;
  
  uVar2 = *(uint *)(param_1 + 0xcc);
  uVar9 = *(uint *)(param_1 + 0x11c);
  uVar3 = (uint)((int)uVar2 >> 0x1f) >> 1 ^ uVar2;
  bVar13 = (((uint)((byte)((int)uVar9 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar9 >> 0x1f) >> 1) ^
           *(uint *)(param_1 + 0x118)) <
           (((uint)((byte)((int)uVar2 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar2 >> 0x1f) >> 1) ^
           *(uint *)(param_1 + 200));
  uVar9 = (uint)((int)uVar9 >> 0x1f) >> 1 ^ uVar9;
  bVar15 = SBORROW4(uVar9,uVar3) != SBORROW4(uVar9 - uVar3,(uint)bVar13);
  bVar13 = (int)(uVar9 - (uVar3 + bVar13)) < 0;
  iVar7 = 0xf0;
  if (bVar13 != bVar15) {
    iVar7 = 0xa0;
  }
  iVar7 = param_1 + iVar7;
  uVar3 = *(uint *)(param_1 + 0x2c);
  iVar5 = 0xa0;
  uVar2 = *(uint *)(iVar7 + 0x2c);
  if (bVar13 != bVar15) {
    iVar5 = 0xf0;
  }
  uVar11 = *(uint *)(param_1 + 0x7c);
  uVar9 = (uint)((int)uVar3 >> 0x1f) >> 1 ^ uVar3;
  uVar10 = (uint)((int)uVar11 >> 0x1f) >> 1 ^ uVar11;
  bVar13 = (((uint)((byte)((int)uVar11 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar11 >> 0x1f) >> 1) ^
           *(uint *)(param_1 + 0x78)) <
           (((uint)((byte)((int)uVar3 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar3 >> 0x1f) >> 1) ^
           *(uint *)(param_1 + 0x28));
  iVar5 = param_1 + iVar5;
  bVar15 = SBORROW4(uVar10,uVar9) != SBORROW4(uVar10 - uVar9,(uint)bVar13);
  bVar13 = (int)(uVar10 - (uVar9 + bVar13)) < 0;
  uVar12 = (uint)((int)uVar2 >> 0x1f) >> 1 ^ uVar2;
  uVar3 = (uint)(bVar13 == bVar15);
  uVar10 = (uint)(bVar13 != bVar15);
  uVar11 = *(uint *)(iVar5 + 0x2c);
  iVar4 = param_1 + (uVar3 | uVar3 << 2) * 0x10;
  uVar3 = *(uint *)(iVar4 + 0x2c);
  uVar9 = (uint)((int)uVar3 >> 0x1f) >> 1 ^ uVar3;
  bVar13 = (((uint)((byte)((int)uVar2 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar2 >> 0x1f) >> 1) ^
           *(uint *)(iVar7 + 0x28)) <
           (((uint)((byte)((int)uVar3 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar3 >> 0x1f) >> 1) ^
           *(uint *)(iVar4 + 0x28));
  param_1 = param_1 + (uVar10 | uVar10 << 2) * 0x10;
  bVar15 = SBORROW4(uVar12,uVar9) != SBORROW4(uVar12 - uVar9,(uint)bVar13);
  bVar13 = (int)(uVar12 - (uVar9 + bVar13)) < 0;
  iVar6 = iVar4;
  if (bVar13 != bVar15) {
    iVar6 = iVar5;
  }
  uVar3 = *(uint *)(param_1 + 0x2c);
  uVar9 = (uint)((int)uVar11 >> 0x1f) >> 1 ^ uVar11;
  uVar2 = (uint)((int)uVar3 >> 0x1f) >> 1 ^ uVar3;
  bVar14 = (((uint)((byte)((int)uVar11 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar11 >> 0x1f) >> 1) ^
           *(uint *)(iVar5 + 0x28)) <
           (((uint)((byte)((int)uVar3 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar3 >> 0x1f) >> 1) ^
           *(uint *)(param_1 + 0x28));
  iVar8 = iVar5;
  iVar1 = param_1;
  if ((int)(uVar9 - (uVar2 + bVar14)) < 0 !=
      (SBORROW4(uVar9,uVar2) != SBORROW4(uVar9 - uVar2,(uint)bVar14))) {
    iVar8 = iVar4;
    iVar1 = iVar5;
    iVar6 = param_1;
  }
  uVar2 = (byte)(bVar13 << 4 | bVar15 << 1 | in_Q) & 0x1f;
  if ((uVar2 >> 4 != 0) != ((uVar2 >> 1 & 1) != 0)) {
    iVar8 = iVar7;
    iVar7 = iVar4;
  }
  uVar9 = *(uint *)(iVar8 + 0x28);
  uVar10 = *(uint *)(iVar8 + 0x2c);
  uVar11 = *(uint *)(iVar6 + 0x28);
  uVar3 = *(uint *)(iVar6 + 0x2c);
  FUN_01bed4e2(param_2,iVar1,0x50);
  uVar2 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
  bVar13 = (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar10 >> 0x1f) >> 1) ^
           uVar9) < (((uint)((byte)((int)uVar3 >> 0x1f) & 1) << 0x1f |
                     (uint)((int)uVar3 >> 0x1f) >> 1) ^ uVar11);
  uVar3 = (uint)((int)uVar3 >> 0x1f) >> 1 ^ uVar3;
  if ((int)(uVar2 - (uVar3 + bVar13)) < 0 ==
      (SBORROW4(uVar2,uVar3) != SBORROW4(uVar2 - uVar3,(uint)bVar13))) {
    iVar5 = iVar8;
    iVar8 = iVar6;
  }
  else {
    iVar5 = iVar6;
  }
  FUN_01bed4e2(param_2 + 0x50,iVar8,0x50);
  FUN_01bed4e2(param_2 + 0xa0,iVar5,0x50);
  FUN_01bed4e2(param_2 + 0xf0,iVar7,0x50);
  return;
}

