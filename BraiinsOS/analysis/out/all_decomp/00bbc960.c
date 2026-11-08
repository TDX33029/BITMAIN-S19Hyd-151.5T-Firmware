// FUN_00bbc960 @ 00bbc960 size=848 calls_out=8 calls_in=0
// strings: speed | speed | target | target

void FUN_00bbc960(undefined4 *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_d8;
  int iStack_d4;
  int local_d0;
  int local_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int local_bc;
  int *local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined1 auStack_94 [12];
  int *local_88;
  int local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  char *local_60;
  undefined4 local_5c;
  int *local_58;
  undefined4 *local_54;
  int local_50;
  int iStack_4c;
  int local_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  char **local_34;
  undefined4 *puStack_30;
  int **ppiStack_2c;
  undefined1 *local_28;
  
  piVar1 = *(int **)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0x18) = 0;
  if (piVar1 == (int *)0x0) {
LAB_00bbc9d4:
    uVar2 = FUN_00bbc7a8(10,&DAT_0035deaa,0x31);
    *param_1 = 2;
    param_1[1] = uVar2;
    return;
  }
  local_58 = (int *)piVar1[1];
  local_54 = (undefined4 *)piVar1[2];
  iVar6 = *piVar1;
  local_50 = piVar1[3];
  iStack_4c = piVar1[4];
  local_48 = piVar1[5];
  local_44 = piVar1[6];
  iStack_40 = piVar1[7];
  iStack_3c = piVar1[8];
  iStack_38 = piVar1[9];
  thunk_FUN_016d3fb4();
  piVar1 = local_58;
  local_d8 = local_50;
  iStack_d4 = iStack_4c;
  local_d0 = local_48;
  local_cc = local_44;
  iStack_c8 = iStack_40;
  iStack_c4 = iStack_3c;
  iStack_c0 = iStack_38;
  if (iVar6 == -0x80000000) goto LAB_00bbc9d4;
  local_b8 = local_58;
  local_b4 = (int)local_54;
  local_b0 = local_50;
  local_ac = iStack_4c;
  local_a8 = local_48;
  local_a4 = local_44;
  iStack_a0 = iStack_40;
  iStack_9c = iStack_3c;
  iStack_98 = iStack_38;
  local_bc = iVar6;
  if (local_54 == (undefined4 *)0x4) {
    if (*local_58 != 0x706d6574) goto LAB_00bbcb0c;
    if (local_48 != 0) {
      iVar3 = local_48 * 8;
      piVar4 = (int *)(iStack_4c + 4);
      do {
        iVar3 = iVar3 + -8;
        iVar5 = *piVar4;
        if (iVar5 == 0) break;
        piVar4 = piVar4 + 2;
      } while (iVar3 != 0);
      if (iVar5 == 0) goto LAB_00bbcb0c;
    }
    FUN_00c67d3c(&local_88,&local_b0,"target",6);
    local_5c = 6;
    local_60 = "target";
    if (local_88 != (int *)0x2) goto LAB_00bbcc64;
    if (local_84 == 1) {
      *param_1 = 1;
      param_1[1] = local_80;
      goto LAB_00bbcc40;
    }
    uVar2 = FUN_00bbc7a8(9,&DAT_0034ff6e,0x38);
  }
  else {
    if ((local_54 != (undefined4 *)0x5) ||
       (iVar3 = thunk_FUN_016dd50a(local_58,&DAT_0034ff32,5), iVar3 != 0)) {
LAB_00bbcb0c:
      local_58 = &local_bc;
      local_54 = &DAT_006043a8;
      FUN_00600d2c(auStack_94,&DAT_0057235c,&local_58);
      uVar2 = FUN_00bbcd18(auStack_94);
      *param_1 = 2;
      param_1[1] = uVar2;
      FUN_00bbc64c(&local_d8);
      if (local_bc == 0) {
        return;
      }
      thunk_FUN_016d3fb4(local_b8);
      return;
    }
    if (local_a8 != 0) {
      iVar3 = local_a8 * 8;
      piVar4 = (int *)(local_ac + 4);
      do {
        iVar3 = iVar3 + -8;
        iVar5 = *piVar4;
        if (iVar5 == 0) break;
        piVar4 = piVar4 + 2;
      } while (iVar3 != 0);
      if (iVar5 == 0) goto LAB_00bbcb0c;
    }
    FUN_00c67d3c(&local_88,&local_b0,"speed",5);
    local_5c = 5;
    local_60 = "speed";
    if (local_88 != (int *)0x2) {
LAB_00bbcc64:
      ppiStack_2c = &local_58;
      local_58 = local_88;
      local_54 = (undefined4 *)local_84;
      local_50 = local_80;
      iStack_4c = uStack_7c;
      local_48 = local_78;
      local_44 = uStack_74;
      iStack_40 = uStack_70;
      iStack_3c = uStack_6c;
      iStack_38 = uStack_68;
      local_34 = &local_60;
      puStack_30 = &DAT_0157d360;
      local_28 = &LAB_00f9c598;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_005767ed,&local_34,&DAT_01880884);
    }
    if (local_84 == 1) {
      *param_1 = 0;
      param_1[1] = local_80;
      goto LAB_00bbcc40;
    }
    uVar2 = FUN_00bbc7a8(9,&DAT_0034ff37,0x37);
  }
  *param_1 = 2;
  param_1[1] = uVar2;
LAB_00bbcc40:
  FUN_00bbc64c(&local_b0);
  if (iVar6 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(piVar1);
  return;
}

