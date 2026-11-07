// FUN_0076e0e8 @ 0076e0e8 size=128 calls_out=5 calls_in=2
// strings: 

void FUN_0076e0e8(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar4 = param_1[1];
  FUN_013e098c(uVar4,param_1[2]);
  FUN_01af7af8(*param_1,uVar4,4,0x4c);
  FUN_00756350(param_1 + 3);
  FUN_00756350(param_1 + 6);
  FUN_00756350(param_1 + 9);
  FUN_00756350(param_1 + 0xc);
  if (param_1[0xf] != -0x80000000) {
    FUN_013d1214();
  }
  if (*(short *)(param_1 + 0x1a) != 2) {
    FUN_0079217c();
  }
  piVar3 = (int *)param_1[0x30];
  FUN_013cee40(piVar3 + 2);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013cef90(piVar3);
    return;
  }
  return;
}

