// FUN_010167ac @ 010167ac size=184 calls_out=1 calls_in=1
// strings: 

void FUN_010167ac(int *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = *param_2;
  iVar5 = param_2[2];
  uVar9 = iVar5 + 1;
  uVar1 = *(ushort *)(iVar8 + 0x13a);
  puVar6 = (undefined4 *)(iVar8 + 0xb4 + iVar5 * 0xc);
  if (uVar1 < uVar9) {
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    *puVar6 = *param_3;
    puVar6[1] = uVar3;
    puVar6[2] = uVar4;
  }
  else {
    iVar2 = (uint)uVar1 - iVar5;
    FUN_01bed864(iVar8 + 0xb4 + uVar9 * 0xc,puVar6,iVar2 * 0xc);
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    *puVar6 = *param_3;
    puVar6[1] = uVar3;
    puVar6[2] = uVar4;
    FUN_01bed864(iVar8 + uVar9 * 0x10,iVar8 + iVar5 * 0x10,iVar2 * 0x10);
  }
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar7 = param_4[3];
  puVar6 = (undefined4 *)(iVar8 + iVar5 * 0x10);
  *puVar6 = *param_4;
  puVar6[1] = uVar3;
  puVar6[2] = uVar4;
  puVar6[3] = uVar7;
  *(ushort *)(iVar8 + 0x13a) = uVar1 + 1;
  iVar2 = param_2[1];
  *param_1 = iVar8;
  param_1[1] = iVar2;
  param_1[2] = iVar5;
  return;
}

