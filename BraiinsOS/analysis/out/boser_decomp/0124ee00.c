// FUN_0124ee00 @ 0124ee00 size=288 calls_out=1 calls_in=1
// strings: 

void FUN_0124ee00(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,undefined4 param_5
                 )

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = (uint)*(ushort *)(param_1 + 0x242);
  uVar7 = param_2 + 1;
  puVar4 = (undefined4 *)(param_1 + 0x1bc + param_2 * 0xc);
  if (uVar8 < uVar7) {
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    *puVar4 = *param_3;
    puVar4[1] = uVar1;
    puVar4[2] = uVar2;
  }
  else {
    FUN_01bed864(param_1 + 0x1bc + uVar7 * 0xc,puVar4,(uVar8 - param_2) * 0xc);
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    *puVar4 = *param_3;
    puVar4[1] = uVar1;
    puVar4[2] = uVar2;
    FUN_01bed864(param_1 + uVar7 * 0x28,param_1 + param_2 * 0x28,(uVar8 - param_2) * 0x28);
  }
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  uVar5 = param_4[4];
  puVar4 = (undefined4 *)(param_1 + param_2 * 0x28);
  *puVar4 = *param_4;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  puVar4[4] = uVar5;
  iVar6 = param_1 + 0x248;
  uVar1 = param_4[6];
  uVar2 = param_4[7];
  uVar3 = param_4[8];
  uVar5 = param_4[9];
  puVar4[5] = param_4[5];
  puVar4[6] = uVar1;
  puVar4[7] = uVar2;
  puVar4[8] = uVar3;
  puVar4[9] = uVar5;
  if (param_2 + 2U < uVar8 + 2) {
    FUN_01bed864(iVar6 + (param_2 + 2U) * 4,iVar6 + uVar7 * 4,(uVar8 - param_2) * 4);
  }
  *(undefined4 *)(iVar6 + uVar7 * 4) = param_5;
  *(ushort *)(param_1 + 0x242) = (ushort)(uVar8 + 1);
  if (uVar7 < uVar8 + 2) {
    do {
      iVar6 = param_2 * 4;
      param_2 = param_2 + 1;
      iVar6 = *(int *)(param_1 + iVar6 + 0x24c);
      *(short *)(iVar6 + 0x240) = (short)param_2;
      *(int *)(iVar6 + 0x1b8) = param_1;
    } while (uVar8 + 1 != param_2);
  }
  return;
}

