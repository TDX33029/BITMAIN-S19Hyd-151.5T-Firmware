// FUN_00944238 @ 00944238 size=516 calls_out=5 calls_in=1
// strings: internal error: entered unreachable code | Hash table capacity overflow | internal error: entered unreachable code

undefined4 FUN_00944238(int *param_1)

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
  int *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44 [4];
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
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
    FUN_00944484(&local_34,param_1 + 4,uVar8);
    if (local_34 == (int *)0x0) {
      return local_30;
    }
    local_44[0] = local_28;
    local_44[1] = uStack_24;
    local_44[2] = uStack_20;
    local_44[3] = uStack_1c;
    local_48 = local_2c;
    local_4c = local_30;
    local_50 = local_34;
    if (param_1[3] != 0) {
      puVar5 = (uint *)*param_1;
      do {
        uVar8 = *puVar5;
        puVar5 = puVar5 + 1;
      } while ((~uVar8 & 0x80808080) == 0);
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2c298);
    }
    local_44[3] = 0;
    iVar9 = 0;
    do {
      iVar7 = param_1[iVar9];
      param_1[iVar9] = local_44[iVar9];
      iVar3 = iVar9 + 1;
      local_44[iVar9] = iVar7;
      iVar9 = iVar3;
    } while (iVar3 != 4);
    FUN_01a52db4(&local_50);
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
      goto LAB_00944378;
    }
  }
  FUN_01bed864(*param_1 + 4);
LAB_00944378:
  uVar2 = param_1[1];
  uVar6 = 0;
  local_2c = 4;
  uVar8 = uVar2 + 1;
  local_30 = 0;
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
  local_34 = param_1;
                    /* WARNING: Subroutine does not return */
  FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2c298);
}

