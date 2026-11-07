// FUN_0160cfdc @ 0160cfdc size=1224 calls_out=4 calls_in=1
// strings: 

void FUN_0160cfdc(undefined1 *param_1,byte *param_2,int param_3,int *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  byte *pbVar10;
  byte *pbVar9;
  bool bVar11;
  undefined *local_4c;
  int *local_48;
  undefined2 local_44;
  undefined *local_40;
  undefined4 local_3c;
  undefined *local_38;
  undefined4 local_34;
  undefined **local_2c;
  code *local_28;
  
  piVar5 = (int *)param_4[0x1e];
  param_4[0x20] = 0;
  *(undefined1 *)(param_4 + 0x21) = 0;
  iVar7 = piVar5[2];
  iVar3 = iVar7;
  if (*piVar5 == iVar7) {
    FUN_016225b8(piVar5,iVar7,1);
    iVar3 = piVar5[2];
  }
  uVar4 = piVar5[1];
  *(undefined1 *)(uVar4 + iVar3) = 0x5b;
  piVar5[2] = iVar7 + 1;
  iVar3 = param_4[0x16];
  if (iVar3 != -0x7fffffff) {
    uVar4 = (uint)*(byte *)((int)param_4 + 0x67);
  }
  local_48 = param_4;
  if (((iVar3 != -0x7fffffff && (uVar4 & 1) != 0) ||
      (*(bool *)((int)param_4 + 0x85) = param_3 == 0, iVar3 == -0x7fffffff)) ||
     (iVar3 = param_4[0x1c], param_4[0x1c] = iVar3 + 1U, (uint)param_4[0xe] < iVar3 + 1U)) {
    local_44._0_1_ = 0;
    local_44 = 0;
    local_4c = (undefined *)0x0;
    if (param_3 == 0) goto LAB_0160d3a4;
  }
  else {
    if (param_3 == 0) {
      local_44._0_1_ = 0;
      local_44 = 0;
      local_4c = (undefined *)0x0;
      goto LAB_0160d3a4;
    }
    piVar5 = (int *)param_4[0x1e];
    iVar7 = param_4[0x11];
    uVar4 = param_4[0x12];
    iVar3 = piVar5[2];
    if ((uint)(*piVar5 - iVar3) < uVar4) {
      FUN_016225b8(piVar5,iVar3,uVar4);
      iVar3 = piVar5[2];
    }
    FUN_016dd1aa(piVar5[1] + iVar3,iVar7,uVar4);
    piVar5[2] = piVar5[2] + uVar4;
  }
  local_44 = 0;
  local_4c = (undefined *)0x0;
  pbVar10 = param_2;
  do {
    piVar5 = local_48;
    pbVar9 = pbVar10 + 1;
    bVar1 = *pbVar10;
    if ((char)local_44 != '\x01') {
      local_44 = CONCAT11(local_44._1_1_,1);
LAB_0160d130:
      if (piVar5[0x16] == -0x7fffffff) goto LAB_0160d278;
LAB_0160d13c:
      if ((*(char *)((int)piVar5 + 0x67) == '\0') &&
         (uVar4 = piVar5[0x1c], uVar4 <= (uint)piVar5[0xe])) {
        iVar3 = piVar5[0x14];
        uVar6 = piVar5[0x15];
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          piVar8 = (int *)piVar5[0x1e];
          iVar7 = piVar8[2];
          if ((uint)(*piVar8 - iVar7) < uVar6) {
            FUN_016225b8(piVar8,iVar7,uVar6);
            iVar7 = piVar8[2];
          }
          FUN_016dd1aa(piVar8[1] + iVar7,iVar3,uVar6);
          piVar8[2] = piVar8[2] + uVar6;
        }
        if (piVar5[0x16] == -0x7fffffff) goto LAB_0160d278;
      }
      if (((uint)piVar5[0xe] < (uint)piVar5[0x1c]) || (*(char *)((int)piVar5 + 0x66) != '\x01'))
      goto LAB_0160d278;
      local_2c = &local_4c;
      local_28 = (code *)&LAB_00fac484;
      iVar3 = FUN_00fa948c(piVar5[0x1e],&DAT_018abab8,&DAT_00591593,&local_2c);
      if (iVar3 == 0) {
        local_4c = (undefined *)((int)local_4c + 1);
        piVar5 = local_48;
        goto LAB_0160d278;
      }
LAB_0160d390:
      uVar2 = 0;
LAB_0160d424:
      iVar3 = *local_48;
      *param_1 = uVar2;
      if (iVar3 == 1) {
        iVar3 = local_48[1] + 1;
        if (local_48[1] == -1) {
          iVar3 = -1;
        }
        local_48[1] = iVar3;
      }
      return;
    }
    piVar8 = (int *)local_48[0x1e];
    iVar7 = piVar8[2];
    iVar3 = iVar7;
    if (*piVar8 == iVar7) {
      FUN_016225b8(piVar8,iVar7,1);
      iVar3 = piVar8[2];
    }
    *(undefined1 *)(piVar8[1] + iVar3) = 0x2c;
    piVar8[2] = iVar7 + 1;
    if (piVar5[0x16] == -0x7fffffff) goto LAB_0160d130;
    if (((uint)piVar5[0xe] < (uint)piVar5[0x1c]) || (*(char *)((int)piVar5 + 0x67) == '\x01')) {
      piVar8 = (int *)piVar5[0x1e];
      iVar7 = piVar5[0x17];
      uVar4 = piVar5[0x18];
      iVar3 = piVar8[2];
      if ((uint)(*piVar8 - iVar3) < uVar4) {
        FUN_016225b8(piVar8,iVar3,uVar4);
        goto LAB_0160d388;
      }
    }
    else {
      piVar8 = (int *)piVar5[0x1e];
      iVar7 = piVar5[0x11];
      uVar4 = piVar5[0x12];
      iVar3 = piVar8[2];
      if ((uint)(*piVar8 - iVar3) < uVar4) {
        FUN_016225b8(piVar8,iVar3,uVar4);
LAB_0160d388:
        iVar3 = piVar8[2];
      }
    }
    FUN_016dd1aa(piVar8[1] + iVar3,iVar7,uVar4);
    piVar8[2] = piVar8[2] + uVar4;
    if (piVar5[0x16] != -0x7fffffff) goto LAB_0160d13c;
LAB_0160d278:
    if (*piVar5 != 0) {
      if (piVar5[1] == 0) {
        uVar2 = 0x31;
        goto LAB_0160d424;
      }
      piVar5[1] = piVar5[1] + -1;
      piVar5 = local_48;
    }
    local_2c = &local_38;
    local_3c = 2;
    local_40 = &DAT_00410f4f;
    local_34 = 0;
    local_28 = FUN_00fac4cc;
    local_38 = (undefined *)(uint)bVar1;
    iVar3 = FUN_00fa948c(piVar5[0x1e],&DAT_018abab8,&DAT_00590e71,&local_2c);
    if (iVar3 != 0) goto LAB_0160d390;
    uVar4 = piVar5[0x16];
    bVar11 = uVar4 != 0x80000001;
    if (bVar11) {
      uVar4 = (uint)*(byte *)((int)piVar5 + 0x6b);
    }
    if (bVar11 && (uVar4 & 1) != 0) {
      local_2c = &local_40;
      local_28 = (code *)&DAT_0157d360;
      iVar3 = FUN_00fa948c(piVar5[0x1e],&DAT_018abab8,&DAT_00590e71,&local_2c);
      if (iVar3 != 0) goto LAB_0160d390;
    }
    if (*local_48 == 1) {
      iVar3 = local_48[1] + 1;
      if (local_48[1] == -1) {
        iVar3 = -1;
      }
      local_48[1] = iVar3;
    }
    pbVar10 = pbVar9;
  } while (pbVar9 != param_2 + param_3);
LAB_0160d3a4:
  FUN_0160d4f4(param_1,local_48,(char)local_44);
  return;
}

