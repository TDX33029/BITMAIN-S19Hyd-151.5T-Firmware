// FUN_0004b4cc @ 0004b4cc  size=188  callers=1
// program: bmminer


undefined4 FUN_0004b4cc(void)

{
  int iVar1;
  undefined1 auStack_54 [4];
  sysinfo sStack_50;
  
  DAT_0050fa58 = FUN_00045cb8();
  DAT_0050fa64 = DAT_0050fa58 + 0x210000;
  iVar1 = DAT_0050fa58 + 0x200000;
  DAT_0050fa5c = iVar1;
  sysinfo(&sStack_50);
  if (sStack_50.totalram < 0x3b9aca01) {
    if (sStack_50.totalram < 0x1dcd6501) {
      if (sStack_50.totalram < 0xbebc201) {
        DAT_0050fa68 = 0x7000000;
      }
      else {
        DAT_0050fa68 = 0xf000000;
      }
    }
    else {
      DAT_0050fa68 = 0x1f000000;
    }
  }
  else {
    DAT_0050fa68 = 0x3f000000;
  }
  DAT_0050fa60 = iVar1;
  FUN_0004a574();
  FUN_00045c40(0x29,DAT_0050fa68 + 0x200000);
  FUN_00045bc4(0x29,auStack_54);
  FUN_0004b424();
  FUN_0004b48c();
  return 0;
}

