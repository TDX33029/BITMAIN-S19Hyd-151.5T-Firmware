// FUN_00ed5b54 @ 00ed5b54 size=192 calls_out=5 calls_in=2
// strings: BUG: Input vector is not within permitted length boundsRpc

undefined8 FUN_00ed5b54(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint auStack_1c [3];
  
  if (param_2 == 0) {
    FUN_016dd1aa(1,param_1,0);
    return 1;
  }
  iVar1 = thunk_FUN_016d4a50(param_2);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,param_2);
  }
  FUN_016dd1aa(iVar1,param_1,param_2);
  if (0xff < param_2) {
    thunk_FUN_016d3fb4(iVar1);
    auStack_1c[2] = 0xff;
    auStack_1c[1] = 0;
    auStack_1c[0] = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: Input vector is not within permitted length boundsRpc",0x37,auStack_1c,
                 &DAT_0187c0f4,&DAT_018886ac);
  }
  return CONCAT44(param_2,iVar1);
}

