// FUN_006b257c @ 006b257c size=272 calls_out=1 calls_in=1
// strings: 

void FUN_006b257c(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar7 = *param_2;
  iVar5 = param_2[2];
  iVar4 = iVar7 + 0x210;
  uVar1 = *(ushort *)(iVar7 + 0x26e);
  uVar6 = iVar5 + 1;
  puVar3 = (undefined4 *)(iVar4 + iVar5 * 8);
  if (uVar1 < uVar6) {
    *puVar3 = param_3;
    puVar3[1] = param_4;
    local_58 = *param_5;
    uStack_54 = param_5[1];
    uStack_50 = param_5[2];
    uStack_4c = param_5[3];
    uStack_48 = param_5[4];
    uStack_44 = param_5[5];
    local_40 = param_5[6];
    uStack_3c = param_5[7];
    uStack_38 = param_5[8];
    uStack_34 = param_5[9];
    uStack_30 = param_5[10];
    uStack_2c = param_5[0xb];
  }
  else {
    iVar2 = (uint)uVar1 - iVar5;
    FUN_01bed864(iVar4 + uVar6 * 8,puVar3,iVar2 * 8);
    *(undefined4 *)(iVar4 + iVar5 * 8) = param_3;
    puVar3[1] = param_4;
    local_58 = *param_5;
    uStack_54 = param_5[1];
    uStack_50 = param_5[2];
    uStack_4c = param_5[3];
    uStack_48 = param_5[4];
    uStack_44 = param_5[5];
    local_40 = param_5[6];
    uStack_3c = param_5[7];
    uStack_38 = param_5[8];
    uStack_34 = param_5[9];
    uStack_30 = param_5[10];
    uStack_2c = param_5[0xb];
    FUN_01bed864(iVar7 + uVar6 * 0x30,iVar7 + iVar5 * 0x30,iVar2 * 0x30);
  }
  puVar3 = (undefined4 *)(iVar7 + iVar5 * 0x30);
  *puVar3 = local_58;
  puVar3[1] = uStack_54;
  puVar3[2] = uStack_50;
  puVar3[3] = uStack_4c;
  puVar3[4] = uStack_48;
  puVar3[5] = uStack_44;
  puVar3[6] = local_40;
  puVar3[7] = uStack_3c;
  puVar3[8] = uStack_38;
  puVar3[9] = uStack_34;
  puVar3[10] = uStack_30;
  puVar3[0xb] = uStack_2c;
  *param_1 = iVar7;
  *(ushort *)(iVar7 + 0x26e) = uVar1 + 1;
  param_1[1] = param_2[1];
  param_1[2] = iVar5;
  return;
}

