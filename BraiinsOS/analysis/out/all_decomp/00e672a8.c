// FUN_00e672a8 @ 00e672a8 size=216 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_00e672a8(uint *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  
  if (*param_2 == -0x80000000) {
    uVar11 = *param_1 + 1;
    uVar7 = param_1[1] + (uint)(0xfffffffe < *param_1);
  }
  else {
    puVar4 = (uint *)param_2[1];
    uVar5 = param_2[2];
    uVar7 = 5;
    if (uVar5 < 0x10000) {
      uVar7 = 3;
    }
    if (uVar5 < 0xfb) {
      uVar7 = 1;
    }
    uVar2 = *param_1 + uVar7;
    uVar11 = uVar2 + 1;
    uVar7 = param_1[1] + (uint)CARRY4(*param_1,uVar7) + (uint)(0xfffffffe < uVar2);
    iVar3 = uVar5 * 0x20;
    while (iVar3 != 0) {
      uVar9 = puVar4[6];
      puVar1 = puVar4 + 7;
      uVar2 = 5;
      uVar5 = *puVar4;
      iVar3 = iVar3 + -0x20;
      puVar4 = puVar4 + 8;
      if (uVar9 < 0x10000) {
        uVar2 = 3;
      }
      if (uVar9 < 0xfb) {
        uVar2 = 1;
      }
      bVar12 = CARRY4(uVar2 + uVar9,uVar11);
      uVar10 = uVar2 + uVar9 + uVar11;
      uVar6 = 1;
      if ((uVar5 & 1) != 0) {
        uVar6 = 9;
      }
      uVar5 = uVar10 + uVar6;
      uVar8 = 5;
      if (*puVar1 < 0x10000) {
        uVar8 = 3;
      }
      if (*puVar1 < 0xfb) {
        uVar8 = 1;
      }
      uVar11 = uVar5 + uVar8;
      uVar7 = CARRY4(uVar2,uVar9) + uVar7 + (uint)bVar12 + (uint)CARRY4(uVar10,uVar6) +
              (uint)CARRY4(uVar5,uVar8);
    }
  }
  *param_1 = uVar11;
  param_1[1] = uVar7;
  return 0;
}

