// FUN_00b34264 @ 00b34264 size=316 calls_out=4 calls_in=1
// strings: 

void FUN_00b34264(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar5 = *(int *)(*param_1 + 8);
  iVar4 = iVar5 + 0x98;
  FUN_00a981d4(iVar4);
  iVar7 = *(int *)(iVar5 + 0xa4);
  uVar6 = *(uint *)(iVar5 + 0xa0);
  if (((((uint)(uVar6 < 3) <= (uint)-iVar7) ||
       (iVar2 = thunk_FUN_01bed842(iVar5 + 0xb8,param_1 + 1,0x10), iVar2 != 0)) ||
      (*(char *)(iVar5 + 0xca) != (char)param_1[5])) ||
     (((uVar6 != 2 || iVar7 != 0 &&
       (*(int *)(iVar5 + 0xb0) == param_3 && *(int *)(iVar5 + 0xb4) == param_4)) &&
      (((uVar6 & 1) != 0 && (*(int *)(iVar5 + 0xa8) == param_5 && *(int *)(iVar5 + 0xac) == param_6)
       ))))) {
    FUN_009dd354(iVar4);
    return;
  }
  *(undefined4 *)(iVar5 + 0xa4) = 0;
  *(int *)(iVar5 + 0xa8) = param_5;
  *(int *)(iVar5 + 0xac) = param_6;
  piVar3 = (int *)(iVar5 + 0xd0);
  *(uint *)(iVar5 + 0xa0) = 1;
  *(int *)(iVar5 + 0xb0) = param_3;
  *(int *)(iVar5 + 0xb4) = param_4;
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = *piVar3 + 2;
  FUN_009dd354(iVar4);
  iVar4 = 0;
  do {
    FUN_019e03e8(iVar5 + 8 + iVar4);
    iVar4 = iVar4 + 0x10;
  } while (iVar4 != 0x80);
  return;
}

