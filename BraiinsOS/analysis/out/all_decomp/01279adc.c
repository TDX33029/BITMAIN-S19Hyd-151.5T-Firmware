// FUN_01279adc @ 01279adc size=1004 calls_out=12 calls_in=2
// strings: attempt to divide by zero

void FUN_01279adc(uint *param_1,int param_2,uint param_3)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  uint local_58;
  uint *local_54;
  uint local_50;
  uint local_4c;
  uint *puStack_48;
  int iStack_44;
  undefined1 auStack_3c [12];
  uint local_30;
  uint *local_2c;
  uint local_28;
  
  uVar10 = *(uint *)(param_3 + 8);
  if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("attempt to divide by zero",0x33,&DAT_0188b764);
  }
  uVar14 = *(uint *)(param_2 + 8);
  if (uVar14 == 0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
LAB_01279b64:
    param_1[3] = 0;
    param_1[4] = 4;
    param_1[5] = 0;
    return;
  }
  piVar13 = *(int **)(param_3 + 4);
  if (uVar10 == 1) {
    if (*piVar13 == 1) {
      iVar4 = uVar14 << 2;
      uVar11 = *(undefined4 *)(param_2 + 4);
      uVar10 = thunk_FUN_016d4a50(iVar4);
      if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,iVar4);
      }
      *param_1 = uVar14;
      param_1[1] = uVar10;
      FUN_016dd1aa(uVar10,uVar11,iVar4);
      param_1[2] = uVar14;
      goto LAB_01279b64;
    }
    uVar11 = *(undefined4 *)(param_2 + 4);
    local_2c = (uint *)thunk_FUN_016d4a50(uVar14 << 2);
    if (local_2c == (uint *)0x0) goto LAB_01279ea4;
    local_30 = uVar14;
    FUN_016dd1aa(local_2c,uVar11,uVar14 << 2);
    local_28 = uVar14;
    FUN_01279f44(&local_58,&local_30,*piVar13);
    uVar14 = local_50;
    puVar2 = local_54;
    uVar10 = local_58;
    local_50 = 0;
    local_54 = (uint *)&DAT_00000004;
    local_58 = 0;
    if (local_4c != 0) {
      FUN_0127ac28(&local_58);
      *local_54 = local_4c;
    }
    local_50 = (uint)(local_4c != 0);
    *param_1 = uVar10;
    param_1[1] = (uint)puVar2;
    param_1[2] = uVar14;
    goto LAB_01279e78;
  }
  uVar5 = (uint)(uVar14 >= uVar10 && uVar14 != uVar10);
  uVar7 = (uint)(uVar14 < uVar10);
  if (uVar14 == uVar10) {
    iVar4 = uVar10 << 2;
    do {
      if (iVar4 == 0) goto LAB_01279cb4;
      uVar9 = *(uint *)((int)piVar13 + iVar4 + -4);
      uVar8 = *(uint *)(*(int *)(param_2 + 4) + -4 + iVar4);
      iVar4 = iVar4 + -4;
    } while (uVar8 == uVar9);
    uVar5 = 0;
    uVar7 = (uint)(uVar8 < uVar9);
    if (uVar8 >= uVar9) {
      uVar5 = 1;
    }
  }
  if (uVar5 - uVar7 == 0) {
LAB_01279cb4:
    puVar6 = (undefined4 *)thunk_FUN_016d4a50(4);
    if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,4);
    }
    *puVar6 = 1;
    *param_1 = 1;
    param_1[1] = (uint)puVar6;
    param_1[2] = 1;
    param_1[3] = 0;
    param_1[4] = 4;
    param_1[5] = 0;
    return;
  }
  if ((uVar5 - uVar7 & 0xff) != 1) {
    uVar11 = *(undefined4 *)(param_2 + 4);
    uVar10 = thunk_FUN_016d4a50(uVar14 << 2);
    if (uVar10 != 0) {
      FUN_016dd1aa(uVar10,uVar11,uVar14 << 2);
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      param_1[3] = uVar14;
      param_1[4] = uVar10;
      param_1[5] = uVar14;
      return;
    }
LAB_01279ea4:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,uVar14 << 2);
  }
  iVar4 = piVar13[uVar10 - 1];
  if (LZCOUNT(iVar4) == 0) {
    iVar4 = uVar14 << 2;
    uVar11 = *(undefined4 *)(param_2 + 4);
    local_54 = (uint *)thunk_FUN_016d4a50(iVar4);
    if (local_54 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar4);
    }
    local_58 = uVar14;
    FUN_016dd1aa(local_54,uVar11,iVar4);
    local_50 = uVar14;
    FUN_0127a174(param_1,&local_58,piVar13,uVar10);
    return;
  }
  iVar12 = 0;
  if (iVar4 != 0) {
    iVar12 = LZCOUNT(iVar4);
  }
  bVar1 = iVar4 == 0;
  local_58 = 0x80000000;
  local_54 = (uint *)param_2;
  FUN_0127ae58(auStack_3c,&local_58,bVar1,iVar12);
  local_58 = 0x80000000;
  local_54 = (uint *)param_3;
  FUN_0127ae58(&local_30,&local_58,bVar1,iVar12);
  puVar3 = local_2c;
  FUN_0127a174(&local_58,auStack_3c,local_2c,local_28);
  uVar14 = local_50;
  puVar2 = local_54;
  uVar10 = local_58;
  if (local_30 != 0) {
    thunk_FUN_016d3fb4(puVar3);
  }
  if (local_4c == 0x80000000) {
    if (puStack_48[2] == 0) {
      FUN_0127b6d4(&local_30,puStack_48[1],0);
    }
    else {
LAB_01279e30:
      local_58 = local_4c;
      local_54 = puStack_48;
      local_50 = iStack_44;
      FUN_0127b2d8(&local_30,&local_58,bVar1,iVar12);
    }
  }
  else {
    if (iStack_44 != 0) goto LAB_01279e30;
    local_2c = puStack_48;
    local_28 = 0;
    local_30 = local_4c;
  }
  *param_1 = uVar10;
  param_1[1] = (uint)puVar2;
  param_1[2] = uVar14;
  local_58 = local_30;
  local_54 = local_2c;
  local_50 = local_28;
LAB_01279e78:
  param_1[3] = local_58;
  param_1[4] = (uint)local_54;
  param_1[5] = local_50;
  return;
}

