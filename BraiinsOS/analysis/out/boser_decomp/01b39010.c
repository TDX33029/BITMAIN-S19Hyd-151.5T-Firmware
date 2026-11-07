// FUN_01b39010 @ 01b39010 size=476 calls_out=8 calls_in=3
// strings: 

undefined8 FUN_01b39010(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  undefined1 auStack_1f4 [120];
  undefined1 auStack_17c [120];
  undefined1 auStack_104 [160];
  byte local_64 [64];
  int local_24;
  
  pbVar8 = (byte *)(param_2 + -1);
  local_24 = DAT_01d53560;
  pbVar2 = local_64;
  do {
    pbVar8 = pbVar8 + 1;
    bVar1 = *pbVar8;
    *pbVar2 = bVar1 & 0xf;
    pbVar2[1] = bVar1 >> 4;
    pbVar2 = pbVar2 + 2;
  } while (pbVar8 != (byte *)(param_2 + 0x1f));
  iVar3 = 0x3f;
  iVar5 = 0;
  pbVar2 = local_64;
  do {
    iVar3 = iVar3 + -1;
    iVar4 = (char)*pbVar2 + iVar5;
    iVar6 = iVar4 + 8;
    iVar7 = iVar6 * 0x1000000;
    iVar5 = iVar7 >> 0x1c;
    *pbVar2 = (char)iVar4 - ((byte)iVar6 & 0xf0);
    pbVar2 = pbVar2 + 1;
  } while (iVar3 != 0);
  iVar3 = 1;
  local_64[0x3f] = (char)(iVar7 >> 0x1c) + local_64[0x3f];
  FUN_01b265b8(param_1);
  do {
    pbVar2 = local_64 + iVar3;
    iVar5 = iVar3 >> 1;
    iVar3 = iVar3 + 2;
    FUN_01b26734(auStack_1f4,iVar5,(int)(char)*pbVar2);
    FUN_01b224fc(auStack_104,param_1,auStack_1f4);
    FUN_01b38d1c(param_1,auStack_104);
  } while (iVar3 != 0x41);
  FUN_01b26934(auStack_17c,param_1);
  iVar3 = 0;
  FUN_01b22638(auStack_104,auStack_17c);
  FUN_01b38cd0(auStack_17c,auStack_104);
  FUN_01b22638(auStack_104,auStack_17c);
  FUN_01b38cd0(auStack_17c,auStack_104);
  FUN_01b22638(auStack_104,auStack_17c);
  FUN_01b38cd0(auStack_17c,auStack_104);
  FUN_01b22638(auStack_104,auStack_17c);
  FUN_01b38d1c(param_1,auStack_104);
  do {
    pbVar2 = local_64 + iVar3;
    iVar5 = iVar3 >> 1;
    iVar3 = iVar3 + 2;
    FUN_01b26734(auStack_1f4,iVar5,(int)(char)*pbVar2);
    FUN_01b224fc(auStack_104,param_1,auStack_1f4);
    FUN_01b38d1c(param_1,auStack_104);
  } while (iVar3 != 0x40);
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

