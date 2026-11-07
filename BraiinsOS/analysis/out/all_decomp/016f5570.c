// FUN_016f5570 @ 016f5570 size=400 calls_out=0 calls_in=0
// strings: 

undefined8 FUN_016f5570(int *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar3 = param_2[1] - param_3[1];
  uVar7 = *param_2 - *param_3;
  uVar1 = (uint)(*param_2 < *param_3);
  uVar4 = uVar3 - uVar1;
  iVar10 = -(uint)(uVar3 < uVar1) - (uint)(param_2[1] < param_3[1]);
  uVar1 = -iVar10;
  uVar3 = param_2[2] - param_3[2];
  uVar12 = uVar3 + iVar10;
  iVar10 = -(((int)uVar1 >> 0x1f) + (uint)(uVar3 < uVar1)) - (uint)(param_2[2] < param_3[2]);
  uVar3 = param_2[3] - param_3[3];
  uVar1 = -iVar10;
  uVar5 = uVar3 + iVar10;
  iVar10 = -(((int)uVar1 >> 0x1f) + (uint)(uVar3 < uVar1)) - (uint)(param_2[3] < param_3[3]);
  uVar3 = param_2[4] - param_3[4];
  uVar1 = -iVar10;
  uVar9 = uVar3 + iVar10;
  iVar10 = -(((int)uVar1 >> 0x1f) + (uint)(uVar3 < uVar1)) - (uint)(param_2[4] < param_3[4]);
  uVar3 = param_2[5] - param_3[5];
  uVar1 = -iVar10;
  uVar2 = uVar3 + iVar10;
  iVar10 = -(((int)uVar1 >> 0x1f) + (uint)(uVar3 < uVar1)) - (uint)(param_2[5] < param_3[5]);
  uVar1 = -iVar10;
  uVar3 = param_2[6] - param_3[6];
  uVar11 = uVar3 + iVar10;
  iVar10 = -(((int)uVar1 >> 0x1f) + (uint)(uVar3 < uVar1)) - (uint)(param_2[6] < param_3[6]);
  uVar3 = param_2[7] - param_3[7];
  uVar1 = -iVar10;
  uVar6 = -(((int)uVar1 >> 0x1f) + (uint)(uVar3 < uVar1)) - (uint)(param_2[7] < param_3[7]);
  *param_1 = uVar7 + uVar6;
  uVar1 = (uint)CARRY4(uVar7,uVar6);
  uVar7 = uVar4 + uVar6;
  uVar8 = (uint)CARRY4(uVar4,uVar6) + (uint)CARRY4(uVar1,uVar7);
  uVar13 = uVar12 + uVar6;
  uVar4 = (uint)CARRY4(uVar12,uVar6) + (uint)CARRY4(uVar13,uVar8);
  param_1[1] = uVar1 + uVar7;
  uVar1 = (uint)CARRY4(uVar5,uVar4);
  param_1[2] = uVar13 + uVar8;
  param_1[4] = uVar9 + uVar1;
  uVar1 = (uint)CARRY4(uVar9,uVar1);
  param_1[3] = uVar5 + uVar4;
  param_1[5] = uVar2 + uVar1;
  uVar1 = (uint)CARRY4(uVar2,uVar1);
  uVar2 = uVar11 + (uVar6 & 1);
  param_1[6] = uVar2 + uVar1;
  param_1[7] = uVar3 + iVar10 + uVar6 + (uint)CARRY4(uVar11,uVar6 & 1) + (uint)CARRY4(uVar2,uVar1);
  return 0;
}

