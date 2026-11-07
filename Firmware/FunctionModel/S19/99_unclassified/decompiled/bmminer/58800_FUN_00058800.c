// FUN_00058800 @ 00058800  size=112  callers=1
// program: bmminer


void FUN_00058800(undefined4 param_1)

{
  uint local_c;
  
  FUN_000592ec(0,param_1,0,0x90,&local_c);
  local_c = local_c & 0xfffff7ff | 0x800008a;
  FUN_000571b0(param_1,1,0,0x90,local_c);
  return;
}

