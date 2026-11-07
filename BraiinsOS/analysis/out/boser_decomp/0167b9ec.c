// FUN_0167b9ec @ 0167b9ec size=212 calls_out=1 calls_in=1
// strings: 

void FUN_0167b9ec(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = param_1 + 0x5c;
  uVar2 = (uint)*(ushort *)(param_1 + 0x8a);
  uVar4 = param_2 + 1;
  puVar1 = (undefined4 *)(iVar3 + param_2 * 4);
  if (uVar2 < uVar4) {
    *puVar1 = param_3;
  }
  else {
    FUN_01bed864(iVar3 + uVar4 * 4,puVar1,(uVar2 - param_2) * 4);
    *(undefined4 *)(iVar3 + param_2 * 4) = param_3;
    FUN_01bed864(param_1 + uVar4 * 8,param_1 + param_2 * 8,(uVar2 - param_2) * 8);
  }
  puVar1 = (undefined4 *)(param_1 + param_2 * 8);
  *puVar1 = param_5;
  iVar3 = param_1 + 0x8c;
  puVar1[1] = param_6;
  if (param_2 + 2U < uVar2 + 2) {
    FUN_01bed864(iVar3 + (param_2 + 2U) * 4,iVar3 + uVar4 * 4,(uVar2 - param_2) * 4);
  }
  *(undefined4 *)(iVar3 + uVar4 * 4) = param_7;
  *(short *)(param_1 + 0x8a) = (short)(uVar2 + 1);
  if (uVar4 < uVar2 + 2) {
    do {
      iVar3 = param_2 * 4;
      param_2 = param_2 + 1;
      iVar3 = *(int *)(param_1 + iVar3 + 0x90);
      *(short *)(iVar3 + 0x88) = (short)param_2;
      *(int *)(iVar3 + 0x58) = param_1;
    } while (uVar2 + 1 != param_2);
  }
  return;
}

