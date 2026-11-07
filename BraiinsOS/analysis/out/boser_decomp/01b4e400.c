// FUN_01b4e400 @ 01b4e400 size=712 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_01b4e400(int param_1,undefined4 param_2,byte *param_3,byte *param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  byte *pbVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  code *pcVar13;
  
  uVar9 = param_5 + *(uint *)(param_1 + 0x38);
  uVar7 = *(int *)(param_1 + 0x3c) + (uint)CARRY4(param_5,*(uint *)(param_1 + 0x38));
  if (0xe < uVar7 && (uint)(uVar9 < 0xffffffe1) <= 0xf - uVar7) {
    return 0;
  }
  pcVar4 = *(code **)(param_1 + 0x158);
  *(uint *)(param_1 + 0x38) = uVar9;
  pcVar5 = *(code **)(param_1 + 0x154);
  pcVar13 = *(code **)(param_1 + 0x150);
  *(uint *)(param_1 + 0x3c) = uVar7;
  if (*(int *)(param_1 + 0x164) != 0) {
    (*pcVar13)(param_1 + 0x40,param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x164) = 0;
  }
  uVar7 = *(uint *)(param_1 + 0x160);
  if (uVar7 != 0) {
    for (; uVar7 != 0 && param_5 != 0; uVar7 = uVar7 + 1 & 0xf) {
      iVar3 = param_1 + uVar7;
      param_5 = param_5 - 1;
      bVar8 = *param_3 ^ *(byte *)(iVar3 + 0x10);
      *param_4 = bVar8;
      *(byte *)(iVar3 + 0x40) = bVar8 ^ *(byte *)(iVar3 + 0x40);
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
    }
    if (uVar7 != 0) goto LAB_01b4e5d4;
    (*pcVar13)(param_1 + 0x40,param_1 + 0x50);
  }
  iVar10 = param_1 + 0xc;
  iVar3 = FUN_01b27554(iVar10);
  for (; 0xbff < param_5; param_5 = param_5 - 0xc00) {
    iVar11 = 0;
    iVar12 = iVar3;
    do {
      iVar12 = iVar12 + 1;
      (*pcVar4)(param_1,param_1 + 0x10,param_2);
      FUN_01b27488(iVar10,iVar12);
      FUN_01b28748(param_4 + iVar11,param_3 + iVar11,param_1 + 0x10);
      iVar11 = iVar11 + 0x10;
    } while (iVar11 != 0xc00);
    param_3 = param_3 + 0xc00;
    iVar3 = iVar3 + 0xc0;
    (*pcVar5)(param_1 + 0x40,param_1 + 0x50,param_4);
    param_4 = param_4 + 0xc00;
  }
  uVar7 = param_5 & 0xfffffff0;
  if (uVar7 != 0) {
    iVar12 = iVar3;
    uVar9 = param_5;
    do {
      iVar12 = iVar12 + 1;
      (*pcVar4)(param_1,param_1 + 0x10,param_2);
      FUN_01b27488(iVar10,iVar12);
      iVar11 = param_5 - uVar9;
      iVar2 = param_5 - uVar9;
      uVar9 = uVar9 - 0x10;
      FUN_01b28748(param_4 + iVar2,param_3 + iVar11,param_1 + 0x10);
    } while (0xf < uVar9);
    iVar12 = (param_5 >> 4) - 1;
    param_5 = param_5 & 0xf;
    param_3 = param_3 + iVar12 * 0x10 + 0x10;
    iVar3 = iVar3 + 1 + iVar12;
    param_4 = param_4 + iVar12 * 0x10 + 0x10;
    (*pcVar5)(param_1 + 0x40,param_1 + 0x50,(int)param_4 - uVar7);
  }
  uVar7 = param_5;
  if (param_5 != 0) {
    (*pcVar4)(param_1,param_1 + 0x10,param_2);
    FUN_01b27488(iVar10,iVar3 + 1);
    pbVar6 = (byte *)(param_1 + 0x3f);
    uVar9 = 0;
    do {
      bVar8 = param_3[uVar9];
      bVar1 = pbVar6[-0x2f];
      param_4[uVar9] = bVar8 ^ bVar1;
      uVar9 = uVar9 + 1;
      pbVar6 = pbVar6 + 1;
      *pbVar6 = bVar8 ^ bVar1 ^ *pbVar6;
    } while (param_5 != uVar9);
  }
LAB_01b4e5d4:
  *(uint *)(param_1 + 0x160) = uVar7;
  return 1;
}

