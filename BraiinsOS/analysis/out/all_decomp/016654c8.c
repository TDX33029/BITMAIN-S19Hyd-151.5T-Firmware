// FUN_016654c8 @ 016654c8 size=76 calls_out=2 calls_in=2
// strings: 

void FUN_016654c8(undefined1 *param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined1 *)(puVar1 + 2) = param_2;
  *puVar1 = 1;
  *(undefined4 **)(param_1 + 4) = puVar1;
  *param_1 = 3;
  puVar1[1] = &DAT_018ad554;
  return;
}

