// FUN_0167b80c @ 0167b80c size=200 calls_out=1 calls_in=1
// strings: 

void FUN_0167b80c(int *param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar4 = *param_2;
  iVar6 = param_2[2];
  iVar7 = iVar4 + 4;
  uVar1 = *(ushort *)(iVar4 + 0xb6);
  uVar5 = iVar6 + 1;
  puVar2 = (undefined4 *)(iVar7 + iVar6 * 4);
  if (uVar1 < uVar5) {
    *puVar2 = param_3;
    local_30 = *param_4;
    uStack_2c = param_4[1];
    uStack_28 = param_4[2];
  }
  else {
    iVar3 = (uint)uVar1 - iVar6;
    FUN_01bed864(iVar7 + uVar5 * 4,puVar2,iVar3 * 4);
    *(undefined4 *)(iVar7 + iVar6 * 4) = param_3;
    local_30 = *param_4;
    uStack_2c = param_4[1];
    uStack_28 = param_4[2];
    FUN_01bed864(iVar4 + 0x30 + uVar5 * 0xc,iVar4 + 0x30 + iVar6 * 0xc,iVar3 * 0xc);
  }
  iVar7 = iVar4 + iVar6 * 0xc;
  *(undefined4 *)(iVar7 + 0x30) = local_30;
  *(undefined4 *)(iVar7 + 0x34) = uStack_2c;
  *(undefined4 *)(iVar7 + 0x38) = uStack_28;
  *(ushort *)(iVar4 + 0xb6) = uVar1 + 1;
  iVar7 = param_2[1];
  *param_1 = iVar4;
  param_1[1] = iVar7;
  param_1[2] = iVar6;
  return;
}

