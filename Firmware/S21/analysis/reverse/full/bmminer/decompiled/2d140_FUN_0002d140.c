// FUN_0002d140 @ 0002d140  size=192  callers=0
// program: bmminer


undefined4 FUN_0002d140(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_s15;
  double dVar3;
  char local_2010 [8192];
  
  iVar2 = 10;
  FUN_000832f0();
  do {
    iVar1 = FUN_000462cc(0xbd,param_2,param_1);
    if (iVar1 < 0) {
      dVar3 = (double)VectorSignedFixedToFloat
                                (CONCAT44(extraout_s15,iVar1) & 0xffffffff00007fff,0x20,0xb);
      return SUB84((dVar3 * 0.125 - 1.0) * 0.9,0);
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (DAT_000be63c < 6) {
    return 0;
  }
  builtin_strncpy(local_2010,"ADC_VOLTAGE_DATAOUT is not ready",0x21);
  FUN_0004948c(5,local_2010,0);
  return 0;
}

