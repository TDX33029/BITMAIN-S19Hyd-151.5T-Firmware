// FUN_016fc818 @ 016fc818 size=644 calls_out=0 calls_in=0
// strings: 

undefined8 FUN_016fc818(int *param_1,int *param_2)

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
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  
  uVar2 = -*param_2;
  uVar10 = (uint)(*param_2 != 0);
  iVar11 = uVar10 + param_2[1];
  uVar8 = -iVar11;
  uVar9 = (uint)(iVar11 != 0) + (uint)CARRY4(uVar10,param_2[1]);
  iVar11 = uVar9 + param_2[2];
  uVar10 = -iVar11;
  uVar7 = (uint)(iVar11 != 0) + (uint)CARRY4(uVar9,param_2[2]);
  iVar11 = uVar7 + param_2[3];
  uVar9 = -iVar11;
  uVar1 = (uint)(iVar11 != 0) + (uint)CARRY4(uVar7,param_2[3]);
  iVar11 = uVar1 + param_2[4];
  uVar7 = -iVar11;
  uVar4 = (uint)(iVar11 != 0) + (uint)CARRY4(uVar1,param_2[4]);
  iVar11 = uVar4 + param_2[5];
  uVar1 = -iVar11;
  uVar5 = (uint)(iVar11 != 0) + (uint)CARRY4(uVar4,param_2[5]);
  iVar11 = uVar5 + param_2[6];
  uVar4 = -iVar11;
  uVar6 = (uint)(iVar11 != 0) + (uint)CARRY4(uVar5,param_2[6]);
  iVar11 = uVar6 + param_2[7];
  uVar5 = -iVar11;
  uVar13 = (uint)(iVar11 != 0) + (uint)CARRY4(uVar6,param_2[7]);
  iVar11 = uVar13 + param_2[8];
  uVar6 = -iVar11;
  uVar12 = (uint)(iVar11 != 0) + (uint)CARRY4(uVar13,param_2[8]);
  iVar11 = uVar12 + param_2[9];
  uVar13 = -iVar11;
  uVar3 = (uint)(iVar11 != 0) + (uint)CARRY4(uVar12,param_2[9]);
  iVar11 = uVar3 + param_2[10];
  uVar12 = -iVar11;
  uVar3 = (uint)(iVar11 != 0) + (uint)CARRY4(uVar3,param_2[10]);
  iVar11 = uVar3 + param_2[0xb];
  uVar3 = -((uint)CARRY4(uVar3,param_2[0xb]) + (uint)(iVar11 != 0));
  *param_1 = uVar2 + uVar3;
  uVar2 = (uint)CARRY4(uVar2,uVar3);
  param_1[1] = uVar8 + uVar2;
  uVar2 = (uint)CARRY4(uVar8,uVar2);
  param_1[2] = uVar10 + uVar2;
  uVar2 = (uint)CARRY4(uVar10,uVar2);
  uVar8 = uVar9 + uVar3;
  param_1[3] = uVar8 + uVar2;
  uVar8 = (uint)CARRY4(uVar9,uVar3) + (uint)CARRY4(uVar8,uVar2);
  uVar2 = uVar7 + (uVar3 & 0xfffffffe);
  param_1[4] = uVar2 + uVar8;
  uVar8 = (uint)CARRY4(uVar7,uVar3 & 0xfffffffe) + (uint)CARRY4(uVar2,uVar8);
  uVar2 = uVar1 + uVar3;
  param_1[5] = uVar2 + uVar8;
  uVar8 = (uint)CARRY4(uVar1,uVar3) + (uint)CARRY4(uVar2,uVar8);
  uVar2 = uVar4 + uVar3;
  param_1[6] = uVar2 + uVar8;
  uVar10 = (uint)CARRY4(uVar4,uVar3) + (uint)CARRY4(uVar2,uVar8);
  uVar2 = uVar5 + uVar3;
  uVar8 = (uint)CARRY4(uVar5,uVar3) + (uint)CARRY4(uVar2,uVar10);
  uVar9 = uVar6 + uVar3;
  param_1[7] = uVar2 + uVar10;
  param_1[8] = uVar9 + uVar8;
  uVar9 = (uint)CARRY4(uVar6,uVar3) + (uint)CARRY4(uVar9,uVar8);
  uVar10 = uVar13 + uVar3;
  uVar2 = (uint)CARRY4(uVar13,uVar3) + (uint)CARRY4(uVar10,uVar9);
  uVar8 = uVar12 + uVar3;
  param_1[9] = uVar10 + uVar9;
  param_1[10] = uVar8 + uVar2;
  param_1[0xb] = (uVar3 - iVar11) + (uint)CARRY4(uVar12,uVar3) + (uint)CARRY4(uVar8,uVar2);
  return 0;
}

