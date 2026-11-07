// FUN_015e3bb0 @ 015e3bb0 size=260 calls_out=1 calls_in=1
// strings: 

int FUN_015e3bb0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar6 = (**(code **)(param_3 + 0x1c))(param_2);
  iVar2 = (int)uVar6;
  (**(code **)((int)((ulonglong)uVar6 >> 0x20) + 0xc))(&local_30,iVar2);
  iVar1 = 1;
  if ((local_30 == 0x7c8f5655 && iStack_28 == -0x6038b53e) &&
      (iStack_2c == -0x5ce6e815 && iStack_24 == -0x4640035c)) {
    uVar4 = *(uint *)(iVar2 + 0x48);
    uVar5 = *(uint *)(param_1 + 0x48);
    uVar3 = uVar4;
    if (uVar5 < uVar4) {
      uVar3 = uVar5;
    }
    iVar1 = FUN_01bed842(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(iVar2 + 0x44),uVar3);
    if (iVar1 == 0) {
      iVar1 = uVar5 - uVar4;
    }
    if (iVar1 == 0) {
      uVar5 = *(uint *)(iVar2 + 0x54);
      uVar4 = *(uint *)(param_1 + 0x54);
      uVar3 = uVar5;
      if (uVar4 < uVar5) {
        uVar3 = uVar4;
      }
      iVar2 = FUN_01bed842(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(iVar2 + 0x50),uVar3);
      if (iVar2 == 0) {
        iVar2 = uVar4 - uVar5;
      }
      iVar1 = (uint)(0 < iVar2) - (uint)(iVar2 < 0);
    }
    else {
      iVar1 = (uint)(0 < iVar1) - (uint)(iVar1 < 0);
    }
  }
  return iVar1;
}

