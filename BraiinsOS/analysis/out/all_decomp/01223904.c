// FUN_01223904 @ 01223904 size=680 calls_out=6 calls_in=5
// strings: 

void FUN_01223904(int *param_1,undefined4 *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int local_54;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  iVar7 = param_2[5];
  iVar10 = param_2[6];
  iVar11 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = iVar7;
  param_1[6] = iVar10;
  param_1[7] = iVar11;
  iVar7 = param_2[9];
  iVar10 = param_2[10];
  iVar11 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = iVar7;
  param_1[10] = iVar10;
  param_1[0xb] = iVar11;
  iVar7 = param_2[1];
  if (iVar7 == 0) {
    *param_1 = (int)&DAT_005674cc;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  lVar1 = (ulonglong)(iVar7 + 1) * 0x28;
  uVar12 = (uint)lVar1;
  if ((int)((ulonglong)lVar1 >> 0x20) != 0) {
LAB_012239a8:
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar13 = iVar7 + 5;
  uVar8 = uVar13 + uVar12;
  if ((CARRY4(uVar13,uVar12)) || (0x7ffffffc < uVar8)) goto LAB_012239a8;
  if (uVar8 == 0) {
    uVar2 = 4;
  }
  else {
    if (uVar8 < 4) {
      local_40 = 0;
      iVar10 = FUN_016d51b0(&local_40,4,uVar8);
      if (iVar10 != 0) goto LAB_01223ba4;
      uVar2 = local_40;
    }
    else {
      uVar2 = thunk_FUN_016d4a50(uVar8);
    }
    if (uVar2 == 0) {
LAB_01223ba4:
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,uVar8);
    }
  }
  iVar11 = uVar2 + uVar12;
  puVar3 = (uint *)*param_2;
  FUN_016dd1aa(iVar11,puVar3,uVar13);
  iVar10 = param_2[3];
  if (iVar10 != 0) {
    puVar9 = puVar3 + 1;
    uVar12 = ~*puVar3 & 0x80808080;
    puVar6 = puVar3;
    local_54 = iVar10;
    do {
      puVar4 = puVar9;
      if (uVar12 == 0) {
        do {
          puVar9 = puVar4 + 1;
          uVar12 = *puVar4;
          puVar6 = puVar6 + -0x28;
          puVar4 = puVar9;
        } while ((uVar12 & 0x80808080) == 0x80808080);
        uVar12 = uVar12 & 0x80808080 ^ 0x80808080;
      }
      puVar4 = puVar6 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                       (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) * -10;
      uVar13 = puVar4[-8];
      uVar8 = puVar4[-9];
      if (uVar13 == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = thunk_FUN_016d4a50(uVar13);
        if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,uVar13);
        }
      }
      FUN_016dd1aa(uVar2,uVar8,uVar13);
      local_40 = puVar4[-7];
      uStack_3c = puVar4[-6];
      uStack_38 = puVar4[-5];
      local_34 = puVar4[-4];
      uStack_30 = puVar4[-3];
      uStack_2c = puVar4[-2];
      uStack_28 = puVar4[-1];
      puVar4 = (uint *)(iVar11 + -0x28 + ((int)puVar3 - (int)puVar4 >> 3) * -8);
      *puVar4 = uVar13;
      puVar4[1] = uVar2;
      puVar4[2] = uVar13;
      puVar4[3] = local_40;
      puVar4[4] = uStack_3c;
      puVar4[5] = uStack_38;
      puVar4[6] = local_34;
      puVar4[7] = uStack_30;
      puVar4[8] = uStack_2c;
      puVar4[9] = uStack_28;
      uVar12 = uVar12 - 1 & uVar12;
      local_54 = local_54 + -1;
    } while (local_54 != 0);
  }
  iVar5 = param_2[2];
  *param_1 = iVar11;
  param_1[1] = iVar7;
  param_1[2] = iVar5;
  param_1[3] = iVar10;
  return;
}

