// FUN_01078634 @ 01078634 size=192 calls_out=6 calls_in=2
// strings: 

void FUN_01078634(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  uVar1 = 0;
  local_3c = param_1;
  if (param_3 < 0) {
LAB_01078650:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar1,param_3);
  }
  if (param_3 == 0) {
    local_20 = 1;
    local_24 = 0;
  }
  else {
    uVar1 = 1;
    local_20 = FUN_01298504(param_3,1);
    local_24 = param_3;
    if (local_20 == 0) goto LAB_01078650;
  }
  FUN_01bed4e2(local_20,param_2,param_3);
  local_28 = 2;
  local_1c = param_3;
  FUN_010799c0(&local_38,&local_3c,&local_28);
  if (local_38 != 0 && local_38 != 3) {
    FUN_019bb7e0(local_34,local_30);
  }
  FUN_00d38e38(&local_3c);
  return;
}

