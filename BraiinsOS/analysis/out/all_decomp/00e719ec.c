// FUN_00e719ec @ 00e719ec size=172 calls_out=0 calls_in=0
// strings: 

undefined4 FUN_00e719ec(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar1 = *(uint *)(param_2 + 8);
  uVar5 = 5;
  uVar9 = 5;
  uVar7 = *(uint *)(param_2 + 0x14);
  if (uVar1 < 0x10000) {
    uVar5 = 3;
  }
  if (uVar1 < 0xfb) {
    uVar5 = 1;
  }
  uVar2 = uVar5 + uVar1 + *param_1;
  uVar8 = 5;
  if (uVar7 < 0x10000) {
    uVar8 = 3;
  }
  if (uVar7 < 0xfb) {
    uVar8 = 1;
  }
  uVar3 = uVar8 + uVar7 + uVar2;
  uVar6 = uVar3 + 1;
  iVar4 = (uint)CARRY4(uVar8,uVar7) +
          (uint)CARRY4(uVar5,uVar1) + param_1[1] + (uint)CARRY4(uVar5 + uVar1,*param_1) +
          (uint)CARRY4(uVar8 + uVar7,uVar2) + (uint)(0xfffffffe < uVar3);
  if (*(int *)(param_2 + 0x18) != -0x80000000) {
    uVar1 = *(uint *)(param_2 + 0x20);
    bVar10 = CARRY4(uVar6,uVar1);
    uVar5 = uVar6 + uVar1;
    if (uVar1 < 0x10000) {
      uVar9 = 3;
    }
    if (uVar1 < 0xfb) {
      uVar9 = 1;
    }
    uVar6 = uVar5 + uVar9;
    iVar4 = iVar4 + (uint)bVar10 + (uint)CARRY4(uVar5,uVar9);
  }
  *param_1 = uVar6 + 1;
  param_1[1] = iVar4 + (uint)(0xfffffffe < uVar6);
  return 0;
}

