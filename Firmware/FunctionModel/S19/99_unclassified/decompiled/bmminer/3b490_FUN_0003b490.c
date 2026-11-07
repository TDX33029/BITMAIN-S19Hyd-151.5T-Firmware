// FUN_0003b490 @ 0003b490  size=112  callers=0
// program: bmminer


undefined4 * FUN_0003b490(undefined4 *param_1)

{
  char acStack_808 [2048];
  
  FUN_0003a9e0(0xf,0xff);
  if (3 < DAT_00087bbc) {
    snprintf(acStack_808,0x800,"Unknown miner type(%d).\n",5);
    FUN_00032218(3,acStack_808,0);
  }
  *param_1 = 3000;
  param_1[1] = 2000;
  param_1[2] = &LAB_0003ad14;
  return param_1;
}

