// FUN_0167b8d4 @ 0167b8d4 size=228 calls_out=1 calls_in=1
// strings: 

void FUN_0167b8d4(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = (uint)*(ushort *)(param_1 + 0xb6);
  uVar7 = param_2 + 1;
  puVar4 = (undefined4 *)(param_1 + 4 + param_2 * 0xc);
  if (uVar6 < uVar7) {
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    *puVar4 = *param_3;
    puVar4[1] = uVar2;
    puVar4[2] = uVar3;
  }
  else {
    FUN_01bed864(param_1 + 4 + uVar7 * 0xc,puVar4,(uVar6 - param_2) * 0xc);
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    *puVar4 = *param_3;
    puVar4[1] = uVar2;
    puVar4[2] = uVar3;
    FUN_01bed864(param_1 + 0x88 + uVar7 * 4,param_1 + 0x88 + param_2 * 4,(uVar6 - param_2) * 4);
  }
  *(undefined4 *)(param_1 + param_2 * 4 + 0x88) = param_4;
  iVar5 = param_1 + 0xb8;
  if (param_2 + 2U < uVar6 + 2) {
    FUN_01bed864(iVar5 + (param_2 + 2U) * 4,iVar5 + uVar7 * 4,(uVar6 - param_2) * 4);
  }
  *(undefined4 *)(iVar5 + uVar7 * 4) = param_5;
  *(short *)(param_1 + 0xb6) = (short)(uVar6 + 1);
  if (uVar7 < uVar6 + 2) {
    do {
      iVar5 = param_2 * 4;
      param_2 = param_2 + 1;
      piVar1 = *(int **)(param_1 + iVar5 + 0xbc);
      *(short *)(piVar1 + 0x2d) = (short)param_2;
      *piVar1 = param_1;
    } while (uVar6 + 1 != param_2);
  }
  return;
}

