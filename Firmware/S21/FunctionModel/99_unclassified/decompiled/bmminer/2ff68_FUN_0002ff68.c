// FUN_0002ff68 @ 0002ff68  size=24  callers=2
// program: bmminer


void FUN_0002ff68(byte param_1)

{
  DAT_000c70a0._0_1_ = (byte)DAT_000c70a0 & 0xf7 | (param_1 & 1) << 3;
  return;
}

