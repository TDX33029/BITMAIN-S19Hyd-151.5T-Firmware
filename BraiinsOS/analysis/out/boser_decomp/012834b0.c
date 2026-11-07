// FUN_012834b0 @ 012834b0 size=116 calls_out=4 calls_in=27
// strings: 

void FUN_012834b0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int local_1c;
  int local_18;
  int local_14;
  
  if (param_3 == 0) {
    local_1c = 0;
    local_18 = 1;
  }
  else {
    local_18 = FUN_01298504(param_3,1);
    local_1c = param_3;
    if (local_18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,param_3);
    }
  }
  FUN_01bed4e2(local_18,param_2,param_3);
  local_14 = param_3;
  FUN_01283524(param_1,&local_1c);
  return;
}

