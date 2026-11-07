// FUN_000565ac @ 000565ac  size=864  callers=1
// program: bmminer


int FUN_000565ac(int param_1)

{
  FILE *pFVar1;
  size_t sVar2;
  int *piVar3;
  char *pcVar4;
  char *pcVar5;
  int local_201c;
  char local_2018 [8196];
  
  if (param_1 == 0) {
    pcVar5 = "/tmp/counter";
  }
  else {
    pcVar5 = "/config/counter";
  }
  pFVar1 = fopen(pcVar5,"r");
  if (pFVar1 == (FILE *)0x0) {
    if (3 < DAT_000be63c) {
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      snprintf(local_2018,0x2000,"fail to open counter file, err:%s",pcVar4);
      FUN_0004948c(3,local_2018,0);
    }
    pFVar1 = fopen(pcVar5,"w");
    if (pFVar1 == (FILE *)0x0) {
      if (DAT_000be63c < 4) {
        return -1;
      }
      piVar3 = __errno_location();
      pcVar5 = strerror(*piVar3);
      snprintf(local_2018,0x2000,"can not open counter file, err:%s",pcVar5);
      FUN_0004948c(3,local_2018,0);
      return -1;
    }
    local_201c = 0;
    sVar2 = fwrite(&local_201c,1,4,pFVar1);
    if (sVar2 == 4) {
      fflush(pFVar1);
      goto LAB_000565ec;
    }
    if (DAT_000be63c < 4) goto LAB_00056894;
    piVar3 = __errno_location();
    pcVar5 = strerror(*piVar3);
    pcVar4 = "can not write,err:%s";
  }
  else {
LAB_000565ec:
    fclose(pFVar1);
    pFVar1 = fopen(pcVar5,"r");
    if (pFVar1 == (FILE *)0x0) {
      if (DAT_000be63c < 4) {
        return -1;
      }
      builtin_strncpy(local_2018,"fail to w+ open counter file",0x1d);
      FUN_0004948c(3,local_2018,0);
      return -1;
    }
    local_201c = 0;
    sVar2 = fread(&local_201c,1,4,pFVar1);
    if (sVar2 == 4) {
      local_201c = local_201c + 1;
      fclose(pFVar1);
      pFVar1 = fopen(pcVar5,"w");
      if (pFVar1 != (FILE *)0x0) {
        sVar2 = fwrite(&local_201c,1,4,pFVar1);
        if (sVar2 == 4) {
          fflush(pFVar1);
          fclose(pFVar1);
          sleep(0x1e);
          return local_201c;
        }
        if (3 < DAT_000be63c) {
          piVar3 = __errno_location();
          pcVar5 = strerror(*piVar3);
          snprintf(local_2018,0x2000,"can not write,err:%s",pcVar5);
          FUN_0004948c(3,local_2018,0);
        }
        fclose(pFVar1);
        return -1;
      }
      if (DAT_000be63c < 4) {
        return -1;
      }
      builtin_strncpy(local_2018,"fail to w open counter file",0x1c);
      FUN_0004948c(3,local_2018,0);
      return -1;
    }
    if (DAT_000be63c < 4) goto LAB_00056894;
    piVar3 = __errno_location();
    pcVar5 = strerror(*piVar3);
    pcVar4 = "read counter file failed! err:%s\n";
  }
  snprintf(local_2018,0x2000,pcVar4,pcVar5);
  FUN_0004948c(3,local_2018,0);
LAB_00056894:
  fclose(pFVar1);
  return -1;
}

