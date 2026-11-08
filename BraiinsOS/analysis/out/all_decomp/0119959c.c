// FUN_0119959c @ 0119959c size=1176 calls_out=17 calls_in=1
// strings: dependencies | dependencies | The required validator compilation does not return None

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0119959c(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  char *pcVar10;
  uint unaff_r6;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined1 auStack_1b8 [56];
  int *local_180;
  undefined4 local_17c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c [3];
  undefined4 local_110;
  uint local_10c;
  undefined4 local_108;
  int local_104;
  undefined4 local_100;
  uint local_fc;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined1 *local_d8;
  undefined2 local_d4;
  undefined1 local_a0;
  char *local_9c;
  int *local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined1 local_70;
  int local_68;
  int local_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  undefined4 local_54;
  int *local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  if (*param_4 != '\x05') {
    uStack_80 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                             "dependencies",0xc);
    piVar5 = (int *)uStack_80;
    do {
      iVar6 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar6 + 1;
    if (-1 < iVar6) {
      DataMemoryBarrier(0xb);
      if (DAT_018da8bc != 0) {
        FUN_0120d52c();
      }
      do {
        iVar6 = *DAT_018da8b4;
        bVar2 = (bool)hasExclusiveAccess(DAT_018da8b4);
      } while (!bVar2);
      *DAT_018da8b4 = iVar6 + 1;
      if (-1 < iVar6) {
        local_88 = DAT_018da8b4;
        uStack_84 = DAT_018da8b8;
        local_a0 = 6;
        local_d4 = 0x2000;
        local_d8 = &DAT_80000028;
        local_f8 = 1;
        local_9c = param_4;
        local_f4 = uStack_80;
        iVar6 = thunk_FUN_016d4a50(0x80);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x80);
        }
        FUN_016dd1aa(iVar6,&local_f8,0x80);
LAB_011996dc:
        *param_1 = 1;
        param_1[1] = 0;
        param_1[2] = iVar6;
        return;
      }
    }
LAB_01199a44:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1199a44);
    (*pcVar1)();
  }
  FUN_0119d4b4(auStack_1b8,param_2,"dependencies",0xc);
  local_fc = *(uint *)(param_4 + 0xc);
  local_128 = 0;
  if ((0x7ffffff < local_fc) || (unaff_r6 = local_fc * 0x20, 0x7ffffffc < unaff_r6)) {
LAB_011996f0:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(local_128,unaff_r6);
  }
  uVar13 = 0;
  if (unaff_r6 == 0) {
    uVar4 = 4;
  }
  else {
    uVar4 = thunk_FUN_016d4a50(unaff_r6);
    if (uVar4 == 0) {
      local_128 = 4;
      goto LAB_011996f0;
    }
    local_128 = local_fc;
  }
  local_11c[2] = *(uint *)(param_4 + 4);
  local_110 = *(undefined4 *)(param_4 + 8);
  local_120 = 0;
  if (local_11c[2] == 0) {
    local_fc = 0;
  }
  local_11c[0] = (uint)(local_11c[2] != 0);
  local_108 = 0;
  local_11c[1] = 0;
  local_124 = uVar4;
  local_10c = local_11c[0];
  local_104 = local_11c[2];
  local_100 = local_110;
  do {
    uVar14 = FUN_00f45584(local_11c);
    pcVar10 = (char *)((ulonglong)uVar14 >> 0x20);
    iVar7 = (int)uVar14;
    if (iVar7 == 0) {
      puVar8 = (uint *)thunk_FUN_016d4a50(0xc);
      if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      *puVar8 = local_128;
      puVar8[1] = local_124;
      puVar8[2] = local_120;
      FUN_01161600(auStack_1b8);
      *param_1 = 1;
      param_1[1] = puVar8;
      param_1[2] = &DAT_01889208;
      return;
    }
    FUN_0119d4b4(&local_f8,auStack_1b8,*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8));
    if (*pcVar10 == '\x04') {
      piVar5 = (int *)thunk_FUN_016d4a50(8);
      if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,8);
      }
      do {
        iVar6 = *local_180;
        bVar2 = (bool)hasExclusiveAccess(local_180);
      } while (!bVar2);
      *local_180 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_01199a44;
      FUN_0119fb90(&local_48,pcVar10,local_180,local_17c);
      iVar6 = local_40;
      if (local_48 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("The required validator compilation does not return None",0x37,&DAT_01889228);
      }
      if (local_44 == 0) {
        thunk_FUN_016d3fb4(piVar5);
        goto LAB_0119996c;
      }
      *piVar5 = local_44;
      piVar5[1] = local_40;
      local_4c = 1;
      local_54 = 1;
      local_50 = piVar5;
      FUN_011c8210(&local_68,auStack_1b8,&local_54);
      uVar12 = *(undefined4 *)(iVar7 + 4);
      iVar6 = *(int *)(iVar7 + 8);
      if (iVar6 == 0) goto LAB_011998cc;
LAB_0119985c:
      iVar7 = thunk_FUN_016d4a50(iVar6);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar6);
      }
    }
    else {
      uVar3 = FUN_01352d48(local_70,pcVar10);
      FUN_0125acb4(&local_48,&local_f8,pcVar10,uVar3);
      iVar6 = local_44;
      if (local_48 == 0) {
LAB_0119996c:
        FUN_01161600(&local_f8);
        iVar7 = 0;
        for (iVar11 = uVar13 + 1; iVar11 != 1; iVar11 = iVar11 + -1) {
          if (*(int *)(uVar4 + iVar7) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(uVar4 + iVar7 + 4));
          }
          iVar9 = uVar4 + iVar7;
          iVar7 = iVar7 + 0x20;
          FUN_0115ccf0(iVar9 + 0xc);
        }
        if (local_128 != 0) {
          thunk_FUN_016d3fb4(uVar4);
        }
        FUN_01161600(auStack_1b8);
        goto LAB_011996dc;
      }
      local_64 = local_44;
      local_68 = local_48;
      local_60 = local_40;
      iStack_5c = local_3c;
      iStack_58 = local_38;
      uVar12 = *(undefined4 *)(iVar7 + 4);
      iVar6 = *(int *)(iVar7 + 8);
      if (iVar6 != 0) goto LAB_0119985c;
LAB_011998cc:
      iVar7 = 1;
    }
    FUN_016dd1aa(iVar7,uVar12,iVar6);
    local_3c = local_68;
    local_38 = local_64;
    iStack_34 = local_60;
    iStack_30 = iStack_5c;
    iStack_2c = iStack_58;
    local_48 = iVar6;
    local_44 = iVar7;
    local_40 = iVar6;
    if (uVar13 == local_128) {
      FUN_011cf65c(&local_128);
      uVar4 = local_124;
    }
    piVar5 = (int *)(uVar4 + uVar13 * 0x20);
    uVar13 = uVar13 + 1;
    *piVar5 = local_48;
    piVar5[1] = local_44;
    piVar5[2] = local_40;
    piVar5[3] = local_3c;
    piVar5[4] = local_38;
    piVar5[5] = iStack_34;
    piVar5[6] = iStack_30;
    piVar5[7] = iStack_2c;
    local_120 = uVar13;
    FUN_01161600(&local_f8);
  } while( true );
}

