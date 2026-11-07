// FUN_012a9434 @ 012a9434 size=104 calls_out=0 calls_in=3
// strings: 

undefined4 FUN_012a9434(int param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  param_2 = param_2 * 0x16c;
  puVar2 = (undefined4 *)(param_1 + 0x11c);
  do {
    if ((puVar2[1] != 4) || (*(int *)*puVar2 != 0x706c6568)) {
      bVar1 = *(byte *)((int)puVar2 + 0x2a);
      bVar3 = (bVar1 & 0x80) == 0;
      if (bVar3) {
        bVar1 = *(byte *)((int)puVar2 + 0x2e);
      }
      if (bVar3 && (bVar1 & 0x80) == 0) {
        return 1;
      }
    }
    puVar2 = puVar2 + 0x5b;
    param_2 = param_2 + -0x16c;
    if (param_2 == 0) {
      return 0;
    }
  } while( true );
}

