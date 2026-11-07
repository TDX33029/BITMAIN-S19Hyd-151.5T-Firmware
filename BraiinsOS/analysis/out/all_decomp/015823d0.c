// FUN_015823d0 @ 015823d0 size=92 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_015823d0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(4);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,4);
  }
  iVar2 = *(int *)(param_1 + 4);
  *puVar1 = uVar3;
  if (iVar2 == 2) {
    FUN_0113d66c(param_1 + 8);
  }
  thunk_FUN_016d3fb4(param_1);
  return CONCAT44(&UNK_018a95bc,puVar1);
}

