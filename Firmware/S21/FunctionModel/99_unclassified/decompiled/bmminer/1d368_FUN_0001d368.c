// FUN_0001d368 @ 0001d368  size=208  callers=2
// program: bmminer


undefined4 FUN_0001d368(int param_1,char *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_28;
  char local_24 [20];
  
  local_24[4] = '\0';
  local_24[5] = '\0';
  local_24[6] = '\0';
  local_24[7] = '\0';
  local_24[0] = '\0';
  local_24[1] = '\0';
  local_24[2] = '\0';
  local_24[3] = '\0';
  local_24[8] = '\0';
  local_24[9] = '\0';
  local_24[10] = '\0';
  local_24[0xb] = '\0';
  local_24[0xc] = '\0';
  local_24[0xd] = '\0';
  local_24[0xe] = '\0';
  local_24[0xf] = '\0';
  local_24[0x10] = '\0';
  local_24[0x11] = '\0';
  local_24[0x12] = '\0';
  local_24[0x13] = '\0';
  local_28 = 0x14;
  if ((DAT_000c0410 == 0) || (*(char *)(DAT_000c0410 + 0x1c) == '\0')) {
    if (4 < DAT_000be63c) {
      uVar2 = FUN_0001b778();
      return uVar2;
    }
  }
  else if ((param_2 != (char *)0x0) &&
          (iVar1 = *(int *)(DAT_000c0410 + param_1 * 4),
          iVar1 = (**(code **)(iVar1 + 0x44))(iVar1,local_24,&local_28), iVar1 == 0)) {
    if (local_28 + 1U < param_3) {
      strcpy(param_2,local_24);
      return 0;
    }
    return 0xfffffffe;
  }
  return 0xffffffff;
}

