// FUN_00029bb8 @ 00029bb8  size=580  callers=0
// program: bmminer


void FUN_00029bb8(void)

{
  FILE *pFVar1;
  long lVar2;
  tm *__tp;
  int param6;
  int param2;
  uint in_fpscr;
  double dVar3;
  char local_914 [28];
  char acStack_8f8 [32];
  char acStack_8d8 [200];
  time_t atStack_810 [512];
  
  memset(acStack_8d8,0,200);
  local_914[4] = '\0';
  local_914[5] = '\0';
  local_914[6] = '\0';
  local_914[7] = '\0';
  local_914[0] = '\0';
  local_914[1] = '\0';
  local_914[2] = '\0';
  local_914[3] = '\0';
  local_914[8] = '\0';
  local_914[9] = '\0';
  local_914[10] = '\0';
  local_914[0xb] = '\0';
  local_914[0xc] = '\0';
  local_914[0xd] = '\0';
  local_914[0xe] = '\0';
  local_914[0xf] = '\0';
  local_914[0x10] = '\0';
  local_914[0x11] = '\0';
  local_914[0x12] = '\0';
  local_914[0x13] = '\0';
  local_914[0x14] = '\0';
  local_914[0x15] = '\0';
  local_914[0x16] = '\0';
  local_914[0x17] = '\0';
  local_914[0x18] = '\0';
  local_914[0x19] = '\0';
  memset(acStack_8f8,0,0x20);
  pFVar1 = fopen64("/tmp/test_level","r");
  if (pFVar1 == (FILE *)0x0) {
    param2 = 1;
  }
  else {
    memset(acStack_8f8,0,0x20);
    fread(acStack_8f8,1,0x20,pFVar1);
    fclose(pFVar1);
    lVar2 = strtol(acStack_8f8,(char **)0x0,10);
    param2 = lVar2 + 1;
    if (0x27 < param2) {
      return;
    }
  }
  time(atStack_810);
  __tp = localtime(atStack_810);
  strftime(local_914,0x1a,"%Y-%m-%d %H:%M:%S",__tp);
  param6 = FUN_0001d1dc();
  dVar3 = (double)VectorSignedToFloat(param6,(byte)(in_fpscr >> 0x16) & 3);
  sprintf(acStack_8d8,"%s, voltage = %d, freq = %d, hashrate = %f, miner_power = %04d, jt = %f\r\n",
          local_914,DAT_0048d3d4,DAT_0048d398,DAT_00b2d250,param6,(dVar3 / DAT_00b2d250) * 1000.0);
  pFVar1 = fopen64("/config/shmoo_result","a");
  fwrite(acStack_8d8,1,200,pFVar1);
  fclose(pFVar1);
  pFVar1 = fopen64("/tmp/test_level","wb");
  if (pFVar1 != (FILE *)0x0) {
    memset(acStack_8f8,0,0x20);
    sprintf(acStack_8f8,"%d",param2);
    fwrite(acStack_8f8,1,0x20,pFVar1);
    fclose(pFVar1);
  }
  if (DAT_00087bbc < 4) {
    FUN_00036380(0xb,"test finished, reboot!\n");
  }
  else {
    snprintf((char *)atStack_810,0x800,"auto test finished go to next level:%d, reboot",param2);
    FUN_00032218(3,atStack_810,0);
    FUN_00036380(0xb,"test finished, reboot!\n");
  }
  return;
}

