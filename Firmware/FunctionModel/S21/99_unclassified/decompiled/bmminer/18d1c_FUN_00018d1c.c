// FUN_00018d1c @ 00018d1c  size=252  callers=3
// program: bmminer


undefined4 FUN_00018d1c(void)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)FUN_0002a4e4();
  iVar2 = strcmp(pcVar1,"HHB56601");
  if (iVar2 != 0) {
    pcVar1 = (char *)FUN_0002a4e4();
    iVar2 = strcmp(pcVar1,"HHB56611");
    if (iVar2 != 0) {
      pcVar1 = (char *)FUN_0002a4e4();
      iVar2 = strcmp(pcVar1,"H6HB70601");
      if (iVar2 != 0) {
        pcVar1 = (char *)FUN_0002a4e4();
        iVar2 = strcmp(pcVar1,"H6HB70602");
        if (iVar2 != 0) {
          pcVar1 = (char *)FUN_0002a4e4();
          iVar2 = strcmp(pcVar1,"H6HB70501");
          if (iVar2 != 0) {
            pcVar1 = (char *)FUN_0002a4e4();
            iVar2 = strcmp(pcVar1,"H6HB70801");
            if (iVar2 != 0) {
              pcVar1 = (char *)FUN_0002a4e4();
              iVar2 = strcmp(pcVar1,"H6HB70802");
              if (iVar2 != 0) {
                iVar2 = FUN_0002a5bc();
                if (0 < iVar2) {
                  DAT_000bfb48 = 0;
                }
                iVar2 = FUN_00017ec4();
                if (0 < iVar2) {
                  DAT_000bfb48 = 1;
                }
                FUN_0002adc0();
                DAT_000bfb48 = 4;
                return 4;
              }
            }
          }
        }
      }
      return 4;
    }
  }
  return 0;
}

