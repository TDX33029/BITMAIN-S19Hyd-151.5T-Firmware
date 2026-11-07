// FUN_00f5c558 @ 00f5c558 size=108 calls_out=4 calls_in=1
// strings: 

void FUN_00f5c558(uint param_1)

{
  undefined1 auStack_28 [20];
  undefined1 auStack_14 [4];
  
  if ((param_1 & 1) == 0) {
    FUN_00600d2c(auStack_14,&DAT_00585c33);
    FUN_00f583b4(auStack_14);
    return;
  }
  FUN_01602d08(auStack_28);
  FUN_00f58540(param_1 >> 1,auStack_28);
  return;
}

