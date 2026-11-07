// FUN_0007c938 @ 0007c938  size=116  callers=1
// program: bmminer


undefined4 FUN_0007c938(int param_1,undefined4 *param_2)

{
  undefined4 local_c;
  
  local_c = 0;
  if (*(int *)(param_1 + 0x3c) == 0x100) {
    local_c = *(undefined4 *)(param_1 + 0x40);
    *param_2 = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  return local_c;
}

