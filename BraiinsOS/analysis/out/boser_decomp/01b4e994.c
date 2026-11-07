// FUN_01b4e994 @ 01b4e994 size=584 calls_out=3 calls_in=1
// strings: 

undefined4
FUN_01b4e994(int param_1,undefined4 param_2,byte *param_3,byte *param_4,uint param_5,code *param_6)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  uVar7 = param_5 + *(uint *)(param_1 + 0x38);
  uVar6 = *(int *)(param_1 + 0x3c) + (uint)CARRY4(param_5,*(uint *)(param_1 + 0x38));
  if (0xe < uVar6 && (uint)(uVar7 < 0xffffffe1) <= 0xf - uVar6) {
    return 0;
  }
  *(uint *)(param_1 + 0x38) = uVar7;
  pcVar5 = *(code **)(param_1 + 0x154);
  pcVar8 = *(code **)(param_1 + 0x150);
  *(uint *)(param_1 + 0x3c) = uVar6;
  if (*(int *)(param_1 + 0x164) != 0) {
    (*pcVar8)(param_1 + 0x40,param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x164) = 0;
  }
  uVar6 = *(uint *)(param_1 + 0x160);
  if (uVar6 != 0) {
    for (; uVar6 != 0 && param_5 != 0; uVar6 = uVar6 + 1 & 0xf) {
      iVar4 = param_1 + uVar6;
      param_5 = param_5 - 1;
      bVar2 = *param_3 ^ *(byte *)(iVar4 + 0x10);
      *param_4 = bVar2;
      *(byte *)(iVar4 + 0x40) = bVar2 ^ *(byte *)(iVar4 + 0x40);
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
    }
    if (uVar6 != 0) goto LAB_01b4ebb4;
    (*pcVar8)(param_1 + 0x40,param_1 + 0x50);
  }
  iVar4 = FUN_01b27554(param_1 + 0xc);
  uVar6 = param_5;
  while( true ) {
    pbVar11 = param_3 + (param_5 - uVar6);
    pbVar9 = param_4 + (param_5 - uVar6);
    if (uVar6 < 0xc00) break;
    iVar4 = iVar4 + 0xc0;
    (*param_6)(pbVar11,pbVar9,0xc0,param_2,param_1);
    FUN_01b27488(param_1 + 0xc,iVar4);
    uVar6 = uVar6 - 0xc00;
    (*pcVar5)(param_1 + 0x40,param_1 + 0x50,pbVar9,0xc00);
  }
  uVar7 = uVar6 & 0xfffffff0;
  pbVar10 = pbVar9;
  pbVar12 = pbVar11;
  if (uVar7 != 0) {
    uVar1 = uVar6 >> 4;
    pbVar12 = pbVar11 + uVar7;
    (*param_6)(pbVar11,pbVar9,uVar1,param_2,param_1);
    uVar6 = uVar6 - uVar7;
    iVar4 = iVar4 + uVar1;
    FUN_01b27488(param_1 + 0xc,iVar4);
    pbVar10 = pbVar9 + uVar7;
    (*pcVar5)(param_1 + 0x40,param_1 + 0x50,pbVar9,uVar7);
  }
  if (uVar6 != 0) {
    (**(code **)(param_1 + 0x158))(param_1,param_1 + 0x10,param_2);
    FUN_01b27488(param_1 + 0xc,iVar4 + 1);
    if (0x10 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_01be32a0();
    }
    pbVar9 = (byte *)(param_1 + 0x3f);
    uVar7 = 0;
    do {
      bVar2 = pbVar12[uVar7];
      bVar3 = pbVar9[-0x2f];
      pbVar10[uVar7] = bVar2 ^ bVar3;
      uVar7 = uVar7 + 1;
      pbVar9 = pbVar9 + 1;
      *pbVar9 = bVar2 ^ bVar3 ^ *pbVar9;
    } while (uVar6 != uVar7);
  }
LAB_01b4ebb4:
  *(uint *)(param_1 + 0x160) = uVar6;
  return 1;
}

