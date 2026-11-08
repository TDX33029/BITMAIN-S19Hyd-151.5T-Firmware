// FUN_007a990c @ 007a990c size=92 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_007a990c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  iVar2 = *(int *)(param_1 + 4);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  if (iVar2 == 2) {
    FUN_00f2d10c(param_1 + 8);
  }
  thunk_FUN_016d3fb4(param_1);
  return CONCAT44(&UNK_0185df48,puVar1);
}

