// FUN_006b28ac @ 006b28ac size=280 calls_out=1 calls_in=1
// strings: 

void FUN_006b28ac(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,undefined4 param_5
                 )

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  
  uVar9 = (uint)*(ushort *)(param_1 + 0x29a);
  uVar1 = param_2 + 1;
  puVar6 = (undefined4 *)(param_1 + 0x214 + param_2 * 0xc);
  if (uVar9 < uVar1) {
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    *puVar6 = *param_3;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
  }
  else {
    FUN_01bed864(param_1 + 0x214 + uVar1 * 0xc,puVar6,(uVar9 - param_2) * 0xc);
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    *puVar6 = *param_3;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    FUN_01bed864(param_1 + uVar1 * 0x30,param_1 + param_2 * 0x30,(uVar9 - param_2) * 0x30);
  }
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar7 = param_4[5];
  puVar6 = (undefined4 *)(param_1 + param_2 * 0x30);
  iVar8 = param_1 + 0x2a0;
  *puVar6 = *param_4;
  puVar6[1] = uVar2;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  puVar6[4] = uVar5;
  puVar6[5] = uVar7;
  uVar2 = param_4[7];
  uVar3 = param_4[8];
  uVar4 = param_4[9];
  uVar5 = param_4[10];
  uVar7 = param_4[0xb];
  puVar6[6] = param_4[6];
  puVar6[7] = uVar2;
  puVar6[8] = uVar3;
  puVar6[9] = uVar4;
  puVar6[10] = uVar5;
  puVar6[0xb] = uVar7;
  if (param_2 + 2U < uVar9 + 2) {
    FUN_01bed864(iVar8 + (param_2 + 2U) * 4,iVar8 + uVar1 * 4,(uVar9 - param_2) * 4);
  }
  *(undefined4 *)(iVar8 + uVar1 * 4) = param_5;
  *(ushort *)(param_1 + 0x29a) = (ushort)(uVar9 + 1);
  if (uVar1 < uVar9 + 2) {
    do {
      iVar8 = param_2 * 4;
      param_2 = param_2 + 1;
      iVar8 = *(int *)(param_1 + iVar8 + 0x2a4);
      *(short *)(iVar8 + 0x298) = (short)param_2;
      *(int *)(iVar8 + 0x210) = param_1;
    } while (uVar9 + 1 != param_2);
  }
  return;
}

