// FUN_00030574 @ 00030574  size=76  callers=2
// program: cgminer


undefined4 FUN_00030574(void)

{
  DAT_00068b9c = DAT_00068b9c + 1;
  if (DAT_00072e70 < DAT_00068b9c) {
    FUN_0003009c();
  }
  return *(undefined4 *)(DAT_00072f14 + (DAT_00068b9c + 0x3fffffff) * 4);
}

