// FUN_000967b4 @ 000967b4  size=160  callers=6
// program: bmminer


void FUN_000967b4(uint *param_1)

{
  void *local_c;
  
  if ((char)param_1[7] != '\0') {
    local_c = (void *)(param_1[1] - param_1[0x108]);
    if (local_c < (void *)*param_1) {
      local_c = (void *)*param_1;
    }
    memcpy(local_c,param_1 + 7,param_1[1] - (int)local_c);
  }
  return;
}

