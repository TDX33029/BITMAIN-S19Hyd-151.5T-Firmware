// FUN_0151aa84 @ 0151aa84 size=1404 calls_out=21 calls_in=1
// strings: dependentRequired | dependentRequired | The required validator compilation does not return None

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0151aa84(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined *puVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  uint unaff_r7;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  uint uVar19;
  undefined8 uVar20;
  uint local_244;
  undefined1 auStack_230 [56];
  int *local_1f8;
  undefined4 local_1f4;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194 [3];
  undefined4 local_188;
  uint local_184;
  undefined4 local_180;
  int local_17c;
  undefined4 local_178;
  uint local_174;
  undefined1 auStack_170 [56];
  int *local_138;
  undefined *local_134;
  undefined4 local_dc;
  undefined4 *local_d8;
  undefined4 local_d4;
  int local_d0;
  int *piStack_cc;
  undefined *puStack_c8;
  int local_c0;
  int local_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int local_a8;
  int *local_a4;
  undefined *local_a0;
  int local_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  undefined4 local_88;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  undefined *local_2c;
  
  if (*param_4 == '\x05') {
    FUN_01526248(auStack_230,param_2,"dependentRequired",0x11);
    local_174 = *(uint *)(param_4 + 0xc);
    uVar17 = 0;
    if ((0x7ffffff < local_174) || (unaff_r7 = local_174 * 0x20, 0x7ffffffc < unaff_r7)) {
LAB_0151ab6c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar17,unaff_r7);
    }
    uVar12 = 0;
    if (unaff_r7 == 0) {
      uVar3 = 4;
      local_1a0 = 0;
    }
    else {
      uVar17 = 4;
      uVar3 = FUN_01298504(unaff_r7,4);
      if (uVar3 == 0) goto LAB_0151ab6c;
      local_1a0 = local_174;
    }
    local_194[2] = *(uint *)(param_4 + 4);
    local_188 = *(undefined4 *)(param_4 + 8);
    if (local_194[2] == 0) {
      local_174 = 0;
    }
    local_194[0] = (uint)(local_194[2] != 0);
    local_198 = 0;
    local_180 = 0;
    local_194[1] = 0;
    local_19c = uVar3;
    local_184 = local_194[0];
    local_17c = local_194[2];
    local_178 = local_188;
    while( true ) {
      uVar20 = FUN_01a41998(local_194);
      pcVar9 = (char *)((ulonglong)uVar20 >> 0x20);
      iVar7 = (int)uVar20;
      if (iVar7 == 0) break;
      FUN_01526248(auStack_170,auStack_230,*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8));
      if (*pcVar9 != '\x04') goto LAB_0151af24;
      uVar19 = *(uint *)(pcVar9 + 0xc);
      if (1 < uVar19) {
        iVar11 = *(int *)(pcVar9 + 8);
        if (uVar19 == 3) {
          iVar18 = FUN_01578ae8(iVar11,iVar11 + 0x18);
          if (iVar18 != 0) goto LAB_0151ae54;
          iVar18 = FUN_01578ae8(iVar11,iVar11 + 0x30);
          if (iVar18 != 0) goto LAB_0151ae54;
          iVar11 = FUN_01578ae8(iVar11 + 0x18,iVar11 + 0x30);
        }
        else if (uVar19 == 2) {
          iVar11 = FUN_01578ae8(iVar11,iVar11 + 0x18);
        }
        else {
          if (uVar19 < 0x10) {
            uVar13 = 0;
            iVar18 = iVar11;
            local_244 = uVar19;
            do {
              local_244 = local_244 - 1;
              iVar18 = iVar18 + 0x18;
              uVar10 = uVar13 + 1;
              if (uVar10 < uVar19) {
                iVar15 = iVar18;
                uVar16 = local_244;
                do {
                  iVar4 = FUN_01578ae8(iVar11 + uVar13 * 0x18,iVar15);
                  if (iVar4 != 0) goto LAB_0151ae54;
                  iVar15 = iVar15 + 0x18;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              uVar13 = uVar10;
            } while (uVar10 != uVar19);
            goto LAB_0151ad40;
          }
          FUN_0153c128(&local_a8,uVar19);
          local_bc = iVar11 + uVar19 * 0x18;
          local_c0 = iVar11;
          iVar11 = FUN_015979b4(&local_c0,&local_a8);
        }
        if (iVar11 != 0) goto LAB_0151ae54;
      }
LAB_0151ad40:
      puVar5 = (undefined4 *)thunk_FUN_01be5118(8);
      if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      do {
        iVar11 = *local_1f8;
        bVar2 = (bool)hasExclusiveAccess(local_1f8);
      } while (!bVar2);
      *local_1f8 = iVar11 + 1;
      if (iVar11 < 0) goto LAB_0151b00c;
      FUN_015279dc(&local_a8,pcVar9,local_1f8,local_1f4);
      puVar8 = local_a0;
      if (local_a8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("The required validator compilation does not return None",0x37,&DAT_01cfab60);
      }
      if (local_a4 == (int *)0x0) {
        thunk_FUN_01be4678(puVar5);
        goto LAB_0151af94;
      }
      *puVar5 = local_a4;
      puVar5[1] = local_a0;
      local_d4 = 1;
      local_dc = 1;
      local_d8 = puVar5;
      FUN_006666fc(&local_d0,*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8));
      FUN_01574d5c(&local_c0,auStack_230,&local_dc);
      local_a8 = local_d0;
      local_a4 = piStack_cc;
      local_a0 = puStack_c8;
      local_9c = local_c0;
      local_98 = local_bc;
      iStack_94 = iStack_b8;
      iStack_90 = iStack_b4;
      iStack_8c = iStack_b0;
      if (uVar12 == local_1a0) {
        FUN_0155dd20(&local_1a0);
        uVar3 = local_19c;
      }
      piVar6 = (int *)(uVar3 + uVar12 * 0x20);
      uVar12 = uVar12 + 1;
      *piVar6 = local_a8;
      piVar6[1] = (int)local_a4;
      piVar6[2] = (int)local_a0;
      piVar6[3] = local_9c;
      piVar6[4] = local_98;
      piVar6[5] = iStack_94;
      piVar6[6] = iStack_90;
      piVar6[7] = iStack_8c;
      local_198 = uVar12;
      FUN_014ff9e0(auStack_170);
    }
    puVar14 = (uint *)thunk_FUN_01be5118(0xc);
    if (puVar14 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xc);
    }
    *puVar14 = local_1a0;
    puVar14[1] = local_19c;
    puVar14[2] = local_198;
    FUN_014ff9e0(auStack_230);
    puVar8 = &DAT_01cfab40;
    goto LAB_0151afb0;
  }
  uVar20 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                        "dependentRequired",0x11);
  uVar17 = (undefined4)((ulonglong)uVar20 >> 0x20);
  piVar6 = (int *)uVar20;
  do {
    iVar7 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar7 + 1;
  if (iVar7 < 0) goto LAB_0151b00c;
  uVar20 = FUN_015321a0();
  puVar8 = (undefined *)FUN_015956e0(piVar6,uVar17,piVar6,uVar17,uVar20,param_4,0x20);
  goto LAB_0151afac;
LAB_0151ae54:
  do {
    iVar7 = *local_138;
    bVar2 = (bool)hasExclusiveAccess(local_138);
  } while (!bVar2);
  *local_138 = iVar7 + 1;
  if (iVar7 < 0) {
LAB_0151b00c:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x151b00c);
    (*pcVar1)();
  }
  do {
    iVar7 = *local_138;
    bVar2 = (bool)hasExclusiveAccess(local_138);
  } while (!bVar2);
  *local_138 = iVar7 + 1;
  if (iVar7 < 0) goto LAB_0151b00c;
  local_38 = FUN_015321a0();
  local_88 = 0x8000002b;
  local_a8 = 1;
  local_50 = 6;
  local_2c = local_134;
  local_30 = local_138;
  local_a0 = local_134;
  local_a4 = local_138;
  local_4c = pcVar9;
  puVar8 = (undefined *)thunk_FUN_01be5118(0x80);
  if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x80);
  }
  FUN_01bed4e2(puVar8,&local_a8,0x80);
  goto LAB_0151af94;
LAB_0151af24:
  do {
    iVar7 = *local_138;
    bVar2 = (bool)hasExclusiveAccess(local_138);
  } while (!bVar2);
  *local_138 = iVar7 + 1;
  if (iVar7 < 0) goto LAB_0151b00c;
  do {
    iVar7 = *local_138;
    bVar2 = (bool)hasExclusiveAccess(local_138);
  } while (!bVar2);
  *local_138 = iVar7 + 1;
  if (iVar7 < 0) goto LAB_0151b00c;
  uVar20 = FUN_015321a0();
  puVar8 = (undefined *)FUN_015956e0(local_138,local_134,local_138,local_134,uVar20,pcVar9,1);
LAB_0151af94:
  FUN_014ff9e0(auStack_170);
  FUN_01501cbc(&local_1a0);
  FUN_014ff9e0(auStack_230);
LAB_0151afac:
  puVar14 = (uint *)0x0;
LAB_0151afb0:
  *param_1 = 1;
  param_1[1] = puVar14;
  param_1[2] = puVar8;
  return;
}

