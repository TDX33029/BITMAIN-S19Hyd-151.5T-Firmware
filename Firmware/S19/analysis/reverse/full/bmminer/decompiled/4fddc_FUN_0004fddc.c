// FUN_0004fddc @ 0004fddc  size=64  callers=1
// program: bmminer


char * FUN_0004fddc(void)

{
  int iVar1;
  char *pcVar2;
  char local_9 [5];
  
  iVar1 = FUN_0004fd58(local_9);
  if (iVar1 == 0) {
    pcVar2 = "NOSNGOT0000000000";
    if (local_9[0] != '\0') {
      pcVar2 = (char *)&DAT_0050fac8;
    }
  }
  else {
    pcVar2 = "NOSNGOT0000000000";
  }
  return pcVar2;
}

