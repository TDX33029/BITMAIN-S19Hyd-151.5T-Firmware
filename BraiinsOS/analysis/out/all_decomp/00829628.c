// FUN_00829628 @ 00829628 size=60 calls_out=3 calls_in=2
// strings: 

void FUN_00829628(undefined4 param_1,uint param_2)

{
  undefined1 auStack_14 [12];
  
  if ((param_2 & 1) == 0) {
    FUN_00600d2c(auStack_14,param_1);
    FUN_00808de4(auStack_14);
    return;
  }
  FUN_00808f1c(param_1,param_2 >> 1);
  return;
}

