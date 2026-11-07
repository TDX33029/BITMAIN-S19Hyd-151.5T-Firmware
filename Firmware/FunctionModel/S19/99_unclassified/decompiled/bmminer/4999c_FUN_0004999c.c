// FUN_0004999c @ 0004999c  size=124  callers=3
// program: bmminer


void FUN_0004999c(uint param_1)

{
  int iVar1;
  uint local_18;
  undefined2 local_14;
  undefined1 local_12;
  undefined1 local_11;
  
  if (param_1 < 0x10) {
    if ((*(int *)(&DAT_0050f9d8 + param_1 * 8) == 0) || (*(int *)(&DAT_0050f9dc + param_1 * 8) == 0)
       ) {
      local_14 = 0;
      local_12 = 10;
      local_11 = (undefined1)param_1;
      local_18 = param_1;
      iVar1 = FUN_00050a64(&local_18);
      if (-1 < iVar1) {
        *(int *)(&DAT_0050f9d8 + param_1 * 8) = iVar1;
        *(undefined4 *)(&DAT_0050f9dc + param_1 * 8) = 1;
      }
    }
  }
  else {
    FUN_0004994c();
  }
  return;
}

