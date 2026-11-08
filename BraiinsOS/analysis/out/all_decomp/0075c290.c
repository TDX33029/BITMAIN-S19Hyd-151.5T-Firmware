// FUN_0075c290 @ 0075c290 size=488 calls_out=2 calls_in=2
// strings: 

int FUN_0075c290(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (7 < param_4) {
    uVar1 = param_4 >> 3;
    iVar3 = uVar1 * 0x10 - (param_4 >> 3);
    param_1 = FUN_0075c290(param_1,param_1 + iVar3 * 0x40,uVar1 * 0x690 + param_1,uVar1);
    param_2 = FUN_0075c290(param_2,param_2 + iVar3 * 0x40,uVar1 * 0x690 + param_2,uVar1);
    param_3 = FUN_0075c290(param_3,param_3 + iVar3 * 0x40,uVar1 * 0x690 + param_3,uVar1);
  }
  iVar3 = *(int *)(param_2 + 0xe4);
  uVar11 = FUN_0107d010(*(int *)(param_1 + 0xe4) + 8);
  uVar5 = (uint)((ulonglong)uVar11 >> 0x20);
  uVar12 = FUN_0107d010(iVar3 + 8);
  uVar7 = (uint)((ulonglong)uVar12 >> 0x20);
  iVar3 = *(int *)(param_3 + 0xe4);
  uVar13 = FUN_0107d010(*(int *)(param_1 + 0xe4) + 8);
  uVar8 = (uint)((ulonglong)uVar13 >> 0x20);
  uVar14 = FUN_0107d010(iVar3 + 8);
  uVar9 = (uint)((ulonglong)uVar14 >> 0x20);
  uVar1 = (int)uVar8 >> 0x1f;
  uVar8 = uVar1 >> 1 ^ uVar8;
  uVar2 = (int)uVar9 >> 0x1f;
  uVar9 = uVar2 >> 1 ^ uVar9;
  uVar4 = (int)uVar5 >> 0x1f;
  uVar5 = uVar4 >> 1 ^ uVar5;
  uVar6 = (int)uVar7 >> 0x1f;
  uVar7 = uVar6 >> 1 ^ uVar7;
  uVar4 = ((uint)((byte)((longlong)uVar11 >> 0x3f) & 1) << 0x1f | uVar4 >> 1) ^ (uint)uVar11;
  uVar6 = ((uint)((byte)((longlong)uVar12 >> 0x3f) & 1) << 0x1f | uVar6 >> 1) ^ (uint)uVar12;
  bVar10 = (((uint)((byte)((longlong)uVar13 >> 0x3f) & 1) << 0x1f | uVar1 >> 1) ^ (uint)uVar13) <
           (((uint)((byte)((longlong)uVar14 >> 0x3f) & 1) << 0x1f | uVar2 >> 1) ^ (uint)uVar14);
  if (((int)(uVar5 - (uVar7 + (uVar4 < uVar6))) < 0 !=
      (SBORROW4(uVar5,uVar7) != SBORROW4(uVar5 - uVar7,(uint)(uVar4 < uVar6)))) ==
      ((int)(uVar8 - (uVar9 + bVar10)) < 0 !=
      (SBORROW4(uVar8,uVar9) != SBORROW4(uVar8 - uVar9,(uint)bVar10)))) {
    iVar3 = *(int *)(param_3 + 0xe4);
    uVar11 = FUN_0107d010(*(int *)(param_2 + 0xe4) + 8);
    uVar9 = (uint)((ulonglong)uVar11 >> 0x20);
    uVar12 = FUN_0107d010(iVar3 + 8);
    uVar8 = (uint)((ulonglong)uVar12 >> 0x20);
    uVar1 = (int)uVar9 >> 0x1f;
    uVar9 = uVar1 >> 1 ^ uVar9;
    uVar2 = (int)uVar8 >> 0x1f;
    uVar8 = uVar2 >> 1 ^ uVar8;
    bVar10 = (((uint)((byte)((longlong)uVar11 >> 0x3f) & 1) << 0x1f | uVar1 >> 1) ^ (uint)uVar11) <
             (((uint)((byte)((longlong)uVar12 >> 0x3f) & 1) << 0x1f | uVar2 >> 1) ^ (uint)uVar12);
    param_1 = param_2;
    if (((int)(uVar5 - (uVar7 + (uVar4 < uVar6))) < 0 !=
        (SBORROW4(uVar5,uVar7) != SBORROW4(uVar5 - uVar7,(uint)(uVar4 < uVar6)))) !=
        ((int)(uVar9 - (uVar8 + bVar10)) < 0 !=
        (SBORROW4(uVar9,uVar8) != SBORROW4(uVar9 - uVar8,(uint)bVar10)))) {
      param_1 = param_3;
    }
  }
  return param_1;
}

