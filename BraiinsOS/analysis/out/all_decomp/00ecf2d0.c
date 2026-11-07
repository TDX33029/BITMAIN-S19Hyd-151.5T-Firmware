// FUN_00ecf2d0 @ 00ecf2d0 size=144 calls_out=5 calls_in=12
// strings: 

undefined4 FUN_00ecf2d0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_01887438);
  }
  iVar1 = thunk_FUN_016d4a50(param_3);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,param_3);
  }
  FUN_016dd1aa(iVar1,param_2,param_3);
  if (param_1[4] != -0x80000000 && param_1[4] != 0) {
    thunk_FUN_016d3fb4(param_1[5]);
  }
  param_1[4] = param_3;
  param_1[5] = iVar1;
  param_1[6] = param_3;
  return 0;
}

