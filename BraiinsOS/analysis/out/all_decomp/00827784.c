// FUN_00827784 @ 00827784 size=156 calls_out=2 calls_in=0
// strings: 

void FUN_00827784(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int local_28;
  undefined1 auStack_24 [12];
  undefined1 *local_18;
  undefined1 *local_14;
  
  local_18 = (undefined1 *)&local_28;
  local_28 = param_2;
  if (param_2 - 1U < 4) {
    local_14 = &LAB_00fac484;
    local_18 = (undefined1 *)&local_28;
    FUN_00600d2c(param_1,&DAT_0057d03f,&local_18);
    return;
  }
  local_14 = &LAB_00fac484;
  FUN_00600d2c(auStack_24,&DAT_005703c2,&local_18);
  uVar1 = FUN_00808de4(auStack_24);
  *param_1 = 0x80000000;
  param_1[1] = uVar1;
  return;
}

