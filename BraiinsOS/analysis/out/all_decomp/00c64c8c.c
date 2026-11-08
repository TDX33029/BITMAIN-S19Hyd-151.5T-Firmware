// FUN_00c64c8c @ 00c64c8c size=244 calls_out=4 calls_in=6
// strings: 

longlong FUN_00c64c8c(char *param_1)

{
  undefined4 uVar1;
  undefined1 local_30 [8];
  uint local_28;
  int local_24;
  undefined1 uStack_19;
  
  if (*param_1 != '\x02') {
    uVar1 = FUN_00f36124(param_1,&uStack_19,&DAT_01873d28);
    FUN_00c01f94(param_1);
    return CONCAT44(uVar1,1);
  }
  local_28 = *(uint *)(param_1 + 0x10);
  local_24 = *(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 8) == 0) {
    if (local_24 == 0) {
LAB_00c64ce0:
      return (ulonglong)local_28 << 0x20;
    }
    local_30[0] = 1;
  }
  else {
    if (*(int *)(param_1 + 8) != 1) {
      local_30[0] = 3;
      uVar1 = FUN_0157cc00(local_30,&uStack_19,&DAT_01873d28);
      goto LAB_00c64d14;
    }
    if (local_24 == 0) goto LAB_00c64ce0;
    local_30[0] = 2;
  }
  uVar1 = FUN_0157cd6c(local_30,&uStack_19,&DAT_01873d28);
LAB_00c64d14:
  return CONCAT44(uVar1,1);
}

