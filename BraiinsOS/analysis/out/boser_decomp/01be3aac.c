// FUN_01be3aac @ 01be3aac size=174 calls_out=1 calls_in=1
// strings: 

int FUN_01be3aac(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  iVar9 = *(int *)(param_1 + 4);
  iVar8 = *(int *)(param_1 + 0x2c);
  uVar1 = *(uint *)(param_1 + 0x70);
  iVar3 = *(int *)(param_1 + 0x74);
  uVar4 = iVar9 - iVar8;
  uVar5 = uVar4 + *(uint *)(param_1 + 0x78);
  iVar7 = *(int *)(param_1 + 0x7c) +
          ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar4,*(uint *)(param_1 + 0x78));
  if ((int)((iVar7 - iVar3) - (uint)(uVar5 < uVar1)) < 0 !=
      (SBORROW4(iVar7,iVar3) != SBORROW4(iVar7 - iVar3,(uint)(uVar5 < uVar1))) ||
      uVar1 == 0 && iVar3 == 0) {
    iVar3 = FUN_01beb1a0();
    if (-1 < iVar3) {
      uVar4 = *(uint *)(param_1 + 0x70);
      uVar6 = uVar5 + 1;
      iVar7 = iVar7 + (uint)(0xfffffffe < uVar5);
      uVar1 = *(uint *)(param_1 + 4);
      iVar8 = *(int *)(param_1 + 8);
      if (uVar4 != 0 || *(int *)(param_1 + 0x74) != 0) {
        uVar10 = iVar8 - uVar1;
        uVar5 = uVar4 - uVar6;
        iVar2 = (*(int *)(param_1 + 0x74) - iVar7) - (uint)(uVar4 < uVar6);
        iVar9 = (int)uVar10 >> 0x1f;
        if ((int)((iVar2 - iVar9) - (uint)(uVar5 < uVar10)) < 0 !=
            (SBORROW4(iVar2,iVar9) != SBORROW4(iVar2 - iVar9,(uint)(uVar5 < uVar10)))) {
          iVar8 = uVar1 + uVar5;
        }
      }
      *(int *)(param_1 + 0x68) = iVar8;
      uVar4 = *(uint *)(param_1 + 0x2c) - uVar1;
      *(uint *)(param_1 + 0x78) = uVar4 + uVar6;
      *(uint *)(param_1 + 0x7c) = iVar7 + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar4,uVar6);
      if (*(uint *)(param_1 + 0x2c) < uVar1) {
        return iVar3;
      }
      *(char *)(uVar1 - 1) = (char)iVar3;
      return iVar3;
    }
    iVar8 = *(int *)(param_1 + 0x2c);
    iVar9 = *(int *)(param_1 + 4);
  }
  uVar1 = iVar8 - iVar9;
  *(int *)(param_1 + 0x68) = iVar9;
  *(uint *)(param_1 + 0x78) = uVar1 + uVar5;
  *(uint *)(param_1 + 0x7c) = iVar7 + ((int)uVar1 >> 0x1f) + (uint)CARRY4(uVar1,uVar5);
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  return -1;
}

