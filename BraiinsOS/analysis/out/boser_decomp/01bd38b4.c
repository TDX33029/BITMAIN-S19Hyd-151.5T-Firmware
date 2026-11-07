// FUN_01bd38b4 @ 01bd38b4 size=508 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_01bd38b4(int *param_1,uint *param_2,uint *param_3)

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
  uint local_30;
  int local_2c;
  
  local_2c = DAT_01d53560;
  uVar8 = param_2[1] - param_3[1];
  uVar10 = *param_2 - *param_3;
  uVar2 = (uint)(*param_2 < *param_3);
  uVar9 = uVar8 - uVar2;
  iVar1 = -(uint)(uVar8 < uVar2) - (uint)(param_2[1] < param_3[1]);
  uVar2 = -iVar1;
  uVar8 = param_2[2] - param_3[2];
  uVar7 = uVar8 + iVar1;
  iVar1 = -(((int)uVar2 >> 0x1f) + (uint)(uVar8 < uVar2)) - (uint)(param_2[2] < param_3[2]);
  uVar2 = -iVar1;
  uVar8 = param_2[3] - param_3[3];
  uVar6 = uVar8 + iVar1;
  iVar1 = -(((int)uVar2 >> 0x1f) + (uint)(uVar8 < uVar2)) - (uint)(param_2[3] < param_3[3]);
  uVar2 = -iVar1;
  uVar8 = param_2[4] - param_3[4];
  uVar5 = uVar8 + iVar1;
  iVar1 = -(((int)uVar2 >> 0x1f) + (uint)(uVar8 < uVar2)) - (uint)(param_2[4] < param_3[4]);
  uVar2 = -iVar1;
  uVar8 = param_2[5] - param_3[5];
  uVar4 = uVar8 + iVar1;
  iVar1 = -(((int)uVar2 >> 0x1f) + (uint)(uVar8 < uVar2)) - (uint)(param_2[5] < param_3[5]);
  uVar2 = -iVar1;
  uVar8 = param_2[6] - param_3[6];
  uVar11 = uVar8 + iVar1;
  iVar1 = -(((int)uVar2 >> 0x1f) + (uint)(uVar8 < uVar2)) - (uint)(param_2[6] < param_3[6]);
  uVar3 = param_2[7] - param_3[7];
  uVar2 = -iVar1;
  FUN_01bd0bf4(&local_30,
               -(-(((int)uVar2 >> 0x1f) + (uint)(uVar3 < uVar2)) - (uint)(param_2[7] < param_3[7]))
               & 0xff,0,0xffffffff);
  uVar2 = (uint)CARRY4(uVar10,local_30);
  uVar8 = uVar2 + local_30;
  uVar2 = (uint)CARRY4(uVar2,local_30) + (uint)CARRY4(uVar8,uVar9);
  *param_1 = uVar10 + local_30;
  param_1[1] = uVar8 + uVar9;
  uVar8 = uVar2 + local_30;
  uVar9 = (uint)CARRY4(uVar2,local_30) + (uint)CARRY4(uVar8,uVar7);
  param_1[2] = uVar8 + uVar7;
  uVar2 = (uint)CARRY4(uVar6,uVar9);
  param_1[3] = uVar6 + uVar9;
  param_1[4] = uVar5 + uVar2;
  uVar2 = (uint)CARRY4(uVar5,uVar2);
  param_1[5] = uVar4 + uVar2;
  uVar2 = (uint)CARRY4(uVar4,uVar2);
  uVar8 = (local_30 & 1) + uVar2;
  param_1[6] = uVar8 + uVar11;
  param_1[7] = local_30 + CARRY4(local_30 & 1,uVar2) + (uint)CARRY4(uVar8,uVar11) + uVar3 + iVar1;
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

