// FUN_010ea664 @ 010ea664 size=92 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_010ea664(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = uVar2;
  uVar5 = uVar3;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8,extraout_r2,extraout_r3,uVar4,uVar5);
  }
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  FUN_010ea1d4(param_1 + 4);
  thunk_FUN_016d3fb4(param_1);
  return CONCAT44(&UNK_01885e30,puVar1);
}

