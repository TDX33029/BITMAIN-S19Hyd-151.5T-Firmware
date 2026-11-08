// FUN_00976b98 @ 00976b98 size=272 calls_out=2 calls_in=1
// strings: 

void FUN_00976b98(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)*(ushort *)(param_1 + 0x5b2);
  uVar4 = param_2 + 1;
  puVar3 = (undefined4 *)(param_1 + 0x52c + param_2 * 0xc);
  if (uVar6 < uVar4) {
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    *puVar3 = *param_3;
    puVar3[1] = uVar1;
    puVar3[2] = uVar2;
  }
  else {
    FUN_01bed864(param_1 + 0x52c + uVar4 * 0xc,puVar3,(uVar6 - param_2) * 0xc);
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    *puVar3 = *param_3;
    puVar3[1] = uVar1;
    puVar3[2] = uVar2;
    FUN_01bed864(param_1 + uVar4 * 0x78,param_1 + param_2 * 0x78,(uVar6 - param_2) * 0x78);
  }
  FUN_01bed4e2(param_1 + param_2 * 0x78,param_4,0x78);
  iVar5 = param_1 + 0x5b8;
  if (param_2 + 2U < uVar6 + 2) {
    FUN_01bed864(iVar5 + (param_2 + 2U) * 4,iVar5 + uVar4 * 4,(uVar6 - param_2) * 4);
  }
  *(undefined4 *)(iVar5 + uVar4 * 4) = param_5;
  *(ushort *)(param_1 + 0x5b2) = (ushort)(uVar6 + 1);
  if (uVar4 < uVar6 + 2) {
    do {
      iVar5 = *(int *)(param_1 + 0x5bc + param_2 * 4);
      param_2 = param_2 + 1;
      *(short *)(iVar5 + 0x5b0) = (short)param_2;
      *(int *)(iVar5 + 0x528) = param_1;
    } while (uVar6 + 1 != param_2);
  }
  return;
}

