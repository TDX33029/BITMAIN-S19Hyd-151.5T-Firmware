// FUN_00db2c10 @ 00db2c10 size=68 calls_out=1 calls_in=0
// strings: 

void FUN_00db2c10(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0xdf) != '\x03') {
    return;
  }
  FUN_005c270c(param_1);
  *(undefined2 *)(param_1 + 0xdd) = 0;
  if (*(char *)(param_1 + 0xac) == '\0') {
    uVar2 = *(undefined4 *)(param_1 + 0xa4);
    puVar1 = *(undefined4 **)(param_1 + 0xa8);
    *puVar1 = *(undefined4 *)(param_1 + 0xa0);
    puVar1[1] = uVar2;
  }
  *(undefined1 *)(param_1 + 0xdc) = 0;
  return;
}

