// FUN_0002ad6c @ 0002ad6c  size=84  callers=1
// program: bmminer


undefined4 FUN_0002ad6c(uint param_1)

{
  ushort *puVar1;
  
  if (DAT_00a4ee40 < 1) {
    return 0;
  }
  if (*DAT_00a4ee44 != param_1) {
    puVar1 = DAT_00a4ee44;
    do {
      puVar1 = puVar1 + 1;
      if (puVar1 == DAT_00a4ee44 + DAT_00a4ee40) {
        return 0;
      }
    } while (*puVar1 != param_1);
  }
  return 1;
}

