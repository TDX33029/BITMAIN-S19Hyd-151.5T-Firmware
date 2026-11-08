// FUN_006ef62c @ 006ef62c size=208 calls_out=2 calls_in=0
// strings: 

void FUN_006ef62c(undefined1 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_2 + 0x80) == '\0') {
    uVar3 = 8;
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
    if (puVar1 == (undefined4 *)0x0) {
LAB_006ef6e4:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,8);
    }
    puVar1[1] = 0x64656c62;
    uVar2 = 0x61736964;
  }
  else if (*(char *)(param_2 + 0x80) == '\x01') {
    uVar3 = 8;
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
    if (puVar1 == (undefined4 *)0x0) goto LAB_006ef6e4;
    puVar1[1] = 0x73756f69;
    uVar2 = 0x74756163;
  }
  else {
    uVar3 = 7;
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(7);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,7);
    }
    *(undefined4 *)((int)puVar1 + 3) = 0x6d756d69;
    uVar2 = 0x6978616d;
  }
  *puVar1 = uVar2;
  *(undefined4 **)(param_1 + 8) = puVar1;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *param_1 = 3;
  return;
}

