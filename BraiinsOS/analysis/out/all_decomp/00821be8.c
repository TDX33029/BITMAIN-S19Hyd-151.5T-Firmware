// FUN_00821be8 @ 00821be8 size=176 calls_out=5 calls_in=1
// strings: 

void FUN_00821be8(undefined4 *param_1,ushort param_2,undefined4 param_3)

{
  ushort *puVar1;
  undefined4 local_44;
  ushort *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_00821cac(&local_44);
  if ((char)local_44 == '\x01') {
    *param_1 = 0x80000000;
    param_1[1] = local_40;
    return;
  }
  puVar1 = (ushort *)thunk_FUN_016d4a50(2);
  if (puVar1 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(1,2);
  }
  *puVar1 = param_2 & 0xff;
  local_34 = local_44._1_1_;
  local_38 = 6;
  local_3c = 2;
  local_44 = 2;
  local_40 = puVar1;
  FUN_00873188(&local_30,&local_44,param_3);
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  thunk_FUN_016d3fb4(puVar1);
  return;
}

