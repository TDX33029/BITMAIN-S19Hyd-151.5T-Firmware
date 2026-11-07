// FUN_0006a6a0 @ 0006a6a0  size=316  callers=1
// program: bmminer


undefined4 FUN_0006a6a0(void)

{
  sysinfo sStack_4c;
  int local_c;
  
  DAT_009451ac = FUN_00061334();
  DAT_009451b0 = DAT_009451ac + 0x200000;
  DAT_009451b4 = DAT_009451ac + 0x210000;
  local_c = DAT_009451ac;
  sysinfo(&sStack_4c);
  if (sStack_4c.totalram < 0x3b9aca01) {
    if (sStack_4c.totalram < 0x1dcd6501) {
      if (sStack_4c.totalram < 0xbebc201) {
        DAT_009451a8 = 0x7000000;
      }
      else {
        DAT_009451a8 = 0xf000000;
      }
    }
    else {
      DAT_009451a8 = 0x1f000000;
    }
  }
  else {
    DAT_009451a8 = 0x3f000000;
  }
  DAT_009451b8 = DAT_009451b0;
  FUN_0006b7ec(DAT_009451a8);
  FUN_0006b788(DAT_009451a8 + 0x200000);
  FUN_0006cac0();
  FUN_0006cb60();
  return 0;
}

