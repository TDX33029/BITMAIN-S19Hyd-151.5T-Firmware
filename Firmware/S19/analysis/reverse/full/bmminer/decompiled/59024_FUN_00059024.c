// FUN_00059024 @ 00059024  size=88  callers=0
// program: bmminer


void FUN_00059024(undefined4 param_1)

{
  uint local_c;
  
  FUN_000592ec(0,param_1,0,0x20,&local_c);
  local_c = local_c & 0xffff0001;
  FUN_000571b0(param_1,1,0,0x20,local_c);
  return;
}

