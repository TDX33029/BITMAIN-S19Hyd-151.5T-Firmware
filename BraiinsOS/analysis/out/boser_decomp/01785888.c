// FUN_01785888 @ 01785888 size=88 calls_out=3 calls_in=3
// strings: Client::new()

undefined4 FUN_01785888(void)

{
  ulonglong uVar1;
  undefined4 auStack_1b8 [106];
  
  FUN_01785908(auStack_1b8);
  uVar1 = FUN_01785c7c(auStack_1b8);
  auStack_1b8[0] = (undefined4)(uVar1 >> 0x20);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("Client::new()",0xd,auStack_1b8,&DAT_01d1a7c0);
  }
  return auStack_1b8[0];
}

