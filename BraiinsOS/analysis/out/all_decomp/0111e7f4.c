// FUN_0111e7f4 @ 0111e7f4 size=168 calls_out=3 calls_in=1
// strings: 

void FUN_0111e7f4(int *param_1,char *param_2)

{
  int iVar1;
  int iStack_34;
  int iStack_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined1 uStack_19;
  
  if (*param_2 != '\x03') {
    iVar1 = FUN_00f36124(param_2,&uStack_19,&DAT_01887598);
    FUN_01111ad8(param_2);
    *param_1 = -0x80000000;
    param_1[1] = iVar1;
    return;
  }
  local_28 = *(int *)(param_2 + 4);
  local_24 = *(int *)(param_2 + 8);
  if (local_28 != -0x80000000) {
    local_20 = *(undefined4 *)(param_2 + 0xc);
    FUN_0111dda8(&iStack_34,&local_28);
    local_24 = iStack_30;
    if (iStack_34 != -0x80000000) {
      *param_1 = iStack_34;
      param_1[1] = iStack_30;
      param_1[2] = local_2c;
      return;
    }
  }
  *param_1 = -0x80000000;
  param_1[1] = local_24;
  return;
}

