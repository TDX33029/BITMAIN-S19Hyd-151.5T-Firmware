// FUN_00083088 @ 00083088  size=16  callers=2
// program: bmminer


uint FUN_00083088(uint param_1,int param_2)

{
  return (param_2 * ((param_1 & 0x1ffffff) >> 9) & 0xffffff) >> 0x10;
}

