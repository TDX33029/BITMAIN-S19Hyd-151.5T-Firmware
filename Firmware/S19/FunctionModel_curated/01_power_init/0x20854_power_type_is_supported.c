// FUN_00020854 @ 00020854  size=84
// callers: [FUN_0001cd50]

undefined4 FUN_00020854(uint param_1)

{
  ushort *puVar1;
  
  if (DAT_0071c478 < 1) {
    return 0;
  }
  if (*DAT_0071c47c != param_1) {
    puVar1 = DAT_0071c47c;
    do {
      puVar1 = puVar1 + 1;
      if (puVar1 == DAT_0071c47c + DAT_0071c478) {
        return 0;
      }
    } while (*puVar1 != param_1);
  }
  return 1;
}


