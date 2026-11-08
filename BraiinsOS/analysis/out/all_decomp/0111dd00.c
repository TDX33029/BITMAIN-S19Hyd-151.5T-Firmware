// FUN_0111dd00 @ 0111dd00 size=140 calls_out=3 calls_in=2
// strings: 

void FUN_0111dd00(undefined4 *param_1,char *param_2)

{
  undefined4 uVar1;
  int local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined1 uStack_11;
  
  if (*param_2 != '\x03') {
    uVar1 = FUN_00f36124(param_2,&uStack_11,&DAT_01887598);
    FUN_01111ad8(param_2);
    *param_1 = 0x80000000;
    param_1[1] = uVar1;
    return;
  }
  local_20 = *(int *)(param_2 + 4);
  uStack_1c = *(undefined4 *)(param_2 + 8);
  if (local_20 == -0x80000000) {
    *param_1 = 0x80000000;
    param_1[1] = uStack_1c;
    return;
  }
  local_18 = *(undefined4 *)(param_2 + 0xc);
  FUN_0111dda8(param_1,&local_20);
  return;
}

