// FUN_0006851c @ 0006851c  size=80  callers=3
// program: bmminer


undefined4 FUN_0006851c(undefined4 *param_1)

{
  undefined4 local_c;
  
  local_c = 0;
  if (param_1 != (undefined4 *)0x0) {
    local_c = FUN_000696b4(*param_1);
    free(param_1);
  }
  return local_c;
}

