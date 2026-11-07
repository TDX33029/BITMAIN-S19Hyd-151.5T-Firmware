// FUN_0001c1dc @ 0001c1dc  size=56  callers=1
// program: bmminer


bool FUN_0001c1dc(uint param_1)

{
  if ((DAT_00089088 == 0) || (4 < param_1)) {
    return false;
  }
  return *(char *)(DAT_00089088 + param_1 + 0x10) != '\0';
}

