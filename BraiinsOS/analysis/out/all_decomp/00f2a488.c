// FUN_00f2a488 @ 00f2a488 size=936 calls_out=5 calls_in=0
// strings: 

void FUN_00f2a488(uint *param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  int *extraout_r3;
  int *extraout_r3_00;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  uint *puVar9;
  uint local_80;
  int *local_7c;
  uint *local_78;
  int *local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  int **local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int *piStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int *local_28;
  
  puVar9 = (uint *)*param_2;
  piVar6 = (int *)param_2[2];
  local_78 = param_1;
  if (puVar9 == (uint *)0x0) {
    if (piVar6 != (int *)0x0) {
      uVar7 = (uint)(param_2[3] - (int)piVar6) >> 2;
      goto LAB_00f2a4dc;
    }
    local_6c = 4;
    local_70 = 0;
LAB_00f2a6e8:
    uVar7 = 0;
  }
  else {
    uVar7 = (uint)(param_2[1] - (int)puVar9) >> 2;
    if (piVar6 != (int *)0x0) {
      uVar7 = uVar7 + ((uint)(param_2[3] - (int)piVar6) >> 2);
    }
LAB_00f2a4dc:
    iVar2 = uVar7 * 0x34;
    if (0x2762762 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0);
    }
    if (iVar2 == 0) {
      local_6c = 4;
      uVar7 = 0;
    }
    else {
      local_6c = thunk_FUN_016d4a50(iVar2);
      param_4 = extraout_r3;
      if (local_6c == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,iVar2);
      }
    }
    local_68 = 0;
    local_70 = uVar7;
    if (puVar9 == (uint *)0x0) {
      if (piVar6 == (int *)0x0) goto LAB_00f2a6e8;
      uVar4 = (uint)(param_2[3] - (int)piVar6) >> 2;
    }
    else {
      uVar4 = (uint)(param_2[1] - (int)puVar9) >> 2;
      if (piVar6 != (int *)0x0) {
        uVar4 = uVar4 + ((uint)(param_2[3] - (int)piVar6) >> 2);
      }
    }
    if (uVar7 < uVar4) {
      FUN_00edff4c(&local_70,0,uVar4,4,0x34);
      param_4 = extraout_r3_00;
    }
    puVar5 = &local_80;
    local_7c = (int *)param_2[3];
    if (puVar9 != (uint *)0x0) {
      puVar5 = (uint *)param_2[1];
    }
    uVar7 = local_68;
    local_80 = local_6c;
    local_74 = piVar6;
    if (puVar9 != (uint *)0x0 && puVar9 != puVar5) {
      uVar4 = (uint)((int)puVar5 - (int)puVar9) >> 2;
      piVar6 = (int *)(local_68 * 0x34 + local_6c);
      do {
        piVar3 = (int *)*puVar9;
        piVar8 = piVar3 + 0x90;
        DataMemoryBarrier(0xb);
        if (piVar3[0x90] == 0) {
          iVar2 = *piVar8;
          DataMemoryBarrier(0xb);
        }
        else {
          local_60 = &local_28;
          local_28 = piVar3;
          FUN_015eedc4(piVar8,1,&local_60,&DAT_0187c2f4,&DAT_018ac9b8);
          iVar2 = *piVar8;
          DataMemoryBarrier(0xb);
        }
        if (iVar2 != 0) {
          local_60 = &local_28;
          local_28 = piVar3;
          FUN_015eedc4(piVar8,1,&local_60,&DAT_0187c2f4,&DAT_018ac9b8);
        }
        FUN_00c2d568(&local_60,piVar3,piVar3[0x8a],piVar3[0x8b]);
        uVar7 = uVar7 + 1;
        uVar4 = uVar4 - 1;
        *piVar6 = (int)local_60;
        piVar6[1] = iStack_5c;
        piVar6[2] = iStack_58;
        piVar6[3] = iStack_54;
        piVar6[4] = local_50;
        piVar6[5] = iStack_4c;
        piVar6[6] = iStack_48;
        piVar6[7] = iStack_44;
        piVar6[8] = local_40;
        piVar6[9] = (int)piStack_3c;
        piVar6[10] = iStack_38;
        piVar6[0xb] = iStack_34;
        piVar6[0xc] = iStack_30;
        param_4 = piStack_3c;
        piVar6 = piVar6 + 0xd;
        puVar9 = puVar9 + 1;
      } while (uVar4 != 0);
    }
    if (local_74 != (int *)0x0) {
      param_4 = local_7c;
    }
    if (local_74 != (int *)0x0 && local_74 != param_4) {
      uVar4 = (uint)((int)param_4 - (int)local_74) >> 2;
      piVar6 = (int *)(uVar7 * 0x34 + local_80);
      do {
        piVar3 = (int *)*local_74;
        piVar8 = piVar3 + 0x90;
        DataMemoryBarrier(0xb);
        if (piVar3[0x90] == 0) {
          iVar2 = *piVar8;
          DataMemoryBarrier(0xb);
          piVar1 = local_7c;
          local_74 = local_74 + 1;
        }
        else {
          local_7c = piVar3;
          local_74 = local_74 + 1;
          local_60 = &local_28;
          local_28 = piVar3;
          FUN_015eedc4(piVar8,1,&local_60,&DAT_0187c2f4,&DAT_018ac9b8);
          iVar2 = *piVar8;
          DataMemoryBarrier(0xb);
          piVar3 = local_7c;
          piVar1 = local_7c;
        }
        local_7c = piVar3;
        piVar3 = local_7c;
        if (iVar2 != 0) {
          local_60 = &local_28;
          local_28 = local_7c;
          FUN_015eedc4(piVar8,1,&local_60,&DAT_0187c2f4,&DAT_018ac9b8);
          piVar3 = local_7c;
          piVar1 = local_7c;
        }
        local_7c = piVar1;
        FUN_00c2d568(&local_60,piVar3,piVar3[0x8a],piVar3[0x8b]);
        uVar7 = uVar7 + 1;
        uVar4 = uVar4 - 1;
        *piVar6 = (int)local_60;
        piVar6[1] = iStack_5c;
        piVar6[2] = iStack_58;
        piVar6[3] = iStack_54;
        piVar6[4] = local_50;
        piVar6[5] = iStack_4c;
        piVar6[6] = iStack_48;
        piVar6[7] = iStack_44;
        piVar6[8] = local_40;
        piVar6[9] = (int)piStack_3c;
        piVar6[10] = iStack_38;
        piVar6[0xb] = iStack_34;
        piVar6[0xc] = iStack_30;
        piVar6 = piVar6 + 0xd;
      } while (uVar4 != 0);
    }
  }
  *local_78 = local_70;
  local_78[1] = local_6c;
  local_78[2] = uVar7;
  return;
}

