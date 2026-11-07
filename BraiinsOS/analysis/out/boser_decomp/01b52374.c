// FUN_01b52374 @ 01b52374 size=324 calls_out=6 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/bn/random.c

int FUN_01b52374(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int local_34;
  uint local_30;
  int local_2c;
  
  local_2c = DAT_01d53560;
  iVar1 = FUN_01b1fb30(&local_34,&local_30,param_2,param_3,param_4);
  if (iVar1 != 0) {
    iVar4 = 99;
    puVar3 = (uint *)(param_1 + local_34 * 4 + -4);
    FUN_01b257dc(param_1 + local_34 * 4,0,(param_4 - local_34) * 4);
    do {
      FUN_01b52318(param_1,local_34 * 4,param_5);
      *puVar3 = *puVar3 & local_30;
      iVar2 = FUN_01b33934(param_1,param_2,param_3,local_34);
      if (iVar2 != 0) goto LAB_01b52470;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    FUN_01b053d4(3,0,0x73,"/aws-lc/crypto/fipsmodule/bn/random.c",0xac);
  }
  iVar1 = 0;
LAB_01b52470:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar1;
}

