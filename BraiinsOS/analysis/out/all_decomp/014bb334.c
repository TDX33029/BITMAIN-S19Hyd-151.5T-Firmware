// FUN_014bb334 @ 014bb334 size=68 calls_out=0 calls_in=0
// strings: 

int FUN_014bb334(int param_1,int param_2,uint param_3)

{
  ushort *puVar1;
  bool bVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  puVar1 = *(ushort **)(param_1 + 4);
  while( true ) {
    bVar2 = puVar1 == *(ushort **)(param_1 + 0xc);
    if (!bVar2) {
      param_3 = (uint)*puVar1;
      *(ushort **)(param_1 + 4) = puVar1 + 0x10;
      puVar1 = puVar1 + 0x10;
    }
    if (bVar2 || param_3 == 2) break;
    param_2 = param_2 + -1;
    if (param_2 == 0) {
      return 0;
    }
  }
  return param_2;
}

