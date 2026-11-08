// FUN_00059150 @ 00059150  size=104  callers=0
// program: bmminer


void FUN_00059150(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  undefined4 local_14;
  
  FUN_000592ec(1,param_1,param_2,0x34,&local_14);
  if (param_3 == 0) {
    bVar1 = (byte)local_14 & 0xf7;
  }
  else {
    bVar1 = (byte)local_14 | 8;
  }
  local_14 = CONCAT31(local_14._1_3_,bVar1);
  FUN_000571b0(param_1,0,param_2,0x34,local_14);
  return;
}

