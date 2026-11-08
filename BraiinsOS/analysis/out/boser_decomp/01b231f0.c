// FUN_01b231f0 @ 01b231f0 size=120 calls_out=0 calls_in=2
// strings: 

uint FUN_01b231f0(int param_1,uint param_2,byte *param_3,byte *param_4)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = 3 - (int)param_3;
  do {
    if (0xff < param_2) {
      return param_2;
    }
    while( true ) {
      if (param_4 < param_3 + iVar2) {
        return param_2;
      }
      puVar1 = (undefined *)((param_3[2] & 0x7f) << 0x10 | (uint)param_3[1] << 8 | (uint)*param_3);
      if (puVar1 < &UNK_007fe001) break;
      param_3 = param_3 + 3;
    }
    *(undefined **)(param_1 + param_2 * 4) = puVar1;
    param_3 = param_3 + 3;
    param_2 = param_2 + 1;
  } while( true );
}

