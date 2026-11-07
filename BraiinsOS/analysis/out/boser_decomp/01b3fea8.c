// FUN_01b3fea8 @ 01b3fea8 size=260 calls_out=6 calls_in=1
// strings: 

void FUN_01b3fea8(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar3 = *(undefined4 *)(param_1 + 0xec);
  iVar1 = FUN_01b3d290();
  uVar4 = 0;
  uVar5 = 0;
  do {
    iVar2 = FUN_01b3594c(param_4,uVar3,param_5);
    uVar5 = uVar5 | iVar2 << (uVar4 & 0xff);
    uVar4 = uVar4 + 1;
    param_5 = param_5 + (iVar1 + 4U) / 5;
  } while (uVar4 != 5);
  uVar4 = 0;
  FUN_01b257dc(param_2,0,0xcc);
  do {
    uVar4 = uVar4 + 1;
    uVar6 = FUN_01b0c688(uVar4 ^ uVar5,param_2);
    FUN_01b3f81c(param_1,(int)((ulonglong)uVar6 >> 0x20),(int)uVar6,param_3,param_2);
    FUN_01b3f81c(param_1,param_2 + 0x44,(int)uVar6,param_3 + 0x44,param_2 + 0x44);
    param_3 = param_3 + 0x88;
  } while (uVar4 != 0x1f);
  uVar3 = FUN_01b0c688(uVar5);
  FUN_01b3e7b4(param_1);
  FUN_01b3f81c(param_1,param_2 + 0x88,uVar3);
  return;
}

