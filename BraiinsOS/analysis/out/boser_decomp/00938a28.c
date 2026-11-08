// FUN_00938a28 @ 00938a28 size=292 calls_out=5 calls_in=2
// strings: 

void FUN_00938a28(int *param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint *extraout_r1;
  uint *extraout_r1_00;
  uint *extraout_r1_01;
  uint *extraout_r1_02;
  bool bVar4;
  
  puVar3 = &switchD_00938a44::switchdataD_00938a48;
  switch(*(undefined1 *)((int)param_1 + 0x35)) {
  case 0:
    if (*param_1 != -0x80000000) {
      FUN_019bb7e0(*param_1,param_1[1]);
    }
    if (param_1[3] != -0x80000000) {
      FUN_019bb7e0(param_1[3],param_1[4]);
    }
    goto LAB_00938b50;
  default:
    goto switchD_00938a44_caseD_1;
  case 3:
    if ((char)param_1[0x1c] == '\x03') {
      cVar1 = (char)param_1[0x1b];
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = (char)param_1[0x1a];
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x12);
        puVar3 = extraout_r1_00;
      }
    }
    goto LAB_00938b0c;
  case 4:
    if ((char)param_1[0x1c] == '\x03') {
      cVar1 = (char)param_1[0x1b];
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = (char)param_1[0x1a];
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x12);
        puVar3 = extraout_r1;
      }
    }
    goto LAB_00938b0c;
  case 5:
    FUN_00938724(param_1 + 0x10);
    break;
  case 6:
    FUN_00938724(param_1 + 0x10);
    break;
  case 7:
    FUN_00938844(param_1 + 0x10);
  }
  FUN_019f8c54(param_1[10],param_1[0xb]);
  puVar3 = extraout_r1_01;
LAB_00938b0c:
  iVar2 = *param_1;
  if (iVar2 != -0x80000000) {
    puVar3 = (uint *)(uint)*(byte *)(param_1 + 0xe);
  }
  if (iVar2 != -0x80000000 && puVar3 != (uint *)0x0) {
    FUN_019bb7e0(iVar2,param_1[1]);
    puVar3 = extraout_r1_02;
  }
  iVar2 = param_1[3];
  if (iVar2 != -0x80000000) {
    puVar3 = (uint *)(uint)*(byte *)((int)param_1 + 0x37);
  }
  if (iVar2 != -0x80000000 && puVar3 != (uint *)0x0) {
    FUN_019bb7e0(iVar2,param_1[4]);
  }
  if (*(char *)((int)param_1 + 0x36) == '\0') {
switchD_00938a44_caseD_1:
    return;
  }
LAB_00938b50:
  if (param_1[6] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[6],param_1[7]);
  return;
}

