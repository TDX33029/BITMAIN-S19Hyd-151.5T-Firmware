// FUN_000246cc @ 000246cc  size=260  callers=11
// program: bmminer


undefined4 FUN_000246cc(int param_1,uint param_2)

{
  int iVar1;
  uint in_fpscr;
  double dVar2;
  char local_2010 [8192];
  
  if (param_2 < DAT_000be63c) {
    snprintf(local_2010,0x2000,"%s to %d.\n","set_voltage_by_steps",param_1);
    FUN_0004948c(param_2,local_2010,0);
  }
  dVar2 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  iVar1 = FUN_00075bb0(SUB84(dVar2 / 100.0,0));
  if (-1 < iVar1) {
    usleep(500000);
    DAT_000c0420 = param_1;
    DAT_000c0424 = param_1;
    return 0;
  }
  if (DAT_000be63c < 4) {
    return 0xffffffff;
  }
  builtin_strncpy(local_2010,"bitmain_set_voltage failed",0x1b);
  FUN_0004948c(3,local_2010,0);
  return 0xffffffff;
}

