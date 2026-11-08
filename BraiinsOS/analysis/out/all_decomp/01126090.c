// FUN_01126090 @ 01126090 size=268 calls_out=4 calls_in=1
// strings: 

longlong FUN_01126090(char *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined1 uStack_11;
  
  if (*param_1 != '\x02') {
    uVar2 = FUN_00f36124(param_1,&uStack_11,&DAT_018874f8);
    FUN_01111ad8(param_1);
    return CONCAT44(uVar2,1);
  }
  puVar1 = (uint *)(param_1 + 0x10);
  local_20 = *(undefined8 *)puVar1;
  if (*(int *)(param_1 + 8) == 0) {
    if (*(int *)(param_1 + 0x14) == 0) goto LAB_011260f8;
    local_28[0] = 1;
  }
  else {
    if (*(int *)(param_1 + 8) != 1) {
      local_28[0] = 3;
      uVar2 = FUN_0157cc00(local_28,&uStack_11,&DAT_018874f8);
      return CONCAT44(uVar2,1);
    }
    if (*(int *)(param_1 + 0x14) == 0) {
LAB_011260f8:
      return (ulonglong)*puVar1 << 0x20;
    }
    local_28[0] = 2;
  }
  local_20 = *(undefined8 *)puVar1;
  uVar2 = FUN_0157cd6c(local_28,&uStack_11,&DAT_018874f8);
  return CONCAT44(uVar2,1);
}

