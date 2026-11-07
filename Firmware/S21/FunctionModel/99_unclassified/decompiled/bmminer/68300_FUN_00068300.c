// FUN_00068300 @ 00068300  size=96  callers=3
// program: bmminer


undefined4
FUN_00068300(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0x1f5;
  }
  else {
    uVar1 = FUN_00068db8(*param_1,param_2,param_3,param_4,param_5);
  }
  return uVar1;
}

