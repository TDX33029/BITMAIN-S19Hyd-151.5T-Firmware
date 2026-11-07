// FUN_00068cd4 @ 00068cd4  size=228  callers=2
// program: bmminer


undefined4 * FUN_00068cd4(undefined4 *param_1,undefined4 param_2)

{
  void *local_14;
  int local_10;
  undefined4 *local_c;
  
  local_c = (undefined4 *)*param_1;
  while (local_c != param_1 + 1) {
    local_10 = 0;
    FUN_00069eec(local_c[4],&local_14);
    local_10 = (*(code *)param_1[9])(param_2,local_14);
    free(local_14);
    if (local_10 == 0) break;
    if (local_10 < 0) {
      local_c = (undefined4 *)*local_c;
    }
    else {
      local_c = (undefined4 *)local_c[1];
    }
  }
  if (local_c == param_1 + 1) {
    local_c = (undefined4 *)0x0;
  }
  return local_c;
}

