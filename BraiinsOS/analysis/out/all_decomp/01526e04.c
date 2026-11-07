// FUN_01526e04 @ 01526e04 size=840 calls_out=6 calls_in=4
// strings: 

uint FUN_01526e04(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int local_50;
  int iStack_4c;
  uint uStack_48;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  iVar8 = *(int *)(param_1 + 0x234);
  iVar10 = *(int *)(param_1 + 0x238);
  iVar11 = *(int *)(param_1 + 0x23c);
  *(undefined4 *)(param_1 + 0x234) = 0x80000000;
  if (iVar8 != -0x80000000) {
    if (iVar11 == 0) {
      if (iVar8 != 0) {
        thunk_FUN_016d3fb4(iVar10);
      }
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x1fc);
      uVar4 = *(uint *)(param_1 + 0x208);
      if (uVar4 == uVar3) {
        FUN_01561020();
        uVar3 = *(uint *)(param_1 + 0x1fc);
        uVar4 = *(uint *)(param_1 + 0x208);
      }
      uVar5 = *(int *)(param_1 + 0x204) + uVar4;
      *(uint *)(param_1 + 0x208) = uVar4 + 1;
      uVar4 = uVar5 - uVar3;
      if (uVar5 < uVar3) {
        uVar4 = uVar5;
      }
      piVar1 = (int *)(*(int *)(param_1 + 0x200) + uVar4 * 0xc);
      *piVar1 = iVar8;
      piVar1[1] = iVar10;
      piVar1[2] = iVar11;
    }
  }
  if (*(char *)(param_1 + 0x252) == '\x01') {
    iVar8 = param_2[2];
    if (*param_2 != 0) {
      iVar8 = param_2[3] - iVar8;
    }
    if (iVar8 == 0) {
      return 0;
    }
    uVar3 = FUN_01526994(param_1,param_2,0);
    return uVar3;
  }
  uStack_48 = param_2[2];
  uVar4 = param_2[3];
  local_50 = *param_2;
  uVar3 = uStack_48;
  if (local_50 != 0) {
    uVar3 = uVar4 - uStack_48;
  }
  uVar5 = uVar3;
  if (*param_3 == 1) {
    uVar5 = param_3[5];
    iVar8 = 0;
    if (uVar5 != 0) {
      uVar6 = param_3[2];
      uVar9 = 0;
      uVar14 = param_3[4];
      uVar12 = uVar6;
      if (uVar14 < uVar6) {
        uVar12 = 0;
      }
      uVar13 = uVar14 - uVar12;
      uVar7 = uVar6 - uVar13;
      iVar10 = uVar5 - uVar7;
      if (uVar5 < uVar7 || iVar10 == 0) {
        uVar6 = uVar13 + uVar5;
      }
      iVar8 = 0;
      if (uVar5 >= uVar7 && iVar10 != 0) {
        uVar9 = iVar10 * 0xc;
      }
      if (uVar6 != uVar13) {
        iVar10 = ((uVar6 - uVar13) * 0xc >> 2) * -0x55555555;
        iVar8 = 0;
        piVar1 = (int *)(uVar14 * 0xc + uVar12 * -0xc + param_3[3] + 8);
        do {
          iVar10 = iVar10 + -1;
          iVar8 = *piVar1 + iVar8;
          piVar1 = piVar1 + 3;
        } while (iVar10 != 0);
      }
      if (uVar9 != 0) {
        iVar10 = (uVar9 >> 2) * -0x55555555;
        piVar1 = (int *)(param_3[3] + 8);
        do {
          iVar10 = iVar10 + -1;
          iVar8 = *piVar1 + iVar8;
          piVar1 = piVar1 + 3;
        } while (iVar10 != 0);
      }
    }
    uVar5 = 0;
    if ((uint)(iVar8 - param_3[6]) <= (uint)param_3[1]) {
      uVar5 = param_3[1] - (iVar8 - param_3[6]);
    }
    if (uVar3 <= uVar5) {
      uVar5 = uVar3;
    }
  }
  if (local_50 == 0) {
    iStack_4c = param_2[1];
    uVar3 = uVar5;
    if (uStack_48 < uVar5) {
      uVar3 = uStack_48;
    }
    local_38 = uStack_48 - uVar3;
    local_3c = iStack_4c + uVar3;
    uStack_48 = uVar3;
  }
  else {
    iStack_4c = param_2[1];
    local_38 = uStack_48 + uVar5;
    if (uVar4 < uStack_48 + uVar5) {
      local_38 = uVar4;
    }
    local_3c = iStack_4c;
    local_44 = local_38;
    local_34 = uVar4;
  }
  local_30 = uStack_48;
  if (local_50 != 0) {
    local_30 = local_38 - uStack_48;
  }
  local_40 = local_50;
  if ((int)local_30 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,local_30);
  }
  if (local_30 == 0) {
    local_2c = 1;
    local_30 = 0;
  }
  else {
    local_2c = thunk_FUN_016d4a50(local_30);
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,local_30);
    }
  }
  local_28 = 0;
  FUN_01533c94(&local_50,&local_30);
  uVar9 = local_28;
  uVar4 = local_2c;
  uVar3 = local_30;
  if (local_28 == 0) {
    if (local_30 == 0) {
      return uVar5;
    }
    thunk_FUN_016d3fb4(local_2c);
    return uVar5;
  }
  uVar12 = param_3[2];
  uVar6 = param_3[5];
  if (uVar6 == uVar12) {
    FUN_01561020();
    uVar12 = param_3[2];
    uVar6 = param_3[5];
  }
  uVar14 = param_3[4] + uVar6;
  param_3[5] = uVar6 + 1;
  uVar6 = uVar14 - uVar12;
  if (uVar14 < uVar12) {
    uVar6 = uVar14;
  }
  puVar2 = (uint *)(param_3[3] + uVar6 * 0xc);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar9;
  return uVar5;
}

