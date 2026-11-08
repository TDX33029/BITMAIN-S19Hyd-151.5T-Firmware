// FUN_009b1c38 @ 009b1c38 size=228 calls_out=3 calls_in=1
// strings: 

void FUN_009b1c38(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 *local_28;
  code *local_24;
  
  local_50 = param_2;
  uStack_4c = param_3;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x30);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x30);
  }
  local_24 = (code *)&DAT_00f5c97c;
  local_28 = &local_50;
  FUN_00600d2c(&local_48,&DAT_00590e71,&local_28);
  local_24 = FUN_00facd88;
  local_28 = &uStack_4c;
  FUN_00600d2c(&local_38,&DAT_0056a0b8,&local_28);
  *puVar1 = local_48;
  puVar1[1] = local_44;
  puVar1[3] = local_38;
  puVar1[4] = uStack_34;
  puVar1[5] = uStack_30;
  puVar1[6] = 0x80000000;
  puVar1[7] = param_4;
  puVar1[8] = param_5;
  puVar1[9] = 0x80000000;
  puVar1[10] = param_6;
  puVar1[0xb] = param_7;
  puVar1[2] = local_40;
  *param_1 = 4;
  param_1[1] = puVar1;
  param_1[2] = 4;
  return;
}

