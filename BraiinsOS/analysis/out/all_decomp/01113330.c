// FUN_01113330 @ 01113330 size=764 calls_out=6 calls_in=5
// strings: 

void FUN_01113330(int *param_1,int param_2,int param_3)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  int local_38;
  int local_34;
  int local_30;
  uint uStack_2c;
  
  uVar9 = *(uint *)(param_2 + 0x10);
  uVar4 = *(uint *)(param_2 + 0x14);
  if (uVar9 <= uVar4) {
    local_38 = 5;
LAB_01113504:
    local_34 = FUN_00f4c908(param_2,&local_38);
LAB_01113540:
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = local_34;
    return;
  }
  iVar10 = *(int *)(param_2 + 0xc);
  uVar8 = uVar4 + 1;
  *(uint *)(param_2 + 0x14) = uVar8;
  cVar1 = *(char *)(iVar10 + uVar4);
  if (cVar1 == '0') {
    if (uVar9 <= uVar8) {
LAB_011135d0:
      uStack_2c = 0x80000000;
      if (param_3 != 0) {
        uStack_2c = 0;
      }
      local_30 = 0;
LAB_011135e4:
      *param_1 = param_3;
      param_1[1] = 0;
      param_1[2] = local_30;
      param_1[3] = uStack_2c;
      return;
    }
    uVar4 = (uint)*(byte *)(iVar10 + uVar8);
    if (uVar4 - 0x30 < 10) {
      local_38 = 0xd;
      local_34 = FUN_01143ab8(param_2,&local_38);
      goto LAB_01113540;
    }
    if (uVar4 == 0x2e) {
      FUN_01143b18(&local_38);
    }
    else {
      if (uVar4 != 0x45 && uVar4 != 0x65) goto LAB_011135d0;
      FUN_00f4d3b8(&local_38);
    }
    if (local_38 == 0) {
      param_3 = 0;
      goto LAB_011135e4;
    }
    goto LAB_01113540;
  }
  if (8 < (byte)(cVar1 - 0x31U)) {
    local_38 = 0xd;
    goto LAB_01113504;
  }
  if (uVar8 < uVar9) {
    uVar2 = (ulonglong)(uint)(byte)(cVar1 - 0x30);
    do {
      uVar5 = (uint)(uVar2 >> 0x20);
      uVar4 = *(byte *)(iVar10 + uVar8) - 0x30;
      uVar3 = uVar4 & 0xff;
      if (9 < uVar3) goto LAB_01113470;
      if ((0x19999998 < uVar5 && (uint)((uint)uVar2 < 0x99999999) <= 0x19999999 - uVar5) &&
         ((uVar2 != 0x1999999999999999 || (5 < uVar3)))) {
        FUN_01113860(&local_38);
        if (local_38 == 1) {
          param_1[2] = local_34;
          *param_1 = 3;
          param_1[1] = 0;
          return;
        }
        *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_2c,local_30);
        *param_1 = 0;
        param_1[1] = 0;
        return;
      }
      uVar8 = uVar8 + 1;
      *(uint *)(param_2 + 0x14) = uVar8;
      uVar2 = (uVar2 & 0xffffffff) * 10 + (CONCAT44(uVar5 * 10,uVar4) & 0xffffffff000000ff);
    } while (uVar9 != uVar8);
LAB_011134b8:
    iVar6 = (int)(uVar2 >> 0x20);
    iVar10 = (int)uVar2;
    iVar7 = 1;
    if (param_3 != 0) goto LAB_01113568;
    iVar7 = -(iVar6 + (uint)(iVar10 != 0));
    uVar2 = CONCAT44(iVar7,-iVar10);
    if (iVar7 < 0) {
      iVar7 = 2;
      goto LAB_01113568;
    }
    uVar11 = FUN_01845f30(iVar10,iVar6);
    local_30 = (int)uVar11;
    uStack_2c = (uint)((ulonglong)uVar11 >> 0x20) | 0x80000000;
  }
  else {
    uVar2 = (ulonglong)(uint)(byte)(cVar1 - 0x30);
LAB_01113470:
    if (uVar9 <= uVar8) goto LAB_011134b8;
    cVar1 = *(char *)(iVar10 + uVar8);
    if (cVar1 == '.') {
      FUN_01143b18(&local_38);
    }
    else {
      if (cVar1 != 'E' && cVar1 != 'e') goto LAB_011134b8;
      FUN_00f4d3b8(&local_38);
    }
    if (local_38 != 0) goto LAB_01113540;
  }
  uVar2 = CONCAT44(uStack_2c,local_30);
  iVar7 = 0;
LAB_01113568:
  *param_1 = iVar7;
  param_1[1] = 0;
  *(ulonglong *)(param_1 + 2) = uVar2;
  return;
}

