// FUN_00058c64 @ 00058c64  size=112  callers=2
// program: bmminer


void FUN_00058c64(undefined4 param_1)

{
  uint local_c;
  
  FUN_000592ec(0,param_1,0,0xb0,&local_c);
  local_c = local_c & 0xdffbffbf;
  FUN_000571b0(param_1,1,0,0xb0,local_c);
  return;
}

