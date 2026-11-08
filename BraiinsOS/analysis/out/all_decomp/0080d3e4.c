// FUN_0080d3e4 @ 0080d3e4 size=624 calls_out=9 calls_in=3
// strings: 

void FUN_0080d3e4(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined *puVar13;
  undefined4 *puVar14;
  undefined1 local_54 [4];
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined1 *local_44;
  int local_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  int local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xc)) {
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186395c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186395c);
  case 3:
    piVar6 = (int *)param_2[10];
    puVar13 = (undefined *)param_2[0xb];
    goto LAB_0080d4b4;
  }
  uVar7 = param_2[1];
  param_2[2] = *param_2;
  param_2[3] = uVar7;
  if ((int)uVar7 < 0) {
    uVar11 = 0;
LAB_0080d42c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar11,uVar7);
  }
  uVar12 = 0;
  if (uVar7 == 0) {
    iVar3 = 1;
    uVar4 = 0;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(uVar7);
    if (iVar3 == 0) {
      uVar11 = 1;
      goto LAB_0080d42c;
    }
    uVar4 = uVar7;
  }
  param_2[4] = uVar4;
  param_2[5] = iVar3;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = uVar7;
  do {
    if (uVar7 <= uVar12) {
      uVar8 = param_2[4];
      puVar10 = (undefined1 *)param_2[5];
      uVar11 = param_2[6];
LAB_0080d650:
      *param_1 = uVar8;
      param_1[1] = puVar10;
      param_1[2] = uVar11;
      *(undefined1 *)(param_2 + 0xc) = 1;
      return;
    }
    local_2c = param_2[2];
    uVar7 = (uint)local_28 >> 8;
    param_2[7] = uVar12 + 1;
    local_48 = 1;
    param_2[9] = uVar12;
    local_28 = CONCAT31((uint3)uVar7 & 0xffff,0x10);
    piVar6 = (int *)thunk_FUN_016d4a50(0x24);
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x24);
    }
    puVar13 = &DAT_01886914;
    *piVar6 = local_48;
    piVar6[1] = (int)local_44;
    piVar6[2] = local_40;
    piVar6[3] = iStack_3c;
    piVar6[4] = local_38;
    piVar6[5] = iStack_34;
    piVar6[6] = iStack_30;
    piVar6[7] = local_2c;
    piVar6[8] = local_28;
    param_2[10] = piVar6;
    param_2[0xb] = &DAT_01886914;
LAB_0080d4b4:
    (**(code **)(puVar13 + 0xc))(&local_48,piVar6,param_3);
    iVar9 = local_40;
    puVar2 = local_44;
    iVar3 = local_48;
    if (local_48 == -0x7fffffff) {
      *param_1 = 0x80000001;
      *(undefined1 *)(param_2 + 0xc) = 3;
      return;
    }
    uVar11 = param_2[10];
    puVar14 = (undefined4 *)param_2[0xb];
    pcVar5 = (code *)*puVar14;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar11);
    }
    if (puVar14[1] != 0) {
      thunk_FUN_016d3fb4(uVar11);
    }
    if (iVar3 == -0x80000000) {
      puVar10 = puVar2;
LAB_0080d638:
      uVar8 = 0x80000000;
      uVar11 = 0;
      if (param_2[4] != 0) {
        uVar11 = thunk_FUN_016d3fb4(param_2[5]);
      }
      goto LAB_0080d650;
    }
    if (iVar9 == 0) {
      local_50 = param_2[3];
      local_4c = param_2[9];
      local_54[0] = 0;
      puVar10 = (undefined1 *)FUN_0080b0cc(local_54);
      if (iVar3 != 0) {
        thunk_FUN_016d3fb4(puVar2);
      }
      goto LAB_0080d638;
    }
    uVar1 = *puVar2;
    iVar9 = param_2[6];
    if (iVar9 == param_2[4]) {
      FUN_006029c0();
    }
    *(undefined1 *)(param_2[5] + iVar9) = uVar1;
    param_2[6] = iVar9 + 1;
    if (iVar3 != 0) {
      thunk_FUN_016d3fb4(puVar2);
    }
    uVar12 = param_2[7];
    uVar7 = param_2[8];
  } while( true );
}

