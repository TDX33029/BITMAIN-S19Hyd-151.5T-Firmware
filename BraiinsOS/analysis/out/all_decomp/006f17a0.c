// FUN_006f17a0 @ 006f17a0 size=160 calls_out=2 calls_in=0
// strings: 

void FUN_006f17a0(undefined1 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_2 + 0x80) == '\x01') {
    uVar3 = 6;
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(6);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,6);
    }
    *(undefined2 *)(puVar1 + 1) = 0x6d6f;
    uVar2 = 0x74737563;
  }
  else {
    uVar3 = 9;
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(9);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,9);
    }
    *(undefined1 *)(puVar1 + 2) = 100;
    puVar1[1] = 0x65676e61;
    uVar2 = 0x68636e75;
  }
  *puVar1 = uVar2;
  *(undefined4 **)(param_1 + 8) = puVar1;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *param_1 = 3;
  return;
}

