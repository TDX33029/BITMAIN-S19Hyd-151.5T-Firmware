// FUN_00046f0c @ 00046f0c  size=308  callers=1
// program: bmminer


void FUN_00046f0c(int param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined4 local_82c;
  undefined4 local_828;
  undefined4 local_824;
  uint local_820;
  uint local_81c;
  char acStack_818 [2048];
  
  __mutex = (pthread_mutex_t *)(param_1 * 0x18 + 0x50f638);
  local_82c = 0;
  local_828 = 0;
  local_824 = 0;
  local_820 = 0;
  local_81c = 0;
  pthread_mutex_lock(__mutex);
  iVar1 = FUN_00046b00(param_1,&local_81c,&local_82c,&local_828,&local_824);
  if (iVar1 == 0) {
    iVar1 = 0x15;
    do {
      FUN_00045bc4(local_82c,&local_820);
      local_820 = local_820 >> (local_81c & 0xff) & 0xff;
      if (local_820 == 0xff) {
        pthread_mutex_unlock(__mutex);
        return;
      }
      printf("%s: waiting fpga uart%d clear send fifo space ...\n","clear_uart_tx_fifo",param_1);
      FUN_00045c40(local_828,local_820 | 0x80000000);
      usleep(3000);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    snprintf(acStack_818,0x800,"%s: uart%d always dose not has enough send fifo space, break\n",
             "clear_uart_tx_fifo",param_1);
  }
  else {
    snprintf(acStack_818,0x800,"get_send_address_info error, chain_id = %d\n",param_1);
  }
  FUN_00032218(0,acStack_818,0);
  pthread_mutex_unlock(__mutex);
  return;
}

