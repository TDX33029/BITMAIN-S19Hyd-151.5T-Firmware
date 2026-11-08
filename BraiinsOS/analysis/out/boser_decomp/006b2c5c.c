// FUN_006b2c5c @ 006b2c5c size=188 calls_out=1 calls_in=1
// strings: 

void FUN_006b2c5c(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar5 = (uint)*(ushort *)(param_1 + 0x8a);
  uVar6 = param_2 + 1;
  iVar7 = param_1 + 4;
  if (uVar6 <= uVar5) {
    FUN_01bed864(iVar7 + uVar6 * 0xc,iVar7 + param_2 * 0xc,(uVar5 - param_2) * 0xc);
  }
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  puVar1 = (undefined4 *)(iVar7 + param_2 * 0xc);
  iVar7 = param_1 + 0x8c;
  *puVar1 = *param_3;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  if (param_2 + 2U < uVar5 + 2) {
    FUN_01bed864(iVar7 + (param_2 + 2U) * 4,iVar7 + uVar6 * 4,(uVar5 - param_2) * 4);
  }
  *(undefined4 *)(iVar7 + uVar6 * 4) = param_4;
  *(short *)(param_1 + 0x8a) = (short)(uVar5 + 1);
  if (uVar6 < uVar5 + 2) {
    do {
      iVar7 = param_2 * 4;
      param_2 = param_2 + 1;
      piVar2 = *(int **)(param_1 + iVar7 + 0x90);
      *(short *)(piVar2 + 0x22) = (short)param_2;
      *piVar2 = param_1;
    } while (uVar5 + 1 != param_2);
  }
  return;
}

