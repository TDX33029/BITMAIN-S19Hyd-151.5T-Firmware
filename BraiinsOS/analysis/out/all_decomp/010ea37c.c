// FUN_010ea37c @ 010ea37c size=92 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_010ea37c(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar2;
  FUN_010ea1d4(param_1 + 4);
  thunk_FUN_016d3fb4(param_1);
  return CONCAT44(&UNK_01885ea8,puVar1);
}

