// FUN_01016864 @ 01016864 size=260 calls_out=1 calls_in=1
// strings: 

void FUN_01016864(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,undefined4 param_5
                 )

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = (uint)*(ushort *)(param_1 + 0x13a);
  uVar5 = param_2 + 1;
  puVar3 = (undefined4 *)(param_1 + 0xb4 + param_2 * 0xc);
  if (uVar7 < uVar5) {
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    *puVar3 = *param_3;
    puVar3[1] = uVar1;
    puVar3[2] = uVar2;
  }
  else {
    FUN_01bed864(param_1 + 0xb4 + uVar5 * 0xc,puVar3,(uVar7 - param_2) * 0xc);
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    *puVar3 = *param_3;
    puVar3[1] = uVar1;
    puVar3[2] = uVar2;
    FUN_01bed864(param_1 + uVar5 * 0x10,param_1 + param_2 * 0x10,(uVar7 - param_2) * 0x10);
  }
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar4 = param_4[3];
  puVar3 = (undefined4 *)(param_1 + param_2 * 0x10);
  iVar6 = param_1 + 0x140;
  *puVar3 = *param_4;
  puVar3[1] = uVar1;
  puVar3[2] = uVar2;
  puVar3[3] = uVar4;
  if (param_2 + 2U < uVar7 + 2) {
    FUN_01bed864(iVar6 + (param_2 + 2U) * 4,iVar6 + uVar5 * 4,(uVar7 - param_2) * 4);
  }
  *(undefined4 *)(iVar6 + uVar5 * 4) = param_5;
  *(ushort *)(param_1 + 0x13a) = (ushort)(uVar7 + 1);
  if (uVar5 < uVar7 + 2) {
    do {
      iVar6 = param_2 * 4;
      param_2 = param_2 + 1;
      iVar6 = *(int *)(param_1 + iVar6 + 0x144);
      *(short *)(iVar6 + 0x138) = (short)param_2;
      *(int *)(iVar6 + 0xb0) = param_1;
    } while (uVar7 + 1 != param_2);
  }
  return;
}

