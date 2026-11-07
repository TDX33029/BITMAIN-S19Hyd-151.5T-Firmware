// FUN_00cde5c4 @ 00cde5c4 size=444 calls_out=4 calls_in=1
// strings: 

void FUN_00cde5c4(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint local_28;
  
  iVar11 = param_3 * 0x14;
  uVar1 = 0;
  if (0x6666666 < param_3) {
LAB_00cde5f4:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar1,iVar11);
  }
  if (iVar11 == 0) {
    puVar2 = (uint *)&DAT_00000004;
  }
  else {
    puVar2 = (uint *)thunk_FUN_016d4a50(iVar11);
    uVar1 = param_3;
    if (puVar2 == (uint *)0x0) {
      uVar1 = 4;
      goto LAB_00cde5f4;
    }
  }
  puVar10 = puVar2;
  if (param_3 < 2) {
    local_28 = 1;
    if (param_3 == 0) {
      local_28 = 0;
      if (*param_2 != 0) {
        thunk_FUN_016d3fb4(param_2[1]);
      }
      goto LAB_00cde76c;
    }
  }
  else {
    uVar8 = param_2[2];
    uVar7 = param_2[3];
    iVar11 = 0;
    uVar9 = param_2[4];
    uVar6 = uVar8 * 4;
    uVar3 = param_2[1];
    do {
      uVar5 = 0;
      if (0x3fffffff < uVar8 || 0x7ffffffc < uVar6) {
LAB_00cde744:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar5,uVar6);
      }
      if (uVar6 == 0) {
        uVar12 = 0;
        uVar4 = 4;
      }
      else {
        uVar4 = thunk_FUN_016d4a50(uVar6);
        uVar12 = uVar8;
        if (uVar4 == 0) {
          uVar5 = 4;
          goto LAB_00cde744;
        }
      }
      FUN_016dd1aa(uVar4,uVar3,uVar6);
      puVar10[1] = uVar4;
      iVar11 = iVar11 + 1;
      *puVar10 = uVar12;
      puVar10[2] = uVar8;
      puVar10[3] = uVar7;
      puVar10[4] = uVar9;
      puVar10 = puVar10 + 5;
    } while (param_3 - 1 != iVar11);
    local_28 = param_3;
  }
  uVar6 = param_2[1];
  uVar3 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[4];
  *puVar10 = *param_2;
  puVar10[1] = uVar6;
  puVar10[2] = uVar3;
  puVar10[3] = uVar7;
  puVar10[4] = uVar8;
LAB_00cde76c:
  *param_1 = uVar1;
  param_1[1] = (uint)puVar2;
  param_1[2] = local_28;
  return;
}

