// FUN_0150174c @ 0150174c size=208 calls_out=2 calls_in=14
// strings: 

void FUN_0150174c(uint *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  uVar3 = *param_1;
  iVar5 = uVar3 - 0xf;
  if (uVar3 < 0xf) {
    iVar5 = 0;
  }
  if (iVar5 == 0) {
    if ((1 << (uVar3 & 0xff) & 0x7bdeU) == 0) {
      FUN_019bb7e0(param_1[1],param_1[2]);
      return;
    }
    return;
  }
  if (iVar5 != 1) {
    return;
  }
  piVar6 = (int *)param_1[1];
  iVar4 = *piVar6;
  iVar5 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  switch(iVar5) {
  case 0:
    puVar1 = (uint *)(piVar6 + 2);
    if (iVar4 == 0) {
      uVar3 = *puVar1;
    }
    else {
      uVar3 = *puVar1;
      iVar5 = uVar3 - 0x22;
      if (uVar3 < 0x22) {
        iVar5 = 0;
      }
      if (iVar5 == 1) {
        piVar2 = piVar6 + 4;
        if (*piVar2 < -0x7ffffffc) goto switchD_0150178c_caseD_1;
        break;
      }
      if (iVar5 != 0) goto switchD_0150178c_caseD_1;
    }
    iVar5 = 0x1c;
    if (uVar3 == 0x22) {
      iVar5 = 4;
    }
    piVar2 = (int *)((int)puVar1 + iVar5);
    break;
  case 1:
  case 2:
  case 4:
  case 6:
  case 7:
    goto switchD_0150178c_caseD_1;
  default:
    piVar2 = piVar6 + 1;
  }
  FUN_019bb7e0(*piVar2,piVar2[1]);
switchD_0150178c_caseD_1:
  thunk_FUN_01be4678(piVar6);
  return;
}

