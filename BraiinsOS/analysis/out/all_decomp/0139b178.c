// FUN_0139b178 @ 0139b178 size=200 calls_out=4 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0139b178(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_013bb460(&local_40,param_2,0,0);
  if (local_40 != &DAT_80000004) {
    local_24 = local_34;
    local_28 = local_38;
    local_2c = local_3c;
    local_30 = local_40;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_30,&DAT_018935e8,&DAT_018931d0);
  }
  local_24 = *param_1;
  uStack_20 = param_1[1];
  uStack_1c = param_1[2];
  local_28 = local_3c;
  local_2c = 1;
  local_30 = (undefined1 *)0x1;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x18);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x18);
  }
  *puVar1 = local_30;
  puVar1[1] = local_2c;
  puVar1[2] = local_28;
  puVar1[3] = local_24;
  puVar1[4] = uStack_20;
  puVar1[5] = uStack_1c;
  return;
}

