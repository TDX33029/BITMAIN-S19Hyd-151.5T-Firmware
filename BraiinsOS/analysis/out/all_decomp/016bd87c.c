// FUN_016bd87c @ 016bd87c size=348 calls_out=0 calls_in=1
// strings: 

undefined1 * FUN_016bd87c(undefined4 *param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  iVar3 = param_1[1];
  if (iVar3 == 0) {
    return &DAT_00110000;
  }
  pbVar4 = (byte *)*param_1;
  puVar7 = (undefined1 *)(int)(char)*pbVar4;
  puVar2 = (undefined1 *)(uint)*pbVar4;
  if ((int)puVar7 < 0) {
    bVar10 = iVar3 != 0;
    if (iVar3 != 1) {
      puVar7 = puVar2 + -0xf5;
      bVar10 = (undefined1 *)0xffffffcb < puVar7;
    }
    if (!bVar10 || (iVar3 == 1 || puVar7 == (undefined1 *)0xffffffcc)) {
      *param_1 = pbVar4 + 1;
      param_1[1] = iVar3 + -1;
      return (undefined1 *)0xfffd;
    }
    uVar8 = (uint)pbVar4[1];
    iVar5 = 0x80;
    iVar9 = 0xbf;
    switch(puVar2) {
    case (undefined1 *)0xe0:
      iVar5 = 0xa0;
      break;
    case (undefined1 *)0xed:
      iVar9 = 0x9f;
      break;
    case (undefined1 *)0xf0:
      iVar5 = 0x90;
      break;
    case (undefined1 *)0xf4:
      iVar9 = 0x8f;
    }
    if ((iVar9 - iVar5 & 0xffU) < (uVar8 - iVar5 & 0xff)) {
      *param_1 = pbVar4 + 1;
      param_1[1] = iVar3 + -1;
      return (undefined1 *)0xfffd;
    }
    pbVar6 = pbVar4 + 2;
    if (puVar2 < (undefined1 *)0xe0) {
      *param_1 = pbVar6;
      param_1[1] = iVar3 + -2;
      return (undefined1 *)(uVar8 & 0x3f | ((uint)puVar2 & 0x1f) << 6);
    }
    if (iVar3 == 2) {
      *param_1 = pbVar6;
      param_1[1] = 0;
      return (undefined1 *)0xfffd;
    }
    bVar1 = *pbVar6;
    if (-0x41 < (char)bVar1) {
      *param_1 = pbVar6;
      param_1[1] = iVar3 + -2;
      return (undefined1 *)0xfffd;
    }
    *param_1 = pbVar4 + 3;
    param_1[1] = iVar3 + -3;
    puVar7 = (undefined1 *)0xfffd;
    if (puVar2 < (undefined1 *)0xf0) {
      return (undefined1 *)
             ((uVar8 & 0x3f) << 6 | ((uint)puVar2 & 0xf) << 0xc | (int)(char)bVar1 & 0x3fU);
    }
  }
  else {
    *param_1 = pbVar4 + 1;
    param_1[1] = iVar3 + -1;
    puVar7 = puVar2;
  }
  return puVar7;
}

