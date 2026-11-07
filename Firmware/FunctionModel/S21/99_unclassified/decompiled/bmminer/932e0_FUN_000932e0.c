// FUN_000932e0 @ 000932e0  size=288  callers=1
// program: bmminer


undefined4 FUN_000932e0(int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  char *local_10;
  char *local_c;
  
  local_c = (char *)(param_1 + 0x1411);
  if (*local_c == '-') {
    *(undefined4 *)(param_1 + 0x2414) = 1;
    local_c = (char *)(param_1 + 0x1412);
  }
  else {
    if (*local_c == '0') {
      *(undefined4 *)(param_1 + 0x2418) = 1;
    }
    *(undefined4 *)(param_1 + 0x2414) = 0;
  }
  local_18 = 0;
  local_14 = 0;
  __isoc99_sscanf(local_c,&DAT_000ac568,&local_14);
  local_10 = strchr(local_c,0x2e);
  if (local_10 != (char *)0x0) {
    __isoc99_sscanf(local_10,&DAT_000ac570,&local_18);
  }
  *(undefined4 *)(param_1 + 0x2420) = local_14;
  *(undefined4 *)(param_1 + 0x241c) = local_18;
  return 0;
}

