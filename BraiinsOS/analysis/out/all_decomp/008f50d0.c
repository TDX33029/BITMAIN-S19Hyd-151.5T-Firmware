// FUN_008f50d0 @ 008f50d0 size=276 calls_out=2 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_008f50d0(char param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_18;
  
  if (param_1 == '\0') {
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x14);
    }
    *puVar1 = param_3;
    *(undefined1 *)(puVar1 + 4) = 0x10;
    *(undefined1 *)(puVar1 + 2) = param_2;
    puVar1[1] = param_4;
    return;
  }
  if (param_1 == '\x01') {
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x20);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x20);
    }
    *(undefined1 *)(puVar1 + 4) = 0x3f;
    puVar1[5] = param_3;
    *(undefined1 *)(puVar1 + 7) = param_2;
    puVar1[6] = param_4;
    *puVar1 = 0x4000000;
    puVar1[1] = 0x5000201;
    return;
  }
  local_18 = CONCAT31(local_18._1_3_,param_2);
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x24);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x24);
  }
  *puVar1 = 0x80000000;
  puVar1[1] = uStack_34;
  puVar1[2] = uStack_30;
  puVar1[3] = uStack_2c;
  puVar1[4] = 0;
  puVar1[5] = 0x100;
  puVar1[6] = param_3;
  puVar1[7] = param_4;
  puVar1[8] = local_18;
  return;
}

