// FUN_00022a44 @ 00022a44  size=24  callers=2
// program: bmminer


void FUN_00022a44(byte param_1)

{
  DAT_00089210._0_1_ = (byte)DAT_00089210 & 0xfd | (param_1 & 1) << 1;
  return;
}

