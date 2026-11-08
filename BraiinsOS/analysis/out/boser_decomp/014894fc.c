// FUN_014894fc @ 014894fc size=232 calls_out=2 calls_in=1
// strings: 

void FUN_014894fc(int *param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  
  iVar5 = *param_2;
  iVar8 = param_2[2];
  uVar1 = *(ushort *)(iVar5 + 0x10b2);
  uVar7 = iVar8 + 1;
  puVar6 = (undefined4 *)(iVar5 + 0x102c + iVar8 * 0xc);
  if (uVar1 < uVar7) {
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    *puVar6 = *param_3;
    puVar6[1] = uVar3;
    puVar6[2] = uVar4;
  }
  else {
    iVar2 = (uint)uVar1 - iVar8;
    FUN_01bed864(iVar5 + 0x102c + uVar7 * 0xc,puVar6,iVar2 * 0xc);
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    *puVar6 = *param_3;
    puVar6[1] = uVar3;
    puVar6[2] = uVar4;
    FUN_01bed864(uVar7 * 0x178 + iVar5,iVar8 * 0x178 + iVar5,iVar2 * 0x178);
  }
  FUN_01bed4e2(iVar8 * 0x178 + iVar5,param_4,0x178);
  *(ushort *)(iVar5 + 0x10b2) = uVar1 + 1;
  iVar2 = param_2[1];
  *param_1 = iVar5;
  param_1[1] = iVar2;
  param_1[2] = iVar8;
  return;
}

