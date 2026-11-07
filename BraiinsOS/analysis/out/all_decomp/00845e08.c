// FUN_00845e08 @ 00845e08 size=96 calls_out=2 calls_in=0
// strings: 

void FUN_00845e08(undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = thunk_FUN_016d4a50(0x88);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x88);
  }
  *(undefined1 *)(iVar1 + 0x86) = param_3;
  *(undefined1 *)(iVar1 + 0x85) = param_2;
  *(undefined1 *)(iVar1 + 0x84) = 0;
  *(undefined4 *)(iVar1 + 0x70) = param_4;
  *(undefined4 *)(iVar1 + 0x74) = param_5;
  *(undefined4 *)(iVar1 + 0x78) = param_6;
  *(undefined4 *)(iVar1 + 0x7c) = param_7;
  *(undefined4 *)(iVar1 + 0x80) = param_1;
  return;
}

