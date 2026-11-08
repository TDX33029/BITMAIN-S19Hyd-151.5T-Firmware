// FUN_00d43f30 @ 00d43f30 size=116 calls_out=2 calls_in=1
// strings: 

void FUN_00d43f30(undefined4 *param_1,char *param_2)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined1 *local_18;
  
  if (*param_2 == '\0') {
    param_1[2] = &DAT_3b9aca00;
    FUN_00c01f94(param_2);
    return;
  }
  FUN_00c4b958(&local_20);
  if (local_18 == &DAT_3b9aca00) {
    *param_1 = local_20;
    param_1[2] = 0x3b9aca01;
    return;
  }
  *param_1 = local_20;
  param_1[1] = uStack_1c;
  param_1[2] = local_18;
  return;
}

