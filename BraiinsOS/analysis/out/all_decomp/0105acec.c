// FUN_0105acec @ 0105acec size=116 calls_out=3 calls_in=4
// strings: 

void FUN_0105acec(uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined1 uStack_11;
  
  if (0x7ffffff4 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&uStack_11,&DAT_018574d8,&DAT_01857540);
  }
  uVar2 = param_1 + 0xb & 0xfffffffc;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(uVar2);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,uVar2);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  return;
}

