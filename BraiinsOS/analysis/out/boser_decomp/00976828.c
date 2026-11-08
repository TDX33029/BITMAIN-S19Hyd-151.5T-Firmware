// FUN_00976828 @ 00976828 size=260 calls_out=2 calls_in=1
// strings: 

void FUN_00976828(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  puVar2 = (undefined4 *)(param_1 + param_2 * 8);
  uVar1 = (uint)*(ushort *)(param_1 + 0x376);
  uVar4 = param_2 + 1;
  if (uVar1 < uVar4) {
    *puVar2 = param_3;
    puVar2[1] = param_4;
  }
  else {
    FUN_01bed864(param_1 + uVar4 * 8,puVar2,(uVar1 - param_2) * 8);
    *(undefined4 *)(param_1 + param_2 * 8) = param_3;
    puVar2[1] = param_4;
    FUN_01bed864(param_1 + 0x58 + uVar4 * 0x48,param_1 + 0x58 + param_2 * 0x48,
                 (uVar1 - param_2) * 0x48);
  }
  FUN_01bed4e2(param_1 + param_2 * 0x48 + 0x58,param_5,0x48);
  iVar3 = param_1 + 0x378;
  if (param_2 + 2U < uVar1 + 2) {
    FUN_01bed864(iVar3 + (param_2 + 2U) * 4,iVar3 + uVar4 * 4,(uVar1 - param_2) * 4);
  }
  *(undefined4 *)(iVar3 + uVar4 * 4) = param_6;
  *(ushort *)(param_1 + 0x376) = (ushort)(uVar1 + 1);
  if (uVar4 < uVar1 + 2) {
    do {
      iVar3 = param_2 * 4;
      param_2 = param_2 + 1;
      iVar3 = *(int *)(param_1 + iVar3 + 0x37c);
      *(short *)(iVar3 + 0x374) = (short)param_2;
      *(int *)(iVar3 + 0x370) = param_1;
    } while (uVar1 + 1 != param_2);
  }
  return;
}

