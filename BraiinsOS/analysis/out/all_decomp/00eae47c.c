// FUN_00eae47c @ 00eae47c size=328 calls_out=5 calls_in=0
// strings: 

void FUN_00eae47c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5
                 ,int param_6,undefined1 *param_7)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_48;
  int iStack_28;
  
  iVar3 = *param_4;
  iVar5 = param_4[1];
  iVar7 = param_4[2];
  if (param_7 == &DAT_3b9aca00) {
    param_7 = (undefined1 *)0x0;
    param_5 = 0;
    param_6 = 0;
  }
  piVar4 = (int *)thunk_FUN_016d4a50(0xd0);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xd0);
  }
  *piVar4 = 1;
  piVar4[1] = 1;
  FUN_016dd606(piVar4 + 2,0,0x94);
  piVar4[0x28] = param_5;
  piVar4[0x29] = param_6;
  piVar4[0x2a] = (int)param_7;
  piVar4[0x2b] = local_48;
  piVar4[0x2c] = iVar3;
  piVar4[0x2d] = iVar5;
  piVar4[0x2e] = iVar7;
  piVar4[0x2f] = iStack_28;
  piVar6 = piVar4 + 0x31;
  *piVar6 = 1;
  piVar4[0x30] = 0;
  piVar4[0x32] = 1;
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xeae5c0);
    (*pcVar1)();
  }
  do {
    iVar3 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar3 + -1;
  if (iVar3 == 1) {
    FUN_0163b708(piVar4 + 0x22);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aac4f8(piVar4);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = piVar4;
  return;
}

