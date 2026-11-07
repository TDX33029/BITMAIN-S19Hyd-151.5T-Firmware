// FUN_01223be0 @ 01223be0 size=628 calls_out=6 calls_in=2
// strings: 

void FUN_01223be0(int *param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  
  iVar5 = param_2[5];
  iVar8 = param_2[6];
  iVar10 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = iVar5;
  param_1[6] = iVar8;
  param_1[7] = iVar10;
  iVar5 = param_2[9];
  iVar8 = param_2[10];
  iVar10 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = iVar5;
  param_1[10] = iVar8;
  param_1[0xb] = iVar10;
  uVar3 = param_2[1];
  if (uVar3 == 0) {
    *param_1 = (int)&DAT_005674cc;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  uVar9 = uVar3 + 1;
  uVar11 = (uint)((ulonglong)uVar9 * 0xc);
  if ((int)((ulonglong)uVar9 * 0xc >> 0x20) != 0) {
LAB_01223c84:
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar12 = uVar3 + 5;
  uVar6 = uVar12 + uVar11;
  if ((CARRY4(uVar12,uVar11)) || (0x7ffffffc < uVar6)) goto LAB_01223c84;
  if (uVar6 == 0) {
    iVar5 = 4;
  }
  else {
    if (uVar6 < 4) {
      local_38 = 0;
      iVar5 = FUN_016d51b0(&local_38,4,uVar6);
      if (iVar5 != 0) goto LAB_01223e4c;
      iVar5 = local_38;
    }
    else {
      iVar5 = thunk_FUN_016d4a50(uVar6);
    }
    if (iVar5 == 0) {
LAB_01223e4c:
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,uVar6);
    }
  }
  iVar5 = iVar5 + uVar11;
  local_2c = 0;
  puVar1 = (uint *)*param_2;
  local_30 = uVar3;
  if (7 < uVar3) {
    local_30 = (uVar9 & 0xfffffff8) - (uVar9 >> 3);
  }
  local_38 = iVar5;
  local_34 = uVar3;
  FUN_016dd1aa(iVar5,puVar1,uVar12);
  iVar8 = param_2[3];
  if (iVar8 != 0) {
    puVar7 = puVar1 + 1;
    uVar3 = ~*puVar1 & 0x80808080;
    puVar4 = puVar1;
    iVar10 = iVar8;
    do {
      puVar2 = puVar7;
      if (uVar3 == 0) {
        do {
          puVar7 = puVar2 + 1;
          uVar3 = *puVar2;
          puVar4 = puVar4 + -0xc;
          puVar2 = puVar7;
        } while ((uVar3 & 0x80808080) == 0x80808080);
        uVar3 = uVar3 & 0x80808080 ^ 0x80808080;
      }
      puVar2 = puVar4 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                       (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) * -3;
      uVar11 = puVar2[-1];
      uVar9 = puVar2[-2];
      if (uVar11 == 0) {
        uVar6 = 1;
      }
      else {
        uVar6 = thunk_FUN_016d4a50(uVar11,uVar9);
        if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,uVar11);
        }
      }
      FUN_016dd1aa(uVar6,uVar9,uVar11);
      iVar10 = iVar10 + -1;
      puVar2 = (uint *)(iVar5 + -0xc + ((int)puVar1 - (int)puVar2 >> 2) * -4);
      *puVar2 = uVar11;
      uVar3 = uVar3 - 1 & uVar3;
      puVar2[1] = uVar6;
      puVar2[2] = uVar11;
    } while (iVar10 != 0);
  }
  iVar5 = param_2[2];
  *param_1 = local_38;
  param_1[1] = local_34;
  param_1[2] = iVar5;
  param_1[3] = iVar8;
  return;
}

