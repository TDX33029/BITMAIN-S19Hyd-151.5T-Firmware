// FUN_00ce71e0 @ 00ce71e0 size=428 calls_out=3 calls_in=3
// strings: 

void FUN_00ce71e0(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  undefined *local_2c;
  uint local_28;
  
  uVar9 = param_2[4];
  uVar12 = param_2[5];
  local_28 = uVar12 - uVar9;
  if (uVar12 < uVar9) {
    local_28 = 0;
  }
  bVar15 = 0x3ffffffe < local_28;
  bVar14 = local_28 == 0x3fffffff;
  uVar6 = local_28 * 4;
  if (local_28 < 0x40000000) {
    bVar15 = 0x7ffffffb < uVar6;
    bVar14 = uVar6 == 0x7ffffffc;
  }
  if (bVar15 && !bVar14) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  uVar8 = 0;
  if (uVar6 == 0) {
    uVar2 = 4;
    local_28 = 0;
  }
  else {
    uVar2 = thunk_FUN_016d4a50(uVar6);
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar6);
    }
  }
  if (uVar9 < uVar12) {
    pcVar11 = (char *)*param_2;
    iVar13 = param_2[1];
    iVar7 = param_2[2];
    iVar1 = uVar9 * 4;
    puVar5 = (uint *)param_2[3];
    uVar8 = 0;
    local_2c = &DAT_018709c4;
    do {
      uVar6 = uVar9 + uVar8;
      if (*pcVar11 == '\0') {
        uVar3 = *(uint *)(iVar7 + 8);
        if (uVar3 <= uVar6) goto LAB_00ce7370;
        iVar4 = *(int *)(*(int *)(iVar7 + 4) + iVar1 + uVar8 * 4);
      }
      else {
        uVar3 = *(uint *)(iVar13 + 8);
        if (uVar3 <= uVar6) {
          local_2c = &DAT_018709d4;
LAB_00ce7370:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar6,uVar3,local_2c);
        }
        uVar3 = *(uint *)(iVar7 + 8);
        if (uVar3 <= uVar6) {
          local_2c = &DAT_018709e4;
          goto LAB_00ce7370;
        }
        uVar10 = *(uint *)(*(int *)(iVar7 + 4) + iVar1 + uVar8 * 4);
        uVar6 = *puVar5;
        uVar3 = *(uint *)(*(int *)(iVar13 + 4) + iVar1 + uVar8 * 4);
        if (uVar3 < uVar10) {
          if (uVar10 - uVar3 < uVar6) {
            uVar6 = uVar10 - uVar3;
          }
          iVar4 = uVar6 + uVar3;
        }
        else {
          if (uVar3 - uVar10 < uVar6) {
            uVar6 = uVar3 - uVar10;
          }
          iVar4 = uVar3 - uVar6;
        }
      }
      *(int *)(uVar2 + uVar8 * 4) = iVar4;
      uVar8 = uVar8 + 1;
    } while ((uVar9 - uVar12) + uVar8 != 0);
  }
  param_1[2] = uVar8;
  *param_1 = local_28;
  param_1[1] = uVar2;
  return;
}

