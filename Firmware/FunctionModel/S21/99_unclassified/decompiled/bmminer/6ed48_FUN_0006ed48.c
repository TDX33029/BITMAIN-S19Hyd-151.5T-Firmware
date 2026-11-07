// FUN_0006ed48 @ 0006ed48  size=68  callers=1
// program: bmminer


undefined8 FUN_0006ed48(uint param_1,uint param_2)

{
  return CONCAT44(param_1 << 0x18 | (param_1 >> 8 & 0xff) << 0x10 | (param_1 >> 0x10 & 0xff) << 8 |
                  param_1 >> 0x18,
                  param_2 << 0x18 | (param_2 >> 8 & 0xff) << 0x10 | (param_2 >> 0x10 & 0xff) << 8 |
                  param_2 >> 0x18);
}

