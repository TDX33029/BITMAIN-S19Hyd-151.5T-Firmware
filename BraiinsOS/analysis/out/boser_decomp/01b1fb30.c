// FUN_01b1fb30 @ 01b1fb30 size=184 calls_out=1 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/bn/random.c

undefined4 FUN_01b1fb30(int *param_1,uint *param_2,uint param_3,uint *param_4,int param_5)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = param_4 + param_5;
  do {
    if (param_5 == 0) {
LAB_01b1fb78:
      FUN_01b053d4(3,0,0x6c,"/aws-lc/crypto/fipsmodule/bn/random.c",0x7e);
      return 0;
    }
    puVar2 = puVar2 + -1;
    if (*puVar2 != 0) {
      if ((param_5 != 1) || (param_3 < *param_4)) {
        uVar1 = param_4[param_5 + 0x3fffffff];
        *param_1 = param_5;
        uVar1 = uVar1 | uVar1 >> 1;
        uVar1 = uVar1 | uVar1 >> 2;
        uVar1 = uVar1 | uVar1 >> 4;
        uVar1 = uVar1 | uVar1 >> 8;
        *param_2 = uVar1 | uVar1 >> 0x10;
        return 1;
      }
      goto LAB_01b1fb78;
    }
    param_5 = param_5 + -1;
  } while( true );
}

