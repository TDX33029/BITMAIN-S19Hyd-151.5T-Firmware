// FUN_0157e45c @ 0157e45c size=112 calls_out=0 calls_in=1
// strings: 

uint FUN_0157e45c(int param_1,undefined1 *param_2)

{
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_2) {
  case 0:
    return (*(byte *)(param_1 + 8) & 0xf) >> 3;
  case 1:
    return (*(byte *)(param_1 + 8) & 3) >> 1;
  case 3:
    return (*(byte *)(param_1 + 8) & 0x7f) >> 6;
  case 4:
    return *(byte *)(param_1 + 8) & 1;
  case 5:
    return (*(byte *)(param_1 + 8) & 0x3f) >> 5;
  }
  if ((*(int *)(param_2 + 8) != 2 || *(int *)(param_2 + 0xc) != 0) &&
      (*(byte *)(param_1 + 8) & 4) != 0) {
    return (uint)(*(int *)(param_2 + 8) != 2 || *(int *)(param_2 + 0xc) != 0);
  }
  return (*(byte *)(param_1 + 8) & 0x1f) >> 4;
}

