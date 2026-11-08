// FUN_0006ed20 @ 0006ed20  size=40  callers=1
// program: bmminer


uint FUN_0006ed20(uint param_1)

{
  return param_1 << 0x18 | (param_1 >> 8 & 0xff) << 0x10 | (param_1 >> 0x10 & 0xff) << 8 |
         param_1 >> 0x18;
}

