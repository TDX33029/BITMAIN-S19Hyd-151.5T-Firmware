// FUN_0130e774 @ 0130e774 size=804 calls_out=9 calls_in=2
// strings: 

void FUN_0130e774(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  bool bVar12;
  bool bVar13;
  ulonglong uVar14;
  uint *local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int local_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  int local_74;
  uint local_70;
  uint local_6c;
  uint *local_68;
  uint local_64;
  uint *local_60;
  uint *local_5c;
  uint local_58;
  uint *local_54;
  int iStack_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_30 [3];
  
  local_98 = (uint *)*param_2;
  iStack_94 = param_2[1];
  iStack_90 = param_2[2];
  iStack_8c = param_2[3];
  iStack_88 = param_2[4];
  local_84 = param_2[5];
  iStack_80 = param_2[6];
  iStack_7c = param_2[7];
  local_78 = param_2[8];
  iVar8 = param_2[9];
  local_70 = param_2[10] & 0xffffff00;
  local_74 = iVar8;
  if (((param_2[10] & 1U) == 0) && (iVar8 != 0)) {
    do {
      uVar1 = FUN_0130f688(&local_98);
      if ((uVar1 & 1) == 0) goto LAB_0130e818;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  uVar14 = FUN_0130f688(&local_98);
  if ((uVar14 & 1) == 0) {
LAB_0130e818:
    do {
      FUN_0130f6c8(&local_60,&local_98);
    } while (local_60 != (uint *)0x0);
    puVar2 = (uint *)&SUB_00000004;
    uVar1 = 0;
LAB_0130e840:
    param_1[2] = 0;
    *param_1 = 0;
    FUN_0134aee0(uVar1,puVar2,4,4);
  }
  else {
    if ((local_70 & 1) == 0) {
      iVar8 = FUN_01bf1250(local_78,local_74 + 1);
    }
    else if (local_78 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = FUN_01bf1250(local_78 + -1,local_74 + 1);
      iVar8 = iVar8 + 1;
    }
    uVar1 = iVar8 + 1;
    uVar7 = 0;
    if (iVar8 == -1) {
      uVar1 = 0xffffffff;
    }
    uVar9 = uVar1;
    if (uVar1 < 5) {
      uVar9 = 4;
    }
    bVar13 = 0x3ffffffe < uVar1;
    bVar12 = uVar1 == 0x3fffffff;
    uVar5 = uVar9 * 4;
    if (uVar1 < 0x40000000) {
      bVar13 = 0x7ffffffb < uVar5;
      bVar12 = uVar5 == 0x7ffffffc;
    }
    if (bVar13 && !bVar12) {
LAB_0130e8a4:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar7,uVar5);
    }
    uVar7 = 4;
    puVar2 = (uint *)FUN_01298504(uVar5,4);
    if (puVar2 == (uint *)0x0) goto LAB_0130e8a4;
    *puVar2 = (uint)(uVar14 >> 0x20);
    local_64 = 1;
    local_60 = local_98;
    local_5c = (uint *)iStack_94;
    local_58 = iStack_90;
    local_54 = (uint *)iStack_8c;
    iStack_50 = iStack_88;
    local_4c = local_84;
    iStack_48 = iStack_80;
    iStack_44 = iStack_7c;
    local_40 = local_78;
    local_3c = local_74;
    local_38 = local_70;
    local_6c = uVar9;
    local_68 = puVar2;
    while( true ) {
      uVar1 = local_38;
      uVar9 = local_64;
      local_38 = local_38 & 0xffffff00;
      iVar8 = local_3c;
      if ((uVar1 & 1) == 0) {
        for (; iVar8 != 0; iVar8 = iVar8 + -1) {
          uVar1 = FUN_0130f688(&local_60);
          if ((uVar1 & 1) == 0) goto LAB_0130e9d0;
        }
      }
      uVar14 = FUN_0130f688(&local_60);
      if ((uVar14 & 1) == 0) break;
      if (uVar9 == local_6c) {
        if ((local_38 & 1) == 0) {
          iVar8 = FUN_01bf1250(local_40,local_3c + 1);
        }
        else if (local_40 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = FUN_01bf1250(local_40 + -1,local_3c + 1);
          iVar8 = iVar8 + 1;
        }
        iVar4 = iVar8 + 1;
        if (iVar8 == -1) {
          iVar4 = -1;
        }
        FUN_006520b4(&local_6c,uVar9,iVar4,4,4);
        puVar2 = local_68;
      }
      puVar2[uVar9] = (uint)(uVar14 >> 0x20);
      local_64 = uVar9 + 1;
    }
LAB_0130e9d0:
    do {
      FUN_0130f6c8(local_30,&local_60);
      uVar1 = local_6c;
    } while (local_30[0] != 0);
    if (uVar9 != 1) {
      if (uVar9 == 0) goto LAB_0130e840;
      if (uVar9 < 0x15) {
        puVar3 = puVar2 + 1;
        iVar8 = 0;
        do {
          uVar6 = puVar3[-1];
          uVar5 = *puVar3;
          if (uVar5 < uVar6) {
            iVar4 = 0;
            do {
              *(uint *)((int)puVar3 + iVar4) = uVar6;
              if (iVar8 == iVar4) {
                puVar11 = puVar2;
                goto LAB_0130ea74;
              }
              iVar10 = iVar4 + -4;
              uVar6 = *(uint *)((int)puVar3 + iVar4 + -8);
              iVar4 = iVar10;
            } while (uVar5 < uVar6);
            puVar11 = (uint *)((int)puVar3 + iVar10);
LAB_0130ea74:
            *puVar11 = uVar5;
          }
          puVar3 = puVar3 + 1;
          iVar8 = iVar8 + -4;
        } while (puVar3 != puVar2 + uVar9);
      }
      else {
        FUN_0130eb34(puVar2,uVar9);
      }
    }
    local_54 = puVar2 + uVar9;
    local_58 = uVar1;
    local_60 = puVar2;
    local_5c = puVar2;
    FUN_0130fa24(param_1,&local_60);
  }
  return;
}

