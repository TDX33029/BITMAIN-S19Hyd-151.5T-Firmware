// FUN_00704174 @ 00704174 size=120 calls_out=2 calls_in=1
// strings: FIPS mode not enabled!

char * FUN_00704174(void)

{
  int iVar1;
  char *pcVar2;
  undefined1 local_d;
  undefined1 *local_c;
  
  DataMemoryBarrier(0xb);
  if (DAT_01d4b6e0 != 0) {
    local_d = 1;
    local_c = &local_d;
    FUN_019a768c(&DAT_01d4b6e0,0,&local_c,&DAT_01c065d0,&DAT_01c06604);
  }
  iVar1 = FUN_01b59640();
  pcVar2 = (char *)0x0;
  if (iVar1 != 1) {
    pcVar2 = "FIPS mode not enabled!";
  }
  return pcVar2;
}

