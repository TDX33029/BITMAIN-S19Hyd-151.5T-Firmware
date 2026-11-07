// FUN_00741338 @ 00741338 size=60 calls_out=3 calls_in=1
// strings: 

void FUN_00741338(undefined4 param_1,uint param_2)

{
  undefined1 auStack_14 [12];
  
  if ((param_2 & 1) == 0) {
    FUN_00600d2c(auStack_14,param_1);
    FUN_0072faa8(auStack_14);
    return;
  }
  FUN_0072f9b8(param_1,param_2 >> 1);
  return;
}

