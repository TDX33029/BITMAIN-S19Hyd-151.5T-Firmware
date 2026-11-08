// FUN_019e8f10 @ 019e8f10 size=148 calls_out=4 calls_in=2
// strings: 

void FUN_019e8f10(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (DAT_01d50454 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(0x1d50454);
    if (bVar1) {
      DAT_01d50454 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_019e8f48;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8();
LAB_019e8f48:
  FUN_0165098c(&DAT_01d50454);
  iVar2 = DAT_01d50460;
  if (DAT_01d50460 == DAT_01d50458) {
    FUN_0126724c(&DAT_01d50458);
  }
  puVar3 = (undefined4 *)(DAT_01d5045c + iVar2 * 0x1c);
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  *puVar3 = *param_1;
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  puVar3[3] = param_1[3];
  puVar3[4] = uVar4;
  puVar3[5] = uVar5;
  puVar3[6] = uVar6;
  DAT_01d50460 = iVar2 + 1;
  FUN_019f6ff0();
  return;
}

