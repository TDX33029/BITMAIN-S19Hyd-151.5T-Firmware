// FUN_0139aa2c @ 0139aa2c size=164 calls_out=4 calls_in=0
// strings: 

void FUN_0139aa2c(undefined1 param_1,undefined4 param_2)

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
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *(undefined1 *)(puVar1 + 3) = param_1;
  *puVar1 = 1;
  puVar1[1] = 1;
  puVar1[2] = local_2c;
  return;
}

