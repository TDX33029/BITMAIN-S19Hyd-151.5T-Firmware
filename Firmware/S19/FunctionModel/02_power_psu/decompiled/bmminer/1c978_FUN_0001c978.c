// FUN_0001c978 @ 0001c978  size=272  callers=3
// program: bmminer


undefined4 FUN_0001c978(uint param_1)

{
  char cVar1;
  uint in_fpscr;
  double dVar2;
  undefined4 local_83c;
  undefined4 local_838;
  undefined4 local_834;
  char acStack_830 [2048];
  
  local_838 = 0;
  local_834 = 0;
  local_83c = 0;
  cVar1 = FUN_0004ca78(param_1 & 0xff,&local_83c,1);
  if (cVar1 == '\0') {
    dVar2 = 0.0;
  }
  else {
    dVar2 = (double)VectorSignedToFloat(local_83c,(byte)(in_fpscr >> 0x16) & 3);
    dVar2 = dVar2 * 3.3 * 0.0009765625 * 7.6;
    if (5 < DAT_00087bbc) {
      snprintf(acStack_830,0x800,"an0 = %f.\n",dVar2);
      FUN_00032218(5,acStack_830,0);
      dVar2 = (double)VectorSignedToFloat(local_83c,(byte)(in_fpscr >> 0x16) & 3);
      dVar2 = dVar2 * 3.3 * 0.0009765625 * 7.6;
    }
  }
  if (4 < DAT_00087bbc) {
    snprintf(acStack_830,0x800,"chain = %d, voltage = %f\n",param_1,dVar2);
    FUN_00032218(4,acStack_830,0);
  }
  return SUB84(dVar2,0);
}

