// FUN_0151a6bc @ 0151a6bc size=732 calls_out=15 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0151a6bc(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  uint unaff_r6;
  undefined *puVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined1 auStack_1b8 [144];
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
  undefined1 auStack_f8 [136];
  undefined1 local_70;
  int local_68;
  undefined *local_64;
  int local_60;
  int iStack_5c;
  undefined *puStack_58;
  int local_50;
  undefined *local_4c;
  int local_48;
  int local_44;
  undefined *local_40;
  int iStack_3c;
  int iStack_38;
  undefined *puStack_34;
  int local_30;
  undefined *puStack_2c;
  int iStack_28;
  
  if (*param_4 == '\x05') {
    FUN_01526248(auStack_1b8,param_2,&DAT_00567d98,0x10);
    local_fc = *(uint *)(param_4 + 0xc);
    uVar9 = 0;
    if ((0x7ffffff < local_fc) || (unaff_r6 = local_fc * 0x20, 0x7ffffffc < unaff_r6)) {
LAB_0151a7b8:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar9,unaff_r6);
    }
    if (unaff_r6 == 0) {
      uVar4 = 4;
      local_128 = 0;
    }
    else {
      uVar9 = 4;
      uVar4 = FUN_01298504(unaff_r6,4);
      if (uVar4 == 0) goto LAB_0151a7b8;
      local_128 = local_fc;
    }
    uVar10 = 0;
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
    while( true ) {
      uVar11 = FUN_01a41998(local_11c);
      uVar9 = (undefined4)((ulonglong)uVar11 >> 0x20);
      iVar5 = (int)uVar11;
      if (iVar5 == 0) break;
      FUN_01526248(auStack_f8,auStack_1b8,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
      uVar3 = FUN_016731b0(local_70,uVar9);
      FUN_0156aca8(&local_50,auStack_f8,uVar9,uVar3);
      puVar8 = local_4c;
      if (local_50 == 0) {
        FUN_014ff9e0(auStack_f8);
        FUN_01501cbc(&local_128);
        FUN_014ff9e0(auStack_1b8);
        goto LAB_0151a7a4;
      }
      local_60 = local_48;
      iStack_5c = local_44;
      puStack_58 = local_40;
      local_64 = local_4c;
      local_68 = local_50;
      FUN_006666fc(&local_30,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
      local_44 = local_68;
      local_40 = local_64;
      iStack_3c = local_60;
      iStack_38 = iStack_5c;
      puStack_34 = puStack_58;
      local_50 = local_30;
      local_4c = puStack_2c;
      local_48 = iStack_28;
      if (uVar10 == local_128) {
        FUN_0155dd20(&local_128);
        uVar4 = local_124;
      }
      piVar6 = (int *)(uVar4 + uVar10 * 0x20);
      uVar10 = uVar10 + 1;
      *piVar6 = local_50;
      piVar6[1] = (int)local_4c;
      piVar6[2] = local_48;
      piVar6[3] = local_44;
      piVar6[4] = (int)local_40;
      piVar6[5] = iStack_3c;
      piVar6[6] = iStack_38;
      piVar6[7] = (int)puStack_34;
      local_120 = uVar10;
      FUN_014ff9e0(auStack_f8);
    }
    puVar7 = (uint *)thunk_FUN_01be5118(0xc);
    if (puVar7 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xc);
    }
    *puVar7 = local_128;
    puVar7[1] = local_124;
    puVar7[2] = local_120;
    FUN_014ff9e0(auStack_1b8);
    puVar8 = &DAT_01cfab20;
  }
  else {
    uVar11 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                          &DAT_00567d98,0x10);
    uVar9 = (undefined4)((ulonglong)uVar11 >> 0x20);
    piVar6 = (int *)uVar11;
    do {
      iVar5 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar5 + 1;
    if (iVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x151a998);
      (*pcVar1)();
    }
    uVar11 = FUN_015321a0();
    puVar8 = (undefined *)FUN_015956e0(piVar6,uVar9,piVar6,uVar9,uVar11,param_4,0x20);
LAB_0151a7a4:
    puVar7 = (uint *)0x0;
  }
  *param_1 = 1;
  param_1[1] = puVar7;
  param_1[2] = puVar8;
  return;
}

