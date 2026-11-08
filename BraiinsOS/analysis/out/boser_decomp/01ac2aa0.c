// FUN_01ac2aa0 @ 01ac2aa0 size=68 calls_out=2 calls_in=2
// strings: size overflows MAX_SIZE

void FUN_01ac2aa0(void)

{
  char cVar1;
  undefined1 uStack_9;
  
  cVar1 = FUN_01ac2af0();
  if (cVar1 == '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("size overflows MAX_SIZE",0x17,&uStack_9,&DAT_01d2f38c);
  }
  return;
}

