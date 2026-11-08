// FUN_00dc879c @ 00dc879c size=48 calls_out=2 calls_in=1
// strings: 

void FUN_00dc879c(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (undefined1 *)*param_1;
  if (puVar1 == &DAT_80000018) {
    return;
  }
  puVar2 = (undefined1 *)0x2;
  if ((undefined1 *)0x80000015 < puVar1) {
    puVar2 = puVar1 + 0x7fffffea;
  }
  if (&DAT_00000001 < puVar2) {
    FUN_00dc8870();
    return;
  }
  FUN_019bb7e0(param_1[1],param_1[2]);
  return;
}

