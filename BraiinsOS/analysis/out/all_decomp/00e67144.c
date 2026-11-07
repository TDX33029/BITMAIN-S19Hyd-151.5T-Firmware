// FUN_00e67144 @ 00e67144 size=204 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_00e67144(uint *param_1,int *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  
  if (*param_2 == -0x80000000) {
    uVar9 = *param_1 + 1;
    uVar7 = param_1[1] + (uint)(0xfffffffe < *param_1);
  }
  else {
    puVar5 = (uint *)param_2[1];
    uVar6 = param_2[2];
    uVar7 = 5;
    if (uVar6 < 0x10000) {
      uVar7 = 3;
    }
    if (uVar6 < 0xfb) {
      uVar7 = 1;
    }
    uVar3 = *param_1 + uVar7;
    uVar9 = uVar3 + 1;
    uVar7 = param_1[1] + (uint)CARRY4(*param_1,uVar7) + (uint)(0xfffffffe < uVar3);
    iVar10 = uVar6 * 0x30;
    while (iVar10 != 0) {
      uVar6 = 5;
      puVar1 = puVar5 + 9;
      iVar10 = iVar10 + -0x30;
      uVar3 = 9;
      if ((*puVar5 & 1) != 0) {
        uVar3 = 0x11;
      }
      puVar2 = puVar5 + 6;
      bVar11 = CARRY4(uVar9,uVar3);
      uVar3 = uVar9 + uVar3;
      puVar5 = puVar5 + 0xc;
      if (*puVar1 < 0x10000) {
        uVar6 = 3;
      }
      if (*puVar1 < 0xfb) {
        uVar6 = 1;
      }
      uVar8 = 2;
      uVar4 = uVar3 + uVar6;
      if (*puVar2 != 0) {
        uVar8 = 10;
      }
      uVar9 = uVar4 + uVar8;
      uVar7 = uVar7 + bVar11 + (uint)CARRY4(uVar3,uVar6) + (uint)CARRY4(uVar4,uVar8);
    }
  }
  *param_1 = uVar9;
  param_1[1] = uVar7;
  return 0;
}

