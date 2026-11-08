// FUN_0003b270 @ 0003b270  size=64  callers=2
// program: bmminer


void FUN_0003b270(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x10);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("response != NULL","miner_api/httpserver.h",0x576,"http_response_init");
  }
  *(undefined4 *)((int)pvVar1 + 0xc) = 200;
  return;
}

