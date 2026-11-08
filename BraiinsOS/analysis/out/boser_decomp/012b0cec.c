// FUN_012b0cec @ 012b0cec size=212 calls_out=1 calls_in=1
// strings: 

void FUN_012b0cec(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = (uint)*(ushort *)(param_1 + 0xe2);
  uVar6 = param_2 + 1;
  puVar4 = (undefined4 *)(param_1 + param_2 * 0x10);
  if (uVar7 < uVar6) {
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *puVar4 = *param_3;
    puVar4[1] = uVar1;
    puVar4[2] = uVar2;
    puVar4[3] = uVar3;
  }
  else {
    FUN_01bed864(param_1 + uVar6 * 0x10,puVar4,(uVar7 - param_2) * 0x10);
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *puVar4 = *param_3;
    puVar4[1] = uVar1;
    puVar4[2] = uVar2;
    puVar4[3] = uVar3;
    FUN_01bed864(param_1 + 0xb4 + uVar6 * 4,param_1 + 0xb4 + param_2 * 4,(uVar7 - param_2) * 4);
  }
  *(undefined4 *)(param_1 + param_2 * 4 + 0xb4) = param_4;
  iVar5 = param_1 + 0xe4;
  if (param_2 + 2U < uVar7 + 2) {
    FUN_01bed864(iVar5 + (param_2 + 2U) * 4,iVar5 + uVar6 * 4,(uVar7 - param_2) * 4);
  }
  *(undefined4 *)(iVar5 + uVar6 * 4) = param_5;
  *(short *)(param_1 + 0xe2) = (short)(uVar7 + 1);
  if (uVar6 < uVar7 + 2) {
    do {
      iVar5 = param_2 * 4;
      param_2 = param_2 + 1;
      iVar5 = *(int *)(param_1 + iVar5 + 0xe8);
      *(short *)(iVar5 + 0xe0) = (short)param_2;
      *(int *)(iVar5 + 0xb0) = param_1;
    } while (uVar7 + 1 != param_2);
  }
  return;
}

