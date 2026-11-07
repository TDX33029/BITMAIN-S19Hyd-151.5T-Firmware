// FUN_01968240 @ 01968240 size=68 calls_out=2 calls_in=1
// strings: 

void FUN_01968240(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_019679bc(*param_2,param_2[1],param_2[2]);
  uVar1 = FUN_01966fbc(param_3,(int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  *param_1 = 0;
  param_1[1] = uVar1;
  return;
}

