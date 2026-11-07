// FUN_01561120 @ 01561120 size=952 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_01561120(uint *param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  
  uVar12 = param_1[3];
  if (uVar12 <= param_2) {
    return 0;
  }
  uVar9 = param_1[2];
  uVar8 = *param_1;
  puVar11 = (undefined4 *)param_1[1];
  uVar6 = uVar9 + param_2;
  uVar13 = uVar6 - uVar8;
  if (uVar6 < uVar8) {
    uVar13 = uVar6;
  }
  uVar6 = uVar12 + ~param_2;
  puVar3 = puVar11 + uVar13;
  uVar7 = *puVar3;
  if (uVar6 < param_2) {
    uVar4 = uVar13 + 1;
    uVar9 = uVar4 - uVar8;
    if (uVar4 < uVar8) {
      uVar9 = uVar4;
    }
    if (uVar6 == 0 || uVar13 == uVar9) goto LAB_015614c4;
    uVar5 = uVar13 - uVar9;
    uVar13 = uVar8 - uVar13;
    uVar10 = uVar8 - uVar9;
    uVar4 = uVar5 + uVar8;
    if (!CARRY4(uVar5,uVar8)) {
      uVar4 = uVar5;
    }
    if (uVar6 <= uVar10) {
      if (uVar6 <= uVar13) {
        FUN_016dd52c(puVar3,puVar11 + uVar9,uVar6 * 4);
        goto LAB_015614c4;
      }
      puVar2 = puVar11 + uVar9;
      if (uVar4 < uVar6) {
        FUN_016dd52c(puVar11,puVar2 + uVar13,(uVar6 - uVar13) * 4);
        iVar1 = uVar13 * 4;
        puVar11 = puVar2;
      }
      else {
        FUN_016dd52c(puVar3,puVar2,uVar13 * 4);
        puVar2 = puVar2 + uVar13;
        iVar1 = uVar6 - uVar13;
LAB_01561434:
        iVar1 = iVar1 << 2;
        puVar3 = puVar11;
        puVar11 = puVar2;
      }
LAB_015614b8:
      FUN_016dd52c(puVar3,puVar11,iVar1);
      goto LAB_015614c4;
    }
    if (uVar4 < uVar6) {
      if (uVar13 < uVar6) {
        iVar1 = uVar10 - uVar13;
        FUN_016dd52c(puVar11 + iVar1,puVar11,(uVar6 - uVar10) * 4);
        FUN_016dd52c(puVar11,puVar11 + (uVar8 - iVar1),iVar1 * 4);
        puVar11 = puVar11 + uVar9;
        iVar1 = uVar13 * 4;
      }
      else {
        FUN_016dd52c(puVar3 + uVar10,puVar11,(uVar6 - uVar10) * 4);
        puVar11 = puVar11 + uVar9;
        iVar1 = uVar10 * 4;
      }
LAB_01561414:
      puVar2 = puVar3;
    }
    else {
      puVar2 = puVar3 + uVar10;
      if (uVar13 < uVar6) {
        FUN_016dd52c(puVar3,puVar11 + uVar9,uVar10 * 4);
        FUN_016dd52c(puVar2,puVar11,(uVar13 - uVar10) * 4);
        iVar1 = (uVar6 - uVar13) * 4;
        puVar2 = puVar11;
        puVar11 = puVar11 + (uVar13 - uVar10);
      }
      else {
        FUN_016dd52c(puVar3,puVar11 + uVar9,uVar10 * 4);
        iVar1 = (uVar6 - uVar10) * 4;
      }
    }
  }
  else {
    uVar6 = uVar9 + 1;
    uVar13 = uVar6 - uVar8;
    if (uVar6 < uVar8) {
      uVar13 = uVar6;
    }
    param_1[2] = uVar13;
    if (param_2 == 0 || uVar13 == uVar9) goto LAB_015614c4;
    uVar4 = uVar13 - uVar9;
    uVar5 = uVar8 - uVar13;
    uVar6 = uVar4 + uVar8;
    if (!CARRY4(uVar4,uVar8)) {
      uVar6 = uVar4;
    }
    uVar4 = uVar8 - uVar9;
    if (param_2 <= uVar4) {
      if (uVar5 < param_2) {
        if (uVar6 < param_2) {
          puVar3 = puVar11 + uVar9;
          FUN_016dd52c(puVar11,puVar3 + uVar5,(param_2 - uVar5) * 4);
          puVar11 = puVar11 + uVar13;
          param_2 = uVar5;
        }
        else {
          FUN_016dd52c(puVar11 + uVar13,puVar11 + uVar9,uVar5 * 4);
          param_2 = param_2 - uVar5;
          puVar3 = puVar11 + uVar9 + uVar5;
        }
        FUN_016dd52c(puVar11,puVar3,param_2 * 4);
      }
      else {
        FUN_016dd52c(puVar11 + uVar13,puVar11 + uVar9,param_2 << 2);
      }
      goto LAB_015614c4;
    }
    if (param_2 <= uVar6) {
      puVar3 = puVar11 + uVar13;
      if (uVar5 < param_2) {
        FUN_016dd52c(puVar3,puVar11 + uVar9,uVar4 * 4);
        FUN_016dd52c(puVar3 + uVar4,puVar11,(uVar5 - uVar4) * 4);
        puVar2 = puVar11 + (uVar5 - uVar4);
        iVar1 = param_2 - uVar5;
        goto LAB_01561434;
      }
      FUN_016dd52c(puVar3,puVar11 + uVar9,uVar4 * 4);
      puVar3 = puVar3 + uVar4;
      iVar1 = (param_2 - uVar4) * 4;
      goto LAB_015614b8;
    }
    if (param_2 <= uVar5) {
      puVar3 = puVar11 + uVar13;
      FUN_016dd52c(puVar3 + uVar4,puVar11,(param_2 - uVar4) * 4);
      puVar11 = puVar11 + uVar9;
      iVar1 = uVar4 * 4;
      goto LAB_01561414;
    }
    iVar1 = uVar4 - uVar5;
    FUN_016dd52c(puVar11 + iVar1,puVar11,(param_2 - uVar4) * 4);
    FUN_016dd52c(puVar11,puVar11 + (uVar8 - iVar1),iVar1 * 4);
    puVar2 = puVar11 + uVar13;
    puVar11 = puVar11 + uVar9;
    iVar1 = uVar5 * 4;
  }
  FUN_016dd52c(puVar2,puVar11,iVar1);
LAB_015614c4:
  param_1[3] = uVar12 - 1;
  return uVar7;
}

