// FUN_0078f898 @ 0078f898 size=472 calls_out=2 calls_in=2
// strings: 

int FUN_0078f898(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  param_4 = param_4 >> 3;
  if (param_4 != 0) {
    param_1 = FUN_0078f898(param_1,param_1 + param_4 * 0x3c0,param_4 * 0x690 + param_1,param_4);
    param_2 = FUN_0078f898(param_2,param_2 + param_4 * 0x3c0,param_4 * 0x690 + param_2,param_4);
    param_3 = FUN_0078f898(param_3,param_3 + param_4 * 0x3c0,param_4 * 0x690 + param_3,param_4);
  }
  uVar10 = FUN_01404030(*(int *)(param_1 + 0xe4) + 8);
  uVar6 = (uint)((ulonglong)uVar10 >> 0x20);
  uVar11 = FUN_01404030(*(int *)(param_2 + 0xe4) + 8);
  uVar4 = (uint)((ulonglong)uVar11 >> 0x20);
  uVar12 = FUN_01404030(*(int *)(param_1 + 0xe4) + 8);
  uVar7 = (uint)((ulonglong)uVar12 >> 0x20);
  uVar13 = FUN_01404030(*(int *)(param_3 + 0xe4) + 8);
  uVar8 = (uint)((ulonglong)uVar13 >> 0x20);
  uVar1 = (int)uVar7 >> 0x1f;
  uVar7 = uVar1 >> 1 ^ uVar7;
  uVar2 = (int)uVar8 >> 0x1f;
  uVar8 = uVar2 >> 1 ^ uVar8;
  uVar3 = (int)uVar6 >> 0x1f;
  uVar6 = uVar3 >> 1 ^ uVar6;
  uVar5 = ((uint)((byte)((longlong)uVar10 >> 0x3f) & 1) << 0x1f | uVar3 >> 1) ^ (uint)uVar10;
  uVar3 = (int)uVar4 >> 0x1f;
  uVar4 = uVar3 >> 1 ^ uVar4;
  uVar3 = ((uint)((byte)((longlong)uVar11 >> 0x3f) & 1) << 0x1f | uVar3 >> 1) ^ (uint)uVar11;
  bVar9 = (((uint)((byte)((longlong)uVar12 >> 0x3f) & 1) << 0x1f | uVar1 >> 1) ^ (uint)uVar12) <
          (((uint)((byte)((longlong)uVar13 >> 0x3f) & 1) << 0x1f | uVar2 >> 1) ^ (uint)uVar13);
  if (((int)(uVar6 - (uVar4 + (uVar5 < uVar3))) < 0 !=
      (SBORROW4(uVar6,uVar4) != SBORROW4(uVar6 - uVar4,(uint)(uVar5 < uVar3)))) ==
      ((int)(uVar7 - (uVar8 + bVar9)) < 0 !=
      (SBORROW4(uVar7,uVar8) != SBORROW4(uVar7 - uVar8,(uint)bVar9)))) {
    uVar10 = FUN_01404030(*(int *)(param_2 + 0xe4) + 8);
    uVar8 = (uint)((ulonglong)uVar10 >> 0x20);
    uVar11 = FUN_01404030(*(int *)(param_3 + 0xe4) + 8);
    uVar7 = (uint)((ulonglong)uVar11 >> 0x20);
    uVar1 = (int)uVar8 >> 0x1f;
    uVar8 = uVar1 >> 1 ^ uVar8;
    uVar2 = (int)uVar7 >> 0x1f;
    uVar7 = uVar2 >> 1 ^ uVar7;
    bVar9 = (((uint)((byte)((longlong)uVar10 >> 0x3f) & 1) << 0x1f | uVar1 >> 1) ^ (uint)uVar10) <
            (((uint)((byte)((longlong)uVar11 >> 0x3f) & 1) << 0x1f | uVar2 >> 1) ^ (uint)uVar11);
    param_1 = param_2;
    if (((int)(uVar6 - (uVar4 + (uVar5 < uVar3))) < 0 !=
        (SBORROW4(uVar6,uVar4) != SBORROW4(uVar6 - uVar4,(uint)(uVar5 < uVar3)))) !=
        ((int)(uVar8 - (uVar7 + bVar9)) < 0 !=
        (SBORROW4(uVar8,uVar7) != SBORROW4(uVar8 - uVar7,(uint)bVar9)))) {
      param_1 = param_3;
    }
  }
  return param_1;
}

