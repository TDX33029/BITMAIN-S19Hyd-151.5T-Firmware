// FUN_006f52a4 @ 006f52a4 size=484 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_006f52a4(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int local_40;
  int iStack_3c;
  int iStack_38;
  
  iVar3 = *param_1;
  uVar8 = param_1[1];
  uVar10 = param_1[2];
  if ((iVar3 == 1) && (uVar10 <= uVar8)) {
    return 1;
  }
  if (iVar3 == 0) {
    uVar9 = param_1[5];
    local_40 = param_1[0x20];
    iStack_3c = param_1[0x21];
    iStack_38 = param_1[0x22];
  }
  else {
    param_1[1] = uVar8 + 1;
    uVar9 = param_1[5];
    local_40 = param_1[0x20];
    iStack_3c = param_1[0x21];
    iStack_38 = param_1[0x22];
    if ((iVar3 != 0) && (bVar2 = true, uVar10 <= uVar8 + 1)) goto LAB_006f53d8;
    uVar8 = uVar8 + 2;
    param_1[1] = uVar8;
  }
  cVar1 = *(char *)((int)param_1 + 0x91);
  if (cVar1 != '\0') {
    *(undefined1 *)((int)param_1 + 0x91) = 0;
  }
  if ((iVar3 == 0) || (bVar2 = true, uVar8 < uVar10)) {
    if (iVar3 != 0) {
      param_1[1] = uVar8 + 1;
    }
    iVar3 = param_1[0x20];
    iVar6 = param_1[0x21];
    iVar7 = param_1[0x22];
    bVar4 = true;
    uVar11 = FUN_006f5094(param_1,"#",1);
    param_1 = (int *)(uVar11 >> 0x20);
    if ((uVar11 & 1) == 0) {
      if ((*param_1 != 1) || (bVar4 = true, (uint)param_1[1] < (uint)param_1[2])) {
        if (*param_1 != 0) {
          param_1[1] = param_1[1] + 1;
        }
        uVar11 = FUN_006f5c6c(param_1);
        bVar4 = false;
        while (param_1 = (int *)(uVar11 >> 0x20), (uVar11 & 1) == 0) {
          uVar11 = FUN_006f5c6c(param_1);
        }
      }
    }
    bVar2 = false;
    if (bVar4) {
      param_1[0x20] = iVar3;
      param_1[0x21] = iVar6;
      param_1[0x22] = iVar7;
      bVar2 = true;
      if (uVar9 <= (uint)param_1[5]) {
        param_1[5] = uVar9;
      }
    }
  }
  if (cVar1 != '\0') {
    *(char *)((int)param_1 + 0x91) = cVar1;
  }
LAB_006f53d8:
  bVar4 = true;
  if (!bVar2) {
    if ((*param_1 != 1) || ((uint)param_1[1] < (uint)param_1[2])) {
      if (*param_1 != 0) {
        param_1[1] = param_1[1] + 1;
      }
      uVar11 = FUN_006e8630(param_1);
      bVar4 = false;
      while (param_1 = (int *)(uVar11 >> 0x20), (uVar11 & 1) == 0) {
        uVar11 = FUN_006e8630(param_1);
      }
    }
  }
  uVar5 = 0;
  if (bVar4) {
    uVar5 = 1;
    param_1[0x20] = local_40;
    param_1[0x21] = iStack_3c;
    param_1[0x22] = iStack_38;
    if (uVar9 <= (uint)param_1[5]) {
      param_1[5] = uVar9;
    }
  }
  return uVar5;
}

