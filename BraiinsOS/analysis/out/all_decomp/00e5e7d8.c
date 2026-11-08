// FUN_00e5e7d8 @ 00e5e7d8 size=856 calls_out=5 calls_in=1
// strings: 

int FUN_00e5e7d8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 local_30;
  undefined4 local_2c;
  
  piVar5 = (int *)*param_1;
  iVar1 = piVar5[2];
  iVar4 = param_1[3] + 1;
  iVar2 = *piVar5;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = iVar4;
  if (iVar2 == iVar1) {
    FUN_00edff4c(piVar5,iVar1,1,1,1);
    iVar1 = piVar5[2];
  }
  *(undefined1 *)(piVar5[1] + iVar1) = 0x7b;
  iVar1 = iVar1 + 1;
  piVar5[2] = iVar1;
  if (*piVar5 == iVar1) {
    FUN_00edff4c(piVar5,iVar1,1,1,1);
    iVar1 = piVar5[2];
  }
  iVar2 = iVar1 + 1;
  uVar3 = param_1[1];
  uVar6 = param_1[2];
  *(undefined1 *)(piVar5[1] + iVar1) = 10;
  piVar5[2] = iVar2;
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    if ((uint)(*piVar5 - iVar2) < uVar6) {
      FUN_00edff4c(piVar5,iVar2,uVar6,1,1);
      iVar2 = piVar5[2];
    }
    FUN_016dd1aa(piVar5[1] + iVar2,uVar3,uVar6);
    iVar2 = iVar2 + uVar6;
    piVar5[2] = iVar2;
  }
  if (*piVar5 == iVar2) {
    FUN_00edff4c(piVar5,iVar2,1,1,1);
    iVar2 = piVar5[2];
  }
  *(undefined1 *)(piVar5[1] + iVar2) = 0x22;
  piVar5[2] = iVar2 + 1;
  local_30 = CONCAT31(local_30._1_3_,4);
  FUN_00e57bb4(&local_30,piVar5,param_2,param_3);
  if ((char)local_30 != '\x04') {
    iVar4 = FUN_0157c4a0(local_30,local_2c);
    return iVar4;
  }
  iVar4 = piVar5[2];
  if (*piVar5 == iVar4) {
    FUN_00edff4c(piVar5,iVar4,1,1,1);
    iVar4 = piVar5[2];
  }
  *(undefined1 *)(piVar5[1] + iVar4) = 0x22;
  iVar4 = iVar4 + 1;
  piVar5[2] = iVar4;
  if ((uint)(*piVar5 - iVar4) < 2) {
    FUN_00edff4c(piVar5,iVar4,2,1,1);
    iVar4 = piVar5[2];
  }
  piVar5[2] = iVar4 + 2;
  *(undefined2 *)(piVar5[1] + iVar4) = 0x203a;
  iVar4 = FUN_00efde8c(param_4,param_1);
  if (iVar4 != 0) {
    return iVar4;
  }
  piVar5 = (int *)*param_1;
  *(undefined1 *)(param_1 + 4) = 1;
  iVar1 = piVar5[2];
  iVar4 = param_1[3] + -1;
  iVar2 = *piVar5;
  param_1[3] = iVar4;
  if (iVar2 == iVar1) {
    FUN_00edff4c(piVar5,iVar1,1,1,1);
    iVar1 = piVar5[2];
  }
  iVar2 = iVar1 + 1;
  uVar3 = param_1[1];
  uVar6 = param_1[2];
  piVar5[2] = iVar2;
  *(undefined1 *)(piVar5[1] + iVar1) = 10;
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    if ((uint)(*piVar5 - iVar2) < uVar6) {
      FUN_00edff4c(piVar5,iVar2,uVar6,1,1);
      iVar2 = piVar5[2];
    }
    FUN_016dd1aa(piVar5[1] + iVar2,uVar3,uVar6);
    iVar2 = iVar2 + uVar6;
    piVar5[2] = iVar2;
  }
  if (*piVar5 == iVar2) {
    FUN_00edff4c(piVar5,iVar2,1,1,1);
    iVar2 = piVar5[2];
  }
  *(undefined1 *)(piVar5[1] + iVar2) = 0x7d;
  piVar5[2] = iVar2 + 1;
  return 0;
}

