// FUN_01b36460 @ 01b36460 size=368 calls_out=8 calls_in=1
// strings: 

bool FUN_01b36460(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_40 [20];
  int local_2c;
  
  local_2c = DAT_01d53560;
  FUN_01b2ae48(auStack_40,param_2,&PTR_01d3b2b0,0);
  if (param_8 == 0) {
    iVar2 = FUN_01b35574(param_6,param_7);
    param_8 = iVar2;
    if (iVar2 == 0) {
      bVar3 = false;
      goto LAB_01b36534;
    }
  }
  else {
    iVar2 = 0;
  }
  iVar1 = FUN_01b35f88(param_1,param_2,param_3,param_6,param_7,param_8);
  if (((iVar1 == 0) ||
      (iVar1 = FUN_01b35f88(auStack_40,param_4,param_5,param_6,param_7,param_8), iVar1 == 0)) ||
     (iVar1 = FUN_01b331cc(param_1,param_1,param_8,param_7), iVar1 == 0)) {
    bVar3 = false;
  }
  else {
    iVar1 = FUN_01b33010(param_1,param_1,auStack_40,param_8,param_7);
    bVar3 = iVar1 != 0;
  }
LAB_01b36534:
  FUN_01b323f0(iVar2);
  FUN_01b1f904(auStack_40);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return bVar3;
}

