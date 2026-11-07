// FUN_0001e0e0 @ 0001e0e0  size=56  callers=1
// program: bmminer


bool FUN_0001e0e0(uint param_1)

{
  if ((DAT_000c0410 == 0) || (4 < param_1)) {
    return false;
  }
  return *(char *)(DAT_000c0410 + param_1 + 0x10) != '\0';
}

