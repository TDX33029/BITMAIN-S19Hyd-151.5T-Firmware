// FUN_01430ae4 @ 01430ae4 size=64 calls_out=2 calls_in=2
// strings: size overflows MAX_SIZE

void FUN_01430ae4(void)

{
  int iVar1;
  undefined1 uStack_9;
  
  iVar1 = FUN_0142f1a4();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("size overflows MAX_SIZE",0x17,&uStack_9,&DAT_01d1c90c);
  }
  return;
}

