// FUN_01522e5c @ 01522e5c size=964 calls_out=19 calls_in=1
// strings: dependencies | dependencies | The required validator compilation does not return None

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01522e5c(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  uint *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined1 auStack_1c0 [56];
  int *local_188;
  undefined4 local_184;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124 [3];
  undefined4 local_118;
  uint local_114;
  undefined4 local_110;
  int local_10c;
  undefined4 local_108;
  uint local_104;
  undefined1 auStack_100 [136];
  undefined1 local_78;
  int local_70;
  undefined *local_6c;
  undefined *local_68;
  int iStack_64;
  undefined *puStack_60;
  undefined4 local_5c;
  undefined4 *local_58;
  undefined4 local_54;
  int local_50;
  undefined *local_4c;
  undefined *local_48;
  int local_44;
  undefined *local_40;
  undefined *puStack_3c;
  int iStack_38;
  undefined *puStack_34;
  int local_30;
  undefined *puStack_2c;
  undefined *puStack_28;
  
  if (*param_4 == '\x05') {
    FUN_01526248(auStack_1c0,param_2,"dependencies",0xc);
    local_104 = *(uint *)(param_4 + 0xc);
    uVar12 = 0;
    puVar6 = param_1;
    if ((0x7ffffff < local_104) ||
       (puVar6 = (undefined4 *)(local_104 * 0x20), (undefined4 *)0x7ffffffc < puVar6)) {
LAB_01522f50:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar12,puVar6);
    }
    uVar11 = 0;
    if (puVar6 == (undefined4 *)0x0) {
      uVar4 = 4;
      local_130 = 0;
    }
    else {
      uVar12 = 4;
      uVar4 = FUN_01298504(puVar6,4);
      if (uVar4 == 0) goto LAB_01522f50;
      local_130 = local_104;
    }
    local_124[2] = *(uint *)(param_4 + 4);
    local_118 = *(undefined4 *)(param_4 + 8);
    if (local_124[2] == 0) {
      local_104 = 0;
    }
    local_124[0] = (uint)(local_124[2] != 0);
    local_128 = 0;
    local_110 = 0;
    local_124[1] = 0;
    local_12c = uVar4;
    local_114 = local_124[0];
    local_10c = local_124[2];
    local_108 = local_118;
    while( true ) {
      uVar14 = FUN_01a41998(local_124);
      pcVar9 = (char *)((ulonglong)uVar14 >> 0x20);
      iVar5 = (int)uVar14;
      if (iVar5 == 0) break;
      FUN_01526248(auStack_100,auStack_1c0,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
      if (*pcVar9 == '\x04') {
        puVar6 = (undefined4 *)thunk_FUN_01be5118(8);
        if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,8);
        }
        do {
          iVar7 = *local_188;
          bVar2 = (bool)hasExclusiveAccess(local_188);
        } while (!bVar2);
        *local_188 = iVar7 + 1;
        if (iVar7 < 0) goto LAB_01523228;
        FUN_015279dc(&local_50,pcVar9,local_188,local_184);
        puVar13 = local_48;
        if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("The required validator compilation does not return None",0x37,&DAT_01cfab10)
          ;
        }
        if (local_4c == (undefined *)0x0) {
          thunk_FUN_01be4678(puVar6);
LAB_015231d0:
          FUN_014ff9e0(auStack_100);
          FUN_01501cbc(&local_130);
          FUN_014ff9e0(auStack_1c0);
          goto LAB_01522f3c;
        }
        *puVar6 = local_4c;
        puVar6[1] = local_48;
        local_54 = 1;
        local_5c = 1;
        local_58 = puVar6;
        FUN_01574d5c(&local_70,auStack_1c0,&local_5c);
      }
      else {
        uVar3 = FUN_016731b0(local_78,pcVar9);
        FUN_0156aca8(&local_50,auStack_100,pcVar9,uVar3);
        puVar13 = local_4c;
        if (local_50 == 0) goto LAB_015231d0;
        local_68 = local_48;
        iStack_64 = local_44;
        puStack_60 = local_40;
        local_6c = local_4c;
        local_70 = local_50;
      }
      FUN_006666fc(&local_30,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
      local_44 = local_70;
      local_40 = local_6c;
      puStack_3c = local_68;
      iStack_38 = iStack_64;
      puStack_34 = puStack_60;
      local_50 = local_30;
      local_4c = puStack_2c;
      local_48 = puStack_28;
      if (uVar11 == local_130) {
        FUN_0155dd20(&local_130);
        uVar4 = local_12c;
      }
      piVar8 = (int *)(uVar4 + uVar11 * 0x20);
      uVar11 = uVar11 + 1;
      *piVar8 = local_50;
      piVar8[1] = (int)local_4c;
      piVar8[2] = (int)local_48;
      piVar8[3] = local_44;
      piVar8[4] = (int)local_40;
      piVar8[5] = (int)puStack_3c;
      piVar8[6] = iStack_38;
      piVar8[7] = (int)puStack_34;
      local_128 = uVar11;
      FUN_014ff9e0(auStack_100);
    }
    puVar10 = (uint *)thunk_FUN_01be5118(0xc);
    if (puVar10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xc);
    }
    *puVar10 = local_130;
    puVar10[1] = local_12c;
    puVar10[2] = local_128;
    FUN_014ff9e0(auStack_1c0);
    puVar13 = &DAT_01cfaaf0;
  }
  else {
    uVar14 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                          "dependencies",0xc);
    uVar12 = (undefined4)((ulonglong)uVar14 >> 0x20);
    piVar8 = (int *)uVar14;
    do {
      iVar5 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar5 + 1;
    if (iVar5 < 0) {
LAB_01523228:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1523228);
      (*pcVar1)();
    }
    uVar14 = FUN_015321a0();
    puVar13 = (undefined *)FUN_015956e0(piVar8,uVar12,piVar8,uVar12,uVar14,param_4,0x20);
LAB_01522f3c:
    puVar10 = (uint *)0x0;
  }
  *param_1 = 1;
  param_1[1] = puVar10;
  param_1[2] = puVar13;
  return;
}

