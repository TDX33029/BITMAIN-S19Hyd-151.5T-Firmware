// FUN_016c2c18 @ 016c2c18 size=172 calls_out=3 calls_in=1
// strings: 

void FUN_016c2c18(int *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  iVar1 = 1;
  if ((param_4 != 0) && (iVar1 = thunk_FUN_016d4a50(param_4), iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,param_4);
  }
  FUN_016dd1aa(iVar1,param_3,param_4);
  if ((param_6 != 0) && (iVar2 = thunk_FUN_016d4a50(param_6), iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,param_6);
  }
  FUN_016dd1aa(iVar2,param_5,param_6);
  *param_1 = param_4;
  param_1[1] = iVar1;
  param_1[2] = param_4;
  param_1[3] = param_6;
  param_1[4] = iVar2;
  param_1[5] = param_6;
  param_1[6] = param_2;
  return;
}

