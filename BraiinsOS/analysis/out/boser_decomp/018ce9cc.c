// FUN_018ce9cc @ 018ce9cc size=108 calls_out=1 calls_in=1
// strings: EarlyData rejected | rustls::client::client_conn | rustls::client::client_conn

void FUN_018ce9cc(int param_1)

{
  char *pcStack_1c;
  undefined4 uStack_18;
  char *local_14;
  undefined4 local_10;
  undefined *local_c;
  
  if (4 < DAT_01d51b00) {
    local_10 = 0x1b;
    pcStack_1c = "rustls::client::client_conn";
    uStack_18 = 0x1b;
    local_c = &DAT_01d22d2c;
    local_14 = "rustls::client::client_conn";
    FUN_0193b350("EarlyData rejected",0x25,5,&pcStack_1c);
  }
  *(undefined1 *)(param_1 + 4) = 4;
  return;
}

