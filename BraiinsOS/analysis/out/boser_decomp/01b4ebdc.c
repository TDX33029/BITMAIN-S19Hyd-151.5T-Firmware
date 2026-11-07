// FUN_01b4ebdc @ 01b4ebdc size=584 calls_out=3 calls_in=1
// strings: 

undefined4
FUN_01b4ebdc(int param_1,undefined4 param_2,byte *param_3,byte *param_4,uint param_5,code *param_6)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  uVar5 = param_5 + *(uint *)(param_1 + 0x38);
  uVar4 = *(int *)(param_1 + 0x3c) + (uint)CARRY4(param_5,*(uint *)(param_1 + 0x38));
  if (0xe < uVar4 && (uint)(uVar5 < 0xffffffe1) <= 0xf - uVar4) {
    return 0;
  }
  *(uint *)(param_1 + 0x38) = uVar5;
  pcVar3 = *(code **)(param_1 + 0x154);
  pcVar7 = *(code **)(param_1 + 0x150);
  *(uint *)(param_1 + 0x3c) = uVar4;
  if (*(int *)(param_1 + 0x164) != 0) {
    (*pcVar7)(param_1 + 0x40,param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x164) = 0;
  }
  uVar4 = *(uint *)(param_1 + 0x160);
  if (uVar4 != 0) {
    for (; uVar4 != 0 && param_5 != 0; uVar4 = uVar4 + 1 & 0xf) {
      iVar2 = param_1 + uVar4;
      bVar1 = *param_3;
      param_5 = param_5 - 1;
      *param_4 = *(byte *)(iVar2 + 0x10) ^ bVar1;
      *(byte *)(iVar2 + 0x40) = bVar1 ^ *(byte *)(iVar2 + 0x40);
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
    }
    if (uVar4 != 0) goto LAB_01b4edfc;
    (*pcVar7)(param_1 + 0x40,param_1 + 0x50);
  }
  iVar6 = param_1 + 0xc;
  iVar2 = FUN_01b27554(iVar6);
  uVar5 = param_5;
  while( true ) {
    pbVar11 = param_4 + (param_5 - uVar5);
    pbVar8 = param_3 + (param_5 - uVar5);
    if (uVar5 < 0xc00) break;
    iVar2 = iVar2 + 0xc0;
    (*pcVar3)(param_1 + 0x40,param_1 + 0x50,pbVar8,0xc00);
    uVar5 = uVar5 - 0xc00;
    (*param_6)(pbVar8,pbVar11,0xc0,param_2,param_1);
    FUN_01b27488(iVar6,iVar2);
  }
  uVar10 = uVar5 & 0xfffffff0;
  uVar4 = uVar5;
  pbVar9 = pbVar8;
  pbVar12 = pbVar11;
  if (uVar10 != 0) {
    uVar4 = uVar5 - uVar10;
    (*pcVar3)(param_1 + 0x40,param_1 + 0x50,pbVar8,uVar10);
    pbVar12 = pbVar11 + uVar10;
    pbVar9 = pbVar8 + uVar10;
    iVar2 = iVar2 + (uVar5 >> 4);
    (*param_6)(pbVar8,pbVar11,uVar5 >> 4,param_2,param_1);
    FUN_01b27488(iVar6,iVar2);
  }
  if (uVar4 != 0) {
    (**(code **)(param_1 + 0x158))(param_1,param_1 + 0x10,param_2);
    FUN_01b27488(iVar6,iVar2 + 1);
    if (0x10 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_01be32a0();
    }
    uVar5 = 0;
    pbVar8 = (byte *)(param_1 + 0x3f);
    do {
      pbVar11 = pbVar8 + 1;
      bVar1 = pbVar9[uVar5];
      *pbVar11 = *pbVar11 ^ bVar1;
      pbVar12[uVar5] = bVar1 ^ pbVar8[-0x2f];
      uVar5 = uVar5 + 1;
      pbVar8 = pbVar11;
    } while (uVar4 != uVar5);
  }
LAB_01b4edfc:
  *(uint *)(param_1 + 0x160) = uVar4;
  return 1;
}

