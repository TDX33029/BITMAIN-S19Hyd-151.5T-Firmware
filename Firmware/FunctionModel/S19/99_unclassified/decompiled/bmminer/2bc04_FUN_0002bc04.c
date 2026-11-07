// FUN_0002bc04 @ 0002bc04  size=132  callers=1
// program: bmminer


undefined4 FUN_0002bc04(void)

{
  int iVar1;
  
  puts("bmminer_socket_init");
  while (iVar1 = FUN_00059f30(&DAT_00087408,4), iVar1 != 0) {
    sleep(3);
  }
  puts("regist ..");
  while( true ) {
    FUN_0005a244(s_bitmain_submit_nonce_00087300);
    iVar1 = FUN_0005a244(s_bitmain_api_status_00087384);
    if (iVar1 == 0) break;
    sleep(3);
  }
  puts("regist done!");
  return 0;
}

