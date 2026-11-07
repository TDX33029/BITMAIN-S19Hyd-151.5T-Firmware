// FUN_0004782c @ 0004782c  size=252  callers=1
// program: bmminer


void FUN_0004782c(uint param_1)

{
  size_t __size;
  void *__ptr;
  size_t param6;
  pthread_mutex_t *__mutex;
  char acStack_818 [2052];
  
  __mutex = (pthread_mutex_t *)(param_1 * 0x18 + 0x50f7b8);
  pthread_mutex_lock(__mutex);
  __size = FUN_00046d24(param_1 & 0xff);
  if (__size != 0) {
    __ptr = malloc(__size);
    if (__ptr == (void *)0x0) {
      snprintf(acStack_818,0x800,"%s: uart%d malloc buffer error\n","clear_uart_rx_fifo",param_1);
      FUN_00032218(0,acStack_818,0);
      usleep(500000);
      pthread_mutex_unlock(__mutex);
      return;
    }
    param6 = FUN_00047044(param_1,__ptr,__size);
    if (__size != param6) {
      snprintf(acStack_818,0x800,"%s: uart%d clear rx fifo error. nbytes = %d, len = %d\n",
               "clear_uart_rx_fifo",param_1,__size,param6);
      FUN_00032218(0,acStack_818);
    }
    free(__ptr);
    usleep(10000);
  }
  pthread_mutex_unlock(__mutex);
  return;
}

