// FUN_00925220 @ 00925220 size=116 calls_out=4 calls_in=1
// strings: 

void FUN_00925220(undefined4 *param_1,int param_2)

{
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30 [23];
  undefined1 uStack_19;
  
  local_30[0] = 0xb;
  FUN_00f3ce3c(&local_60,local_30,&uStack_19,&DAT_01867be8);
  *param_1 = local_60;
  param_1[1] = uStack_5c;
  param_1[2] = uStack_58;
  param_1[3] = uStack_54;
  param_1[4] = uStack_50;
  param_1[5] = uStack_4c;
  param_1[6] = local_48;
  param_1[7] = uStack_44;
  param_1[8] = uStack_40;
  param_1[9] = uStack_3c;
  param_1[10] = uStack_38;
  param_1[0xb] = uStack_34;
  FUN_009248d4(param_2 + 0xb8);
  if (*(int *)(param_2 + 0x48) != 4) {
    FUN_00919614(param_2);
    FUN_009249a0((int *)(param_2 + 0x48));
  }
  return;
}

