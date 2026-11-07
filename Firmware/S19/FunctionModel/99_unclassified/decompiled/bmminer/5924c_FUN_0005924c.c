// FUN_0005924c @ 0005924c  size=160  callers=0
// program: bmminer


undefined4 FUN_0005924c(uint param_1)

{
  undefined *__dest;
  undefined *puVar1;
  uint uVar2;
  
  if (0xf < param_1) {
    return 0xffffffff;
  }
  uVar2 = 0;
  do {
    while (param_1 != uVar2) {
      uVar2 = uVar2 + 1;
      if (uVar2 == 0x10) {
        return 0;
      }
    }
    __dest = &DAT_0050fc9c + param_1 * 0x20000;
    do {
      puVar1 = __dest + 0x200;
      memcpy(__dest,&DAT_000885f8,0x200);
      __dest = puVar1;
    } while (puVar1 != (undefined *)(param_1 * 0x20000 + 0x52fc9c));
    uVar2 = uVar2 + 1;
    memcpy(&DAT_0070fc9c + param_1 * 0x200,&DAT_000885f8,0x200);
  } while (uVar2 != 0x10);
  return 0;
}

