// FUN_00844134 @ 00844134 size=80 calls_out=2 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00844134(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined8 in_d0;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_1c;
  
  local_1c = local_1c & 0xffffff00;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x18);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x18);
  }
  local_30 = (undefined4)in_d0;
  uStack_2c = (undefined4)((ulonglong)in_d0 >> 0x20);
  *puVar1 = local_30;
  puVar1[1] = uStack_2c;
  puVar1[2] = uStack_28;
  puVar1[3] = uStack_24;
  puVar1[4] = param_1;
  puVar1[5] = local_1c;
  return;
}

