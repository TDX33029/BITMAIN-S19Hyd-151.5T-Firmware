// FUN_0003a904 @ 0003a904  size=176  callers=1
// program: bmminer


void FUN_0003a904(int param_1)

{
  void *pvVar1;
  
  *(undefined1 *)(param_1 + 0x7c) = 8;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  memset((void *)(param_1 + 0x18),0,0x30);
  if (*(void **)(param_1 + 0x70) != (void *)0x0) {
    free(*(void **)(param_1 + 0x70));
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  pvVar1 = malloc(0x180);
  *(void **)(param_1 + 0x70) = pvVar1;
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("dyn->buf != NULL","miner_api/httpserver.h",0x3f3,"http_token_dyn_init");
  }
  *(undefined4 *)(param_1 + 0x74) = 0x20;
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}

