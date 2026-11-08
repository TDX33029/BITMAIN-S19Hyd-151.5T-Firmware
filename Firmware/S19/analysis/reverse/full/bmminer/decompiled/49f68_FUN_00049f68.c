// FUN_00049f68 @ 00049f68  size=68  callers=1
// program: bmminer


undefined4 FUN_00049f68(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if (param_3 != 0) {
    puVar1 = (undefined1 *)(DAT_0050fa58 + param_1 * 0x40 + 0x1f);
    puVar2 = (undefined1 *)(param_2 + -1);
    do {
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar1;
    } while (puVar2 != (undefined1 *)(param_2 + param_3 + -1));
  }
  return 0;
}

