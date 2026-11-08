// FUN_0001cc60 @ 0001cc60  size=232  callers=5
// program: bmminer


undefined4 FUN_0001cc60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  double dVar3;
  char local_810 [2052];
  
  if (3 < DAT_00087bbc) {
    snprintf(local_810,0x800,"%s to %d.\n","set_voltage_by_steps",param_1);
    FUN_00032218(3,local_810,0);
  }
  dVar3 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  iVar1 = FUN_00050390(SUB84(dVar3 / 100.0,0));
  if (iVar1 < 0) {
    if (3 < DAT_00087bbc) {
      builtin_strncpy(local_810,"bitmain_set_voltage failed",0x1b);
      FUN_00032218(3,local_810,0);
      return 0xffffffff;
    }
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    DAT_000891d0 = param_1;
    DAT_000891d4 = param_1;
  }
  return uVar2;
}

