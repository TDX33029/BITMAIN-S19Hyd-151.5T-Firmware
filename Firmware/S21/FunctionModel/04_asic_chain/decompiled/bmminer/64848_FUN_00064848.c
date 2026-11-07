// FUN_00064848 @ 00064848  size=560  callers=2
// program: bmminer


void FUN_00064848(int param_1)

{
  int iVar1;
  char acStack_820 [2048];
  uint local_20;
  uint local_1c [5];
  
  local_1c[3] = 0;
  local_1c[2] = 0;
  local_1c[1] = 0;
  local_1c[0] = 0;
  local_20 = 0;
  local_1c[4] = 0;
  pthread_mutex_lock((pthread_mutex_t *)(&DAT_00944d38 + param_1 * 0x18));
  iVar1 = FUN_00062f44(param_1,&local_20,local_1c + 3,local_1c + 2,local_1c + 1);
  if (iVar1 == 0) {
    local_1c[4] = 0;
    do {
      FUN_00061240(local_1c[3],local_1c);
      local_1c[0] = local_1c[0] >> (local_20 & 0xff) & 0xff;
      if (local_1c[0] == 0xff) {
        pthread_mutex_unlock((pthread_mutex_t *)(&DAT_00944d38 + param_1 * 0x18));
        return;
      }
      printf("%s: waiting fpga uart%d clear send fifo space ...\n","clear_uart_tx_fifo",param_1);
      FUN_000612bc(local_1c[2],local_1c[0] | 0x80000000);
      usleep(3000);
      local_1c[4] = local_1c[4] + 1;
    } while (local_1c[4] < 0x15);
    snprintf(acStack_820,0x800,"%s: uart%d always dose not has enough send fifo space, break\n",
             "clear_uart_tx_fifo",param_1);
    FUN_0004948c(0,acStack_820,0);
    pthread_mutex_unlock((pthread_mutex_t *)(&DAT_00944d38 + param_1 * 0x18));
  }
  else {
    snprintf(acStack_820,0x800,"get_send_address_info error, chain_id = %d\n",param_1);
    FUN_0004948c(0,acStack_820,0);
    pthread_mutex_unlock((pthread_mutex_t *)(&DAT_00944d38 + param_1 * 0x18));
  }
  return;
}

