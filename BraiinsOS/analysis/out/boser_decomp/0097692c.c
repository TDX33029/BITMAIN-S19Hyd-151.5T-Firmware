// FUN_0097692c @ 0097692c size=288 calls_out=1 calls_in=1
// strings: 

void FUN_0097692c(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,undefined4 param_5
                 )

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  
  uVar9 = (uint)*(ushort *)(param_1 + 0x34a);
  uVar3 = param_2 + 1;
  puVar5 = (undefined4 *)(param_1 + 0x2c4 + param_2 * 0xc);
  if (uVar9 < uVar3) {
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    *puVar5 = *param_3;
    puVar5[1] = uVar1;
    puVar5[2] = uVar2;
  }
  else {
    FUN_01bed864(param_1 + 0x2c4 + uVar3 * 0xc,puVar5,(uVar9 - param_2) * 0xc);
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    *puVar5 = *param_3;
    puVar5[1] = uVar1;
    puVar5[2] = uVar2;
    FUN_01bed864(param_1 + uVar3 * 0x40,param_1 + param_2 * 0x40,(uVar9 - param_2) * 0x40);
  }
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar4 = param_4[3];
  uVar6 = param_4[4];
  puVar5 = (undefined4 *)(param_1 + param_2 * 0x40);
  iVar8 = param_1 + 0x350;
  *puVar5 = *param_4;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar4;
  puVar5[4] = uVar6;
  uVar1 = param_4[6];
  uVar2 = param_4[7];
  uVar4 = param_4[8];
  uVar6 = param_4[9];
  puVar5[5] = param_4[5];
  puVar5[6] = uVar1;
  puVar5[7] = uVar2;
  puVar5[8] = uVar4;
  puVar5[9] = uVar6;
  uVar1 = param_4[0xb];
  uVar2 = param_4[0xc];
  uVar4 = param_4[0xd];
  uVar6 = param_4[0xe];
  uVar7 = param_4[0xf];
  puVar5[10] = param_4[10];
  puVar5[0xb] = uVar1;
  puVar5[0xc] = uVar2;
  puVar5[0xd] = uVar4;
  puVar5[0xe] = uVar6;
  puVar5[0xf] = uVar7;
  if (param_2 + 2U < uVar9 + 2) {
    FUN_01bed864(iVar8 + (param_2 + 2U) * 4,iVar8 + uVar3 * 4,(uVar9 - param_2) * 4);
  }
  *(undefined4 *)(iVar8 + uVar3 * 4) = param_5;
  *(ushort *)(param_1 + 0x34a) = (ushort)(uVar9 + 1);
  if (uVar3 < uVar9 + 2) {
    do {
      iVar8 = param_2 * 4;
      param_2 = param_2 + 1;
      iVar8 = *(int *)(param_1 + iVar8 + 0x354);
      *(short *)(iVar8 + 0x348) = (short)param_2;
      *(int *)(iVar8 + 0x2c0) = param_1;
    } while (uVar9 + 1 != param_2);
  }
  return;
}

