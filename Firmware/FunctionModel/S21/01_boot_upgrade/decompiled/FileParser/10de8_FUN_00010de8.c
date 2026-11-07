// FUN_00010de8 @ 00010de8  size=1616  callers=1
// program: FileParser


undefined4
FUN_00010de8(FILE *param_1,int param_2,undefined4 *param_3,undefined1 param_4,char param_5,
            char param_6)

{
  size_t sVar1;
  char local_524 [128];
  undefined4 local_4a4;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 local_490;
  undefined4 local_48c;
  undefined4 local_488;
  SHA256_CTX SStack_484;
  undefined4 local_414;
  undefined1 auStack_410 [1020];
  size_t local_14;
  FILE *local_10;
  int local_c;
  
  local_414 = 0;
  memset(auStack_410,0,0x3fc);
  SHA256_Init(&SStack_484);
  local_c = 0;
  local_14 = 0;
  local_10 = (FILE *)0x0;
  if (param_6 != '\0') {
    builtin_strncpy(local_524,"/tmp/tmpfw/",0xc);
    memset(local_524 + 0xc,0,0x74);
    switch(param_4) {
    case 0:
      sVar1 = strlen(local_524);
      builtin_strncpy(local_524 + sVar1,"BOOT.bin",9);
      break;
    case 1:
      sVar1 = strlen(local_524);
      builtin_strncpy(local_524 + sVar1,"devicetree.dtb",0xf);
      break;
    case 2:
      sVar1 = strlen(local_524);
      builtin_strncpy(local_524 + sVar1,"uImage",7);
      break;
    case 3:
      sVar1 = strlen(local_524);
      builtin_strncpy(local_524 + sVar1,"minerfs.image.gz",0x11);
      break;
    case 4:
      sVar1 = strlen(local_524);
      builtin_strncpy(local_524 + sVar1,"update.image.gz",0x10);
      break;
    case 5:
      sVar1 = strlen(local_524);
      builtin_strncpy(local_524 + sVar1,"crl.tar.gz",0xb);
      break;
    case 6:
      sVar1 = strlen(local_524);
      builtin_strncpy(local_524 + sVar1,"miner.btm.tar.gz",0x11);
      break;
    case 7:
      sVar1 = strlen(local_524);
      builtin_strncpy(local_524 + sVar1,"reserve",8);
      break;
    case 9:
      sVar1 = strlen(local_524);
      builtin_strncpy(local_524 + sVar1,"datafile",9);
    }
    if (param_5 != '\0') {
      sVar1 = strlen(local_524);
      builtin_strncpy(local_524 + sVar1,".sig",5);
    }
    printf("fileName:\'%s\', size:[%d]\r\n",local_524,param_2);
    local_10 = fopen64(local_524,"wb");
    if (local_10 == (FILE *)0x0) {
      printf("Create File \'%s\' Failed!\r\n",local_524);
    }
  }
  while (0x400 < (uint)(param_2 - local_c)) {
    local_14 = fread(&local_414,1,0x400,param_1);
    local_c = local_c + local_14;
    SHA256_Update(&SStack_484,&local_414,0x400);
    if ((param_6 != '\0') && (local_10 != (FILE *)0x0)) {
      fwrite(&local_414,1,0x400,local_10);
    }
  }
  local_14 = fread(&local_414,1,param_2 - local_c,param_1);
  SHA256_Update(&SStack_484,&local_414,local_14);
  if ((param_6 != '\0') && (local_10 != (FILE *)0x0)) {
    fwrite(&local_414,1,local_14,local_10);
  }
  local_4a4 = 0;
  local_4a0 = 0;
  local_49c = 0;
  local_498 = 0;
  local_494 = 0;
  local_490 = 0;
  local_48c = 0;
  local_488 = 0;
  SHA256_Final((uchar *)&local_4a4,&SStack_484);
  if ((param_6 != '\0') && (local_10 != (FILE *)0x0)) {
    fclose(local_10);
  }
  *param_3 = local_4a4;
  param_3[1] = local_4a0;
  param_3[2] = local_49c;
  param_3[3] = local_498;
  param_3[4] = local_494;
  param_3[5] = local_490;
  param_3[6] = local_48c;
  param_3[7] = local_488;
  return local_488;
}

