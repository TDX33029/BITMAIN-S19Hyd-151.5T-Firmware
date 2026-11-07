// FUN_01a7ebb4 @ 01a7ebb4 size=96 calls_out=3 calls_in=8
// strings: 

undefined8 FUN_01a7ebb4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (**(code **)(param_2 + 0x10))();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)thunk_FUN_01be5118(8);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,8);
    }
    *puVar2 = param_1;
    puVar2[1] = param_2;
  }
  else {
    FUN_00b19860(param_1,param_2);
    puVar2 = (undefined4 *)0x0;
  }
  return CONCAT44(&UNK_01d2d85c,puVar2);
}

