// FUN_0123a948 @ 0123a948 size=364 calls_out=6 calls_in=4
// strings: 

undefined8 FUN_0123a948(int *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uStack_2c;
  int iStack_28;
  int local_24;
  
  uVar6 = CONCAT44(param_2,param_1);
  if (param_4 == 0) {
    do {
      iVar4 = *param_1;
      bVar2 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar2);
    *param_1 = iVar4 + 1;
    if (iVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x123aaa4);
      (*pcVar1)();
    }
  }
  else {
    uStack_2c = param_2 + param_4;
    if ((int)uStack_2c < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,uStack_2c);
    }
    if (uStack_2c == 0) {
      iStack_28 = 1;
      uStack_2c = 0;
    }
    else {
      iStack_28 = thunk_FUN_016d4a50(uStack_2c);
      if (iStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uStack_2c);
      }
    }
    local_24 = 0;
    if (uStack_2c < param_2) {
      FUN_011cf828(&uStack_2c,0,param_2,1,1);
    }
    iVar3 = local_24;
    iVar4 = iStack_28;
    uVar5 = uStack_2c;
    FUN_016dd1aa(iStack_28 + local_24,param_1 + 2,param_2);
    local_24 = iVar3 + param_2;
    if (uVar5 - local_24 < param_4) {
      FUN_011cf828(&uStack_2c,local_24,param_4,1,1);
      uVar5 = uStack_2c;
      iVar4 = iStack_28;
    }
    iVar3 = local_24;
    FUN_016dd1aa(iVar4 + local_24,param_3,param_4);
    local_24 = iVar3 + param_4;
    uVar6 = FUN_011e1508(iVar4);
    if (uVar5 != 0) {
      thunk_FUN_016d3fb4(iVar4);
      return uVar6;
    }
  }
  return uVar6;
}

