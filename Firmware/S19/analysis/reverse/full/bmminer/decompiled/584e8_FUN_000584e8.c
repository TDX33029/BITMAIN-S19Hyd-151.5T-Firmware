// FUN_000584e8 @ 000584e8  size=144  callers=2
// program: bmminer


void FUN_000584e8(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint local_14;
  
  FUN_000592ec(1,param_1,param_2,0x18,&local_14);
  if (param_3 == 0) {
    local_14 = local_14 & 0xfbfffff;
  }
  else {
    local_14 = local_14 & 0xfffffff | 0x400000;
  }
  FUN_000571b0(param_1,0,param_2,0x18,local_14);
  return;
}

