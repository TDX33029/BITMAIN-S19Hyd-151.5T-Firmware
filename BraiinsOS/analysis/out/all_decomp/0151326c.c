// FUN_0151326c @ 0151326c size=108 calls_out=0 calls_in=0
// strings: 

undefined4 * FUN_0151326c(undefined4 *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if (param_2 == 0) {
    return (undefined4 *)0x0;
  }
  param_2 = param_2 << 4;
  while( true ) {
    puVar1 = (undefined1 *)*param_1;
    puVar2 = (undefined1 *)0x4;
    if ((undefined1 *)0x80000000 < puVar1) {
      puVar2 = puVar1 + 0x7fffffff;
    }
    if (((undefined1 *)0x2 < puVar2) &&
       ((puVar2 != (undefined1 *)0x4 || (*(short *)(param_1 + 3) == 0x28)))) break;
    param_2 = param_2 + -0x10;
    param_1 = param_1 + 4;
    if (param_2 == 0) {
      return (undefined4 *)0x0;
    }
  }
  if (puVar1 == &DAT_80000004) {
    return param_1 + 1;
  }
  return (undefined4 *)0x0;
}

