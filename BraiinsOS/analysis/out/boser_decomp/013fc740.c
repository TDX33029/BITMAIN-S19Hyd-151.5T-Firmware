// FUN_013fc740 @ 013fc740 size=152 calls_out=1 calls_in=4
// strings: internal error: entered unreachable code

void FUN_013fc740(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = param_1[4];
  if (iVar1 != param_2) {
    iVar2 = *param_1;
    bVar3 = iVar2 == 1;
    if (bVar3) {
      iVar2 = param_1[1];
    }
    if (bVar3 && iVar2 == param_2) {
      iVar2 = *(int *)(iVar2 + 4);
      *param_1 = 1;
      param_1[1] = iVar2;
    }
    iVar2 = *(int *)(param_2 + 4);
    if (*(int *)(param_2 + 8) == 0) {
      param_1[3] = iVar2;
    }
    else {
      if (iVar2 == 0) {
        return;
      }
      *(int *)(*(int *)(param_2 + 8) + 4) = iVar2;
      iVar2 = *(int *)(param_2 + 4);
    }
    *(undefined4 *)(param_2 + 4) = 0;
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_2 + 8);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf3600);
      }
      *(int *)(param_2 + 8) = iVar1;
      param_1[4] = param_2;
      *(int *)(iVar1 + 4) = param_2;
    }
  }
  return;
}

