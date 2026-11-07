// FUN_01895fcc @ 01895fcc size=84 calls_out=1 calls_in=2
// strings: 

void FUN_01895fcc(uint *param_1,uint param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  
  if (param_2 <= param_4) {
    param_4 = param_2;
  }
  if (param_4 != 0) {
    puVar1 = param_1;
    do {
      param_4 = param_4 - 1;
      *puVar1 = ~*param_3;
      param_3 = param_3 + 1;
      puVar1 = puVar1 + 1;
    } while (param_4 != 0);
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(0,0,&DAT_01d2183c);
  }
  *param_1 = *param_1 | 1;
  return;
}

