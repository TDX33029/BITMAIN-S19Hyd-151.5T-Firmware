// FUN_019ddfd0 @ 019ddfd0 size=272 calls_out=1 calls_in=1
// strings: 

void FUN_019ddfd0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  puVar3 = (undefined4 *)(param_1 + param_2 * 0x10);
  uVar4 = param_2 + 1;
  uVar5 = (uint)*(ushort *)(param_1 + 0x10e);
  if (uVar5 < uVar4) {
    *puVar3 = param_3;
    puVar3[1] = param_4;
    puVar3[2] = param_5;
    puVar3[3] = param_6;
  }
  else {
    FUN_01bed864(param_1 + uVar4 * 0x10,puVar3,(uVar5 - param_2) * 0x10);
    puVar3[1] = param_4;
    puVar3[2] = param_5;
    puVar3[3] = param_6;
    *puVar3 = param_3;
    FUN_01bed864(param_1 + 0xb0 + uVar4 * 8,param_1 + 0xb0 + param_2 * 8,(uVar5 - param_2) * 8);
  }
  iVar1 = param_1 + param_2 * 8;
  iVar2 = param_1 + 0x110;
  *(undefined4 *)(iVar1 + 0xb0) = param_7;
  *(undefined4 *)(iVar1 + 0xb4) = param_8;
  if (param_2 + 2U < uVar5 + 2) {
    FUN_01bed864(iVar2 + (param_2 + 2U) * 4,iVar2 + uVar4 * 4,(uVar5 - param_2) * 4);
  }
  *(undefined4 *)(iVar2 + uVar4 * 4) = param_9;
  *(ushort *)(param_1 + 0x10e) = (ushort)(uVar5 + 1);
  if (uVar4 < uVar5 + 2) {
    do {
      iVar1 = param_2 * 4;
      param_2 = param_2 + 1;
      iVar1 = *(int *)(param_1 + iVar1 + 0x114);
      *(short *)(iVar1 + 0x10c) = (short)param_2;
      *(int *)(iVar1 + 0x108) = param_1;
    } while (uVar5 + 1 != param_2);
  }
  return;
}

