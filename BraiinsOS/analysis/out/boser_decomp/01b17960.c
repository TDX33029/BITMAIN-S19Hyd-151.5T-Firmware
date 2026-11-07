// FUN_01b17960 @ 01b17960 size=764 calls_out=2 calls_in=0
// strings: 

undefined8 FUN_01b17960(int *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
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
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint local_30;
  int local_2c;
  
  local_2c = DAT_01d53560;
  uVar7 = param_2[1] - param_3[1];
  uVar9 = *param_2 - *param_3;
  uVar3 = (uint)(*param_2 < *param_3);
  uVar8 = uVar7 - uVar3;
  iVar1 = -(uint)(uVar7 < uVar3) - (uint)(param_2[1] < param_3[1]);
  uVar3 = -iVar1;
  uVar7 = param_2[2] - param_3[2];
  uVar6 = uVar7 + iVar1;
  iVar1 = -(((int)uVar3 >> 0x1f) + (uint)(uVar7 < uVar3)) - (uint)(param_2[2] < param_3[2]);
  uVar3 = -iVar1;
  uVar7 = param_2[3] - param_3[3];
  uVar5 = uVar7 + iVar1;
  iVar1 = -(((int)uVar3 >> 0x1f) + (uint)(uVar7 < uVar3)) - (uint)(param_2[3] < param_3[3]);
  uVar3 = -iVar1;
  uVar7 = param_2[4] - param_3[4];
  uVar4 = uVar7 + iVar1;
  iVar1 = -(((int)uVar3 >> 0x1f) + (uint)(uVar7 < uVar3)) - (uint)(param_2[4] < param_3[4]);
  uVar3 = -iVar1;
  uVar7 = param_2[5] - param_3[5];
  uVar10 = uVar7 + iVar1;
  iVar1 = -(((int)uVar3 >> 0x1f) + (uint)(uVar7 < uVar3)) - (uint)(param_2[5] < param_3[5]);
  uVar3 = -iVar1;
  uVar7 = param_2[6] - param_3[6];
  uVar11 = uVar7 + iVar1;
  iVar1 = -(((int)uVar3 >> 0x1f) + (uint)(uVar7 < uVar3)) - (uint)(param_2[6] < param_3[6]);
  uVar3 = -iVar1;
  uVar7 = param_2[7] - param_3[7];
  uVar12 = uVar7 + iVar1;
  iVar1 = -(((int)uVar3 >> 0x1f) + (uint)(uVar7 < uVar3)) - (uint)(param_2[7] < param_3[7]);
  uVar3 = -iVar1;
  uVar7 = param_2[8] - param_3[8];
  uVar13 = uVar7 + iVar1;
  iVar1 = -(((int)uVar3 >> 0x1f) + (uint)(uVar7 < uVar3)) - (uint)(param_2[8] < param_3[8]);
  uVar3 = -iVar1;
  uVar7 = param_2[9] - param_3[9];
  uVar14 = uVar7 + iVar1;
  iVar1 = -(((int)uVar3 >> 0x1f) + (uint)(uVar7 < uVar3)) - (uint)(param_2[9] < param_3[9]);
  uVar3 = -iVar1;
  uVar7 = param_2[10] - param_3[10];
  uVar15 = uVar7 + iVar1;
  iVar1 = -(((int)uVar3 >> 0x1f) + (uint)(uVar7 < uVar3)) - (uint)(param_2[10] < param_3[10]);
  uVar3 = -iVar1;
  uVar2 = param_2[0xb] - param_3[0xb];
  FUN_01b0cfb8(&local_30,
               -(-(((int)uVar3 >> 0x1f) + (uint)(uVar2 < uVar3)) -
                (uint)(param_2[0xb] < param_3[0xb])) & 0xff,0,0xffffffff);
  uVar3 = (uint)CARRY4(uVar9,local_30);
  uVar7 = (uint)CARRY4(uVar3,uVar8);
  param_1[1] = uVar3 + uVar8;
  param_1[2] = uVar6 + uVar7;
  uVar3 = (uint)CARRY4(uVar6,uVar7);
  uVar7 = uVar3 + local_30;
  uVar3 = (uint)CARRY4(uVar3,local_30) + (uint)CARRY4(uVar7,uVar5);
  param_1[3] = uVar7 + uVar5;
  uVar7 = (local_30 & 0xfffffffe) + uVar3;
  uVar3 = (uint)CARRY4(local_30 & 0xfffffffe,uVar3) + (uint)CARRY4(uVar7,uVar4);
  param_1[4] = uVar7 + uVar4;
  uVar7 = uVar3 + local_30;
  uVar3 = (uint)CARRY4(uVar3,local_30) + (uint)CARRY4(uVar7,uVar10);
  param_1[5] = uVar7 + uVar10;
  uVar7 = uVar3 + local_30;
  uVar3 = (uint)CARRY4(uVar3,local_30) + (uint)CARRY4(uVar7,uVar11);
  uVar4 = uVar3 + local_30;
  param_1[6] = uVar7 + uVar11;
  uVar3 = (uint)CARRY4(uVar3,local_30) + (uint)CARRY4(uVar4,uVar12);
  uVar5 = uVar3 + local_30;
  param_1[7] = uVar4 + uVar12;
  uVar3 = (uint)CARRY4(uVar3,local_30) + (uint)CARRY4(uVar5,uVar13);
  uVar7 = uVar3 + local_30;
  uVar3 = (uint)CARRY4(uVar3,local_30) + (uint)CARRY4(uVar7,uVar14);
  uVar4 = uVar3 + local_30;
  param_1[0xb] = local_30 + CARRY4(uVar3,local_30) + (uint)CARRY4(uVar4,uVar15) + uVar2 + iVar1;
  *param_1 = uVar9 + local_30;
  param_1[8] = uVar5 + uVar13;
  param_1[9] = uVar7 + uVar14;
  param_1[10] = uVar4 + uVar15;
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

