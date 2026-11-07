// FUN_01b5e160 @ 01b5e160 size=500 calls_out=14 calls_in=2
// strings: 

undefined8
FUN_01b5e160(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,int param_7)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_6040 [28];
  int aiStack_6024 [4089];
  undefined1 auStack_2040 [4096];
  undefined1 auStack_1040 [4116];
  int local_2c;
  int iStack_28;
  
  piVar5 = (int *)(auStack_1040 + 0x101c);
  do {
    piVar5 = piVar5 + -0x400;
    *piVar5 = param_1;
  } while (piVar5 != aiStack_6024);
  iVar4 = 0;
  local_2c = DAT_01d53560;
  FUN_01b5cc70(auStack_6040,param_5,&PTR_01d3b2b0,0);
  FUN_01bed4e2(auStack_1040,param_6,0x1000);
  FUN_01b2556c(auStack_1040);
  FUN_01b1d274(auStack_2040,auStack_6040,auStack_1040);
  FUN_01b28e9c(auStack_2040);
  do {
    iVar2 = param_7 + iVar4;
    puVar1 = auStack_2040 + iVar4;
    iVar4 = iVar4 + 0x400;
    FUN_01b1ca84(puVar1,iVar2);
  } while (iVar4 != 0x1000);
  iVar4 = 0;
  FUN_01b1d370(auStack_2040);
  FUN_01b1d3b0(auStack_2040);
  do {
    puVar1 = auStack_2040 + iVar4;
    iVar2 = param_2 + iVar4;
    iVar3 = param_1 + iVar4;
    iVar4 = iVar4 + 0x400;
    FUN_01b1cba0(iVar2,iVar3,puVar1);
  } while (iVar4 != 0x1000);
  FUN_01b269d8(param_4,param_5,0x20);
  iVar4 = param_4 + 0x20;
  do {
    iVar2 = iVar4 + 0x140;
    FUN_01b1cbf0(iVar4,param_2);
    param_2 = param_2 + 0x400;
    iVar4 = iVar2;
  } while (iVar2 != param_4 + 0x520);
  FUN_01b5b7f8(param_4,0x520,param_3,0x40);
  FUN_01b6b174(auStack_2040,0x1000);
  FUN_01b6b174(auStack_1040,0x1000);
  FUN_01b6b174(auStack_6040,0x4000);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

