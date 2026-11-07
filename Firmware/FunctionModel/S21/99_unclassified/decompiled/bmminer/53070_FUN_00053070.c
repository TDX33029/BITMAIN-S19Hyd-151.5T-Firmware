// FUN_00053070 @ 00053070  size=256  callers=1
// program: bmminer


void FUN_00053070(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_00050d70(3);
  iVar2 = FUN_0002a6f0(param_1);
  if ((iVar2 == 0) || (iVar2 = FUN_0002a514(), iVar2 < 1)) {
    return;
  }
  iVar4 = 0;
  param_1 = param_1 & 0xff;
  do {
    iVar3 = FUN_0002a584();
    FUN_000828b8(param_1,iVar4 * iVar3,1);
    usleep(10000);
    iVar3 = FUN_0002a584();
    FUN_000828b8(param_1,iVar4 * iVar3,0);
    usleep(10000);
    iVar3 = FUN_0002a584();
    FUN_000822d4(param_1,iVar4 * iVar3,uVar1 & 0xff,DAT_008c7044);
    usleep(10000);
    iVar3 = FUN_0002a584();
    FUN_00082c00(param_1,iVar4 * iVar3,(char)(uVar1 >> 8),(char)(uVar1 >> 0x10),0);
    iVar4 = iVar4 + 1;
    usleep(10000);
  } while (iVar2 != iVar4);
  return;
}

