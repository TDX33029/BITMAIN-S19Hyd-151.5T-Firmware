// FUN_016df9e8 @ 016df9e8 size=188 calls_out=6 calls_in=1
// strings: 

undefined4 FUN_016df9e8(uint *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_2c [16];
  
  thunk_FUN_016df80e();
  iVar2 = FUN_016df9a8(param_1);
  iVar6 = 100;
  if (iVar2 == 0) {
LAB_016df924:
    uVar4 = 0;
  }
  else {
    do {
      if (((*param_1 & 0x7fffffff) != 0) || (param_1[1] != 0)) break;
      DataMemoryBarrier(0x1b);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    do {
      iVar2 = FUN_016df9a8(param_1);
      if (iVar2 == 0) goto LAB_016df924;
      uVar7 = param_1[2];
      puVar5 = param_1 + 1;
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar5);
        bVar1 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar1);
      *puVar5 = *puVar5 + 1;
      DataMemoryBarrier(0x1b);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(param_1);
        if (*param_1 != 0) goto LAB_016df92c;
        bVar1 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar1);
      *param_1 = 0x80000000;
LAB_016df92c:
      DataMemoryBarrier(0x1b);
      FUN_016de282(auStack_2c,&LAB_016df8d2_1);
      iVar2 = FUN_016dde34(param_1,0x80000000,0,0,uVar7);
      FUN_016de28a(auStack_2c,1);
    } while (iVar2 == 0);
    piVar3 = (int *)FUN_016d2bc8();
    uVar4 = 0xffffffff;
    *piVar3 = iVar2;
  }
  return uVar4;
}

