// FUN_0090c170 @ 0090c170 size=292 calls_out=5 calls_in=1
// strings: 

void FUN_0090c170(int *param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint *extraout_r1;
  uint *extraout_r1_00;
  uint *extraout_r1_01;
  uint *extraout_r1_02;
  bool bVar4;
  
  puVar3 = &switchD_0090c18c::switchdataD_0090c190;
  switch(*(undefined1 *)((int)param_1 + 0x35)) {
  case 0:
    if (*param_1 != -0x80000000) {
      FUN_019bb7e0(*param_1,param_1[1]);
    }
    if (param_1[3] != -0x80000000) {
      FUN_019bb7e0(param_1[3],param_1[4]);
    }
    goto LAB_0090c298;
  default:
    goto switchD_0090c18c_caseD_1;
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
    goto LAB_0090c254;
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
    goto LAB_0090c254;
  case 5:
    FUN_0090bf00(param_1 + 0x10);
    break;
  case 6:
    FUN_0090bf00(param_1 + 0x10);
    break;
  case 7:
    FUN_0090bff0(param_1 + 0x10);
  }
  FUN_019f8c54(param_1[10],param_1[0xb]);
  puVar3 = extraout_r1_01;
LAB_0090c254:
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
switchD_0090c18c_caseD_1:
    return;
  }
LAB_0090c298:
  if (param_1[6] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[6],param_1[7]);
  return;
}

