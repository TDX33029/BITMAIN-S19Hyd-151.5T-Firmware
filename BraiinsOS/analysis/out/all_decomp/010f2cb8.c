// FUN_010f2cb8 @ 010f2cb8 size=124 calls_out=4 calls_in=1
// strings: 

void FUN_010f2cb8(uint param_1)

{
  undefined1 auStack_28 [20];
  undefined1 auStack_14 [4];
  
  if ((param_1 & 1) == 0) {
    FUN_00600d2c(auStack_14,&DAT_00388e82);
    FUN_010f66dc(auStack_14);
    return;
  }
  FUN_01602d08(auStack_28);
  FUN_010f662c(&DAT_00388e82,param_1 >> 1,auStack_28);
  return;
}

