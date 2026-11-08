// FUN_011eaf4c @ 011eaf4c size=184 calls_out=2 calls_in=0
// strings: internal error: entered unreachable code: invalid Once state

void FUN_011eaf4c(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 local_30;
  int *local_2c;
  undefined4 local_28;
  int local_24;
  
  local_24 = 3;
  local_34 = param_2 + 4;
  local_38 = param_2 + 2;
  local_30 = param_5;
  (**(code **)(param_2[1] + 0x18))(param_1,*param_2,param_3,param_4,&local_38,param_6);
  if (1 < local_24 - 2U) {
    if (local_24 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("internal error: entered unreachable code: invalid Once state",0x79,&DAT_018a9874
                  );
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *local_2c;
      bVar1 = (bool)hasExclusiveAccess(local_2c);
    } while (!bVar1);
    *local_2c = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0143daec(local_2c,local_28);
      return;
    }
  }
  return;
}

