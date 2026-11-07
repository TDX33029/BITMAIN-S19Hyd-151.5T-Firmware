// FUN_01347050 @ 01347050 size=152 calls_out=4 calls_in=1
// strings: 

uint FUN_01347050(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int local_28;
  int iStack_24;
  int local_20;
  int local_1c;
  
  if (param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,param_4);
  }
  if (param_4 == 0) {
    local_28 = 0;
    iStack_24 = 1;
  }
  else {
    iStack_24 = thunk_FUN_016d4a50(param_4);
    local_28 = param_4;
    if (iStack_24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_4);
    }
  }
  FUN_016dd1aa(iStack_24,param_3,param_4);
  local_1c = param_2 + 8;
  local_20 = param_4;
  uVar1 = FUN_01356d8c(param_1,&local_28);
  return uVar1 ^ 1;
}

