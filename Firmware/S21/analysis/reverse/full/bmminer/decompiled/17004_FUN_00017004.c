// FUN_00017004 @ 00017004  size=168  callers=1
// program: bmminer


void FUN_00017004(void)

{
  undefined4 uVar1;
  uint in_fpscr;
  char acStack_2008 [8192];
  
  DAT_000bfa98 = 0xbf800000;
  DAT_000bfa9c = 0xbf400000;
  DAT_000bfaa0 = 0;
  DAT_000bfa94 = 0xc1000000;
  uVar1 = FUN_0002ae48();
  DAT_000bfa8c = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  DAT_000bfa88 = 0x42200000;
  DAT_000bfa84 = 0x42c80000;
  if (3 < DAT_000be63c) {
    snprintf(acStack_2008,0x2000,"init fan pid target=%d",(int)DAT_000bfa8c);
    FUN_0004948c(3,acStack_2008,0);
  }
  return;
}

