// FUN_018c2cd4 @ 018c2cd4 size=108 calls_out=2 calls_in=1
// strings: 

void FUN_018c2cd4(undefined4 *param_1,int param_2,undefined1 param_3)

{
  char *pcVar1;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_50._0_2_ = CONCAT11(param_3,8);
  FUN_018c2820(&local_30,&local_50);
  local_40 = local_30;
  uStack_3c = uStack_2c;
  uStack_38 = uStack_28;
  uStack_34 = uStack_24;
  pcVar1 = (char *)(param_2 + 0x2c);
  if (*pcVar1 != '\x14') {
    FUN_018bf810(pcVar1);
  }
  *(undefined4 *)pcVar1 = local_40;
  *(undefined4 *)(param_2 + 0x30) = uStack_3c;
  *(undefined4 *)(param_2 + 0x34) = uStack_38;
  *(undefined4 *)(param_2 + 0x38) = uStack_34;
  *param_1 = local_50;
  param_1[1] = uStack_4c;
  param_1[2] = uStack_48;
  param_1[3] = uStack_44;
  return;
}

