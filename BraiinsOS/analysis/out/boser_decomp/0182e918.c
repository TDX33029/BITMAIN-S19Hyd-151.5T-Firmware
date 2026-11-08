// FUN_0182e918 @ 0182e918 size=92 calls_out=2 calls_in=1
// strings: 

void FUN_0182e918(undefined4 *param_1,undefined4 *param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  if ((param_2[1] == 0) ||
     (((param_3 & 1) != 0 && (iVar1 = FUN_01417e0c(*param_2,param_2[1],param_4), iVar1 == 0)))) {
    *param_1 = 3;
    param_1[1] = 0;
    return;
  }
  FUN_01417fb8(param_1,param_2,param_5);
  return;
}

