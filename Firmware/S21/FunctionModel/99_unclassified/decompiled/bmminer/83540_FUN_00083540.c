// FUN_00083540 @ 00083540  size=144  callers=0
// program: bmminer


undefined4 FUN_00083540(uint param_1)

{
  undefined *__dest;
  undefined *puVar1;
  uint uVar2;
  
  if (3 < param_1) {
    return 0xffffffff;
  }
  uVar2 = 0;
  do {
    if (param_1 == uVar2) {
      __dest = &DAT_009453b4 + param_1 * 0x40000;
      do {
        puVar1 = __dest + 0x400;
        memcpy(__dest,&DAT_000bf654,0x400);
        __dest = puVar1;
      } while (puVar1 != (undefined *)(param_1 * 0x40000 + 0x9853b4));
      memcpy((void *)(uVar2 * 0x400 + 0xa453b4),&DAT_000bf654,0x400);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 4);
  return 0;
}

