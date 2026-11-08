// FUN_018540a0 @ 018540a0 size=96 calls_out=3 calls_in=3
// strings: 

int * FUN_018540a0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,8);
  }
  iVar2 = *param_1;
  *puVar1 = param_3;
  puVar1[1] = param_4;
  if (iVar2 != 0) {
    FUN_01443048(iVar2,param_1[1]);
  }
  *param_1 = (int)puVar1;
  param_1[1] = (int)&DAT_01d1e694;
  return param_1;
}

