// FUN_0003b2b4 @ 0003b2b4  size=84  callers=4
// program: bmminer


void FUN_0003b2b4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = malloc(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("header != NULL","miner_api/httpserver.h",0x57d,"http_response_header");
  }
  uVar2 = *param_1;
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = uVar2;
  *param_1 = puVar1;
  return;
}

