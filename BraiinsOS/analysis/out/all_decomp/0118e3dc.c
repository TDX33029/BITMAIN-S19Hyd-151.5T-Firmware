// FUN_0118e3dc @ 0118e3dc size=972 calls_out=14 calls_in=1
// strings: dependentSchemas | dependentSchemas

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0118e3dc(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  uint unaff_r6;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 auStack_1b0 [144];
  uint local_120;
  int *local_11c;
  uint local_118;
  uint local_114 [3];
  undefined4 local_108;
  uint local_104;
  undefined4 local_100;
  int local_fc;
  undefined4 local_f8;
  uint local_f4;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined1 *local_d0;
  undefined2 local_cc;
  undefined1 local_98;
  char *local_94;
  int *local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined1 local_68;
  int local_60;
  int local_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  if (*param_4 == '\x05') {
    FUN_0119d4b4(auStack_1b0,param_2,"dependentSchemas",0x10);
    local_f4 = *(uint *)(param_4 + 0xc);
    local_120 = 0;
    if ((0x7ffffff < local_f4) || (unaff_r6 = local_f4 * 0x20, 0x7ffffffc < unaff_r6)) {
LAB_0118e530:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(local_120,unaff_r6);
    }
    uVar8 = 0;
    if (unaff_r6 == 0) {
      piVar4 = (int *)&DAT_00000004;
    }
    else {
      piVar4 = (int *)thunk_FUN_016d4a50(unaff_r6);
      if (piVar4 == (int *)0x0) {
        local_120 = 4;
        goto LAB_0118e530;
      }
      local_120 = local_f4;
    }
    local_114[2] = *(uint *)(param_4 + 4);
    local_108 = *(undefined4 *)(param_4 + 8);
    if (local_114[2] == 0) {
      local_f4 = 0;
    }
    local_114[0] = (uint)(local_114[2] != 0);
    local_118 = 0;
    local_100 = 0;
    local_114[1] = 0;
    local_11c = piVar4;
    local_104 = local_114[0];
    local_fc = local_114[2];
    local_f8 = local_108;
    while( true ) {
      uVar11 = FUN_00f45584(local_114);
      uVar9 = (undefined4)((ulonglong)uVar11 >> 0x20);
      iVar10 = (int)uVar11;
      if (iVar10 == 0) {
        puVar6 = (uint *)thunk_FUN_016d4a50(0xc);
        if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
        *puVar6 = local_120;
        puVar6[1] = (uint)local_11c;
        puVar6[2] = local_118;
        FUN_01161600(auStack_1b0);
        *param_1 = 1;
        param_1[1] = puVar6;
        param_1[2] = &DAT_01889238;
        return;
      }
      FUN_0119d4b4(&local_f0,auStack_1b0,*(undefined4 *)(iVar10 + 4),*(undefined4 *)(iVar10 + 8));
      uVar3 = FUN_01352d48(local_68,uVar9);
      FUN_0125acb4(&local_48,&local_f0,uVar9,uVar3);
      iVar5 = local_44;
      if (local_48 == 0) break;
      uVar9 = *(undefined4 *)(iVar10 + 4);
      iVar10 = *(int *)(iVar10 + 8);
      local_5c = local_44;
      local_58 = local_40;
      iStack_54 = local_3c;
      iStack_50 = local_38;
      local_60 = local_48;
      if (iVar10 == 0) {
        iVar5 = 1;
      }
      else {
        iVar5 = thunk_FUN_016d4a50(iVar10);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar10);
        }
      }
      FUN_016dd1aa(iVar5,uVar9,iVar10);
      local_3c = local_60;
      local_38 = local_5c;
      iStack_34 = local_58;
      iStack_30 = iStack_54;
      iStack_2c = iStack_50;
      local_48 = iVar10;
      local_44 = iVar5;
      local_40 = iVar10;
      if (uVar8 == local_120) {
        FUN_011cf65c(&local_120);
        piVar4 = local_11c;
      }
      piVar7 = piVar4 + uVar8 * 8;
      uVar8 = uVar8 + 1;
      *piVar7 = local_48;
      piVar7[1] = local_44;
      piVar7[2] = local_40;
      piVar7[3] = local_3c;
      piVar7[4] = local_38;
      piVar7[5] = iStack_34;
      piVar7[6] = iStack_30;
      piVar7[7] = iStack_2c;
      local_118 = uVar8;
      FUN_01161600(&local_f0);
    }
    FUN_01161600(&local_f0);
    piVar7 = piVar4;
    for (iVar10 = uVar8 + 1; iVar10 != 1; iVar10 = iVar10 + -1) {
      if (*piVar7 != 0) {
        thunk_FUN_016d3fb4(piVar7[1]);
      }
      FUN_0115ccf0(piVar7 + 3);
      piVar7 = piVar7 + 8;
    }
    if (local_120 != 0) {
      thunk_FUN_016d3fb4(piVar4);
    }
    FUN_01161600(auStack_1b0);
LAB_0118e51c:
    *param_1 = 1;
    param_1[1] = 0;
    param_1[2] = iVar5;
    return;
  }
  uStack_78 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                           "dependentSchemas",0x10);
  piVar4 = (int *)uStack_78;
  do {
    iVar10 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar10 + 1;
  if (-1 < iVar10) {
    DataMemoryBarrier(0xb);
    if (DAT_018da8bc != 0) {
      FUN_0120d52c();
    }
    do {
      iVar10 = *DAT_018da8b4;
      bVar2 = (bool)hasExclusiveAccess(DAT_018da8b4);
    } while (!bVar2);
    *DAT_018da8b4 = iVar10 + 1;
    if (-1 < iVar10) {
      local_80 = DAT_018da8b4;
      uStack_7c = DAT_018da8b8;
      local_98 = 6;
      local_cc = 0x2000;
      local_d0 = &DAT_80000028;
      local_f0 = 1;
      local_94 = param_4;
      local_ec = uStack_78;
      iVar5 = thunk_FUN_016d4a50(0x80);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x80);
      }
      FUN_016dd1aa(iVar5,&local_f0,0x80);
      goto LAB_0118e51c;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x118e7b0);
  (*pcVar1)();
}

