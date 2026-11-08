// FUN_016b6c44 @ 016b6c44 size=400 calls_out=3 calls_in=1
// strings: 

void FUN_016b6c44(undefined4 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 local_30;
  int local_2c;
  uint local_28;
  
  iVar10 = param_1[1];
  uVar9 = param_1[2];
  FUN_01299464(&local_30,iVar10,uVar9);
  uVar12 = *(uint *)(param_2 + 0x58);
  uVar1 = uVar12 >> (*(uint *)(param_2 + 0x15c) & 0x1f);
  if (uVar1 == 0) {
    uVar11 = param_1[3];
  }
  else {
    uVar7 = 0;
    uVar11 = param_1[3];
    uVar8 = uVar11 & 0x1f;
    puVar5 = &DAT_01d08aa8;
    do {
      if (uVar7 == local_28) {
        uVar7 = local_28;
        goto LAB_016b6da4;
      }
      uVar2 = *(uint *)(local_2c + uVar7 * 4);
      if (uVar7 << uVar8 != uVar2) {
        do {
          uVar3 = uVar2;
          if (local_28 <= uVar3 >> uVar8) {
            puVar5 = &DAT_01d08ab8;
            uVar7 = uVar3 >> uVar8;
            goto LAB_016b6da4;
          }
          uVar2 = *(uint *)(local_2c + (uVar3 >> uVar8) * 4);
        } while (uVar7 << uVar8 != uVar2);
        if (uVar9 <= uVar7) {
          puVar5 = &DAT_01d08ac8;
          local_28 = uVar9;
          goto LAB_016b6da4;
        }
        *(uint *)(iVar10 + uVar7 * 4) = uVar3;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar1);
  }
  puVar5 = &DAT_01d08ad8;
  if (uVar12 != 0) {
    iVar6 = uVar12 << 2;
    puVar4 = *(uint **)(param_2 + 0x54);
    do {
      uVar7 = *puVar4 >> (uVar11 & 0x1f);
      if (uVar9 <= *puVar4 >> (uVar11 & 0x1f)) goto LAB_016b6db0;
      iVar6 = iVar6 + -4;
      *puVar4 = *(uint *)(iVar10 + uVar7 * 4);
      puVar4 = puVar4 + 1;
    } while (iVar6 != 0);
  }
  if (*(int *)(param_2 + 0x1a8) != 0) {
    iVar6 = *(int *)(param_2 + 0x1a8) << 2;
    puVar4 = *(uint **)(param_2 + 0x1a4);
    do {
      uVar7 = *puVar4 >> (uVar11 & 0x1f);
      if (uVar9 <= *puVar4 >> (uVar11 & 0x1f)) {
LAB_016b6db0:
        local_28 = uVar9;
LAB_016b6da4:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar7,local_28,puVar5);
      }
      iVar6 = iVar6 + -4;
      *puVar4 = *(uint *)(iVar10 + uVar7 * 4);
      puVar4 = puVar4 + 1;
    } while (iVar6 != 0);
  }
  FUN_0134aee0(local_30,local_2c,4,4);
  FUN_0134aee0(*param_1,iVar10,4,4);
  return;
}

