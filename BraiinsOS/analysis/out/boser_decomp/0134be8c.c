// FUN_0134be8c @ 0134be8c size=284 calls_out=2 calls_in=1
// strings: 

void FUN_0134be8c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_90 [108];
  
  uVar3 = (uint)*(ushort *)(param_1 + 0x4d6);
  uVar2 = param_2 + 1;
  puVar1 = (undefined4 *)(param_1 + param_2 * 8);
  if (uVar3 < uVar2) {
    *puVar1 = param_3;
    puVar1[1] = param_4;
    FUN_01bed4e2(auStack_90,param_5,0x68);
  }
  else {
    FUN_01bed864(param_1 + uVar2 * 8,puVar1,(uVar3 - param_2) * 8);
    *puVar1 = param_3;
    puVar1[1] = param_4;
    FUN_01bed4e2(auStack_90,param_5,0x68);
    FUN_01bed864(uVar2 * 0x68 + param_1 + 0x58,param_2 * 0x68 + param_1 + 0x58,
                 (uVar3 - param_2) * 0x68);
  }
  FUN_01bed4e2(param_2 * 0x68 + param_1 + 0x58,auStack_90,0x68);
  iVar4 = param_1 + 0x4d8;
  if (param_2 + 2U < uVar3 + 2) {
    FUN_01bed864(iVar4 + (param_2 + 2U) * 4,iVar4 + uVar2 * 4,(uVar3 - param_2) * 4);
  }
  *(undefined4 *)(iVar4 + uVar2 * 4) = param_6;
  *(ushort *)(param_1 + 0x4d6) = (ushort)(uVar3 + 1);
  if (uVar2 < uVar3 + 2) {
    do {
      iVar4 = *(int *)(param_1 + 0x4dc + param_2 * 4);
      param_2 = param_2 + 1;
      *(short *)(iVar4 + 0x4d4) = (short)param_2;
      *(int *)(iVar4 + 0x4d0) = param_1;
    } while (uVar3 + 1 != param_2);
  }
  return;
}

