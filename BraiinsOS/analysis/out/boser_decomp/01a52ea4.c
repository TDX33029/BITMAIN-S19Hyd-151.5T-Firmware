// FUN_01a52ea4 @ 01a52ea4 size=516 calls_out=5 calls_in=1
// strings: internal error: entered unreachable code | Hash table capacity overflow | internal error: entered unreachable code

undefined4 FUN_01a52ea4(int *param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30 [5];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar8 = param_1[3] + 1;
  if (0xfffffffe < (uint)param_1[3]) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01d30868);
  }
  uVar2 = param_1[1];
  uVar6 = uVar2 + 1;
  if (7 < uVar2) {
    uVar2 = (uVar6 & 0xfffffff8) - (uVar6 >> 3);
  }
  if (uVar2 >> 1 < uVar8) {
    if (uVar8 < uVar2 + 1) {
      uVar8 = uVar2 + 1;
    }
    FUN_01a527b8(local_30 + 4,4,uVar8);
    if (local_30[4] == 0) {
      return local_1c;
    }
    local_3c = param_1 + 4;
    local_30[1] = local_1c;
    local_30[2] = local_18;
    local_30[3] = local_14;
    local_30[0] = local_30[4];
    local_34 = 4;
    local_38 = 4;
    if (param_1[3] != 0) {
      puVar5 = (uint *)*param_1;
      do {
        uVar8 = *puVar5;
        puVar5 = puVar5 + 1;
      } while ((~uVar8 & 0x80808080) == 0);
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2c298);
    }
    local_30[3] = 0;
    iVar9 = 0;
    do {
      iVar7 = param_1[iVar9];
      param_1[iVar9] = local_30[iVar9];
      iVar3 = iVar9 + 1;
      local_30[iVar9] = iVar7;
      iVar9 = iVar3;
    } while (iVar3 != 4);
    FUN_01a52db4(&local_3c);
    return 0x80000001;
  }
  if (uVar6 != 0) {
    uVar8 = uVar6 >> 2;
    if ((uVar6 & 3) != 0) {
      uVar8 = (uVar6 >> 2) + 1;
    }
    puVar4 = (undefined4 *)*param_1;
    iVar9 = 0;
    do {
      puVar4[-iVar9] = (~((uint)puVar4[-iVar9] >> 7) & 0x1010101) + (puVar4[-iVar9] | 0x7f7f7f7f);
      iVar9 = iVar9 + -1;
    } while (-iVar9 != uVar8);
    if (3 < uVar6) {
      *(undefined4 *)((int)puVar4 + uVar6) = *puVar4;
      goto LAB_01a52fe4;
    }
  }
  FUN_01bed864(*param_1 + 4);
LAB_01a52fe4:
  uVar2 = param_1[1];
  uVar6 = 0;
  local_34 = 4;
  uVar8 = uVar2 + 1;
  local_38 = 0;
  do {
    if (uVar8 == uVar6) {
      if (7 < uVar2) {
        uVar2 = (uVar8 & 0xfffffff8) - (uVar8 >> 3);
      }
      param_1[2] = uVar2 - param_1[3];
      return 0x80000001;
    }
    pcVar1 = (char *)(*param_1 + uVar6);
    uVar6 = uVar6 + 1;
  } while (*pcVar1 != -0x80);
  local_3c = param_1;
                    /* WARNING: Subroutine does not return */
  FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2c298);
}

