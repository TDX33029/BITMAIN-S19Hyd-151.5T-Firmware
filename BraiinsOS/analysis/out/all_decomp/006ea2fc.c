// FUN_006ea2fc @ 006ea2fc size=224 calls_out=2 calls_in=0
// strings: 

void FUN_006ea2fc(undefined1 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_2 + 0x80) == '\0') {
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
  else if (*(char *)(param_2 + 0x80) == '\x01') {
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
    uVar3 = 8;
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,8);
    }
    puVar1[1] = 0x64656c62;
    uVar2 = 0x61736964;
  }
  *puVar1 = uVar2;
  *(undefined4 **)(param_1 + 8) = puVar1;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *param_1 = 3;
  return;
}

