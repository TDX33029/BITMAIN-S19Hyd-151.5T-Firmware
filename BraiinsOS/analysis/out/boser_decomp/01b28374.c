// FUN_01b28374 @ 01b28374 size=344 calls_out=2 calls_in=2
// strings: 

undefined8
FUN_01b28374(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_110 [76];
  undefined1 auStack_c4 [76];
  undefined1 auStack_78 [76];
  int local_2c;
  
  iVar2 = *param_1 * 4;
  iVar1 = param_2 + iVar2;
  local_2c = DAT_01d53560;
  FUN_01b26974(param_2,param_3,iVar2,0);
  FUN_01b26974(iVar1,param_4,iVar2);
  FUN_01b26974(iVar1 + iVar2,param_5,iVar2);
  (*(code *)param_1[9])(auStack_110,auStack_c4,auStack_78,param_2,iVar1,iVar1 + iVar2);
  iVar2 = 0xf;
  do {
    (*(code *)param_1[10])();
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

