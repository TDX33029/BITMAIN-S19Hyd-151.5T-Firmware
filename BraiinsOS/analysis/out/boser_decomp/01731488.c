// FUN_01731488 @ 01731488 size=204 calls_out=0 calls_in=1
// strings: 

void FUN_01731488(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  uint local_28 [2];
  int local_20;
  int iStack_1c;
  int iStack_18;
  int local_14;
  
  if (*param_2 == 0) {
    (**(code **)(param_2[2] + 0x14))(local_28,param_2[1]);
    if ((local_28[0] & 1) != 0) goto LAB_017314e4;
  }
  else {
    local_20 = param_2[2];
    iStack_1c = 0;
    local_14 = 0;
    iStack_18 = local_20;
LAB_017314e4:
    if ((iStack_18 == 0 && local_20 == 0) && (local_14 == 0 && iStack_1c == 0)) {
      uVar1 = 1;
      param_1[3] = 0;
      param_1[1] = &PTR_FUN_01d198a4;
      param_1[2] = 1;
      param_1[4] = 0;
      goto LAB_01731548;
    }
  }
  if ((undefined4 *)*param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    (**(code **)*param_2)(param_1 + 1,param_2 + 3,param_2[1],param_2[2]);
    uVar1 = 1;
  }
LAB_01731548:
  *param_1 = uVar1;
  return;
}

