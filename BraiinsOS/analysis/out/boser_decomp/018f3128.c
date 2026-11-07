// FUN_018f3128 @ 018f3128 size=120 calls_out=1 calls_in=6
// strings: 

void FUN_018f3128(undefined4 *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 local_8c;
  undefined4 local_88;
  undefined2 local_14;
  
  puVar1 = (undefined1 *)0x80000029;
  if (*(char *)(param_2 + 0x251) == '\0') {
    local_14 = 4;
    local_8c = 0x80000001;
    local_88 = 0x10001;
    FUN_018f1fc4(param_2,&local_8c,*(char *)(param_2 + 0x31) == '\x02');
    *(undefined1 *)(param_1 + 1) = 0x1b;
    *(undefined1 *)(param_2 + 0x255) = 1;
    puVar1 = &DAT_8000001c;
  }
  *param_1 = puVar1;
  return;
}

