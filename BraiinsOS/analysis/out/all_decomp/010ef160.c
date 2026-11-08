// FUN_010ef160 @ 010ef160 size=60 calls_out=2 calls_in=2
// strings: 

void FUN_010ef160(undefined4 param_1,uint param_2)

{
  undefined1 auStack_28 [20];
  undefined1 auStack_14 [4];
  
  if ((param_2 & 1) == 0) {
    FUN_00600d2c(auStack_14,param_1);
    FUN_010f66dc(auStack_14);
    return;
  }
  FUN_01602d08(auStack_28);
  FUN_010f662c(param_1,param_2 >> 1,auStack_28);
  return;
}

