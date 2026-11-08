// FUN_013c4bcc @ 013c4bcc size=456 calls_out=4 calls_in=1
// strings: 

void FUN_013c4bcc(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint local_28;
  
  iVar10 = param_3 * 0x14;
  uVar1 = 0;
  if (0x6666666 < param_3) {
LAB_013c4bfc:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar1,iVar10);
  }
  if (iVar10 == 0) {
    puVar2 = (uint *)&DAT_00000004;
  }
  else {
    puVar2 = (uint *)thunk_FUN_016d4a50(iVar10);
    if (puVar2 == (uint *)0x0) {
      uVar1 = 4;
      goto LAB_013c4bfc;
    }
    uVar1 = param_3;
  }
  puVar9 = puVar2;
  if (param_3 < 2) {
    if (param_3 == 0) {
      local_28 = 0;
      if (*param_2 != 0) {
        thunk_FUN_016d3fb4(param_2[1]);
      }
      goto LAB_013c4d74;
    }
    param_3 = 1;
  }
  else {
    uVar8 = param_2[2];
    uVar12 = param_2[3];
    uVar6 = uVar8 * 8;
    uVar7 = param_2[4];
    uVar3 = param_2[1];
    iVar10 = 0;
    do {
      uVar5 = 0;
      if (0x1fffffff < uVar8 || 0x7ffffffc < uVar6) {
LAB_013c4d4c:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar5,uVar6);
      }
      if (uVar6 == 0) {
        uVar4 = 4;
        uVar11 = 0;
      }
      else {
        uVar4 = thunk_FUN_016d4a50(uVar6);
        uVar11 = uVar8;
        if (uVar4 == 0) {
          uVar5 = 4;
          goto LAB_013c4d4c;
        }
      }
      FUN_016dd1aa(uVar4,uVar3,uVar6);
      iVar10 = iVar10 + 1;
      *(short *)(puVar9 + 4) = (short)uVar7;
      *puVar9 = uVar11;
      puVar9[1] = uVar4;
      puVar9[2] = uVar8;
      puVar9[3] = uVar12;
      puVar9 = puVar9 + 5;
    } while (param_3 - 1 != iVar10);
  }
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar3 = param_2[3];
  uVar8 = param_2[4];
  *puVar9 = *param_2;
  puVar9[1] = uVar6;
  puVar9[2] = uVar7;
  puVar9[3] = uVar3;
  puVar9[4] = uVar8;
  local_28 = param_3;
LAB_013c4d74:
  *param_1 = uVar1;
  param_1[1] = (uint)puVar2;
  param_1[2] = local_28;
  return;
}

