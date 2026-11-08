// FUN_0133446c @ 0133446c size=1076 calls_out=7 calls_in=7
// strings: enum and message with the same name | enum has no children | enum and message with the same name | not found | not found

void FUN_0133446c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_64 = CONCAT22(local_64._2_2_,1);
  local_70 = CONCAT31(local_70._1_3_,1);
  local_6c = 0;
  local_7c = 0;
  local_74 = 0x2e;
  local_88 = 0x2e;
  uStack_84 = param_3;
  uStack_80 = param_4;
  local_78 = param_4;
  local_68 = param_4;
  uVar15 = FUN_015bb1b4(&local_88);
  iVar13 = (int)((ulonglong)uVar15 >> 0x20);
  iVar9 = (int)uVar15;
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01890968);
  }
  uVar8 = *(uint *)(param_2 + 0x50);
  uVar3 = *(uint *)(param_2 + 0x54);
  if (uVar8 < uVar3) {
LAB_0133487c:
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar3,uVar8,&DAT_0188f948);
  }
  if (uVar3 != 0) {
    iVar12 = *(int *)(param_2 + 0x4c);
    iVar10 = uVar3 * 0xa0;
    do {
      if (*(char *)(iVar12 + 0xc) == '\x01') {
        uVar1 = *(undefined4 *)(iVar12 + 4);
        iVar4 = *(int *)(iVar12 + 8);
      }
      else {
        uVar1 = 1;
        iVar4 = 0;
      }
      if ((iVar4 == iVar13) && (iVar4 = thunk_FUN_016dd50a(uVar1,iVar9,iVar13), iVar4 == 0))
      goto LAB_01334534;
      iVar12 = iVar12 + 0xa0;
      iVar10 = iVar10 + -0xa0;
    } while (iVar10 != 0);
  }
  iVar12 = 0;
LAB_01334534:
  uVar8 = *(uint *)(param_2 + 0x60);
  uVar3 = *(uint *)(param_2 + 100);
  if (uVar8 < uVar3) goto LAB_0133487c;
  iVar10 = 0;
  if (uVar3 != 0) {
    iVar10 = *(int *)(param_2 + 0x5c);
    iVar4 = uVar3 * 0x50;
    do {
      if (*(char *)(iVar10 + 0xc) == '\x01') {
        uVar1 = *(undefined4 *)(iVar10 + 4);
        iVar5 = *(int *)(iVar10 + 8);
      }
      else {
        uVar1 = 1;
        iVar5 = 0;
      }
      if ((iVar5 == iVar13) && (iVar5 = thunk_FUN_016dd50a(uVar1,iVar9,iVar13), iVar5 == 0))
      goto LAB_013345a8;
      iVar10 = iVar10 + 0x50;
      iVar4 = iVar4 + -0x50;
    } while (iVar4 != 0);
    iVar10 = 0;
  }
LAB_013345a8:
  iVar9 = 1;
  local_58 = 0;
  local_5c = 1;
  local_60 = 0;
  pcVar2 = "enum and message with the same name";
  puVar6 = &DAT_01890948;
  if (iVar12 == 0) {
    if (iVar10 == 0) {
      uVar1 = 9;
      pcVar2 = "not found";
      goto LAB_01334874;
    }
  }
  else {
    iVar9 = 0;
    bVar14 = iVar10 != 0;
    iVar10 = iVar12;
    if (bVar14) {
      uVar1 = 0x23;
      puVar6 = &DAT_01890958;
      goto LAB_01334874;
    }
  }
  iVar12 = 0;
  iVar13 = 1;
  local_50 = local_88;
  uStack_4c = uStack_84;
  uStack_48 = uStack_80;
  uStack_44 = local_7c;
  uStack_40 = local_78;
  local_3c = local_74;
  uStack_38 = local_70;
  uStack_34 = local_6c;
  uStack_30 = local_68;
  uStack_2c = local_64;
LAB_01334628:
  do {
    uVar15 = FUN_015bb1b4(&local_50);
    iVar5 = (int)((ulonglong)uVar15 >> 0x20);
    iVar4 = (int)uVar15;
    if (iVar4 == 0) {
      *param_1 = local_60;
      param_1[1] = local_5c;
      param_1[2] = local_58;
      param_1[3] = iVar9;
      param_1[4] = iVar10;
      return;
    }
    if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_015be724("enum has no children",0x14,&DAT_01890978);
    }
    uVar3 = 0;
    iVar9 = 0;
    if (iVar12 != 0) {
      if (local_60 == iVar12) {
        FUN_0132f8cc(&local_60,iVar12,1,1,1);
        iVar12 = local_58;
        iVar13 = local_5c;
      }
      iVar9 = iVar12 + 1;
      *(undefined1 *)(iVar13 + iVar12) = 0x2e;
      local_58 = iVar9;
    }
    uVar1 = 1;
    if (*(char *)(iVar10 + 0xc) != '\0') {
      uVar1 = *(undefined4 *)(iVar10 + 4);
      uVar3 = *(uint *)(iVar10 + 8);
      if ((uint)(local_60 - iVar9) < uVar3) {
        FUN_0132f8cc(&local_60,iVar9,uVar3,1,1);
        iVar9 = local_58;
      }
    }
    iVar13 = local_5c;
    FUN_016dd1aa(local_5c + iVar9,uVar1,uVar3);
    uVar8 = *(uint *)(iVar10 + 0x38);
    iVar12 = iVar9 + uVar3;
    uVar3 = *(uint *)(iVar10 + 0x3c);
    local_58 = iVar12;
    if (uVar8 < uVar3) {
LAB_01334818:
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar3,uVar8,&DAT_0188f948);
    }
    if (uVar3 != 0) {
      iVar11 = *(int *)(iVar10 + 0x34);
      iVar9 = uVar3 * 0xa0;
      do {
        if (*(char *)(iVar11 + 0xc) == '\x01') {
          uVar1 = *(undefined4 *)(iVar11 + 4);
          iVar7 = *(int *)(iVar11 + 8);
        }
        else {
          uVar1 = 1;
          iVar7 = 0;
        }
        if ((iVar7 == iVar5) && (iVar7 = thunk_FUN_016dd50a(uVar1,iVar4,iVar5), iVar7 == 0))
        goto LAB_01334724;
        iVar11 = iVar11 + 0xa0;
        iVar9 = iVar9 + -0xa0;
      } while (iVar9 != 0);
    }
    iVar11 = 0;
LAB_01334724:
    uVar8 = *(uint *)(iVar10 + 0x48);
    uVar3 = *(uint *)(iVar10 + 0x4c);
    if (uVar8 < uVar3) goto LAB_01334818;
    if (uVar3 != 0) {
      iVar7 = *(int *)(iVar10 + 0x44);
      iVar9 = uVar3 * 0x50;
      do {
        if (*(char *)(iVar7 + 0xc) == '\x01') {
          uVar1 = *(undefined4 *)(iVar7 + 4);
          iVar10 = *(int *)(iVar7 + 8);
        }
        else {
          uVar1 = 1;
          iVar10 = 0;
        }
        if ((iVar10 == iVar5) && (iVar10 = thunk_FUN_016dd50a(uVar1,iVar4,iVar5), iVar10 == 0))
        goto joined_r0x0133478c;
        iVar7 = iVar7 + 0x50;
        iVar9 = iVar9 + -0x50;
      } while (iVar9 != 0);
    }
    iVar7 = 0;
joined_r0x0133478c:
    if (iVar11 == 0) {
      iVar9 = 1;
      iVar10 = iVar7;
      if (iVar7 == 0) {
        uVar1 = 9;
        pcVar2 = "not found";
        puVar6 = &DAT_01890948;
        goto LAB_01334874;
      }
      goto LAB_01334628;
    }
    iVar9 = 0;
    iVar10 = iVar11;
  } while (iVar7 == 0);
  uVar1 = 0x23;
  pcVar2 = "enum and message with the same name";
  puVar6 = &DAT_01890958;
LAB_01334874:
                    /* WARNING: Subroutine does not return */
  FUN_015be724(pcVar2,uVar1,puVar6);
}

