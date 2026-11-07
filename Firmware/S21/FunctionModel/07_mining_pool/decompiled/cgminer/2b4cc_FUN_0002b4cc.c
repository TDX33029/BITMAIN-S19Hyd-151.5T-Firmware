// FUN_0002b4cc @ 0002b4cc  size=96  callers=2
// program: cgminer


void FUN_0002b4cc(void)

{
  int iVar1;
  
  DAT_00068a18 = (char *)FUN_0001f860(0x1000,"cgminer.c","load_default_config",0x8a7);
  DAT_00068a1c = 0;
  FUN_0002b3d0();
  iVar1 = access(DAT_00068a18,4);
  if (iVar1 == 0) {
    FUN_0002921c();
    return;
  }
  free(DAT_00068a18);
  DAT_00068a18 = (char *)0x0;
  return;
}

