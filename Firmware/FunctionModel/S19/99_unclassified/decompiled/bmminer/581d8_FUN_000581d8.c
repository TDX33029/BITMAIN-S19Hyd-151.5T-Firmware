// FUN_000581d8 @ 000581d8  size=100  callers=0
// program: bmminer


void FUN_000581d8(undefined4 param_1,int param_2)

{
  byte bVar1;
  undefined4 local_14 [2];
  
  FUN_000592ec(0,param_1,0,0x18,local_14);
  if (param_2 == 0) {
    bVar1 = (byte)local_14[0] & 0xfb;
  }
  else {
    bVar1 = (byte)local_14[0] | 4;
  }
  local_14[0] = CONCAT31(local_14[0]._1_3_,bVar1);
  FUN_000571b0(param_1,1,0,0x18,local_14[0]);
  return;
}

