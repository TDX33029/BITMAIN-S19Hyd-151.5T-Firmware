// FUN_0141e5bc @ 0141e5bc size=64 calls_out=2 calls_in=3
// strings: size overflows MAX_SIZE

void FUN_0141e5bc(void)

{
  int iVar1;
  undefined1 uStack_9;
  
  iVar1 = FUN_0141c1f0();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("size overflows MAX_SIZE",0x17,&uStack_9,&DAT_01d2f38c);
  }
  return;
}

