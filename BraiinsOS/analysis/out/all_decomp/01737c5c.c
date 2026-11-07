// FUN_01737c5c @ 01737c5c size=436 calls_out=7 calls_in=1
// strings: 

undefined8 FUN_01737c5c(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int local_78;
  uint local_74;
  undefined1 auStack_70 [68];
  int local_2c;
  
  uVar9 = *(undefined4 *)(param_1 + 0xec);
  local_2c = DAT_018ddaf8;
  cVar1 = FUN_017209a8(param_4,uVar9,param_5 + 4,0);
  cVar2 = FUN_017209a8(param_4,uVar9,param_5 + 3);
  cVar3 = FUN_017209a8(param_4,uVar9,param_5 + 2);
  cVar4 = FUN_017209a8(param_4,uVar9,param_5 + 1);
  cVar5 = FUN_017209a8(param_4,uVar9,param_5);
  bVar7 = cVar1 << 5 | cVar2 << 4 | cVar3 << 3 | cVar4 << 2 | cVar5 << 1;
  if (param_5 != 0) {
    bVar6 = FUN_017209a8(param_4,uVar9,param_5 + -1);
    bVar7 = bVar7 | bVar6;
  }
  uVar8 = 0;
  FUN_01737c0c(&local_78,&local_74,bVar7);
  FUN_016dd606(param_2,0,0xcc);
  do {
    uVar10 = local_74 ^ uVar8;
    uVar8 = uVar8 + 1;
    FUN_0172fbd8(param_1,param_2,(int)(uVar10 - 1 & ~uVar10) >> 0x1f,param_3,param_2);
    param_3 = param_3 + 0xcc;
  } while (uVar8 != 0x11);
  param_2 = param_2 + 0x44;
  FUN_016dd606(auStack_70,0,0x44);
  FUN_0172f6a4(param_1,auStack_70,param_2);
  FUN_0172fba8(param_1,param_2,-local_78,auStack_70,param_2);
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

