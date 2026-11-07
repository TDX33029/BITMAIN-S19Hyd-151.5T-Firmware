// FUN_00c64da8 @ 00c64da8 size=276 calls_out=4 calls_in=2
// strings: 

void FUN_00c64da8(undefined4 *param_1,char *param_2)

{
  undefined4 uVar1;
  undefined1 local_28 [8];
  undefined4 local_20;
  uint local_1c;
  undefined1 uStack_11;
  
  if (*param_2 != '\x02') {
    uVar1 = FUN_00f36124(param_2,&uStack_11,&DAT_01873d58);
    *param_1 = 1;
    param_1[1] = uVar1;
    FUN_00c01f94(param_2);
    return;
  }
  local_20 = *(undefined4 *)(param_2 + 0x10);
  local_1c = *(uint *)(param_2 + 0x14);
  if (*(int *)(param_2 + 8) == 0) {
    param_1[2] = local_20;
    *param_1 = 0;
    param_1[3] = local_1c;
    return;
  }
  if (*(int *)(param_2 + 8) == 1) {
    if (local_1c < 0x80000000) {
      param_1[2] = local_20;
      param_1[3] = local_1c;
    }
    if (-1 < (int)local_1c) {
      *param_1 = 0;
      return;
    }
    uVar1 = FUN_0157cd6c(local_28,&uStack_11,&DAT_01873d58);
  }
  else {
    local_28[0] = 3;
    uVar1 = FUN_0157cc00(local_28,&uStack_11,&DAT_01873d58);
  }
  *param_1 = 1;
  param_1[1] = uVar1;
  return;
}

