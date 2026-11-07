// FUN_013d4df8 @ 013d4df8 size=124 calls_out=4 calls_in=17
// strings: 

void FUN_013d4df8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int local_1c;
  int local_18;
  int local_14;
  
  uVar1 = 0;
  if (param_2 < 0) {
LAB_013d4e10:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar1,param_2);
  }
  if (param_2 == 0) {
    local_18 = 1;
    local_1c = 0;
  }
  else {
    uVar1 = 1;
    local_18 = FUN_01298504(param_2,1);
    local_1c = param_2;
    if (local_18 == 0) goto LAB_013d4e10;
  }
  FUN_01bed4e2(local_18,param_1,param_2);
  local_14 = param_2;
  FUN_01608eec(&local_1c);
  return;
}

