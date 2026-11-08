// FUN_0075618c @ 0075618c size=280 calls_out=9 calls_in=2
// strings: 

void FUN_0075618c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int *piVar4;
  undefined4 unaff_r6;
  int iVar5;
  
  piVar4 = param_1 + 0x31;
  FUN_0076e9d8(piVar4);
  piVar2 = (int *)*piVar4;
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_013cf318(*piVar4);
    }
  }
  iVar3 = *param_1;
  if (iVar3 == -0x80000000) {
    return;
  }
  iVar5 = param_1[1];
  FUN_013e098c(iVar5,param_1[2]);
  FUN_01af7af8(iVar3,iVar5,4,0x4c,unaff_r4,unaff_r5,unaff_r6);
  FUN_00756350(param_1 + 3);
  FUN_00756350(param_1 + 6);
  FUN_00756350(param_1 + 9);
  FUN_00756350(param_1 + 0xc);
  FUN_007563a0(param_1 + 0xf);
  if ((short)param_1[0x1a] != 2) {
    FUN_0079217c();
  }
  piVar2 = (int *)param_1[0x30];
  FUN_013cee40(piVar2 + 2);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013cef90(piVar2);
    return;
  }
  return;
}

