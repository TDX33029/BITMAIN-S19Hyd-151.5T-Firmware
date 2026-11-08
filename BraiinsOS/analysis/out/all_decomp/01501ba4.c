// FUN_01501ba4 @ 01501ba4 size=100 calls_out=1 calls_in=1
// strings: unknown

undefined4 * FUN_01501ba4(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)0x0;
  if (param_1 != (undefined4 *)0x0) {
    if (param_1[1] != 7) {
      return param_1;
    }
    iVar1 = thunk_FUN_016dd50a(*param_1,"unknown",7);
    puVar2 = (undefined4 *)0x0;
    if (iVar1 != 0) {
      puVar2 = param_1;
    }
  }
  return puVar2;
}

