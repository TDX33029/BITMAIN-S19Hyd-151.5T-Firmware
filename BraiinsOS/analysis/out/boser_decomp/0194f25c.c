// FUN_0194f25c @ 0194f25c size=312 calls_out=2 calls_in=1
// strings: 

void FUN_0194f25c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_120 [252];
  
  iVar1 = param_1 + param_2 * 0x10;
  uVar3 = (uint)*(ushort *)(param_1 + 0xb8a);
  uVar2 = param_2 + 1;
  if (uVar3 < uVar2) {
    FUN_01bed4e2(iVar1,param_3,0x10);
    FUN_01bed4e2(auStack_120,param_4,0xfc);
  }
  else {
    FUN_01bed864(param_1 + uVar2 * 0x10,iVar1,(uVar3 - param_2) * 0x10);
    FUN_01bed4e2(iVar1,param_3,0x10);
    FUN_01bed4e2(auStack_120,param_4,0xfc);
    FUN_01bed864(param_1 + 0xb4 + uVar2 * 0xfc,param_1 + 0xb4 + param_2 * 0xfc,
                 (uVar3 - param_2) * 0xfc);
  }
  FUN_01bed4e2(param_1 + param_2 * 0xfc + 0xb4,auStack_120,0xfc);
  iVar1 = param_1 + 0xb8c;
  if (param_2 + 2U < uVar3 + 2) {
    FUN_01bed864(iVar1 + (param_2 + 2U) * 4,iVar1 + uVar2 * 4,(uVar3 - param_2) * 4);
  }
  *(undefined4 *)(iVar1 + uVar2 * 4) = param_5;
  *(ushort *)(param_1 + 0xb8a) = (ushort)(uVar3 + 1);
  if (uVar2 < uVar3 + 2) {
    do {
      iVar1 = param_2 * 4;
      param_2 = param_2 + 1;
      iVar1 = *(int *)(param_1 + iVar1 + 0xb90);
      *(short *)(iVar1 + 0xb88) = (short)param_2;
      *(int *)(iVar1 + 0xb0) = param_1;
    } while (uVar3 + 1 != param_2);
  }
  return;
}

