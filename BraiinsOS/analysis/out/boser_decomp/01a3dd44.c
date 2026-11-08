// FUN_01a3dd44 @ 01a3dd44 size=248 calls_out=1 calls_in=2
// strings: 

void FUN_01a3dd44(int *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar8 = *param_2;
  iVar7 = param_2[2];
  uVar1 = *(ushort *)(iVar8 + 0x192);
  uVar2 = iVar7 + 1;
  puVar6 = (undefined4 *)(iVar8 + 0x10c + iVar7 * 0xc);
  if (uVar1 < uVar2) {
    uVar3 = param_3[1];
    uVar5 = param_3[2];
    *puVar6 = *param_3;
    puVar6[1] = uVar3;
    puVar6[2] = uVar5;
    local_40 = *param_4;
    uStack_3c = param_4[1];
    uStack_38 = param_4[2];
    uStack_34 = param_4[3];
    uStack_30 = param_4[4];
    uStack_2c = param_4[5];
  }
  else {
    iVar4 = (uint)uVar1 - iVar7;
    FUN_01bed864(iVar8 + 0x10c + uVar2 * 0xc,puVar6,iVar4 * 0xc);
    uVar3 = param_3[1];
    uVar5 = param_3[2];
    *puVar6 = *param_3;
    puVar6[1] = uVar3;
    puVar6[2] = uVar5;
    local_40 = *param_4;
    uStack_3c = param_4[1];
    uStack_38 = param_4[2];
    uStack_34 = param_4[3];
    uStack_30 = param_4[4];
    uStack_2c = param_4[5];
    FUN_01bed864(iVar8 + uVar2 * 0x18,iVar8 + iVar7 * 0x18,iVar4 * 0x18);
  }
  puVar6 = (undefined4 *)(iVar8 + iVar7 * 0x18);
  *puVar6 = local_40;
  puVar6[1] = uStack_3c;
  puVar6[2] = uStack_38;
  puVar6[3] = uStack_34;
  puVar6[4] = uStack_30;
  puVar6[5] = uStack_2c;
  *param_1 = iVar8;
  *(ushort *)(iVar8 + 0x192) = uVar1 + 1;
  param_1[1] = param_2[1];
  param_1[2] = iVar7;
  return;
}

