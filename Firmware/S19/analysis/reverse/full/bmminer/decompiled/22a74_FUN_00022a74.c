// FUN_00022a74 @ 00022a74  size=24  callers=1
// program: bmminer


void FUN_00022a74(byte param_1)

{
  DAT_00089210._0_1_ = (byte)DAT_00089210 & 0xf7 | (param_1 & 1) << 3;
  return;
}

