// FUN_008a3c20 @ 008a3c20 size=116 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_008a3c20(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  *puVar1 = *(undefined4 *)(param_1 + 0x1c);
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  if (*(int *)(param_1 + 4) == 2) {
    FUN_010fc1b4(param_1 + 8);
  }
  thunk_FUN_016d3fb4(param_1);
  return CONCAT44(&UNK_01863194,puVar1);
}

