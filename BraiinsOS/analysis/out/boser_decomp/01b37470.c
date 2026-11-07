// FUN_01b37470 @ 01b37470 size=336 calls_out=9 calls_in=1
// strings: 

int FUN_01b37470(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_28 [4];
  int local_24;
  
  local_24 = DAT_01d53560;
  if (param_1 == 0) {
    param_1 = FUN_01b2adb8();
    if (param_1 == 0) goto LAB_01b374cc;
    iVar3 = param_1;
  }
  else {
    iVar3 = 0;
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar2 = FUN_01b2be1c(param_2,param_3);
    iVar1 = 0;
    if (-1 < iVar2) goto LAB_01b37500;
LAB_01b37538:
    iVar2 = FUN_01b2e5fc(param_3);
    if (iVar2 == 0) {
      iVar2 = FUN_01b34c30();
    }
    else {
      iVar2 = FUN_01b370f0(param_1,auStack_28,param_2,param_3,param_4);
    }
    if (iVar2 == 0) goto LAB_01b37510;
  }
  else {
LAB_01b37500:
    iVar1 = FUN_01b2b3b0(param_2);
    if ((iVar1 != 0) && (iVar2 = FUN_01b341a0(iVar1,iVar1,param_3,param_4), iVar2 != 0)) {
      param_2 = iVar1;
      goto LAB_01b37538;
    }
LAB_01b37510:
    param_1 = 0;
    FUN_01b1f904(iVar3);
  }
  FUN_01b1f904(iVar1);
LAB_01b374cc:
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return param_1;
}

