// FUN_01aa63dc @ 01aa63dc size=1240 calls_out=9 calls_in=1
// strings: [consistency] loop condition of the previous loop

undefined4 FUN_01aa63dc(undefined4 *param_1,undefined4 param_2,int param_3,uint param_4,int param_5)

{
  char **ppcVar1;
  code *pcVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  code *pcVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined4 local_94;
  char *local_90;
  int local_8c;
  int local_88;
  undefined4 uStack_84;
  byte local_79;
  char **local_78;
  code *local_74;
  uint local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_40;
  char **local_38;
  undefined4 local_34;
  char **local_30;
  undefined4 local_2c;
  byte local_28;
  
  iVar10 = param_1[1];
  local_90 = (char *)param_1[2];
  if (local_90 == (char *)0x0 && iVar10 == 0) {
    return 0;
  }
  if ((param_4 & 0xff) == 2) {
    if (param_5 != 0) {
      local_90 = (char *)*param_1;
      local_8c = param_1[1];
      local_88 = param_1[2];
      uStack_84 = param_1[3];
      FUN_014fa1b8();
      if ((local_88 == 0) && (local_8c == 0)) goto LAB_01aa66e8;
      goto LAB_01aa6478;
    }
    if ((local_90 == (char *)0x0) || (pcVar7 = local_90, param_1[3] == 0)) {
      if (iVar10 == 0) goto LAB_01aa66fc;
      pcVar7 = (char *)*param_1;
    }
    if (*pcVar7 != '/') {
LAB_01aa66fc:
      if (local_90 != (char *)0x0) {
        local_8c = param_1[3];
        local_78 = &local_90;
        local_74 = FUN_014fa97c;
        iVar6 = FUN_012fa178(param_2,param_3,&DAT_00590e5f,&local_78);
        if (iVar6 != 0) {
          return 1;
        }
      }
      local_90 = (char *)*param_1;
      local_78 = &local_90;
      local_74 = FUN_014fa97c;
      local_8c = iVar10;
      uVar8 = FUN_012fa178(param_2,param_3,&DAT_00590e5f,&local_78);
      return uVar8;
    }
    local_90 = (char *)*param_1;
    local_8c = param_1[1];
    local_88 = param_1[2];
    uStack_84 = param_1[3];
    FUN_014fa1b8();
    if ((local_88 == 0) && (local_8c == 0)) {
      return 0;
    }
  }
  else {
    local_90 = (char *)*param_1;
    local_8c = param_1[1];
    local_88 = param_1[2];
    uStack_84 = param_1[3];
    FUN_014fa1b8();
    if (local_88 == 0 && local_8c == 0) {
      if (param_5 == 0) {
        return 0;
      }
LAB_01aa66e8:
      uVar8 = (**(code **)(param_3 + 0x10))(param_2,0x2f);
      return uVar8;
    }
  }
LAB_01aa6478:
  bVar12 = true;
  local_79 = 2;
  if (local_88 != 0 || local_8c != 0) {
    do {
      local_30 = &local_90;
      local_2c = 0;
      pcVar9 = (code *)0x0;
      while( true ) {
        FUN_014f9adc(&local_78,&local_30);
        pcVar2 = local_74;
        if ((char)local_70 == '\x02') break;
        FUN_01aa68cc(local_78,local_74,&local_90);
        bVar4 = FUN_014f9ef0();
        if (1 < bVar4) break;
        pcVar9 = pcVar2;
      }
      FUN_014fa08c(&local_90,pcVar9);
      iVar10 = local_88;
      if (local_88 == 0) {
        iVar10 = local_8c;
      }
      if (local_88 == 0 && iVar10 == 0) {
        if ((param_5 == 0) && ((local_79 & 1) != 0)) {
          iVar10 = (**(code **)(param_3 + 0xc))(param_2,".//",3);
        }
        else {
          iVar10 = (**(code **)(param_3 + 0x10))(param_2,0x2f);
        }
        bVar12 = true;
        if (iVar10 != 0) goto LAB_01aa6880;
        break;
      }
      bVar4 = 0;
      bVar12 = true;
      uVar11 = 0;
      local_40 = 0;
      local_48 = 0;
      local_50 = 0;
      local_58 = 0;
      local_60 = 0;
      local_68 = 0;
      local_70 = 0;
      local_78 = (char **)0x0;
      local_34 = 0;
      local_94 = 0;
      local_38 = &local_90;
      while (FUN_014f9adc(&local_30,&local_38), bVar3 = local_28, uVar8 = local_2c,
            ppcVar1 = local_30, local_28 != 2) {
        FUN_01aa68cc(local_30,local_2c,&local_90);
        cVar5 = FUN_014f9ef0();
        if (cVar5 == '\0') {
LAB_01aa65ac:
          bVar12 = true;
        }
        else {
          if (cVar5 == '\x01') {
            bVar12 = uVar11 == 0;
            uVar11 = uVar11 - 1;
            if (bVar12) {
              uVar11 = 0;
            }
            if (uVar11 < 8) {
              (&local_78)[uVar11 * 2] = (char **)0x0;
            }
            goto LAB_01aa65ac;
          }
          if (uVar11 < 8) {
            uVar13 = FUN_01aa68cc(ppcVar1,uVar8,&local_90);
            (&local_78)[uVar11 * 2] = (char **)uVar13;
            if (uVar11 == 0) {
              bVar4 = bVar3;
            }
            bVar12 = false;
            (&local_74)[uVar11 * 2] = (code *)((ulonglong)uVar13 >> 0x20);
            local_94 = uVar8;
          }
          uVar11 = uVar11 + 1;
        }
      }
      for (iVar10 = 0; iVar10 != 0x40; iVar10 = iVar10 + 8) {
        iVar6 = *(int *)((int)&local_78 + iVar10);
        if ((iVar6 != 0) &&
           (iVar6 = FUN_01aa62a4(param_2,param_3,&local_79,bVar4 & 1,iVar6,
                                 *(undefined4 *)((int)&local_74 + iVar10),param_5,param_4),
           iVar6 != 0)) goto LAB_01aa6880;
      }
      FUN_014fa08c(&local_90,local_94);
    } while ((bool)((local_88 != 0 || local_8c != 0) & bVar12));
  }
  iVar10 = local_88;
  if (local_88 == 0) {
    iVar10 = local_8c;
  }
  if (local_88 == 0 && iVar10 == 0) {
LAB_01aa6888:
    uVar8 = 0;
  }
  else {
    if (bVar12) {
LAB_01aa689c:
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("[consistency] loop condition of the previous loop",99,&DAT_01d2e48c);
    }
    local_2c = 0;
    local_30 = &local_90;
    do {
      FUN_014f9adc(&local_78,&local_30);
      uVar11 = local_70;
      pcVar9 = local_74;
      ppcVar1 = local_78;
      if ((local_70 & 0xff) == 2) goto LAB_01aa6888;
      FUN_01aa68cc(local_78,local_74,&local_90);
      cVar5 = FUN_014f9ef0();
      local_38 = (char **)CONCAT31(local_38._1_3_,cVar5);
      if (cVar5 != '\x02') {
        FUN_014fa920(&local_38);
        goto LAB_01aa689c;
      }
      uVar13 = FUN_01aa68cc(ppcVar1,pcVar9,&local_90);
      iVar10 = FUN_01aa62a4(param_2,param_3,&local_79,uVar11 & 1,uVar13,param_5,param_4);
    } while (iVar10 == 0);
LAB_01aa6880:
    uVar8 = 1;
  }
  return uVar8;
}

