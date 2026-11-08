// FUN_013d9264 @ 013d9264 size=176 calls_out=4 calls_in=2
// strings: 

void FUN_013d9264(short *param_1,uint param_2)

{
  ushort *puVar1;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  if (*param_1 == 1) {
    if ((uint)(*(int *)(param_1 + 2) - *(int *)(param_1 + 6)) < param_2) {
      FUN_01af7b44(param_1 + 2,*(int *)(param_1 + 6),param_2,1,1);
    }
  }
  else {
    puVar1 = (ushort *)(param_1 + 1);
    if (0x20 - *puVar1 < param_2) {
      FUN_013db314(auStack_30,puVar1);
      FUN_01bed4e2((uint)auStack_20 | 2,auStack_30,0xc);
      if (*param_1 != 0) {
        FUN_019bb7e0(*(undefined4 *)(param_1 + 2),*(undefined4 *)(param_1 + 4));
      }
      *param_1 = 1;
      FUN_01bed4e2(puVar1,auStack_20,0xe);
    }
  }
  return;
}

