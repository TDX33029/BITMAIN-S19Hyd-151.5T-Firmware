// FUN_01534d2c @ 01534d2c size=344 calls_out=6 calls_in=4
// strings: 

undefined8 FUN_01534d2c(uint *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  uint local_30;
  int local_2c;
  int local_28;
  
  uVar7 = CONCAT44(param_2,param_1);
  if (param_4 == 0) {
    do {
      uVar5 = *param_1;
      bVar2 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar2);
    *param_1 = uVar5 + 1;
    if (0x7fffffff < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1534d80);
      (*pcVar1)();
    }
  }
  else {
    uVar5 = param_2 + param_4;
    uVar4 = 0;
    if ((int)uVar5 < 0) {
LAB_01534d58:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar4,uVar5);
    }
    if (uVar5 == 0) {
      local_2c = 1;
      uVar5 = 0;
    }
    else {
      uVar4 = 1;
      local_2c = FUN_01298504(uVar5,1);
      if (local_2c == 0) goto LAB_01534d58;
    }
    local_28 = 0;
    local_30 = uVar5;
    if (uVar5 < param_2) {
      FUN_01af7b44(&local_30,0,param_2,1,1);
    }
    iVar3 = local_28;
    iVar6 = local_2c;
    uVar5 = local_30;
    FUN_01bed4e2(local_2c + local_28,param_1 + 2,param_2);
    local_28 = iVar3 + param_2;
    if (uVar5 - local_28 < param_4) {
      FUN_01af7b44(&local_30,local_28,param_4,1,1);
      uVar5 = local_30;
      iVar6 = local_2c;
    }
    iVar3 = local_28;
    FUN_01bed4e2(iVar6 + local_28,param_3,param_4);
    local_28 = iVar3 + param_4;
    uVar7 = FUN_016bc0ec(iVar6);
    FUN_019bb7e0(uVar5,iVar6);
  }
  return uVar7;
}

