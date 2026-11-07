// FUN_01b627a8 @ 01b627a8 size=296 calls_out=4 calls_in=2
// strings: 

undefined8 FUN_01b627a8(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 auStack_140 [284];
  int local_24;
  
  iVar5 = 0;
  local_24 = DAT_01d53560;
  puVar7 = auStack_140;
  do {
    iVar5 = iVar5 + 1;
    FUN_01b269d8(puVar7,param_2,0x20);
    puVar7 = puVar7 + 0x40;
  } while (iVar5 != 4);
  uVar6 = 0;
  do {
    uVar2 = uVar6 + 4;
    puVar7 = auStack_140;
    do {
      bVar4 = (byte)uVar6 & 3;
      bVar1 = (byte)(uVar6 >> 2);
      bVar3 = bVar1;
      if (param_3 == 0) {
        bVar3 = bVar4;
        bVar4 = bVar1;
      }
      uVar6 = uVar6 + 1;
      puVar7[0x21] = bVar4;
      puVar7[0x20] = bVar3;
      puVar7 = puVar7 + 0x40;
    } while (uVar6 != uVar2);
    FUN_01b62268(param_1,param_1 + 0x200,param_1 + 0x400,param_1 + 0x600,auStack_140);
    param_1 = param_1 + 0x800;
  } while (uVar6 != 0x10);
  FUN_01b6b174(auStack_140,0x100);
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

