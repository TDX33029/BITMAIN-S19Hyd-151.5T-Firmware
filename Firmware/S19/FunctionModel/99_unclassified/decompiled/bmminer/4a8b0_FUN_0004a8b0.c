// FUN_0004a8b0 @ 0004a8b0  size=340  callers=1
// program: bmminer


void FUN_0004a8b0(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar2 = 0;
  iVar1 = 0;
  local_20 = 0;
  local_1c = 0;
  do {
    if ((param_3 & 1 << (uVar2 & 0xff)) != 0) {
      *(char *)((int)&local_20 + iVar1) = (char)uVar2;
      iVar1 = iVar1 + 1;
    }
    uVar2 = uVar2 + 1;
  } while (iVar1 < 8 && uVar2 < 0x20);
  if (param_2 == 4) {
    FUN_00045c40(0x2e,param_1);
    uVar3 = param_1 | 1 << (sbyte)local_20;
    FUN_00045c40(0x3a,uVar3);
    uVar2 = 1 << (local_20 >> 8 & 0xff);
    FUN_00045c40(0x3b,uVar2 | param_1);
    FUN_00045c40(0x3c,uVar3 | uVar2);
    return;
  }
  if (param_2 == 8) {
    FUN_00045c40(0x2e,param_1);
    uVar4 = param_1 | 1 << (sbyte)local_20;
    FUN_00045c40(0x3a,uVar4);
    uVar5 = 1 << local_20._1_1_ | param_1;
    uVar3 = uVar4 | 1 << local_20._1_1_;
    FUN_00045c40(0x3b,uVar5);
    uVar2 = 1 << (local_20 >> 0x10 & 0xff);
    FUN_00045c40(0x3c,uVar2 | param_1);
    FUN_00045c40(0x3d,uVar3);
    FUN_00045c40(0x3e,uVar4 | uVar2);
    FUN_00045c40(0x3f,uVar5 | uVar2);
    FUN_00045c40(0x40,uVar2 | uVar3);
    return;
  }
  FUN_00045c40(0x2e,param_1);
  return;
}

