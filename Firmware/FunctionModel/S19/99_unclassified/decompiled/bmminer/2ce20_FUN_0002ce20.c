// FUN_0002ce20 @ 0002ce20  size=92  callers=1
// program: bmminer


void FUN_0002ce20(void)

{
  int iVar1;
  
  DAT_0008a348 = (char *)FUN_00033990(0x1000,"bmminer.c","load_default_config",0x3b6);
  FUN_0002cd24();
  iVar1 = access(DAT_0008a348,4);
  if (iVar1 == 0) {
    FUN_0002c28c();
    return;
  }
  free(DAT_0008a348);
  DAT_0008a348 = (char *)0x0;
  return;
}

