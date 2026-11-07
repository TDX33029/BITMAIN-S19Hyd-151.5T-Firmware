// FUN_01730288 @ 01730288 size=292 calls_out=5 calls_in=1
// strings: 

void FUN_01730288(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar5 = 0;
  uVar4 = *(undefined4 *)(param_1 + 0xec);
  iVar1 = FUN_0172c69c();
  uVar3 = 0;
  do {
    iVar2 = FUN_017209a8(param_4,uVar4,param_5);
    uVar3 = uVar3 | iVar2 << (uVar5 & 0xff);
    uVar5 = uVar5 + 1;
    param_5 = param_5 + (iVar1 + 4U) / 5;
  } while (uVar5 != 5);
  FUN_016dd606(param_2,0,0xcc);
  uVar5 = 0;
  do {
    uVar5 = uVar5 + 1;
    iVar1 = (int)((uVar5 ^ uVar3) - 1 & ~(uVar5 ^ uVar3)) >> 0x1f;
    FUN_0172fba8(param_1,param_2,iVar1,param_3,param_2);
    FUN_0172fba8(param_1,param_2 + 0x44,iVar1,param_3 + 0x44,param_2 + 0x44);
    param_3 = param_3 + 0x88;
  } while (uVar5 != 0x1f);
  FUN_0172e71c(param_1);
  FUN_0172fba8(param_1,param_2 + 0x88,(int)(uVar3 - 1 & ~uVar3) >> 0x1f);
  return;
}

