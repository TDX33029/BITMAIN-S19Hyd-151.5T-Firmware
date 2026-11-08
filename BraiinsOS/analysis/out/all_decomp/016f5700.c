// FUN_016f5700 @ 016f5700 size=392 calls_out=0 calls_in=0
// strings: 

undefined8 FUN_016f5700(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar10;
  int iVar9;
  uint uVar11;
  
  uVar1 = -*param_2;
  uVar10 = (uint)(*param_2 != 0);
  iVar9 = uVar10 + param_2[1];
  uVar6 = -iVar9;
  uVar7 = (uint)(iVar9 != 0) + (uint)CARRY4(uVar10,param_2[1]);
  iVar9 = uVar7 + param_2[2];
  uVar10 = -iVar9;
  uVar5 = (uint)(iVar9 != 0) + (uint)CARRY4(uVar7,param_2[2]);
  iVar9 = uVar5 + param_2[3];
  uVar7 = -iVar9;
  uVar4 = (uint)(iVar9 != 0) + (uint)CARRY4(uVar5,param_2[3]);
  iVar9 = uVar4 + param_2[4];
  uVar5 = -iVar9;
  uVar3 = (uint)(iVar9 != 0) + (uint)CARRY4(uVar4,param_2[4]);
  iVar9 = uVar3 + param_2[5];
  uVar4 = -iVar9;
  uVar2 = (uint)(iVar9 != 0) + (uint)CARRY4(uVar3,param_2[5]);
  iVar9 = uVar2 + param_2[6];
  uVar3 = -iVar9;
  uVar2 = (uint)(iVar9 != 0) + (uint)CARRY4(uVar2,param_2[6]);
  iVar9 = uVar2 + param_2[7];
  uVar2 = -((uint)CARRY4(uVar2,param_2[7]) + (uint)(iVar9 != 0));
  *param_1 = uVar1 + uVar2;
  uVar1 = (uint)CARRY4(uVar1,uVar2);
  uVar11 = uVar6 + uVar2;
  uVar6 = (uint)CARRY4(uVar6,uVar2) + (uint)CARRY4(uVar11,uVar1);
  uVar8 = uVar10 + uVar2;
  param_1[2] = uVar8 + uVar6;
  uVar6 = (uint)CARRY4(uVar10,uVar2) + (uint)CARRY4(uVar8,uVar6);
  param_1[1] = uVar11 + uVar1;
  uVar1 = (uint)CARRY4(uVar7,uVar6);
  param_1[3] = uVar7 + uVar6;
  uVar6 = (uint)CARRY4(uVar5,uVar1);
  param_1[4] = uVar5 + uVar1;
  param_1[5] = uVar4 + uVar6;
  uVar1 = (uint)CARRY4(uVar4,uVar6);
  uVar6 = uVar3 + (uVar2 & 1);
  param_1[6] = uVar6 + uVar1;
  param_1[7] = (uVar2 - iVar9) + (uint)CARRY4(uVar3,uVar2 & 1) + (uint)CARRY4(uVar6,uVar1);
  return 0;
}

