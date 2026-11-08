// FUN_00051eb8 @ 00051eb8  size=288  callers=0
// program: bmminer


void FUN_00051eb8(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char acStack_2010 [8196];
  
  uVar1 = FUN_00050d70(3);
  if (3 < DAT_000be63c) {
    snprintf(acStack_2010,0x2000,"chian_%d,asic_%d do_core_reset",param_1,param_2);
    FUN_0004948c(3,acStack_2010,0);
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
  FUN_000822d4(param_1,param_2 * iVar2,uVar1 & 0xff,0);
  FUN_0004bf68(10);
  iVar2 = FUN_0002a584();
  FUN_00082c00(param_1,param_2 * iVar2,(char)(uVar1 >> 8),(char)(uVar1 >> 0x10),0);
  FUN_0004bf68(10);
  iVar2 = FUN_0002a584();
  FUN_00082a04(param_1,param_2 * iVar2);
  usleep(10000);
  return;
}

