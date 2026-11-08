// FUN_01b1064c @ 01b1064c size=524 calls_out=2 calls_in=0
// strings: 

undefined8 FUN_01b1064c(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint local_30;
  int local_2c;
  
  uVar6 = -*param_2;
  uVar7 = (uint)(*param_2 != 0);
  local_2c = DAT_01d53560;
  iVar8 = uVar7 + param_2[1];
  uVar10 = -iVar8;
  uVar7 = (uint)(iVar8 != 0) + (uint)CARRY4(uVar7,param_2[1]);
  iVar8 = uVar7 + param_2[2];
  uVar1 = -iVar8;
  uVar7 = (uint)(iVar8 != 0) + (uint)CARRY4(uVar7,param_2[2]);
  iVar8 = uVar7 + param_2[3];
  uVar2 = -iVar8;
  uVar7 = (uint)(iVar8 != 0) + (uint)CARRY4(uVar7,param_2[3]);
  iVar8 = uVar7 + param_2[4];
  uVar3 = -iVar8;
  uVar7 = (uint)(iVar8 != 0) + (uint)CARRY4(uVar7,param_2[4]);
  iVar8 = uVar7 + param_2[5];
  uVar4 = -iVar8;
  uVar7 = (uint)(iVar8 != 0) + (uint)CARRY4(uVar7,param_2[5]);
  iVar8 = uVar7 + param_2[6];
  uVar5 = -iVar8;
  uVar7 = (uint)(iVar8 != 0) + (uint)CARRY4(uVar7,param_2[6]);
  iVar8 = uVar7 + param_2[7];
  FUN_01b0cfb8(&local_30,(iVar8 != 0) + CARRY4(uVar7,param_2[7]),0,0xffffffff);
  uVar7 = (uint)CARRY4(uVar6,local_30);
  uVar9 = uVar7 + local_30;
  uVar7 = (uint)CARRY4(uVar7,local_30) + (uint)CARRY4(uVar9,uVar10);
  *param_1 = uVar6 + local_30;
  param_1[1] = uVar9 + uVar10;
  uVar6 = uVar7 + local_30;
  uVar10 = (uint)CARRY4(uVar7,local_30) + (uint)CARRY4(uVar6,uVar1);
  param_1[2] = uVar6 + uVar1;
  uVar7 = (uint)CARRY4(uVar2,uVar10);
  param_1[3] = uVar2 + uVar10;
  param_1[4] = uVar3 + uVar7;
  uVar7 = (uint)CARRY4(uVar3,uVar7);
  param_1[5] = uVar4 + uVar7;
  uVar7 = (uint)CARRY4(uVar4,uVar7);
  uVar6 = (local_30 & 1) + uVar7;
  param_1[6] = uVar6 + uVar5;
  param_1[7] = (local_30 + CARRY4(local_30 & 1,uVar7) + (uint)CARRY4(uVar6,uVar5)) - iVar8;
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

