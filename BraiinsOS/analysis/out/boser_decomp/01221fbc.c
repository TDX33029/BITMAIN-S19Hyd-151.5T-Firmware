// FUN_01221fbc @ 01221fbc size=208 calls_out=1 calls_in=1
// strings: 

void FUN_01221fbc(int *param_1,uint *param_2,uint *param_3)

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
  uint uVar11;
  bool bVar12;
  
  uVar6 = *param_3;
  uVar9 = *param_2;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  uVar7 = param_2[1];
  uVar11 = param_2[2];
  uVar5 = param_3[1];
  uVar4 = param_3[2];
  uVar8 = param_2[3];
  uVar3 = param_3[3];
  *param_1 = uVar6 + uVar9;
  bVar12 = CARRY4(uVar3,uVar8) || CARRY4(uVar3 + uVar8,(uint)CARRY4(uVar4,uVar11));
  param_1[6] = -0x80000000;
  param_1[3] = uVar3 + uVar8 + (uint)CARRY4(uVar4,uVar11);
  uVar3 = param_3[4];
  uVar8 = param_3[6];
  param_1[4] = uVar3 + uVar1 + (uint)bVar12;
  uVar10 = param_3[5];
  param_1[2] = uVar4 + uVar11;
  param_1[1] = uVar5 + uVar7 + (uint)CARRY4(uVar6,uVar9);
  param_1[5] = uVar10 + uVar2 + (uint)(CARRY4(uVar3,uVar1) || CARRY4(uVar3 + uVar1,(uint)bVar12));
  if (uVar8 != 0x80000000) {
    FUN_0132b958(uVar8,param_3[7],8,0x28);
  }
  if (param_2[6] == 0x80000000) {
    return;
  }
  FUN_0132b958(param_2[6],param_2[7],8,0x28);
  return;
}

