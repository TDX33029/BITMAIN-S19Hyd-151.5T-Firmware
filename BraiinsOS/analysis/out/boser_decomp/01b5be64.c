// FUN_01b5be64 @ 01b5be64 size=404 calls_out=6 calls_in=2
// strings: 

undefined8 FUN_01b5be64(int param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint local_250;
  uint local_24c;
  byte local_240 [152];
  undefined1 auStack_1a8 [388];
  int local_24;
  
  local_24 = DAT_01d53560;
  FUN_01b5b5e4(auStack_1a8,param_2,&PTR_01d3b2b0,0);
  FUN_01b5b638(auStack_1a8,param_2,0x30);
  FUN_01b5b9d0(local_240,auStack_1a8,0x88);
  uVar4 = 0;
  local_250 = 0;
  local_24c = 0;
  pbVar6 = local_240;
  do {
    bVar1 = *pbVar6;
    uVar2 = uVar4 - 0x20;
    uVar5 = 0x20 - uVar4;
    local_250 = local_250 | (uint)bVar1 << (uVar4 & 0xff);
    uVar4 = uVar4 + 8;
    local_24c = (uint)bVar1 << (uVar2 & 0xff) | (uint)(bVar1 >> (uVar5 & 0xff)) | local_24c;
    pbVar6 = pbVar6 + 1;
  } while (uVar4 != 0x40);
  FUN_01b25814(param_1,0x400);
  uVar4 = 0xcf;
  iVar3 = 8;
  do {
    do {
      if (iVar3 == 0x88) {
        FUN_01b5b9d0(local_240,auStack_1a8);
        iVar3 = 0;
      }
      uVar2 = (uint)local_240[iVar3];
      iVar3 = iVar3 + 1;
    } while (uVar4 < uVar2);
    *(undefined4 *)(param_1 + uVar4 * 4) = *(undefined4 *)(param_1 + uVar2 * 4);
    uVar4 = uVar4 + 1;
    uVar5 = local_250 & 1;
    local_250 = local_250 >> 1 | local_24c << 0x1f;
    local_24c = local_24c >> 1;
    *(uint *)(param_1 + uVar2 * 4) = uVar5 * -2 + 1;
  } while (uVar4 != 0x100);
  FUN_01b6b174(local_240,0x88);
  FUN_01b6b174(&local_250,8);
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

