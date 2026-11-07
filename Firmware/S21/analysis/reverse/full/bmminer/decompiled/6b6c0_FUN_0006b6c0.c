// FUN_0006b6c0 @ 0006b6c0  size=116  callers=1
// program: bmminer


void FUN_0006b6c0(char *param_1,size_t param_2)

{
  uint local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0;
  FUN_00061240(0x1f,&local_c);
  FUN_00061240(0x20,&local_10);
  snprintf(param_1,param_2,"%08x%08x",local_10,local_c);
  return;
}

