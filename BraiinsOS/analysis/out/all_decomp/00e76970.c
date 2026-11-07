// FUN_00e76970 @ 00e76970 size=228 calls_out=2 calls_in=4
// strings: 

void FUN_00e76970(undefined1 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (param_2[1] == 0) {
    local_24 = 0x2501;
    local_28 = 0x80000000;
    local_20 = 1;
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
  }
  else {
    cVar1 = *(char *)*param_2;
    *param_2 = (char *)*param_2 + 1;
    param_2[1] = param_2[1] + -1;
    if (cVar1 == '\0') {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    if (cVar1 == '\x01') {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    local_24 = CONCAT31(local_24._1_3_,cVar1);
    local_28 = 0x80000002;
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
  }
  *(undefined4 **)(param_1 + 4) = puVar2;
  *puVar2 = local_28;
  puVar2[1] = local_24;
  puVar2[2] = local_20;
  *param_1 = 1;
  return;
}

