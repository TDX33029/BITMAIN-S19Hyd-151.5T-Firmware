// FUN_00f3f0b0 @ 00f3f0b0 size=180 calls_out=5 calls_in=1
// strings: 

undefined4 FUN_00f3f0b0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_01887438);
  }
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,param_3);
  }
  if (param_3 == 0) {
    iVar2 = 0;
    iVar1 = 1;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(param_3);
    iVar2 = param_3;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_3);
    }
  }
  FUN_016dd1aa(iVar1,param_2,param_3);
  if ((param_1[4] & 0x7fffffffU) != 0) {
    thunk_FUN_016d3fb4(param_1[5]);
  }
  param_1[4] = iVar2;
  param_1[5] = iVar1;
  param_1[6] = param_3;
  return 0;
}

