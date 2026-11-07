// FUN_00b17e9c @ 00b17e9c size=60 calls_out=3 calls_in=1
// strings: 

void FUN_00b17e9c(undefined4 param_1,uint param_2)

{
  undefined1 auStack_14 [12];
  
  if ((param_2 & 1) == 0) {
    FUN_00600d2c(auStack_14,param_1);
    FUN_00c6b484(auStack_14);
    return;
  }
  FUN_00c70f88(param_1,param_2 >> 1);
  return;
}

