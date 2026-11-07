// FUN_0157154c @ 0157154c size=188 calls_out=4 calls_in=1
// strings: 

void FUN_0157154c(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 int param_6,int param_7,int param_8)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_6 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(param_6);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_6);
    }
  }
  FUN_016dd1aa(iVar1,param_5,param_6);
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 == *(int *)(param_1 + 0xc)) {
    FUN_01571e44();
  }
  piVar2 = (int *)(*(int *)(param_1 + 0x10) + iVar3 * 0x1c);
  *piVar2 = param_6;
  piVar2[1] = iVar1;
  piVar2[2] = param_6;
  piVar2[3] = param_3;
  piVar2[4] = param_4;
  piVar2[5] = param_7;
  piVar2[6] = param_8;
  *(int *)(param_1 + 0x14) = iVar3 + 1;
  return;
}

