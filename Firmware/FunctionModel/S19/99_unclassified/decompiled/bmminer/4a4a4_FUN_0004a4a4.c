// FUN_0004a4a4 @ 0004a4a4  size=92  callers=1
// program: bmminer


void FUN_0004a4a4(char *param_1,size_t param_2)

{
  uint local_18;
  uint local_14 [2];
  
  local_18 = 0;
  local_14[0] = 0;
  FUN_00045bc4(0x1f,&local_18);
  FUN_00045bc4(0x20,local_14);
  snprintf(param_1,param_2,"%08x%08x",local_14[0],local_18);
  return;
}

