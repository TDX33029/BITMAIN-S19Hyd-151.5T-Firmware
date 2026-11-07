// FUN_00976574 @ 00976574 size=212 calls_out=2 calls_in=1
// strings: 

void FUN_00976574(int *param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  iVar6 = *param_2;
  iVar5 = param_2[2];
  uVar1 = *(ushort *)(iVar6 + 0x5b2);
  uVar8 = iVar5 + 1;
  puVar7 = (undefined4 *)(iVar6 + 0x52c + iVar5 * 0xc);
  if (uVar1 < uVar8) {
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    *puVar7 = *param_3;
    puVar7[1] = uVar3;
    puVar7[2] = uVar4;
  }
  else {
    iVar2 = (uint)uVar1 - iVar5;
    FUN_01bed864(iVar6 + 0x52c + uVar8 * 0xc,puVar7,iVar2 * 0xc);
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    *puVar7 = *param_3;
    puVar7[1] = uVar3;
    puVar7[2] = uVar4;
    FUN_01bed864(iVar6 + uVar8 * 0x78,iVar6 + iVar5 * 0x78,iVar2 * 0x78);
  }
  FUN_01bed4e2(iVar6 + iVar5 * 0x78,param_4,0x78);
  *(ushort *)(iVar6 + 0x5b2) = uVar1 + 1;
  iVar2 = param_2[1];
  *param_1 = iVar6;
  param_1[1] = iVar2;
  param_1[2] = iVar5;
  return;
}

