// FUN_009db8cc @ 009db8cc size=164 calls_out=0 calls_in=0
// strings: 

void FUN_009db8cc(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar6 = 5;
  uVar8 = *(uint *)(param_1 + 0x14);
  if (uVar1 < 0x10000) {
    uVar6 = 3;
  }
  if (uVar1 < 0xfb) {
    uVar6 = 1;
  }
  uVar2 = uVar6 + uVar1 + *param_2;
  uVar3 = uVar2 + uVar8;
  uVar9 = 5;
  uVar10 = 5;
  if (uVar8 < 0x10000) {
    uVar9 = 3;
  }
  if (uVar8 < 0xfb) {
    uVar9 = 1;
  }
  uVar4 = uVar3 + uVar9;
  uVar7 = uVar4 + 1;
  iVar5 = (uint)CARRY4(uVar6,uVar1) + param_2[1] + (uint)CARRY4(uVar6 + uVar1,*param_2) +
          (uint)CARRY4(uVar2,uVar8) + (uint)CARRY4(uVar3,uVar9) + (uint)(0xfffffffe < uVar4);
  if (*(int *)(param_1 + 0x18) != -0x80000000) {
    uVar1 = *(uint *)(param_1 + 0x20);
    bVar11 = CARRY4(uVar7,uVar1);
    uVar6 = uVar7 + uVar1;
    if (uVar1 < 0x10000) {
      uVar10 = 3;
    }
    if (uVar1 < 0xfb) {
      uVar10 = 1;
    }
    uVar7 = uVar6 + uVar10;
    iVar5 = iVar5 + (uint)bVar11 + (uint)CARRY4(uVar6,uVar10);
  }
  *param_2 = uVar7 + 1;
  param_2[1] = iVar5 + (uint)(0xfffffffe < uVar7);
  return;
}

