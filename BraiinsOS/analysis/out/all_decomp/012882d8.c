// FUN_012882d8 @ 012882d8 size=340 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_012882d8(undefined4 *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  uVar4 = param_1[2];
  if ((((uVar4 & 0x8000000) == 0) || (*(ushort *)(param_1 + 3) < param_2)) ||
     (param_2 = *(ushort *)(param_1 + 3) - param_2, param_2 == 0)) {
    if ((param_4 & 1) == 0) {
      uVar6 = FUN_00fa948c(*param_1,param_1[1],param_3,param_4);
      return uVar6;
    }
                    /* WARNING: Could not recover jumptable at 0x0128835c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(param_1[1] + 0xc))(*param_1,param_3,param_4 >> 1);
    return uVar6;
  }
  uVar3 = (uVar4 & 0x7fffffff) >> 0x1d;
  uVar2 = 0;
  if (uVar3 != 3) {
    uVar2 = uVar3;
  }
  if (uVar2 == 2) {
    uVar2 = param_2 >> 1;
    param_2 = param_2 + 1 >> 1;
  }
  else if (uVar2 == 1) {
    uVar2 = param_2;
    param_2 = 0;
  }
  else {
    uVar2 = 0;
  }
  uVar6 = *param_1;
  iVar7 = param_1[1];
  iVar5 = uVar2 + 1;
  while (iVar5 = iVar5 + -1, iVar5 != 0) {
    iVar1 = (**(code **)(iVar7 + 0x10))(uVar6,uVar4 & 0x1fffff);
    if (iVar1 != 0) {
      return 1;
    }
  }
  if ((param_4 & 1) == 0) {
    iVar5 = FUN_00fa948c(uVar6,iVar7,param_3,param_4);
  }
  else {
    iVar5 = (**(code **)(iVar7 + 0xc))(uVar6,param_3,param_4 >> 1);
  }
  if (iVar5 != 0) {
    return 1;
  }
  iVar5 = param_2 + 1;
  do {
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) {
      return 0;
    }
    iVar1 = (**(code **)(iVar7 + 0x10))(uVar6,uVar4 & 0x1fffff);
  } while (iVar1 == 0);
  return 1;
}

