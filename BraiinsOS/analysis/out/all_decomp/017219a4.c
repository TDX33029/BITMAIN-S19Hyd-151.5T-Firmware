// FUN_017219a4 @ 017219a4 size=364 calls_out=8 calls_in=1
// strings: 

bool FUN_017219a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_40 [20];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  FUN_01714208(auStack_40,param_2,&PTR_018bc3f4,0);
  if (param_8 == 0) {
    param_8 = FUN_01720560(param_6,param_7);
    iVar2 = param_8;
    if (param_8 == 0) {
      bVar3 = false;
      goto LAB_01721a5c;
    }
  }
  else {
    iVar2 = 0;
  }
  iVar1 = FUN_01721398(param_1,param_2,param_3,param_6,param_7,param_8);
  if (((iVar1 == 0) ||
      (iVar1 = FUN_01721398(auStack_40,param_4,param_5,param_6,param_7,param_8), iVar1 == 0)) ||
     (iVar1 = FUN_0171decc(param_1,param_1,param_8,param_7), iVar1 == 0)) {
    bVar3 = false;
    param_8 = iVar2;
  }
  else {
    iVar1 = FUN_0171dce4(param_1,param_1,auStack_40,param_8,param_7);
    bVar3 = iVar1 != 0;
    param_8 = iVar2;
  }
LAB_01721a5c:
  FUN_0171c904(param_8);
  FUN_017046e0(auStack_40);
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return bVar3;
}

