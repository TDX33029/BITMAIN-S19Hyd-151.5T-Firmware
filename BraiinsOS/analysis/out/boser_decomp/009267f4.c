// FUN_009267f4 @ 009267f4 size=52 calls_out=1 calls_in=10
// strings: 

void FUN_009267f4(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0xb8);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xb6);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_012cb93c(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0xb4) = 0;
    return;
  }
  return;
}

