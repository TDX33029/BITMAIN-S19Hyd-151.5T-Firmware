// FUN_01b17c68 @ 01b17c68 size=788 calls_out=2 calls_in=0
// strings: 

undefined8 FUN_01b17c68(int *param_1,int *param_2)

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
  int iVar12;
  uint uVar13;
  uint local_30;
  int local_2c;
  
  uVar1 = -*param_2;
  uVar11 = (uint)(*param_2 != 0);
  local_2c = DAT_01d53560;
  iVar12 = uVar11 + param_2[1];
  uVar9 = -iVar12;
  uVar11 = (uint)(iVar12 != 0) + (uint)CARRY4(uVar11,param_2[1]);
  iVar12 = uVar11 + param_2[2];
  uVar10 = -iVar12;
  uVar11 = (uint)(iVar12 != 0) + (uint)CARRY4(uVar11,param_2[2]);
  iVar12 = uVar11 + param_2[3];
  uVar13 = -iVar12;
  uVar11 = (uint)(iVar12 != 0) + (uint)CARRY4(uVar11,param_2[3]);
  iVar12 = uVar11 + param_2[4];
  uVar2 = -iVar12;
  uVar11 = (uint)(iVar12 != 0) + (uint)CARRY4(uVar11,param_2[4]);
  iVar12 = uVar11 + param_2[5];
  uVar3 = -iVar12;
  uVar11 = (uint)(iVar12 != 0) + (uint)CARRY4(uVar11,param_2[5]);
  iVar12 = uVar11 + param_2[6];
  uVar4 = -iVar12;
  uVar11 = (uint)(iVar12 != 0) + (uint)CARRY4(uVar11,param_2[6]);
  iVar12 = uVar11 + param_2[7];
  uVar5 = -iVar12;
  uVar11 = (uint)(iVar12 != 0) + (uint)CARRY4(uVar11,param_2[7]);
  iVar12 = uVar11 + param_2[8];
  uVar6 = -iVar12;
  uVar11 = (uint)(iVar12 != 0) + (uint)CARRY4(uVar11,param_2[8]);
  iVar12 = uVar11 + param_2[9];
  uVar7 = -iVar12;
  uVar11 = (uint)(iVar12 != 0) + (uint)CARRY4(uVar11,param_2[9]);
  iVar12 = uVar11 + param_2[10];
  uVar8 = -iVar12;
  uVar11 = (uint)(iVar12 != 0) + (uint)CARRY4(uVar11,param_2[10]);
  iVar12 = uVar11 + param_2[0xb];
  FUN_01b0cfb8(&local_30,(iVar12 != 0) + CARRY4(uVar11,param_2[0xb]),0,0xffffffff);
  uVar11 = (uint)CARRY4(uVar1,local_30);
  param_1[1] = uVar9 + uVar11;
  uVar11 = (uint)CARRY4(uVar9,uVar11);
  param_1[2] = uVar10 + uVar11;
  uVar11 = (uint)CARRY4(uVar10,uVar11);
  uVar9 = uVar11 + local_30;
  uVar10 = (uint)CARRY4(uVar11,local_30) + (uint)CARRY4(uVar9,uVar13);
  uVar11 = (local_30 & 0xfffffffe) + uVar10;
  param_1[3] = uVar9 + uVar13;
  uVar9 = (uint)CARRY4(local_30 & 0xfffffffe,uVar10) + (uint)CARRY4(uVar11,uVar2);
  uVar10 = uVar9 + local_30;
  param_1[4] = uVar11 + uVar2;
  uVar11 = (uint)CARRY4(uVar9,local_30) + (uint)CARRY4(uVar10,uVar3);
  uVar9 = uVar11 + local_30;
  param_1[5] = uVar10 + uVar3;
  uVar11 = (uint)CARRY4(uVar11,local_30) + (uint)CARRY4(uVar9,uVar4);
  uVar10 = uVar11 + local_30;
  param_1[6] = uVar9 + uVar4;
  uVar11 = (uint)CARRY4(uVar11,local_30) + (uint)CARRY4(uVar10,uVar5);
  uVar13 = uVar11 + local_30;
  param_1[7] = uVar10 + uVar5;
  uVar11 = (uint)CARRY4(uVar11,local_30) + (uint)CARRY4(uVar13,uVar6);
  uVar9 = uVar11 + local_30;
  uVar11 = (uint)CARRY4(uVar11,local_30) + (uint)CARRY4(uVar9,uVar7);
  uVar10 = uVar11 + local_30;
  param_1[0xb] = (local_30 + CARRY4(uVar11,local_30) + (uint)CARRY4(uVar10,uVar8)) - iVar12;
  *param_1 = uVar1 + local_30;
  param_1[8] = uVar13 + uVar6;
  param_1[9] = uVar9 + uVar7;
  param_1[10] = uVar10 + uVar8;
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

