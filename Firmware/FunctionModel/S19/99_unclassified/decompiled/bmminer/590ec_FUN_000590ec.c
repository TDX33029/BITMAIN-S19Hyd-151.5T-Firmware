// FUN_000590ec @ 000590ec  size=100  callers=0
// program: bmminer


void FUN_000590ec(undefined4 param_1,int param_2)

{
  byte bVar1;
  undefined4 local_14 [2];
  
  FUN_000592ec(0,param_1,0,0x34,local_14);
  if (param_2 == 0) {
    bVar1 = (byte)local_14[0] & 0xf7;
  }
  else {
    bVar1 = (byte)local_14[0] | 8;
  }
  local_14[0] = CONCAT31(local_14[0]._1_3_,bVar1);
  FUN_000571b0(param_1,1,0,0x34,local_14[0]);
  return;
}

