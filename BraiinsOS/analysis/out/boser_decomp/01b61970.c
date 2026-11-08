// FUN_01b61970 @ 01b61970 size=500 calls_out=14 calls_in=2
// strings: 

undefined8
FUN_01b61970(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,int param_7)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_11c40 [3100];
  int aiStack_11024 [13561];
  undefined1 auStack_3c40 [8192];
  undefined1 auStack_1c40 [7188];
  int local_2c;
  int iStack_28;
  
  piVar5 = (int *)(auStack_1c40 + 0x1c1c);
  do {
    piVar5 = piVar5 + -0x400;
    *piVar5 = param_1;
  } while (piVar5 != aiStack_11024);
  iVar4 = 0;
  local_2c = DAT_01d53560;
  FUN_01b60654(auStack_11c40,param_5,&PTR_01d3b2b0,0);
  FUN_01bed4e2(auStack_1c40,param_6,0x1c00);
  FUN_01b2562c(auStack_1c40);
  FUN_01b1d9b4(auStack_3c40,auStack_11c40,auStack_1c40);
  FUN_01b28f1c(auStack_3c40);
  do {
    iVar2 = param_7 + iVar4;
    puVar1 = auStack_3c40 + iVar4;
    iVar4 = iVar4 + 0x400;
    FUN_01b1ca84(puVar1,iVar2);
  } while (iVar4 != 0x2000);
  iVar4 = 0;
  FUN_01b1da60(auStack_3c40);
  FUN_01b1daa0(auStack_3c40);
  do {
    puVar1 = auStack_3c40 + iVar4;
    iVar2 = param_2 + iVar4;
    iVar3 = param_1 + iVar4;
    iVar4 = iVar4 + 0x400;
    FUN_01b1cba0(iVar2,iVar3,puVar1);
  } while (iVar4 != 0x2000);
  FUN_01b269d8(param_4,param_5,0x20);
  iVar4 = param_4 + 0x20;
  do {
    iVar2 = iVar4 + 0x140;
    FUN_01b1cbf0(iVar4,param_2);
    param_2 = param_2 + 0x400;
    iVar4 = iVar2;
  } while (iVar2 != param_4 + 0xa20);
  FUN_01b5b7f8(param_4,0xa20,param_3,0x40);
  FUN_01b6b174(auStack_3c40,0x2000);
  FUN_01b6b174(auStack_1c40,0x1c00);
  FUN_01b6b174(auStack_11c40,0xe000);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

