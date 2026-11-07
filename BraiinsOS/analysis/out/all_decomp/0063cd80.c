// FUN_0063cd80 @ 0063cd80 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_0063cd80(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = param_1 + 0xfU & 0x7ffffff8;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(uVar2);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,uVar2);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  return;
}

