// FUN_00f376d0 @ 00f376d0 size=108 calls_out=4 calls_in=1
// strings: 

void FUN_00f376d0(uint param_1)

{
  undefined1 auStack_28 [20];
  undefined1 auStack_14 [4];
  
  if ((param_1 & 1) == 0) {
    FUN_00600d2c(auStack_14,&DAT_00575334);
    FUN_00f40bcc(auStack_14);
    return;
  }
  FUN_01602d08(auStack_28);
  FUN_00f40b10(param_1 >> 1,auStack_28);
  return;
}

