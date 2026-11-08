// FUN_00e678a0 @ 00e678a0 size=640 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_00e678a0(uint *param_1,uint *param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  
  if (*param_2 == 2 && param_2[1] == 0) {
    uVar2 = *param_1;
    uVar4 = param_1[1];
  }
  else {
    uVar4 = *param_1;
    if ((short)param_2[0x14] == 1) {
      uVar3 = 3;
      if (*(ushort *)((int)param_2 + 0x52) < 0xfb) {
        uVar3 = 1;
      }
      bVar7 = CARRY4(uVar4,uVar3);
      uVar4 = uVar4 + uVar3;
      iVar5 = param_1[1] + (uint)bVar7 + (uint)(0xfffffffd < uVar4);
      sVar1 = (short)param_2[0x15];
    }
    else {
      iVar5 = param_1[1] + (uint)(0xfffffffd < uVar4);
      sVar1 = (short)param_2[0x15];
    }
    uVar4 = uVar4 + 2;
    if (sVar1 == 1) {
      uVar3 = 3;
      if (*(ushort *)((int)param_2 + 0x56) < 0xfb) {
        uVar3 = 1;
      }
      bVar7 = CARRY4(uVar4,uVar3);
      uVar4 = uVar4 + uVar3;
      iVar5 = iVar5 + (uint)bVar7;
    }
    uVar3 = uVar4 + 2;
    iVar5 = iVar5 + (uint)(0xfffffffe < uVar4) + (uint)(0xfffffffe < uVar4 + 1);
    if (param_2[8] != 0x80000000) {
      uVar2 = param_2[10];
      uVar6 = 5;
      bVar7 = CARRY4(uVar3,uVar2);
      uVar4 = uVar3 + uVar2;
      if (uVar2 < 0x10000) {
        uVar6 = 3;
      }
      if (uVar2 < 0xfb) {
        uVar6 = 1;
      }
      uVar3 = uVar4 + uVar6;
      iVar5 = iVar5 + (uint)bVar7 + (uint)CARRY4(uVar4,uVar6);
    }
    uVar4 = uVar3 + 1;
    iVar5 = iVar5 + (uint)(0xfffffffe < uVar3);
    if (param_2[0xb] != 0x80000000) {
      uVar3 = param_2[0xd];
      bVar7 = CARRY4(uVar4,uVar3);
      uVar2 = uVar4 + uVar3;
      uVar6 = 5;
      if (uVar3 < 0x10000) {
        uVar6 = 3;
      }
      if (uVar3 < 0xfb) {
        uVar6 = 1;
      }
      uVar4 = uVar2 + uVar6;
      iVar5 = iVar5 + (uint)bVar7 + (uint)CARRY4(uVar2,uVar6);
    }
    if ((*param_2 & 1) == 0) {
      uVar3 = uVar4 + 1;
      iVar5 = iVar5 + (uint)(0xfffffffe < uVar4);
      if ((param_2[4] & 1) != 0) goto LAB_00e67a20;
LAB_00e67a00:
      iVar5 = iVar5 + (uint)(0xfffffffe < uVar3);
    }
    else {
      uVar8 = FUN_016d6168(SUB84(*(double *)(param_2 + 2) * 1000.0,0));
      uVar3 = (uint)(0.0 < (double)CONCAT44(extraout_s1,uVar8)) *
              (int)(longlong)(double)CONCAT44(extraout_s1,uVar8);
      uVar2 = 5;
      if (uVar3 < 0x10000) {
        uVar2 = 3;
      }
      if (uVar3 < 0xfb) {
        uVar2 = 1;
      }
      uVar3 = uVar4 + uVar2 + 1;
      iVar5 = iVar5 + (uint)CARRY4(uVar4,uVar2) + (uint)(0xfffffffe < uVar4 + uVar2);
      if ((param_2[4] & 1) == 0) goto LAB_00e67a00;
LAB_00e67a20:
      uVar8 = FUN_016d6168(SUB84(*(double *)(param_2 + 6) * 1000.0,0));
      uVar4 = (uint)(0.0 < (double)CONCAT44(extraout_s1_00,uVar8)) *
              (int)(longlong)(double)CONCAT44(extraout_s1_00,uVar8);
      uVar2 = 5;
      if (uVar4 < 0x10000) {
        uVar2 = 3;
      }
      if (uVar4 < 0xfb) {
        uVar2 = 1;
      }
      bVar7 = CARRY4(uVar3,uVar2);
      uVar3 = uVar3 + uVar2;
      iVar5 = iVar5 + (uint)bVar7 + (uint)(0xfffffffe < uVar3);
    }
    uVar4 = uVar3 + 2;
    iVar5 = iVar5 + (uint)(0xfffffffe < uVar3 + 1);
    if (param_2[0xe] != 0x80000000) {
      uVar3 = param_2[0x10];
      uVar2 = 5;
      if (uVar3 < 0x10000) {
        uVar2 = 3;
      }
      if (uVar3 < 0xfb) {
        uVar2 = 1;
      }
      bVar7 = CARRY4(uVar2,uVar4);
      uVar4 = uVar2 + uVar4;
      iVar5 = iVar5 + (uint)bVar7;
      if (uVar3 != 0) {
        uVar3 = param_2[0xf] + uVar3 + ~param_2[0xf];
        bVar7 = CARRY4(uVar4,uVar3);
        uVar3 = uVar4 + uVar3;
        uVar4 = uVar3 + 1;
        iVar5 = iVar5 + (uint)bVar7 + (uint)(0xfffffffe < uVar3);
      }
    }
    uVar3 = uVar4 + 1;
    uVar4 = iVar5 + (uint)(0xfffffffe < uVar4);
    if (param_2[0x11] == 0x80000000) goto LAB_00e67b14;
    uVar2 = param_2[0x13];
    uVar6 = 5;
    if (uVar2 < 0x10000) {
      uVar6 = 3;
    }
    if (uVar2 < 0xfb) {
      uVar6 = 1;
    }
    bVar7 = CARRY4(uVar6,uVar3);
    uVar3 = uVar6 + uVar3;
    uVar4 = uVar4 + bVar7;
    if (uVar2 == 0) goto LAB_00e67b14;
    uVar6 = param_2[0x12] + uVar2 + ~param_2[0x12];
    uVar2 = uVar3 + uVar6;
    uVar4 = uVar4 + CARRY4(uVar3,uVar6);
  }
  uVar3 = uVar2 + 1;
  uVar4 = uVar4 + (0xfffffffe < uVar2);
LAB_00e67b14:
  *param_1 = uVar3;
  param_1[1] = uVar4;
  return 0;
}

