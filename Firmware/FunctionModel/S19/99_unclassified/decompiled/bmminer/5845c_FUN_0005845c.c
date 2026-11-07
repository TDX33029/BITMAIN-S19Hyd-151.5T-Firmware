// FUN_0005845c @ 0005845c  size=140  callers=1
// program: bmminer


void FUN_0005845c(undefined4 param_1,int param_2)

{
  uint local_14 [2];
  
  FUN_000592ec(0,param_1,0,0x18,local_14);
  if (param_2 == 0) {
    local_14[0] = local_14[0] & 0xfbfffff;
  }
  else {
    local_14[0] = local_14[0] & 0xfffffff | 0x400000;
  }
  FUN_000571b0(param_1,1,0,0x18,local_14[0]);
  return;
}

