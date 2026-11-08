// FUN_0139b034 @ 0139b034 size=196 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_0139b034(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  FUN_013bb460(&local_30,param_2,0,0);
  if (local_30 != &DAT_80000004) {
    local_14 = local_24;
    local_20 = local_30;
    uStack_1c = local_2c;
    uStack_18 = uStack_28;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_20,&DAT_018935e8,&DAT_018931d0);
  }
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10c);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10c);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  FUN_016dd1aa(puVar1 + 2,param_1,0x100);
  puVar1[0x42] = local_2c;
  return CONCAT44(&PTR_LAB_01893218,puVar1);
}

