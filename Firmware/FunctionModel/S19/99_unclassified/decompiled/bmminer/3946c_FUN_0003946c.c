// FUN_0003946c @ 0003946c  size=200  callers=0
// program: bmminer


void FUN_0003946c(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_000380c8();
  iVar2 = FUN_000201d8(param_1);
  if (iVar2 != 0) {
    param_1 = param_1 & 0xff;
    iVar2 = FUN_0002009c();
    FUN_000584e8(param_1,param_2 * iVar2,1);
    usleep(10000);
    iVar2 = FUN_0002009c();
    FUN_000584e8(param_1,param_2 * iVar2,0);
    usleep(10000);
    iVar2 = FUN_0002009c();
    FUN_00058e38(param_1,param_2 * iVar2,uVar1 & 0xff,DAT_0048d39c);
    usleep(10000);
    iVar2 = FUN_0002009c();
    FUN_00058ed0(param_1,param_2 * iVar2,(char)(uVar1 >> 8),(char)(uVar1 >> 0x10),0);
  }
  return;
}

