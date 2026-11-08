// FUN_0002a314 @ 0002a314  size=144  callers=0
// program: bmminer


void FUN_0002a314(void)

{
  char *pcVar1;
  int iVar2;
  
  prctl(0xf,"chk_status",0,0,0);
  do {
    do {
      FUN_00028390();
      FUN_00029e08();
      FUN_00034a5c(1000);
    } while (DAT_00089054 != 0);
    pcVar1 = (char *)FUN_0001fffc();
    iVar2 = strcmp(pcVar1,"HHB28601");
    if (iVar2 != 0) {
      pcVar1 = (char *)FUN_0001fffc();
      iVar2 = strcmp(pcVar1,"HHB28602");
      if (iVar2 != 0) {
        FUN_0001575c(400,0);
      }
    }
  } while( true );
}

