// FUN_01644520 @ 01644520 size=212 calls_out=5 calls_in=2
// strings: 

void FUN_01644520(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (DAT_018d90ec == '\0') {
    bVar1 = (bool)hasExclusiveAccess(0x18d90ec);
    if (bVar1) {
      DAT_018d90ec = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_01644558;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8();
LAB_01644558:
  FUN_0128236c(&DAT_018d90ec);
  iVar2 = DAT_018d90f8;
  if (DAT_018d90f8 == DAT_018d90f0) {
    FUN_01643224();
  }
  puVar3 = (undefined4 *)(DAT_018d90f4 + iVar2 * 0x1c);
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
  DAT_018d90f8 = iVar2 + 1;
  FUN_01282570(&DAT_018d90ec);
  if (DAT_018d90ec != '\x01') {
    ClearExclusiveLocal();
    FUN_01280a5c(&DAT_018d90ec);
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(0x18d90ec);
  } while (!bVar1);
  DAT_018d90ec = 0;
  return;
}

