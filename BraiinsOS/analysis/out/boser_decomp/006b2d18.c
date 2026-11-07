// FUN_006b2d18 @ 006b2d18 size=172 calls_out=1 calls_in=1
// strings: 

void FUN_006b2d18(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0x5e);
  uVar4 = param_2 + 1;
  if (uVar4 <= uVar2) {
    FUN_01bed864(param_1 + uVar4 * 8,param_1 + param_2 * 8,(uVar2 - param_2) * 8);
  }
  puVar1 = (undefined4 *)(param_1 + param_2 * 8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  iVar3 = param_1 + 0x60;
  if (param_2 + 2U < uVar2 + 2) {
    FUN_01bed864(iVar3 + (param_2 + 2U) * 4,iVar3 + uVar4 * 4,(uVar2 - param_2) * 4);
  }
  *(undefined4 *)(iVar3 + uVar4 * 4) = param_5;
  *(short *)(param_1 + 0x5e) = (short)(uVar2 + 1);
  if (uVar4 < uVar2 + 2) {
    do {
      iVar3 = param_2 * 4;
      param_2 = param_2 + 1;
      iVar3 = *(int *)(param_1 + iVar3 + 100);
      *(short *)(iVar3 + 0x5c) = (short)param_2;
      *(int *)(iVar3 + 0x58) = param_1;
    } while (uVar2 + 1 != param_2);
  }
  return;
}

