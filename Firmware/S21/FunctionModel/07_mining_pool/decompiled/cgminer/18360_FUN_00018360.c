// FUN_00018360 @ 00018360  size=68  callers=1
// program: cgminer


void FUN_00018360(int *param_1)

{
  DAT_000685c4 = 1;
  if (*param_1 == -1) {
    return;
  }
  shutdown(*param_1,2);
  close(*param_1);
  *param_1 = -1;
  return;
}

