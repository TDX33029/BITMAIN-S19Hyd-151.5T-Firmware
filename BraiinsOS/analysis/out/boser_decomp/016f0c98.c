// FUN_016f0c98 @ 016f0c98 size=1992 calls_out=11 calls_in=1
// strings: regex parse error: ' ' | regex parse error: ' ' | regex parse error: ' ' | regex parse error: ' '

undefined4 FUN_016f0c98(int *****param_1,undefined4 *param_2)

{
  int ****ppppiVar1;
  int iVar2;
  undefined4 ******ppppppuVar3;
  undefined1 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int ****ppppiVar11;
  int iVar12;
  undefined4 uVar13;
  int ****local_b4;
  int ****local_b0;
  int *****local_ac;
  int *****local_a8;
  int *****local_a4;
  undefined1 auStack_a0 [16];
  int local_90;
  int local_8c;
  undefined4 ******local_7c;
  undefined1 *local_78;
  int *****local_70;
  undefined4 local_6c;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 ******local_54;
  undefined1 *local_50;
  int local_4c;
  int ******local_48;
  code *local_44;
  int local_40;
  code *local_3c;
  int local_38;
  code *local_34;
  int *local_30;
  code *local_2c;
  
  ppppiVar11 = *param_1;
  uVar13 = *param_2;
  iVar12 = param_2[1];
  if (ppppiVar11 == (int ****)0x22) {
    local_b4 = param_1[2];
    local_b0 = param_1[3];
    local_a4 = (int *****)0x0;
    local_a8 = param_1 + 4;
    local_ac = param_1 + 10;
    FUN_016f00bc(auStack_a0,&local_b4);
    ppppiVar11 = local_b4;
    ppppiVar1 = local_b0;
    if ((int ****)0x7 < local_b0) {
      iVar7 = FUN_01307168(10);
      if (iVar7 != 1) goto LAB_016f0fb4;
LAB_016f0d48:
      FUN_016eb78c(&local_7c,0x7e,0x4f);
      iVar7 = (**(code **)(iVar12 + 0xc))(uVar13,"regex parse error:\n\' \'",0x13);
      if (iVar7 != 0) {
LAB_016f1358:
        FUN_0134bd64(local_7c,local_78);
        uVar9 = 1;
        goto LAB_016f1434;
      }
      local_44 = (code *)&LAB_00632348;
      local_48 = (int ******)&local_7c;
      iVar7 = FUN_012fa178(uVar13,iVar12,&DAT_00582d7f,&local_48);
      if (iVar7 != 0) goto LAB_016f1358;
      FUN_016f05ac(&local_70,auStack_a0);
      local_44 = (code *)&LAB_00632348;
      local_48 = &local_70;
      iVar7 = FUN_012fa178(uVar13,iVar12,&DAT_00590e5f,&local_48);
      if (iVar7 != 0) {
LAB_016f134c:
        FUN_0134bd64(local_70,local_6c);
        goto LAB_016f1358;
      }
      local_44 = (code *)&LAB_00632348;
      local_48 = (int ******)&local_7c;
      iVar7 = FUN_012fa178(uVar13,iVar12,&DAT_00582d7f,&local_48);
      if (iVar7 != 0) goto LAB_016f134c;
      if (local_8c != 0) {
        iVar10 = 0;
        iVar7 = 4;
        iVar8 = 0;
        local_5c = 0;
        local_60 = 4;
        local_64 = 0;
        do {
          iVar2 = local_5c;
          local_2c = FUN_012fd02c;
          local_34 = FUN_012fd02c;
          local_58 = *(int *)(local_90 + 0x14 + iVar10) + -1;
          local_30 = &local_58;
          local_3c = FUN_012fd02c;
          iVar5 = local_90 + iVar10;
          local_44 = FUN_012fd02c;
          local_38 = iVar5 + 0x10;
          local_40 = iVar5 + 8;
          local_48 = (int ******)(iVar5 + 4);
          FUN_00664898(&local_54,&DAT_005b9f76,&local_48);
          iVar5 = local_4c;
          puVar4 = local_50;
          ppppppuVar3 = local_54;
          if (iVar2 == local_64) {
            FUN_019abd3c(&local_64);
            iVar7 = local_60;
          }
          local_5c = iVar2 + 1;
          piVar6 = (int *)(iVar7 + iVar8);
          *piVar6 = (int)ppppppuVar3;
          iVar8 = iVar8 + 0xc;
          iVar10 = iVar10 + 0x18;
          piVar6[1] = (int)puVar4;
          piVar6[2] = iVar5;
        } while (local_8c * 0x18 != iVar10);
        FUN_016eb0a0(&local_48,local_60,local_5c,"\n",1);
        local_50 = &LAB_00632348;
        local_54 = &local_48;
        iVar7 = FUN_012fa178(uVar13,iVar12,&DAT_00582d7f,&local_54);
        FUN_0134bd64(local_48,local_44);
        FUN_006a41c0(&local_64);
        if (iVar7 != 0) goto LAB_016f134c;
      }
      local_44 = FUN_016e2f84;
      local_48 = &local_ac;
      iVar12 = FUN_012fa178(uVar13,iVar12,&DAT_005933d6,&local_48);
LAB_016f1344:
      if (iVar12 != 0) goto LAB_016f134c;
      FUN_0134bd64(local_70,local_6c);
LAB_016f142c:
      FUN_0134bd64(local_7c,local_78);
      uVar9 = 0;
      goto LAB_016f1434;
    }
    for (; ppppiVar1 != (int ****)0x0; ppppiVar1 = (int ****)((int)ppppiVar1 - 1)) {
      if (*(char *)ppppiVar11 == '\n') goto LAB_016f0d48;
      ppppiVar11 = (int ****)((int)ppppiVar11 + 1);
    }
LAB_016f0fb4:
    iVar7 = (**(code **)(iVar12 + 0xc))(uVar13,"regex parse error:\n\' \'",0x13);
    uVar9 = 1;
    if (iVar7 != 0) goto LAB_016f1434;
    FUN_016f00bc(&local_48,&local_b4);
    FUN_016f05ac(&local_54,&local_48);
    FUN_016f041c(&local_48);
    local_44 = (code *)&LAB_00632348;
    local_48 = (int ******)&local_54;
    iVar7 = FUN_012fa178(uVar13,iVar12,&DAT_00590e5f,&local_48);
    if (iVar7 == 0) {
      local_44 = FUN_016e2f84;
      local_48 = &local_ac;
      iVar12 = FUN_012fa178(uVar13,iVar12,&DAT_005933d6,&local_48);
      goto LAB_016f140c;
    }
  }
  else {
    local_b4 = param_1[8];
    local_b0 = param_1[9];
    if (ppppiVar11 == (int ****)0x11 || ppppiVar11 == (int ****)0xe) {
      local_a4 = param_1 + 1;
    }
    else {
      local_a4 = (int *****)0x0;
      if (ppppiVar11 == (int ****)0xd) {
        local_a4 = param_1 + 1;
      }
    }
    local_a8 = param_1 + 10;
    local_ac = param_1;
    FUN_016f00bc(auStack_a0,&local_b4);
    ppppiVar11 = local_b4;
    ppppiVar1 = local_b0;
    if (local_b0 < (int ****)0x8) {
      for (; ppppiVar1 != (int ****)0x0; ppppiVar1 = (int ****)((int)ppppiVar1 - 1)) {
        if (*(char *)ppppiVar11 == '\n') goto LAB_016f10d4;
        ppppiVar11 = (int ****)((int)ppppiVar11 + 1);
      }
    }
    else {
      iVar7 = FUN_01307168(10);
      if (iVar7 == 1) {
LAB_016f10d4:
        FUN_016eb78c(&local_7c,0x7e,0x4f);
        iVar7 = (**(code **)(iVar12 + 0xc))(uVar13,"regex parse error:\n\' \'",0x13);
        if (iVar7 == 0) {
          local_44 = (code *)&LAB_00632348;
          local_48 = (int ******)&local_7c;
          iVar7 = FUN_012fa178(uVar13,iVar12,&DAT_00582d7f,&local_48);
          if (iVar7 == 0) {
            FUN_016f05ac(&local_70,auStack_a0);
            local_44 = (code *)&LAB_00632348;
            local_48 = &local_70;
            iVar7 = FUN_012fa178(uVar13,iVar12,&DAT_00590e5f,&local_48);
            if (iVar7 == 0) {
              local_44 = (code *)&LAB_00632348;
              local_48 = (int ******)&local_7c;
              iVar7 = FUN_012fa178(uVar13,iVar12,&DAT_00582d7f,&local_48);
              if (iVar7 == 0) {
                if (local_8c != 0) {
                  iVar10 = 0;
                  iVar7 = 4;
                  iVar8 = 0;
                  local_5c = 0;
                  local_60 = 4;
                  local_64 = 0;
                  do {
                    iVar2 = local_5c;
                    local_2c = FUN_012fd02c;
                    local_34 = FUN_012fd02c;
                    local_58 = *(int *)(local_90 + 0x14 + iVar10) + -1;
                    local_30 = &local_58;
                    local_3c = FUN_012fd02c;
                    iVar5 = local_90 + iVar10;
                    local_44 = FUN_012fd02c;
                    local_38 = iVar5 + 0x10;
                    local_40 = iVar5 + 8;
                    local_48 = (int ******)(iVar5 + 4);
                    FUN_00664898(&local_54,&DAT_005b9f76,&local_48);
                    iVar5 = local_4c;
                    puVar4 = local_50;
                    ppppppuVar3 = local_54;
                    if (iVar2 == local_64) {
                      FUN_019abd3c(&local_64);
                      iVar7 = local_60;
                    }
                    local_5c = iVar2 + 1;
                    piVar6 = (int *)(iVar7 + iVar8);
                    *piVar6 = (int)ppppppuVar3;
                    iVar8 = iVar8 + 0xc;
                    iVar10 = iVar10 + 0x18;
                    piVar6[1] = (int)puVar4;
                    piVar6[2] = iVar5;
                  } while (local_8c * 0x18 != iVar10);
                  FUN_016eb0a0(&local_48,local_60,local_5c,"\n",1);
                  local_50 = &LAB_00632348;
                  local_54 = &local_48;
                  iVar7 = FUN_012fa178(uVar13,iVar12,&DAT_00582d7f,&local_54);
                  FUN_0134bd64(local_48,local_44);
                  FUN_006a41c0(&local_64);
                  if (iVar7 != 0) goto LAB_016f134c;
                }
                local_44 = FUN_016ec71c;
                local_48 = &local_ac;
                iVar12 = FUN_012fa178(uVar13,iVar12,&DAT_005933d6,&local_48);
                goto LAB_016f1344;
              }
            }
            goto LAB_016f134c;
          }
        }
        goto LAB_016f1358;
      }
    }
    iVar7 = (**(code **)(iVar12 + 0xc))(uVar13,"regex parse error:\n\' \'",0x13);
    uVar9 = 1;
    if (iVar7 != 0) goto LAB_016f1434;
    FUN_016f00bc(&local_48,&local_b4);
    FUN_016f05ac(&local_54,&local_48);
    FUN_016f041c(&local_48);
    local_44 = (code *)&LAB_00632348;
    local_48 = (int ******)&local_54;
    iVar7 = FUN_012fa178(uVar13,iVar12,&DAT_00590e5f,&local_48);
    if (iVar7 == 0) {
      local_44 = FUN_016ec71c;
      local_48 = &local_ac;
      iVar12 = FUN_012fa178(uVar13,iVar12,&DAT_005933d6,&local_48);
LAB_016f140c:
      if (iVar12 == 0) {
        local_7c = local_54;
        local_78 = local_50;
        goto LAB_016f142c;
      }
    }
  }
  uVar9 = 1;
  FUN_0134bd64(local_54,local_50);
LAB_016f1434:
  FUN_016f041c(auStack_a0);
  return uVar9;
}

