// FUN_000526e4 @ 000526e4  size=252  callers=1
// program: bmminer


void FUN_000526e4(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00050d70(4);
  iVar2 = FUN_0002a6f0(param_1);
  if (iVar2 == 0) {
    return;
  }
  param_1 = param_1 & 0xff;
  iVar2 = FUN_0002a584();
  FUN_000824f0(param_1,param_2 * iVar2,0);
  iVar2 = FUN_0002a584();
  FUN_000828c8(param_1,param_2 * iVar2);
  usleep(10000);
  iVar2 = FUN_0002a584();
  FUN_000824f0(param_1,param_2 * iVar2,1);
  iVar2 = FUN_0002a584();
  FUN_000822d4(param_1,param_2 * iVar2,uVar1 & 0xff,DAT_008c7044);
  usleep(10000);
  iVar2 = FUN_0002a584();
  FUN_00082c00(param_1,param_2 * iVar2,(char)(uVar1 >> 8),(char)(uVar1 >> 0x10),0);
  usleep(10000);
  iVar2 = FUN_0002a584();
  FUN_00082a04(param_1,param_2 * iVar2);
  usleep(10000);
  return;
}

