// FUN_00e94a7c @ 00e94a7c size=108 calls_out=4 calls_in=2
// strings: 

void FUN_00e94a7c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = thunk_FUN_016d4a50(param_2);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,param_2);
  }
  FUN_016dd1aa(iVar1,param_1,param_2);
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *puVar2 = param_2;
  puVar2[1] = iVar1;
  puVar2[2] = param_2;
  return;
}

