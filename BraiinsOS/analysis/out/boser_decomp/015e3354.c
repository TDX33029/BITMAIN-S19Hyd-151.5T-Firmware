// FUN_015e3354 @ 015e3354 size=188 calls_out=1 calls_in=1
// strings: 

int FUN_015e3354(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  uVar6 = (**(code **)(param_3 + 0x1c))(param_2);
  iVar2 = (int)uVar6;
  (**(code **)((int)((ulonglong)uVar6 >> 0x20) + 0xc))(&local_28,iVar2);
  iVar1 = 1;
  if ((local_28 == 0x4e7f3c27 && iStack_20 == 0x260a2f6c) &&
      (iStack_24 == 0x1529d282 && iStack_1c == -0x3cc08bff)) {
    uVar4 = *(uint *)(iVar2 + 0x48);
    uVar5 = *(uint *)(param_1 + 0x48);
    uVar3 = uVar4;
    if (uVar5 < uVar4) {
      uVar3 = uVar5;
    }
    iVar2 = FUN_01bed842(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(iVar2 + 0x44),uVar3);
    if (iVar2 == 0) {
      iVar2 = uVar5 - uVar4;
    }
    iVar1 = (uint)(0 < iVar2) - (uint)(iVar2 < 0);
  }
  return iVar1;
}

