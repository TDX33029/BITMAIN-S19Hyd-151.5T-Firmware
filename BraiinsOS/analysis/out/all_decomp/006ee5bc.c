// FUN_006ee5bc @ 006ee5bc size=160 calls_out=2 calls_in=0
// strings: 

void FUN_006ee5bc(undefined1 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_2 + 0x80) == '\x01') {
    uVar3 = 5;
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(5);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,5);
    }
    *(undefined1 *)(puVar1 + 1) = 100;
    uVar2 = 0x656d6974;
  }
  else {
    uVar3 = 10;
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(10);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,10);
    }
    *(undefined2 *)(puVar1 + 2) = 0x6574;
    puVar1[1] = 0x696e6966;
    uVar2 = 0x65646e69;
  }
  *puVar1 = uVar2;
  *(undefined4 **)(param_1 + 8) = puVar1;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *param_1 = 3;
  return;
}

