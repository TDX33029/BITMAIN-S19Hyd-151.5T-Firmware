// FUN_018189b8 @ 018189b8 size=348 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_018189b8(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0x1c);
  iVar6 = *(int *)(iVar5 + 0x38);
  if (iVar6 == 0) {
    iVar6 = (**(code **)(param_1 + 0x20))
                      (*(undefined4 *)(param_1 + 0x28),1 << (*(uint *)(iVar5 + 0x28) & 0xff),1);
    *(int *)(iVar5 + 0x38) = iVar6;
    if (iVar6 == 0) {
      return 1;
    }
  }
  uVar3 = *(uint *)(iVar5 + 0x2c);
  if (uVar3 == 0) {
    uVar3 = 1 << (*(uint *)(iVar5 + 0x28) & 0xff);
    *(uint *)(iVar5 + 0x2c) = uVar3;
    *(undefined4 *)(iVar5 + 0x34) = 0;
    *(undefined4 *)(iVar5 + 0x30) = 0;
  }
  if (param_3 < uVar3) {
    uVar3 = uVar3 - *(int *)(iVar5 + 0x34);
    if (param_3 <= uVar3) {
      uVar3 = param_3;
    }
    FUN_0181e3d4(iVar6 + *(int *)(iVar5 + 0x34),param_2 - param_3);
    iVar6 = param_3 - uVar3;
    if (iVar6 == 0) {
      uVar2 = *(uint *)(iVar5 + 0x2c);
      uVar4 = uVar3 + *(int *)(iVar5 + 0x34);
      uVar1 = *(uint *)(iVar5 + 0x30);
      if (uVar4 == uVar2) {
        uVar4 = 0;
      }
      if (uVar1 < uVar2) {
        uVar3 = uVar3 + uVar1;
      }
      *(uint *)(iVar5 + 0x34) = uVar4;
      if (uVar1 < uVar2) {
        *(uint *)(iVar5 + 0x30) = uVar3;
      }
    }
    else {
      FUN_0181e3d4(*(undefined4 *)(iVar5 + 0x38),param_2 + (uVar3 - param_3),iVar6);
      *(int *)(iVar5 + 0x34) = iVar6;
      *(undefined4 *)(iVar5 + 0x30) = *(undefined4 *)(iVar5 + 0x2c);
    }
  }
  else {
    FUN_0181e3d4(iVar6,param_2 - uVar3);
    *(undefined4 *)(iVar5 + 0x30) = *(undefined4 *)(iVar5 + 0x2c);
    *(undefined4 *)(iVar5 + 0x34) = 0;
  }
  return 0;
}

