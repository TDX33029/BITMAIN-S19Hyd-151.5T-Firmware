// FUN_0143e700 @ 0143e700 size=84 calls_out=3 calls_in=0
// strings: 

void FUN_0143e700(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  FUN_01430fb4(&local_48,param_1);
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x2c);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x2c);
  }
  *puVar1 = local_48;
  puVar1[1] = uStack_44;
  puVar1[2] = uStack_40;
  puVar1[3] = uStack_3c;
  puVar1[4] = uStack_38;
  puVar1[5] = local_34;
  puVar1[6] = uStack_30;
  puVar1[7] = uStack_2c;
  puVar1[8] = uStack_28;
  puVar1[9] = uStack_24;
  puVar1[10] = uStack_20;
  return;
}

