// FUN_0002922c @ 0002922c  size=136  callers=0
// program: bmminer


void FUN_0002922c(void)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_20 [3];
  char local_1d;
  
  uVar1 = FUN_0004ac18();
  FUN_0004ac38(uVar1 | 0x10000);
  prctl(0xf,"nonce_reg_process",0,0,0);
  do {
    uVar1 = FUN_0004a6a4();
    uVar1 = uVar1 >> 1;
    if (uVar1 != 0) {
      uVar2 = 0;
      do {
        while( true ) {
          FUN_0004a6fc(auStack_20);
          if (-1 < local_1d) break;
          uVar2 = uVar2 + 1;
          FUN_0002ffb0();
          if (uVar1 == uVar2) goto LAB_000292a8;
        }
        uVar2 = uVar2 + 1;
        FUN_000303a0(auStack_20);
      } while (uVar1 != uVar2);
    }
LAB_000292a8:
    FUN_00034a5c(1);
  } while( true );
}

