// FUN_01722b3c @ 01722b3c size=348 calls_out=9 calls_in=1
// strings: 

int FUN_01722b3c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_28 [4];
  int local_24;
  
  local_24 = DAT_018ddaf8;
  if (param_1 == 0) {
    param_1 = FUN_017141d0();
    if (param_1 == 0) goto LAB_01722c3c;
    iVar3 = param_1;
  }
  else {
    iVar3 = 0;
  }
  if ((*(int *)(param_2 + 0xc) == 0) && (iVar1 = FUN_01715744(param_2,param_3), iVar1 < 0)) {
    iVar1 = 0;
LAB_01722bb0:
    iVar2 = FUN_017181d4(param_3);
    if (iVar2 == 0) {
      iVar2 = FUN_0171fb24();
    }
    else {
      iVar2 = FUN_01722774(param_1,auStack_28,param_2,param_3,param_4);
    }
    if (iVar2 == 0) goto LAB_01722c28;
  }
  else {
    iVar1 = FUN_0171485c(param_2);
    if ((iVar1 != 0) && (iVar2 = FUN_0171ef88(iVar1,iVar1,param_3,param_4), iVar2 != 0)) {
      param_2 = iVar1;
      goto LAB_01722bb0;
    }
LAB_01722c28:
    param_1 = 0;
    FUN_017046e0(iVar3);
  }
  FUN_017046e0(iVar1);
LAB_01722c3c:
  if (local_24 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return param_1;
}

