// FUN_009d6718 @ 009d6718 size=544 calls_out=4 calls_in=1
// strings: capacity overflow

void FUN_009d6718(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_34;
  
  uVar9 = param_2[3];
  uVar11 = param_1[3];
  if (CARRY4(uVar11,uVar9)) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("capacity overflow",0x11,&DAT_01870fec);
  }
  uVar5 = *param_1;
  uVar7 = uVar5;
  if (uVar5 < uVar11 + uVar9) {
    if (uVar5 - uVar11 < uVar9) {
      FUN_009b6da4(param_1,uVar11,uVar9,4,4);
      uVar11 = param_1[3];
      uVar7 = *param_1;
      uVar1 = param_1[2];
      if (uVar1 <= uVar5 - uVar11) goto LAB_009d6794;
    }
    else {
      uVar1 = param_1[2];
      if (uVar1 <= uVar5 - uVar11) goto LAB_009d6794;
    }
    uVar2 = uVar5 - uVar1;
    uVar3 = uVar11 - uVar2;
    if ((uVar3 < uVar2) && (uVar3 <= uVar7 - uVar5)) {
      FUN_016dd1aa(param_1[1] + uVar5 * 4,param_1[1],uVar3 * 4);
    }
    else {
      FUN_016dd52c(param_1[1] + (uVar7 - uVar2) * 4,param_1[1] + uVar1 * 4,uVar2 * 4);
      param_1[2] = uVar7 - uVar2;
    }
  }
LAB_009d6794:
  if (uVar9 == 0) {
    uVar5 = 0;
    uVar1 = 0;
    local_34 = 0;
  }
  else {
    uVar1 = *param_2;
    uVar2 = param_2[2];
    uVar5 = uVar2 - uVar1;
    if (uVar2 < uVar1) {
      uVar5 = uVar2;
    }
    if (uVar1 - uVar5 < uVar9) {
      local_34 = uVar9 - (uVar1 - uVar5);
    }
    else {
      local_34 = 0;
      uVar1 = uVar5 + uVar9;
    }
  }
  uVar10 = param_1[2];
  uVar4 = uVar10 + uVar11;
  uVar3 = param_1[1];
  uVar8 = param_2[1];
  uVar2 = uVar4 - uVar7;
  if (uVar4 < uVar7) {
    uVar2 = uVar4;
  }
  uVar4 = uVar7 - uVar2;
  uVar1 = uVar1 - uVar5;
  iVar6 = uVar8 + uVar5 * 4;
  uVar5 = uVar3 + uVar2 * 4;
  if (uVar4 < uVar1) {
    FUN_016dd1aa(uVar5,iVar6,uVar4 * 4);
    iVar6 = iVar6 + uVar4 * 4;
    uVar5 = uVar3;
    uVar2 = uVar1 - uVar4;
  }
  else {
    uVar2 = uVar1;
  }
  FUN_016dd1aa(uVar5,iVar6,uVar2 * 4);
  uVar10 = uVar11 + uVar1 + uVar10;
  uVar5 = uVar10 - uVar7;
  if (uVar10 < uVar7) {
    uVar5 = uVar10;
  }
  uVar7 = uVar7 - uVar5;
  if (uVar7 < local_34) {
    FUN_016dd1aa(uVar3 + uVar5 * 4,uVar8,uVar7 * 4);
    uVar8 = uVar8 + uVar7 * 4;
    iVar6 = (local_34 - uVar7) * 4;
  }
  else {
    uVar3 = uVar3 + uVar5 * 4;
    iVar6 = local_34 << 2;
  }
  FUN_016dd1aa(uVar3,uVar8,iVar6);
  param_1[3] = uVar11 + uVar9;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}

