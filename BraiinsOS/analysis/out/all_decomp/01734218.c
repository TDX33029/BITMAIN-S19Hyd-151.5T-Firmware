// FUN_01734218 @ 01734218 size=884 calls_out=7 calls_in=0
// strings: 

undefined8
FUN_01734218(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,undefined4 param_6,int param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [204];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  iVar2 = FUN_0172c69c();
  uVar1 = (iVar2 + 4U) / 5;
  if (uVar1 == 0) {
    if (local_2c == DAT_018ddaf8) {
      uVar4 = FUN_01733e18(param_1,param_2,0,0);
      return uVar4;
    }
  }
  else {
    iVar2 = uVar1 - 1;
    if (param_7 == 0) {
      if (param_5 == 0) {
        FUN_01730288(param_1,auStack_f8,param_3,param_4,iVar2);
        FUN_01733d34(param_2,auStack_f8);
        uVar3 = uVar1 - 2;
        if (1 < uVar1) {
          do {
            FUN_0172ed94(param_1,param_2,param_2);
            FUN_01730288(param_1,auStack_f8,param_3,param_4,uVar3);
            uVar3 = uVar3 - 1;
            FUN_0172fc4c(param_1,param_2,param_2,auStack_f8);
          } while (uVar3 < uVar1);
        }
      }
      else {
        FUN_01730288(param_1,auStack_f8,param_3,param_4,iVar2);
        FUN_01733d34(param_2,auStack_f8);
        FUN_01730288(param_1,auStack_f8,param_5,param_6,iVar2);
        FUN_0172fc4c(param_1,param_2,param_2,auStack_f8);
        uVar3 = uVar1 - 2;
        if (1 < uVar1) {
          do {
            FUN_0172ed94(param_1,param_2,param_2);
            FUN_01730288(param_1,auStack_f8,param_3,param_4,uVar3);
            FUN_0172fc4c(param_1,param_2,param_2,auStack_f8);
            FUN_01730288(param_1,auStack_f8,param_5,param_6,uVar3);
            uVar3 = uVar3 - 1;
            FUN_0172fc4c(param_1,param_2,param_2,auStack_f8);
          } while (uVar3 < uVar1);
        }
      }
    }
    else {
      FUN_01730288(param_1,auStack_f8,param_3,param_4,iVar2);
      FUN_01733d34(param_2,auStack_f8);
      while( true ) {
        if (param_5 == 0) {
          FUN_01730288(param_1,auStack_f8,param_7,param_8,iVar2);
          FUN_0172fc4c(param_1,param_2,param_2,auStack_f8);
        }
        else {
          FUN_01730288(param_1,auStack_f8,param_5,param_6,iVar2);
          FUN_0172fc4c(param_1,param_2,param_2,auStack_f8);
          FUN_01730288(param_1,auStack_f8,param_7,param_8,iVar2);
          FUN_0172fc4c(param_1,param_2,param_2,auStack_f8);
        }
        if (uVar1 <= iVar2 - 1U) break;
        iVar2 = iVar2 + -1;
        FUN_0172ed94(param_1,param_2,param_2);
        FUN_01730288(param_1,auStack_f8,param_3,param_4,iVar2);
        FUN_0172fc4c(param_1,param_2,param_2,auStack_f8);
      }
    }
    if (local_2c == DAT_018ddaf8) {
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_016d2b78();
}

