// FUN_00a42f54 @ 00a42f54 size=92 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_00a42f54(int param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  puVar2 = (undefined1 *)thunk_FUN_016d4a50(1);
  if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(1,1);
  }
  iVar3 = *(int *)(param_1 + 4);
  *puVar2 = uVar1;
  if (iVar3 == 2) {
    FUN_00a954c0(param_1 + 8);
  }
  thunk_FUN_016d3fb4(param_1);
  return CONCAT44(&UNK_0186cc58,puVar2);
}

