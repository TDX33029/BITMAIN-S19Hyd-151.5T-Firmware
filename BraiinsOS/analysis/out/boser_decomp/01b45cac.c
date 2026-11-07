// FUN_01b45cac @ 01b45cac size=428 calls_out=8 calls_in=1
// strings: 

undefined8 FUN_01b45cac(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  int local_78;
  uint local_74;
  undefined1 auStack_70 [68];
  int local_2c;
  
  uVar10 = *(undefined4 *)(param_1 + 0xec);
  local_2c = DAT_01d53560;
  cVar2 = FUN_01b3594c(param_4,uVar10,param_5 + 4,0);
  cVar3 = FUN_01b3594c(param_4,uVar10,param_5 + 3);
  cVar4 = FUN_01b3594c(param_4,uVar10,param_5 + 2);
  cVar5 = FUN_01b3594c(param_4,uVar10,param_5 + 1);
  cVar6 = FUN_01b3594c(param_4,uVar10,param_5);
  bVar8 = cVar2 << 5 | cVar3 << 4 | cVar4 << 3 | cVar5 << 2 | cVar6 << 1;
  if (param_5 != 0) {
    bVar7 = FUN_01b3594c(param_4,uVar10,param_5 + -1);
    bVar8 = bVar8 | bVar7;
  }
  uVar9 = 0;
  FUN_01b45c5c(&local_78,&local_74,bVar8);
  FUN_01b257dc(param_2,0,0xcc);
  do {
    uVar11 = FUN_01b0c688(local_74 ^ uVar9,param_2);
    iVar1 = uVar9 * 0xcc;
    uVar9 = uVar9 + 1;
    FUN_01b3f84c(param_1,(int)((ulonglong)uVar11 >> 0x20),(int)uVar11,iVar1 + param_3,param_2);
  } while (uVar9 != 0x11);
  param_2 = param_2 + 0x44;
  FUN_01b257dc(auStack_70,0,0x44);
  FUN_01b3f584(param_1,auStack_70,param_2);
  FUN_01b3f81c(param_1,param_2,-local_78,auStack_70,param_2);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

