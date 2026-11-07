// FUN_0001d438 @ 0001d438  size=196  callers=2
// program: bmminer


undefined4 FUN_0001d438(int param_1,char *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  char local_18 [4];
  int local_14;
  
  local_18[2] = 0;
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_14 = 3;
  if ((DAT_000c0410 == 0) || (*(char *)(DAT_000c0410 + 0x1c) == '\0')) {
    if (4 < DAT_000be63c) {
      uVar2 = FUN_0001b7bc();
      return uVar2;
    }
  }
  else if ((param_2 != (char *)0x0) &&
          (iVar1 = *(int *)(DAT_000c0410 + param_1 * 4),
          iVar1 = (**(code **)(iVar1 + 0x4c))(iVar1,local_18,&local_14), iVar1 == 0)) {
    if (local_14 + 1U < param_3) {
      strcpy(param_2,local_18);
      return 0;
    }
    return 0xfffffffe;
  }
  return 0xffffffff;
}

