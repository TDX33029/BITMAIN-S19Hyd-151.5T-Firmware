// FUN_006f5184 @ 006f5184 size=288 calls_out=2 calls_in=30
// strings: 

undefined4 FUN_006f5184(int *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  if (*(char *)((int)param_1 + 0x91) != '\x02') {
    return 0;
  }
  uVar5 = 1;
  iVar1 = *param_1;
  uVar2 = param_1[1];
  if ((iVar1 == 1) && ((uint)param_1[2] <= uVar2)) {
    return 1;
  }
  if (iVar1 == 0) {
    uVar4 = param_1[5];
    local_30 = param_1[0x20];
    iStack_2c = param_1[0x21];
    iStack_28 = param_1[0x22];
  }
  else {
    param_1[1] = uVar2 + 1;
    uVar4 = param_1[5];
    local_30 = param_1[0x20];
    iStack_2c = param_1[0x21];
    iStack_28 = param_1[0x22];
    if ((iVar1 != 0) && (bVar3 = true, (uint)param_1[2] <= uVar2 + 1)) goto LAB_006f5240;
    param_1[1] = uVar2 + 2;
  }
  do {
    uVar6 = FUN_006e8630(param_1);
    param_1 = (int *)(uVar6 >> 0x20);
  } while ((uVar6 & 1) == 0);
  if ((*param_1 != 1) || (bVar3 = true, (uint)param_1[1] < (uint)param_1[2])) {
    if (*param_1 != 0) {
      param_1[1] = param_1[1] + 1;
    }
    uVar6 = FUN_006f52a4(param_1);
    bVar3 = false;
    while (param_1 = (int *)(uVar6 >> 0x20), (uVar6 & 1) == 0) {
      uVar6 = FUN_006f52a4(param_1);
    }
  }
LAB_006f5240:
  if (bVar3) {
    param_1[0x20] = local_30;
    param_1[0x21] = iStack_2c;
    param_1[0x22] = iStack_28;
    if (uVar4 <= (uint)param_1[5]) {
      param_1[5] = uVar4;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

