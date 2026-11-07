// FUN_000414e0 @ 000414e0  size=132  callers=1
// program: bmminer


undefined4 FUN_000414e0(void)

{
  int iVar1;
  
  puts("bmminer_socket_init");
  while (iVar1 = FUN_00084240(&DAT_000bdddc,4), iVar1 != 0) {
    sleep(3);
  }
  puts("regist ..");
  while( true ) {
    FUN_00084554(s_bitmain_submit_nonce_000bdcd4);
    iVar1 = FUN_00084554(s_bitmain_api_status_000bdd58);
    if (iVar1 == 0) break;
    sleep(3);
  }
  puts("regist done!");
  return 0;
}

