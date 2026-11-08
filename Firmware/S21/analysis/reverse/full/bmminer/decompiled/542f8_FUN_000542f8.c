// FUN_000542f8 @ 000542f8  size=860  callers=1
// program: bmminer


int FUN_000542f8(void)

{
  FILE *pFVar1;
  size_t sVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  char *__format;
  int iVar6;
  int local_2074;
  char acStack_2070 [96];
  char local_2010 [8192];
  
  pFVar1 = fopen("/config/find_asic_counter","r");
  if (pFVar1 == (FILE *)0x0) {
    pFVar1 = fopen("/config/find_asic_counter","w+b");
    if (pFVar1 == (FILE *)0x0) {
      if (DAT_000be63c < 4) {
        return 0;
      }
      builtin_strncpy(local_2010,"fail to create find_asic_counter file",0x26);
      FUN_0004948c(3,local_2010,0);
      return 0;
    }
    memset(&local_2074,0,100);
    if (3 < DAT_000be63c) {
      builtin_strncpy(local_2010,"exist chain",0xc);
      FUN_0004948c(3,local_2010,0);
    }
    iVar6 = 0;
    do {
      iVar3 = FUN_0002a6f0(iVar6);
      if (iVar3 != 0) {
        memset(local_2010,0,0x20);
        FUN_0001c678(iVar6,local_2010,0x20);
        strcpy(acStack_2070 + iVar6 * 0x20,local_2010);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != 4);
    sVar2 = fwrite(&local_2074,100,1,pFVar1);
    if (sVar2 != 1) {
      if (3 < DAT_000be63c) {
        builtin_strncpy(local_2010,"fail to w open find_asic_counter file",0x26);
        FUN_0004948c(3,local_2010,0);
      }
      goto LAB_00054384;
    }
    fflush(pFVar1);
    fclose(pFVar1);
  }
  else {
    fclose(pFVar1);
  }
  pFVar1 = fopen("/config/find_asic_counter","r+");
  if (pFVar1 == (FILE *)0x0) {
    if (DAT_000be63c < 4) {
      return 0;
    }
    builtin_strncpy(local_2010,"fail to r+ open find_asic_counter file",0x27);
    FUN_0004948c(3,local_2010,0);
    return 0;
  }
  memset(&local_2074,0,100);
  sVar2 = fread(&local_2074,100,1,pFVar1);
  if (sVar2 == 1) {
    local_2074 = local_2074 + 1;
    fseek(pFVar1,0,0);
    sVar2 = fwrite(&local_2074,100,1,pFVar1);
    if (sVar2 == 1) {
      fflush(pFVar1);
      fclose(pFVar1);
      return local_2074;
    }
    if (3 < DAT_000be63c) {
      piVar4 = __errno_location();
      pcVar5 = strerror(*piVar4);
      __format = "write find_asic_counter file failed! err:%s\n";
      goto LAB_000544ec;
    }
  }
  else if (3 < DAT_000be63c) {
    piVar4 = __errno_location();
    pcVar5 = strerror(*piVar4);
    __format = "read find_asic_counter file failed! err:%s\n";
LAB_000544ec:
    snprintf(local_2010,0x2000,__format,pcVar5);
    FUN_0004948c(3,local_2010,0);
    fclose(pFVar1);
    return 0;
  }
LAB_00054384:
  fclose(pFVar1);
  return 0;
}

