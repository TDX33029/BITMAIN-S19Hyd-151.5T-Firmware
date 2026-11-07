// FUN_011ead74 @ 011ead74 size=204 calls_out=2 calls_in=0
// strings: internal error: entered unreachable code: invalid Once state

undefined4
FUN_011ead74(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_24 = param_1 + 4;
  local_28 = param_1 + 2;
  local_14 = 3;
  local_20 = param_4;
  uVar2 = (**(code **)(param_1[1] + 0xc))(*param_1,param_2,param_3,&local_28,param_5);
  if (1 < local_14 - 2U) {
    if (local_14 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("internal error: entered unreachable code: invalid Once state",0x79,&DAT_018a9874
                  );
    }
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *local_1c;
      bVar1 = (bool)hasExclusiveAccess(local_1c);
    } while (!bVar1);
    *local_1c = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0143daec(local_1c,local_18);
      return uVar2;
    }
  }
  return uVar2;
}

