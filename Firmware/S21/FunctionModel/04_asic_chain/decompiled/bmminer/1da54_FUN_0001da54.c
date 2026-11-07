// FUN_0001da54 @ 0001da54  size=272  callers=1
// program: bmminer


undefined4 FUN_0001da54(int param_1,char *param_2,uint param_3)

{
  int iVar1;
  int local_2030;
  char local_202c [8216];
  
  local_2030 = 0x14;
  local_202c[4] = '\0';
  local_202c[5] = '\0';
  local_202c[6] = '\0';
  local_202c[7] = '\0';
  local_202c[8] = '\0';
  local_202c[9] = '\0';
  local_202c[10] = '\0';
  local_202c[0xb] = '\0';
  local_202c[0xc] = '\0';
  local_202c[0xd] = '\0';
  local_202c[0xe] = '\0';
  local_202c[0xf] = '\0';
  local_202c[0x10] = '\0';
  local_202c[0x11] = '\0';
  local_202c[0x12] = '\0';
  local_202c[0x13] = '\0';
  local_202c[0] = '\0';
  local_202c[1] = '\0';
  local_202c[2] = '\0';
  local_202c[3] = '\0';
  if ((DAT_000c0410 == 0) || (*(char *)(DAT_000c0410 + 0x1c) == '\0')) {
    if (4 < DAT_000be63c) {
      snprintf(local_202c + 0x14,0x2000,"No board name, chain = %d\n",param_1);
      FUN_0004948c(4,local_202c + 0x14,0);
    }
  }
  else if (((param_2 != (char *)0x0) &&
           (iVar1 = *(int *)(DAT_000c0410 + param_1 * 4),
           iVar1 = (**(code **)(iVar1 + 0xb4))(iVar1,local_202c,&local_2030), iVar1 == 0)) &&
          (local_202c[0] != '\0')) {
    if (local_2030 + 1U < param_3) {
      strncpy(param_2,local_202c,9);
      return 0;
    }
    return 0xfffffffe;
  }
  return 0xffffffff;
}

