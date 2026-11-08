// FUN_013588d8 @ 013588d8 size=200 calls_out=4 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013588d8(void)

{
  undefined4 *puVar1;
  undefined4 local_58;
  undefined *local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_34 = (undefined *)0x0;
  local_38 = 0;
  local_3c = 0x89a;
  local_40 = &DAT_003c58c2;
  FUN_0134ad44(&local_58,&local_40);
  if ((char)local_58 == '\x06') {
    local_40 = local_54;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_003c58b4,0xe,&local_40,&DAT_0189233c,&DAT_018921dc);
  }
  local_38 = local_58;
  local_34 = local_54;
  local_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_28 = uStack_48;
  uStack_24 = uStack_44;
  local_3c = 1;
  local_40 = (undefined *)0x1;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x20);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x20);
  }
  *puVar1 = local_40;
  puVar1[1] = local_3c;
  puVar1[2] = local_38;
  puVar1[3] = local_34;
  puVar1[4] = local_30;
  puVar1[5] = uStack_2c;
  puVar1[6] = uStack_28;
  puVar1[7] = uStack_24;
  return;
}

