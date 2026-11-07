// FUN_01429200 @ 01429200 size=52 calls_out=0 calls_in=0
// strings: 

void FUN_01429200(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x50);
  *(undefined1 *)(param_1 + 0x50) = 2;
  if (cVar1 == '\x01') {
    (**(code **)(*(int *)(param_1 + 0x18) + 0x10))
              (param_1 + 0x24,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}

