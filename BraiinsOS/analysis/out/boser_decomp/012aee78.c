// FUN_012aee78 @ 012aee78 size=1420 calls_out=14 calls_in=2
// strings: 

void FUN_012aee78(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 int param_6,int param_7,int param_8)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  int iVar17;
  int iVar18;
  int *local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 auStack_60 [4];
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int **local_34;
  undefined1 *local_30;
  undefined4 *local_2c;
  undefined1 *local_28;
  
  local_80 = &local_7c;
  local_7c = *(int *)(param_1 + 0xc) + 0x2a;
  if (param_7 == 0) {
    uVar10 = param_8 + 4;
  }
  else {
    uVar15 = *(undefined4 *)(param_1 + 4);
    FUN_012b2fd4(uVar15,"\n",1);
    FUN_012b2fd4(uVar15,"  ",2);
    FUN_012b2fd4(uVar15,&DAT_00571148,8);
    uVar10 = 10;
  }
  FUN_012b37ec(&local_78);
  FUN_006666fc(&local_6c,param_3,param_4);
  iVar6 = local_64;
  FUN_012b25d0(&local_6c);
  bVar1 = *(byte *)(param_1 + 0x15);
  bVar2 = iVar6 == 0;
  bVar3 = param_2 != 0 & bVar1;
  if ((param_6 != 0) && (bVar3 == 0)) {
    if (iVar6 != 0) {
      FUN_012b2fd4(&local_6c,&DAT_005319c3,1);
    }
    FUN_012b2fd4(&local_6c,param_5,param_6);
    bVar2 = local_64 == 0;
  }
  FUN_012b2c58(&local_6c,local_74,local_70);
  uVar15 = *(undefined4 *)(param_1 + 4);
  FUN_012b255c(uVar15,local_68,local_64);
  bVar4 = 0;
  if (((param_2 != 0) && ((*(byte *)(param_2 + 0x11c) & 0x10) == 0)) &&
     (iVar6 = FUN_012af518(bVar1,param_2), iVar6 != 0)) {
    FUN_012bad98(auStack_60,param_2);
    bVar4 = 0;
    if (local_58 != 0) {
      bVar4 = 1;
      uVar14 = local_58 * 0x24;
      iVar6 = local_5c;
      do {
        iVar18 = iVar6;
        if (uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c(&DAT_0041fbd2,0x1f,&DAT_01ce2414);
        }
        uVar14 = uVar14 - 0x24;
        iVar6 = iVar18 + 0x24;
      } while (*(char *)(iVar18 + 0x20) != '\0');
      uVar7 = FUN_012b235c(*(undefined4 *)(iVar18 + 0x18),*(undefined4 *)(iVar18 + 0x1c));
      if (iVar18 + 0x24 != local_5c + local_58 * 0x24) {
        puVar16 = (undefined4 *)(iVar18 + 0x3c);
        uVar14 = uVar14 / 0x24;
        do {
          if ((*(char *)(puVar16 + 2) == '\0') &&
             (uVar8 = FUN_012b235c(*puVar16,puVar16[1]), uVar7 <= uVar8)) {
            uVar7 = uVar8;
          }
          puVar16 = puVar16 + 9;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      FUN_012b37ec(&local_54,uVar10 + 2);
      if (!bVar2) {
        if (0xffff < uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_0056adc8,0x41,&DAT_01ce2424);
        }
        local_28 = (undefined1 *)CONCAT22(local_28._2_2_,(short)uVar10);
        local_2c = (undefined4 *)0x0;
        local_30 = &LAB_018a13b8;
        local_34 = (int **)&DAT_00570850;
        FUN_012fa178(uVar15,&DAT_01ce25b4,&DAT_0041fbf1,&local_34);
      }
      FUN_012b2fd4(uVar15,&DAT_00567898,0x10);
      iVar6 = local_5c;
      for (iVar18 = 0; local_58 * 0x24 != iVar18; iVar18 = iVar18 + 0x24) {
        if (*(char *)(iVar6 + 0x20) != '\x01') {
          iVar17 = local_5c + iVar18;
          uVar12 = *(undefined4 *)(iVar17 + 0x18);
          uVar13 = *(undefined4 *)(iVar17 + 0x1c);
          local_38 = 0;
          local_3c = 1;
          local_40 = 0;
          local_28 = &LAB_018a13b8;
          local_2c = &local_48;
          local_30 = &DAT_012b59c8;
          local_34 = &local_80;
          local_48 = uVar12;
          local_44 = uVar13;
          FUN_012fa178(&local_40,&DAT_01ce25b4,&DAT_004200d0,&local_34);
          if (*(int *)(iVar17 + 0xc) != -0x80000000) {
            iVar9 = FUN_012b235c(uVar12,uVar13);
            if (0xffff < uVar7 - iVar9) {
              puVar11 = &DAT_01ce2434;
              goto LAB_012af3c0;
            }
            local_28 = (undefined1 *)CONCAT22(local_28._2_2_,(short)(uVar7 - iVar9));
            local_2c = (undefined4 *)0x0;
            local_30 = &LAB_018a13b8;
            local_34 = (int **)&DAT_00570850;
            FUN_012fa178(&local_40,&DAT_01ce25b4,&DAT_0041fbfc,&local_34);
            FUN_012b255c(&local_40,*(undefined4 *)(iVar17 + 0x10),*(undefined4 *)(iVar17 + 0x14));
          }
          FUN_012b25d0(&local_40);
          FUN_012b2c58(&local_40,local_50,local_4c);
          if (uVar10 >> 0x10 != 0) {
            puVar11 = &DAT_01ce2444;
LAB_012af3c0:
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_0056adc8,0x41,puVar11);
          }
          local_28 = (undefined1 *)CONCAT22(local_28._2_2_,(short)uVar10);
          local_2c = (undefined4 *)0x0;
          local_30 = &LAB_018a13b8;
          local_34 = (int **)&DAT_00570850;
          FUN_012fa178(uVar15,&DAT_01ce25b4,&DAT_0041fc07,&local_34);
          FUN_012b255c(uVar15,local_3c,local_38);
          FUN_0134bd64(local_40,local_3c);
        }
        iVar6 = iVar6 + 0x24;
      }
      FUN_0134bd64(local_54,local_50);
    }
    FUN_01298844(auStack_60);
  }
  if ((bVar3 & param_6 != 0) == 1) {
    local_2c = (undefined4 *)0x0;
    local_34 = (int **)0x0;
    local_30 = (undefined1 *)0x1;
    if ((bool)(bVar4 | bVar2 ^ 1U)) {
      FUN_012b2fd4(&local_34,&DAT_00420454,2);
    }
    FUN_012b2fd4(&local_34,param_5,param_6);
    FUN_012b2c58(&local_34,local_74,local_70);
    puVar5 = local_30;
    FUN_012b255c(uVar15,local_30,local_2c);
    FUN_0134bd64(local_34,puVar5);
  }
  FUN_0134bd64(local_6c,local_68);
  FUN_0134bd64(local_78,local_74);
  return;
}

