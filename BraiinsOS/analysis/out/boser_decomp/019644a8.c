// FUN_019644a8 @ 019644a8 size=316 calls_out=1 calls_in=2
// strings: 

void FUN_019644a8(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,undefined4 param_5
                 )

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar6 = (uint)*(ushort *)(param_1 + 0x192);
  uVar1 = param_2 + 1;
  puVar4 = (undefined4 *)(param_1 + 0x10c + param_2 * 0xc);
  if (uVar6 < uVar1) {
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    *puVar4 = *param_3;
    puVar4[1] = uVar2;
    puVar4[2] = uVar3;
    local_40 = *param_4;
    uStack_3c = param_4[1];
    uStack_38 = param_4[2];
    uStack_34 = param_4[3];
    uStack_30 = param_4[4];
    uStack_2c = param_4[5];
  }
  else {
    FUN_01bed864(param_1 + 0x10c + uVar1 * 0xc,puVar4,(uVar6 - param_2) * 0xc);
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    *puVar4 = *param_3;
    puVar4[1] = uVar2;
    puVar4[2] = uVar3;
    local_40 = *param_4;
    uStack_3c = param_4[1];
    uStack_38 = param_4[2];
    uStack_34 = param_4[3];
    uStack_30 = param_4[4];
    uStack_2c = param_4[5];
    FUN_01bed864(param_1 + uVar1 * 0x18,param_1 + param_2 * 0x18,(uVar6 - param_2) * 0x18);
  }
  puVar4 = (undefined4 *)(param_1 + param_2 * 0x18);
  iVar5 = param_1 + 0x198;
  *puVar4 = local_40;
  puVar4[1] = uStack_3c;
  puVar4[2] = uStack_38;
  puVar4[3] = uStack_34;
  puVar4[4] = uStack_30;
  puVar4[5] = uStack_2c;
  if (param_2 + 2U < uVar6 + 2) {
    FUN_01bed864(iVar5 + (param_2 + 2U) * 4,iVar5 + uVar1 * 4,(uVar6 - param_2) * 4);
  }
  *(undefined4 *)(iVar5 + uVar1 * 4) = param_5;
  *(ushort *)(param_1 + 0x192) = (ushort)(uVar6 + 1);
  if (uVar1 < uVar6 + 2) {
    do {
      iVar5 = param_2 * 4;
      param_2 = param_2 + 1;
      iVar5 = *(int *)(param_1 + iVar5 + 0x19c);
      *(short *)(iVar5 + 400) = (short)param_2;
      *(int *)(iVar5 + 0x108) = param_1;
    } while (uVar6 + 1 != param_2);
  }
  return;
}

