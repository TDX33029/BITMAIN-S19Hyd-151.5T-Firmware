// FUN_0001c978 @ 0001c978  size=272
// callers: [FUN_00027f90, FUN_000255b0, FUN_0001caa8]

undefined4 FUN_0001c978(uint param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  uint in_fpscr;
  double dVar5;
  undefined4 local_83c;
  undefined4 local_838;
  undefined4 local_834;
  char acStack_830 [2048];
  
  local_838 = 0;
  local_834 = 0;
  local_83c = 0;
  cVar4 = FUN_0004ca78(param_1 & 0xff,&local_83c,1);
  dVar3 = DAT_0001ca98;
  dVar2 = DAT_0001ca90;
  dVar1 = DAT_0001ca88;
  if (cVar4 == '\0') {
    dVar5 = DAT_0001caa0;
  }
  else {
    dVar5 = (double)VectorSignedToFloat(local_83c,(byte)(in_fpscr >> 0x16) & 3);
    dVar5 = dVar5 * DAT_0001ca88 * DAT_0001ca90 * DAT_0001ca98;
    if (5 < DAT_00087bbc) {
      snprintf(acStack_830,0x800,"an0 = %f.\n",dVar5);
      FUN_00032218(5,acStack_830,0);
      dVar5 = (double)VectorSignedToFloat(local_83c,(byte)(in_fpscr >> 0x16) & 3);
      dVar5 = dVar5 * dVar1 * dVar2 * dVar3;
    }
  }
  if (4 < DAT_00087bbc) {
    snprintf(acStack_830,0x800,"chain = %d, voltage = %f\n",param_1,dVar5);
    FUN_00032218(4,acStack_830,0);
  }
  return SUB84(dVar5,0);
}


