// FUN_0178fa40 @ 0178fa40 size=140 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_0178fa40(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = (char)param_2;
  param_1[1] = (char)((uint)param_2 >> 8);
  param_1[2] = (char)((uint)param_2 >> 0x10);
  param_1[3] = (char)((uint)param_2 >> 0x18);
  return 0;
}

