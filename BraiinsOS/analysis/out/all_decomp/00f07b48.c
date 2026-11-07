// FUN_00f07b48 @ 00f07b48 size=100 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_00f07b48(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  int iVar4;
  
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  uVar2 = *(undefined1 *)(param_1 + 0x1d);
  puVar3 = (undefined1 *)thunk_FUN_016d4a50(2);
  if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(1,2);
  }
  iVar4 = *(int *)(param_1 + 4);
  puVar3[1] = uVar2;
  *puVar3 = uVar1;
  if (iVar4 == 2) {
    FUN_00ea0c8c(param_1 + 8);
  }
  thunk_FUN_016d3fb4(param_1);
  return CONCAT44(&UNK_0187ccac,puVar3);
}

