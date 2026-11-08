// FUN_0003c320 @ 0003c320  size=168  callers=0
// program: bmminer


void FUN_0003c320(int param_1)

{
  int __fd;
  undefined4 *puVar1;
  uint uVar2;
  
  while( true ) {
    __fd = accept(*(int *)(param_1 + 0x10),(sockaddr *)(param_1 + 0x28),
                  (socklen_t *)(param_1 + 0x20));
    if (__fd < 1) {
      return;
    }
    puVar1 = calloc(1,0x80);
    if (puVar1 == (undefined4 *)0x0) break;
    puVar1[0x19] = __fd;
    puVar1[0x1a] = 0x14;
    puVar1[0x1b] = param_1;
    *puVar1 = &UNK_0003c234;
    uVar2 = fcntl(__fd,3,0);
    fcntl(__fd,4,uVar2 | 0x800);
    FUN_0003c27c(puVar1);
    FUN_0003c1ac(puVar1);
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("session != NULL","miner_api/httpserver.h",0x49e,"hs_accept_connections");
}

