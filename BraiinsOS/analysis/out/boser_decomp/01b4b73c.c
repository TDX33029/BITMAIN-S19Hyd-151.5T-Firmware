// FUN_01b4b73c @ 01b4b73c size=312 calls_out=8 calls_in=1
// strings: 

int FUN_01b4b73c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined1 auStack_4f0 [1220];
  int local_2c;
  
  local_2c = DAT_01d53560;
  if (param_6 != 0) {
    FUN_01b257dc(auStack_4f0,0,0x4c0,0);
    iVar1 = FUN_01b4a64c(auStack_4f0,param_2,param_3,param_1,0);
    if ((iVar1 == 0) || (iVar1 = FUN_01b4af50(auStack_4f0,param_4,param_5), iVar1 == 0)) {
      bVar3 = false;
    }
    else {
      iVar1 = FUN_01b4afcc(auStack_4f0,param_6,param_7);
      bVar3 = iVar1 != 0;
    }
    FUN_01b4a5d4(auStack_4f0);
    if (bVar3) goto LAB_01b4b7fc;
    uVar2 = FUN_01b3b6b4(param_1);
    FUN_01b6b174(param_6,uVar2);
  }
  param_6 = 0;
LAB_01b4b7fc:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return param_6;
}

