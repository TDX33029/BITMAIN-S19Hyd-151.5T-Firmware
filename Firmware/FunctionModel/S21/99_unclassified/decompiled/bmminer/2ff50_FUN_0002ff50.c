// FUN_0002ff50 @ 0002ff50  size=24  callers=2
// program: bmminer


void FUN_0002ff50(byte param_1)

{
  DAT_000c70a0._0_1_ = (byte)DAT_000c70a0 & 0xfb | (param_1 & 1) << 2;
  return;
}

