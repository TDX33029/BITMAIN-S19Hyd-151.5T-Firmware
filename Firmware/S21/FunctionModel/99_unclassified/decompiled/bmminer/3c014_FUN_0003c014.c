// FUN_0003c014 @ 0003c014  size=112  callers=0
// program: bmminer


undefined4 * FUN_0003c014(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = malloc(0x60);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("serv != NULL","miner_api/httpserver.h",0x4b5,"http_server_init");
  }
  puVar1[5] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &DAT_0003c3cc;
  FUN_0003bf88();
  FUN_0003aa48(puVar1 + 0xf);
  puVar1[9] = param_2;
  return puVar1;
}

