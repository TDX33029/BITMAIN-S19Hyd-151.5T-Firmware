// FUN_0133ef14 @ 0133ef14 size=644 calls_out=10 calls_in=5
// strings: 

undefined4 * FUN_0133ef14(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  code *pcVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  int **ppiVar14;
  int local_4c;
  int *local_48;
  code *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*(char *)(param_1 + 1) != '\0') {
    if (*(char *)(param_1 + 1) == '\x01') {
      return param_1;
    }
    return (undefined4 *)0x0;
  }
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = (code *)0x0;
  local_48 = (int *)0x0;
  DataMemoryBarrier(0xb);
  pcVar9 = DAT_018dd98c;
  if (DAT_018dd98c == (code *)0x0) {
    pcVar9 = (code *)FUN_0100f390();
  }
  if (pcVar9 == (code *)0xffffffff) {
    local_4c = FUN_0100f050(&local_48,0x20);
    if (local_4c != 0) {
LAB_0133efe8:
      local_48 = &local_4c;
      local_44 = FUN_0133f1b4;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0058a8bc,&local_48,&DAT_01891f9c);
    }
  }
  else {
    ppiVar14 = &local_48;
    uVar13 = 0x20;
    do {
      uVar8 = (*pcVar9)(ppiVar14,uVar13,0);
      if ((int)uVar8 < 1) {
        if (uVar8 != 0xffffffff) goto LAB_0133f190;
        piVar11 = (int *)FUN_016d2bc8();
        local_4c = 0x10001;
        if (0 < *piVar11) {
          local_4c = -*piVar11;
        }
        if (local_4c != -4) goto LAB_0133efe8;
      }
      else {
        if (uVar13 < uVar8) {
LAB_0133f190:
          local_4c = 0x10002;
          goto LAB_0133efe8;
        }
        ppiVar14 = (int **)((int)ppiVar14 + uVar8);
        uVar13 = uVar13 - uVar8;
      }
    } while (uVar13 != 0);
  }
  uVar7 = local_2c;
  uVar6 = local_30;
  uVar5 = local_34;
  uVar4 = local_38;
  uVar3 = local_3c;
  uVar2 = local_40;
  pcVar9 = local_44;
  piVar11 = local_48;
  puVar10 = (undefined4 *)thunk_FUN_016d4a50(0x150);
  if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x150);
  }
  *puVar10 = 1;
  puVar10[1] = 1;
  FUN_016dd606(puVar10 + 2,0,0x100);
  puVar10[0x4e] = 0x10000;
  puVar10[0x4f] = 0;
  puVar10[0x50] = 0x10000;
  puVar10[0x42] = piVar11;
  puVar10[0x51] = 0;
  puVar10[0x43] = pcVar9;
  puVar10[0x44] = uVar2;
  puVar10[0x45] = uVar3;
  puVar10[0x48] = uVar6;
  puVar10[0x49] = uVar7;
  puVar10[0x46] = uVar4;
  puVar10[0x47] = uVar5;
  cVar1 = *(char *)(param_1 + 1);
  piVar11 = (int *)*param_1;
  puVar10[0x4a] = 0;
  puVar10[0x4b] = 0;
  puVar10[0x4c] = 0;
  puVar10[0x4d] = 0;
  puVar10[0x52] = 0x40;
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = puVar10;
  if (cVar1 != '\x01') {
    if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018ae210);
    }
    FUN_015e8e6c(param_1,&LAB_0133f268);
    return param_1;
  }
  iVar12 = *piVar11;
  *piVar11 = iVar12 + -1;
  if (iVar12 + -1 == 0) {
    FUN_0133db64(piVar11);
    return param_1;
  }
  return param_1;
}

