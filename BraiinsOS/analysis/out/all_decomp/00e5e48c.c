// FUN_00e5e48c @ 00e5e48c size=844 calls_out=5 calls_in=1
// strings: 

undefined4 FUN_00e5e48c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 local_38;
  undefined4 local_34;
  
  piVar3 = (int *)*param_1;
  iVar4 = param_1[3];
  iVar1 = piVar3[2];
  iVar5 = iVar4 + 1;
  iVar2 = *piVar3;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = iVar5;
  if (iVar2 == iVar1) {
    FUN_00edff4c(piVar3,iVar1,1,1,1);
    iVar1 = piVar3[2];
  }
  *(undefined1 *)(piVar3[1] + iVar1) = 0x7b;
  iVar1 = iVar1 + 1;
  piVar3[2] = iVar1;
  if (*piVar3 == iVar1) {
    FUN_00edff4c(piVar3,iVar1,1,1,1);
    iVar1 = piVar3[2];
  }
  iVar2 = iVar1 + 1;
  uVar6 = param_1[1];
  uVar7 = param_1[2];
  piVar3[2] = iVar2;
  *(undefined1 *)(piVar3[1] + iVar1) = 10;
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    if ((uint)(*piVar3 - iVar2) < uVar7) {
      FUN_00edff4c(piVar3,iVar2,uVar7,1,1);
      iVar2 = piVar3[2];
    }
    FUN_016dd1aa(piVar3[1] + iVar2,uVar6,uVar7);
    iVar2 = iVar2 + uVar7;
    piVar3[2] = iVar2;
  }
  if (*piVar3 == iVar2) {
    FUN_00edff4c(piVar3,iVar2,1,1,1);
    iVar2 = piVar3[2];
  }
  *(undefined1 *)(piVar3[1] + iVar2) = 0x22;
  piVar3[2] = iVar2 + 1;
  local_38 = CONCAT31(local_38._1_3_,4);
  FUN_00e57bb4(&local_38,piVar3,param_2,param_3);
  if ((char)local_38 != '\x04') {
    uVar6 = FUN_0157c4a0(local_38,local_34);
    return uVar6;
  }
  iVar5 = piVar3[2];
  if (*piVar3 == iVar5) {
    FUN_00edff4c(piVar3,iVar5,1,1,1);
    iVar5 = piVar3[2];
  }
  *(undefined1 *)(piVar3[1] + iVar5) = 0x22;
  iVar5 = iVar5 + 1;
  piVar3[2] = iVar5;
  if ((uint)(*piVar3 - iVar5) < 2) {
    FUN_00edff4c(piVar3,iVar5,2,1,1);
    iVar5 = piVar3[2];
  }
  piVar3[2] = iVar5 + 2;
  *(undefined2 *)(piVar3[1] + iVar5) = 0x203a;
  FUN_00efe8d4(piVar3);
  iVar5 = piVar3[2];
  iVar1 = *piVar3;
  param_1[3] = iVar4;
  *(undefined1 *)(param_1 + 4) = 1;
  if (iVar1 == iVar5) {
    FUN_00edff4c(piVar3,iVar5,1,1,1);
    iVar5 = piVar3[2];
  }
  iVar1 = iVar5 + 1;
  piVar3[2] = iVar1;
  *(undefined1 *)(piVar3[1] + iVar5) = 10;
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    if ((uint)(*piVar3 - iVar1) < uVar7) {
      FUN_00edff4c(piVar3,iVar1,uVar7,1,1);
      iVar1 = piVar3[2];
    }
    FUN_016dd1aa(piVar3[1] + iVar1,uVar6,uVar7);
    iVar1 = iVar1 + uVar7;
    piVar3[2] = iVar1;
  }
  if (*piVar3 == iVar1) {
    FUN_00edff4c(piVar3,iVar1,1,1,1);
    iVar1 = piVar3[2];
  }
  *(undefined1 *)(piVar3[1] + iVar1) = 0x7d;
  piVar3[2] = iVar1 + 1;
  return 0;
}

