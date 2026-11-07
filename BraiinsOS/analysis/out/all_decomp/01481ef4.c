// FUN_01481ef4 @ 01481ef4 size=96 calls_out=3 calls_in=0
// strings: 

void FUN_01481ef4(undefined4 param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  local_48._0_4_ = *param_2;
  local_48._4_4_ = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  uStack_38 = param_2[4];
  local_34 = param_2[5];
  uStack_30 = param_2[6];
  uStack_2c = param_2[7];
  uStack_28 = param_2[8];
  uStack_24 = param_2[9];
  uStack_20 = param_2[10];
  uVar2 = FUN_014d9a70(param_1,&local_48);
  local_48 = uVar2;
  puVar1 = (undefined8 *)thunk_FUN_016d4a50(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *puVar1 = uVar2;
  return;
}

