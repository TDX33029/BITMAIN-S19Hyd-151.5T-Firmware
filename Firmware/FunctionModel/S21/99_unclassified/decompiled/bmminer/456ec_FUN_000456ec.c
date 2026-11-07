// FUN_000456ec @ 000456ec  size=440  callers=1
// program: bmminer


undefined4 FUN_000456ec(void)

{
  FILE *__stream;
  size_t sVar1;
  int *piVar2;
  char *param3;
  int iVar3;
  int iVar4;
  char acStack_2094 [32];
  undefined4 local_2074;
  char acStack_2070 [32];
  char acStack_2050 [32];
  char acStack_2030 [32];
  char local_2010 [8192];
  
  __stream = fopen("/config/find_asic_counter","r");
  if (__stream != (FILE *)0x0) {
    memset(&local_2074,0,100);
    sVar1 = fread(&local_2074,100,1,__stream);
    if (sVar1 == 1) {
      iVar4 = 0;
      do {
        iVar3 = FUN_0002a6f0(iVar4);
        if (iVar3 != 0) {
          FUN_0001c678(iVar4,acStack_2094,0x20);
          sVar1 = strlen(acStack_2094);
          iVar3 = strncmp(acStack_2094,acStack_2070,sVar1);
          if (iVar3 != 0) {
            iVar3 = strncmp(acStack_2094,acStack_2050,sVar1);
            if ((iVar3 != 0) && (iVar3 = strncmp(acStack_2094,acStack_2030,sVar1), iVar3 != 0)) {
              if (3 < DAT_000be63c) {
                builtin_strncpy(local_2010,"board_sn change, find_asic_counter clean",0x29);
                FUN_0004948c(3,local_2010,0);
              }
              fclose(__stream);
              remove("/config/find_asic_counter");
              return 0;
            }
          }
        }
        iVar4 = iVar4 + 1;
        if (iVar4 == 4) {
          fclose(__stream);
          return local_2074;
        }
      } while( true );
    }
    if (3 < DAT_000be63c) {
      piVar2 = __errno_location();
      param3 = strerror(*piVar2);
      snprintf(local_2010,0x2000,"read find_asic_counter file failed! err:%s\n",param3);
      FUN_0004948c(3,local_2010,0);
    }
    fclose(__stream);
  }
  return 0;
}

