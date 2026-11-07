// FUN_00e66e54 @ 00e66e54 size=684 calls_out=10 calls_in=1
// strings: 

int FUN_00e66e54(uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  if (param_1[0xa8] == 1) {
    uVar3 = 5;
    if (param_1[0xa9] < 0x10000) {
      uVar3 = 3;
    }
    if (param_1[0xa9] < 0xfb) {
      uVar3 = 1;
    }
    uVar1 = *param_2 + uVar3;
    uVar3 = param_2[1] + (uint)CARRY4(*param_2,uVar3);
  }
  else {
    uVar1 = *param_2;
    uVar3 = param_2[1];
  }
  uVar10 = 2;
  if ((char)param_1[0xb6] == '\x02') {
    uVar10 = 1;
  }
  uVar4 = uVar1 + 1 + uVar10;
  if (param_1[0x88] != 5 || param_1[0x89] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00e66edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (*(code *)(&DAT_00e66ee0 + *(int *)(&DAT_00e66ee0 + param_1[0x88] * 4)))();
    return iVar2;
  }
  uVar8 = uVar4 + 2;
  uVar1 = uVar3 + (0xfffffffe < uVar1) + (uint)CARRY4(uVar1 + 1,uVar10) + (uint)(0xfffffffe < uVar4)
          + (uint)(0xfffffffe < uVar4 + 1);
  if (*param_1 == 2 && param_1[1] == 0) {
    *param_2 = uVar8;
    param_2[1] = uVar1;
  }
  else {
    uVar10 = 5;
    uVar3 = 5;
    if (param_1[0xf] < 0x10000) {
      uVar10 = 3;
    }
    if (param_1[0xf] < 0xfb) {
      uVar10 = 1;
    }
    uVar4 = 5;
    if (param_1[0x10] < 0x10000) {
      uVar4 = 3;
    }
    if (param_1[0x10] < 0xfb) {
      uVar4 = 1;
    }
    uVar5 = uVar8 + uVar10 + uVar4;
    uVar9 = 9;
    if ((*param_1 & 1) != 0) {
      uVar9 = 0x11;
    }
    uVar6 = uVar5 + uVar9;
    uVar7 = uVar6 + 1;
    iVar2 = uVar1 + CARRY4(uVar8,uVar10) + (uint)CARRY4(uVar8 + uVar10,uVar4) +
            (uint)CARRY4(uVar5,uVar9) + (uint)(0xfffffffe < uVar6);
    if (param_1[6] != 0x80000000) {
      uVar10 = param_1[8];
      bVar11 = CARRY4(uVar7,uVar10);
      uVar1 = uVar7 + uVar10;
      if (uVar10 < 0x10000) {
        uVar3 = 3;
      }
      if (uVar10 < 0xfb) {
        uVar3 = 1;
      }
      uVar7 = uVar1 + uVar3;
      iVar2 = iVar2 + (uint)bVar11 + (uint)CARRY4(uVar1,uVar3);
    }
    uVar1 = uVar7 + 1;
    uVar3 = iVar2 + (uint)(0xfffffffe < uVar7);
    if (param_1[9] != 0x80000000) {
      uVar4 = param_1[0xb];
      bVar11 = CARRY4(uVar1,uVar4);
      uVar10 = uVar1 + uVar4;
      uVar8 = 5;
      if (uVar4 < 0x10000) {
        uVar8 = 3;
      }
      if (uVar4 < 0xfb) {
        uVar8 = 1;
      }
      uVar1 = uVar10 + uVar8;
      uVar3 = uVar3 + bVar11 + (uint)CARRY4(uVar10,uVar8);
    }
    uVar10 = param_1[0xc];
    uVar4 = param_1[0xe];
    *param_2 = uVar1;
    param_2[1] = uVar3;
    iVar2 = FUN_00e66a60(param_2,uVar10,uVar4);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  iVar2 = FUN_00e67144(param_2,param_1 + 0xb0);
  if ((((((iVar2 != 0) || (iVar2 = FUN_00e67210(param_2,param_1 + 0x12), iVar2 != 0)) ||
        (iVar2 = FUN_00e672a8(param_2,param_1 + 0xb3), iVar2 != 0)) ||
       ((iVar2 = FUN_00e67380(param_2,param_1 + 0x20), iVar2 != 0 ||
        (iVar2 = FUN_00e67430(param_2,param_1 + 0x8e), iVar2 != 0)))) ||
      ((iVar2 = FUN_00e6773c(param_2,param_1 + 0xa2), iVar2 != 0 ||
       ((iVar2 = FUN_00e678a0(param_2,param_1 + 0x30), iVar2 != 0 ||
        (iVar2 = FUN_00e67b28(param_2,param_1 + 0x46), iVar2 != 0)))))) ||
     (iVar2 = FUN_00e94dec(param_2,param_1 + 0xaa), iVar2 != 0)) {
    return iVar2;
  }
  uVar1 = param_1[0xaf];
  uVar3 = 5;
  if (uVar1 < 0x10000) {
    uVar3 = 3;
  }
  uVar10 = *param_2;
  if (uVar1 < 0xfb) {
    uVar3 = 1;
  }
  uVar4 = uVar3 + uVar10;
  bVar11 = CARRY4(uVar4,uVar1);
  uVar4 = uVar4 + uVar1;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
  }
  *param_2 = uVar4;
  param_2[1] = param_2[1] + (uint)CARRY4(uVar3,uVar10) + (uint)bVar11;
  return 0;
}

