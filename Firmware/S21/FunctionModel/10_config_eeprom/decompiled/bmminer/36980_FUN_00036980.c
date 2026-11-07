// FUN_00036980 @ 00036980  size=392  callers=1
// program: bmminer


undefined4 FUN_00036980(void *param_1,uint param_2)

{
  FILE *__stream;
  uint __n;
  undefined4 uVar1;
  char local_2018 [8196];
  
  __stream = fopen("/config/cgminer.conf","r");
  if (__stream == (FILE *)0x0) {
    if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
      builtin_strncpy(local_2018,"open /config/cgminer.conf failed",0x21);
      FUN_0004948c(3,local_2018,0);
      return 0xffffffff;
    }
    uVar1 = 0xffffffff;
  }
  else {
    fseek(__stream,0,2);
    __n = ftell(__stream);
    fseek(__stream,0,0);
    fread(param_1,1,__n,__stream);
    if (param_2 < __n) {
      if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
        builtin_strncpy(local_2018,"read buffer is full",0x14);
        FUN_0004948c(3,local_2018,0);
      }
      fclose(__stream);
      uVar1 = 0xffffffff;
    }
    else {
      fclose(__stream);
      uVar1 = 0;
    }
  }
  return uVar1;
}

