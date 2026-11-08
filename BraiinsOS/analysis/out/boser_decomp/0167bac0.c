// FUN_0167bac0 @ 0167bac0 size=256 calls_out=1 calls_in=1
// strings: 

void FUN_0167bac0(int param_1,int param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar4 = (uint)*(ushort *)(param_1 + 0xb6);
  iVar3 = param_1 + 4;
  uVar5 = param_2 + 1;
  puVar2 = (undefined4 *)(iVar3 + param_2 * 4);
  if (uVar4 < uVar5) {
    *puVar2 = param_3;
    local_30 = *param_4;
    uStack_2c = param_4[1];
    uStack_28 = param_4[2];
  }
  else {
    FUN_01bed864(iVar3 + uVar5 * 4,puVar2,(uVar4 - param_2) * 4);
    *(undefined4 *)(iVar3 + param_2 * 4) = param_3;
    local_30 = *param_4;
    uStack_2c = param_4[1];
    uStack_28 = param_4[2];
    FUN_01bed864(param_1 + 0x30 + uVar5 * 0xc,param_1 + 0x30 + param_2 * 0xc,(uVar4 - param_2) * 0xc
                );
  }
  iVar3 = param_1 + param_2 * 0xc;
  *(undefined4 *)(iVar3 + 0x30) = local_30;
  *(undefined4 *)(iVar3 + 0x34) = uStack_2c;
  *(undefined4 *)(iVar3 + 0x38) = uStack_28;
  iVar3 = param_1 + 0xb8;
  if (param_2 + 2U < uVar4 + 2) {
    FUN_01bed864(iVar3 + (param_2 + 2U) * 4,iVar3 + uVar5 * 4,(uVar4 - param_2) * 4);
  }
  *(undefined4 *)(iVar3 + uVar5 * 4) = param_5;
  *(short *)(param_1 + 0xb6) = (short)(uVar4 + 1);
  if (uVar5 < uVar4 + 2) {
    do {
      iVar3 = param_2 * 4;
      param_2 = param_2 + 1;
      piVar1 = *(int **)(param_1 + iVar3 + 0xbc);
      *(short *)(piVar1 + 0x2d) = (short)param_2;
      *piVar1 = param_1;
    } while (uVar4 + 1 != param_2);
  }
  return;
}

