// FUN_0130ec80 @ 0130ec80 size=364 calls_out=5 calls_in=0
// strings: 

void FUN_0130ec80(undefined4 *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  uint *local_30;
  uint *puStack_2c;
  uint uStack_28;
  uint *local_24;
  
  uVar11 = param_3 - param_2;
  uVar9 = 0;
  if (param_3 < param_2) {
    uVar11 = 0;
  }
  bVar14 = 0x3ffffffe < uVar11;
  bVar13 = uVar11 == 0x3fffffff;
  uVar10 = uVar11 * 4;
  if (uVar11 < 0x40000000) {
    bVar14 = 0x7ffffffb < uVar10;
    bVar13 = uVar10 == 0x7ffffffc;
  }
  if (bVar14 && !bVar13) {
LAB_0130eca4:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar9,uVar10);
  }
  if (uVar10 == 0) {
    puVar1 = (uint *)&SUB_00000004;
    uVar11 = 0;
  }
  else {
    uVar9 = 4;
    puVar1 = (uint *)FUN_01298504(uVar10,4);
    if (puVar1 == (uint *)0x0) goto LAB_0130eca4;
  }
  if (param_3 <= param_2) {
LAB_0130edb4:
    param_1[2] = 0;
    *param_1 = 0;
    FUN_0134aee0(uVar11,puVar1,4,4);
    return;
  }
  uVar10 = 0;
  do {
    puVar1[uVar10] = param_2 + uVar10;
    uVar10 = uVar10 + 1;
  } while ((param_2 - param_3) + uVar10 != 0);
  if (uVar10 != 1) {
    if (uVar10 == 0) goto LAB_0130edb4;
    if (uVar10 < 0x15) {
      puVar2 = puVar1 + 1;
      iVar7 = 0;
      puVar6 = puVar2;
      do {
        uVar12 = puVar6[-1];
        uVar8 = *puVar6;
        if (uVar8 < uVar12) {
          iVar3 = iVar7;
          do {
            *(uint *)((int)puVar2 + iVar3) = uVar12;
            if (iVar3 == 0) {
              puVar5 = puVar1;
              goto LAB_0130ed9c;
            }
            iVar4 = iVar3 + -4;
            uVar12 = *(uint *)((int)puVar2 + iVar3 + -8);
            iVar3 = iVar4;
          } while (uVar8 < uVar12);
          puVar5 = (uint *)((int)puVar2 + iVar4);
LAB_0130ed9c:
          *puVar5 = uVar8;
        }
        puVar6 = puVar6 + 1;
        iVar7 = iVar7 + 4;
      } while (puVar6 != puVar1 + uVar10);
    }
    else {
      FUN_0130eb34(puVar1,uVar10);
    }
  }
  local_24 = puVar1 + uVar10;
  local_30 = puVar1;
  puStack_2c = puVar1;
  uStack_28 = uVar11;
  FUN_0130fa24(param_1,&local_30);
  return;
}

