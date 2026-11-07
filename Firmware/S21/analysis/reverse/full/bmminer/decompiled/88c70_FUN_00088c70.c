// FUN_00088c70 @ 00088c70  size=164  callers=6
// program: bmminer


undefined4 FUN_00088c70(int param_1,undefined4 param_2)

{
  undefined4 local_10;
  int local_c;
  
  local_10 = 0;
  for (local_c = 0; local_c < *(int *)(*(int *)(param_1 + 0x448) + 4); local_c = local_c + 1) {
    local_10 = FUN_00091c20(*(undefined4 *)(**(int **)(param_1 + 0x448) + local_c * 4),param_2);
  }
  return local_10;
}

