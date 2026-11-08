// FUN_00064a78 @ 00064a78  size=592  callers=2
// program: bmminer


void FUN_00064a78(uint param_1)

{
  char acStack_814 [2048];
  void *local_14;
  size_t local_10;
  size_t local_c;
  
  local_c = 0;
  local_10 = 0;
  local_14 = (void *)0x0;
  pthread_mutex_lock((pthread_mutex_t *)(&DAT_00944eb8 + param_1 * 0x18));
  local_10 = FUN_00063540(param_1 & 0xff);
  if (local_10 == 0) {
    pthread_mutex_unlock((pthread_mutex_t *)(&DAT_00944eb8 + param_1 * 0x18));
  }
  else {
    local_14 = malloc(local_10);
    if (local_14 == (void *)0x0) {
      snprintf(acStack_814,0x800,"%s: uart%d malloc buffer error\n","clear_uart_rx_fifo",param_1);
      FUN_0004948c(0,acStack_814,0);
      local_14 = (void *)0x0;
      usleep(500000);
      pthread_mutex_unlock((pthread_mutex_t *)(&DAT_00944eb8 + param_1 * 0x18));
    }
    else {
      local_c = FUN_000637a4(param_1,local_14,local_10);
      if (local_c == local_10) {
        free(local_14);
        local_14 = (void *)0x0;
        usleep(10000);
        pthread_mutex_unlock((pthread_mutex_t *)(&DAT_00944eb8 + param_1 * 0x18));
      }
      else {
        snprintf(acStack_814,0x800,"%s: uart%d clear rx fifo error. nbytes = %d, len = %d\n",
                 "clear_uart_rx_fifo",param_1,local_10,local_c);
        FUN_0004948c(0,acStack_814,0);
        free(local_14);
        local_14 = (void *)0x0;
        usleep(10000);
        pthread_mutex_unlock((pthread_mutex_t *)(&DAT_00944eb8 + param_1 * 0x18));
      }
    }
  }
  return;
}

