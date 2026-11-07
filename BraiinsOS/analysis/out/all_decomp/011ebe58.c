// FUN_011ebe58 @ 011ebe58 size=172 calls_out=3 calls_in=0
// strings: internal error: entered unreachable code: invalid Once state

void FUN_011ebe58(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int *local_24;
  undefined4 local_20;
  int local_1c;
  
  local_1c = 3;
  local_2c = param_2 + 0x1c;
  local_30 = param_2 + 0x14;
  local_28 = param_5;
  piVar3 = &local_30;
  FUN_011c9910();
  if (1 < local_1c - 2U) {
    if (local_1c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("internal error: entered unreachable code: invalid Once state",0x79,&DAT_018a9874
                  );
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *local_24;
      bVar1 = (bool)hasExclusiveAccess(local_24);
    } while (!bVar1);
    *local_24 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0143daec(local_24,local_20,0,0,piVar3,param_6);
      return;
    }
  }
  return;
}

