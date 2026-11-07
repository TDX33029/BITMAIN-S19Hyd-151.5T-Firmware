// FUN_00f86b20 @ 00f86b20 size=188 calls_out=1 calls_in=2
// strings: 

void FUN_00f86b20(char *param_1)

{
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char local_30;
  undefined2 local_2f;
  char local_2d;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_0160ba58(&local_30);
  if (local_30 == '\x10') {
    local_30 = '\x0f';
  }
  else {
    if (local_30 == '\x0f') {
      local_2c = 0;
    }
    else {
      if (local_30 != '\x0e') {
        param_1[3] = local_2d;
        *(undefined2 *)(param_1 + 1) = local_2f;
        *(undefined4 *)(param_1 + 0xc) = local_24;
        *(undefined4 *)(param_1 + 0x10) = uStack_20;
        *(undefined4 *)(param_1 + 0x14) = uStack_1c;
        *(undefined4 *)(param_1 + 4) = local_2c;
        *(undefined4 *)(param_1 + 8) = local_28;
        goto LAB_00f86bd0;
      }
      local_40 = local_28;
      uStack_3c = local_24;
      uStack_38 = uStack_20;
    }
    *(undefined4 *)(param_1 + 8) = local_40;
    *(undefined4 *)(param_1 + 0xc) = uStack_3c;
    *(undefined4 *)(param_1 + 0x10) = uStack_38;
    local_30 = '\x0e';
    *(undefined4 *)(param_1 + 4) = local_2c;
  }
LAB_00f86bd0:
  *param_1 = local_30;
  return;
}

