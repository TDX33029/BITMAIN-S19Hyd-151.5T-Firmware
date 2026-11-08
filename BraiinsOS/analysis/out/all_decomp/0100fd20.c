// FUN_0100fd20 @ 0100fd20 size=304 calls_out=2 calls_in=1
// strings: 

void FUN_0100fd20(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_90 [108];
  
  uVar4 = (uint)*(ushort *)(param_1 + 0x4d6);
  uVar3 = param_2 + 1;
  puVar1 = (undefined4 *)(param_1 + param_2 * 8);
  if (uVar4 < uVar3) {
    *puVar1 = param_3;
    puVar1[1] = param_4;
    FUN_016dd1aa(auStack_90,param_5,0x68);
  }
  else {
    FUN_016dd52c(param_1 + uVar3 * 8,puVar1,(uVar4 - param_2) * 8);
    *puVar1 = param_3;
    puVar1[1] = param_4;
    FUN_016dd1aa(auStack_90,param_5,0x68);
    FUN_016dd52c(uVar3 * 0x68 + param_1 + 0x58,param_2 * 0x68 + param_1 + 0x58,
                 (uVar4 - param_2) * 0x68);
  }
  FUN_016dd1aa(param_2 * 0x68 + param_1 + 0x58,auStack_90,0x68);
  iVar2 = param_1 + 0x4d8;
  if (param_2 + 2U < uVar4 + 2) {
    FUN_016dd52c(iVar2 + (param_2 + 2U) * 4,iVar2 + uVar3 * 4,(uVar4 - param_2) * 4);
  }
  *(undefined4 *)(iVar2 + uVar3 * 4) = param_6;
  *(ushort *)(param_1 + 0x4d6) = (ushort)(uVar4 + 1);
  if (uVar3 < uVar4 + 2) {
    do {
      iVar2 = *(int *)(param_1 + 0x4dc + param_2 * 4);
      param_2 = param_2 + 1;
      *(short *)(iVar2 + 0x4d4) = (short)param_2;
      *(int *)(iVar2 + 0x4d0) = param_1;
    } while (uVar4 + 1 != param_2);
  }
  return;
}

