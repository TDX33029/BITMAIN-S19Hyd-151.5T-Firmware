// FUN_012d76ec @ 012d76ec size=1416 calls_out=15 calls_in=1
// strings: 

void FUN_012d76ec(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  byte bVar13;
  int iVar14;
  undefined4 uVar15;
  uint *puVar16;
  uint *local_98;
  uint *local_94;
  int local_90;
  uint *local_80;
  undefined4 local_7c;
  uint *local_78;
  uint *local_74;
  uint *local_70;
  uint *local_6c;
  uint *local_68;
  uint *local_64;
  uint *local_48;
  uint *local_44;
  uint *local_40;
  uint *local_3c;
  uint local_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  
  switch(*param_3) {
  case 0:
    uVar15 = param_3[2];
    uVar2 = *(undefined2 *)((int)param_3 + 0x1e);
    uVar3 = *(undefined2 *)(param_3 + 7);
    uVar1 = *(undefined1 *)(param_3 + 8);
    uVar6 = param_3[3];
    FUN_012ea3a4(&local_98,param_3[5],param_3[6]);
    puVar16 = local_98;
    local_74 = local_94 + local_90 * 6;
    local_78 = local_98;
    local_80 = local_94;
    if (local_90 != 0) {
      local_44 = local_94;
      local_48 = local_94;
                    /* WARNING: Could not recover jumptable at 0x012d780c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_012d7810 + *(int *)(&DAT_012d7810 + *local_94 * 4)))();
      return;
    }
    uVar12 = (int)local_74 - (int)local_94;
    local_74 = (uint *)0x4;
    local_7c = 4;
    local_80 = (uint *)0x4;
    local_78 = (uint *)0x0;
    FUN_016543fc(local_94,(uVar12 >> 3) * -0x55555555);
    FUN_01654434(&local_80);
    FUN_012d858c(param_2);
    *(undefined1 *)(param_2 + 6) = uVar1;
    *(undefined2 *)((int)param_2 + 0x16) = uVar2;
    *(undefined2 *)(param_2 + 5) = uVar3;
    *param_2 = uVar15;
    param_2[1] = uVar6;
    iVar14 = param_2[10] + 1;
    param_2[2] = puVar16;
    param_2[3] = local_94;
    param_2[4] = 0;
    param_2[10] = 0;
    iVar10 = param_2[9];
    while (iVar14 = iVar14 + -1, iVar14 != 0) {
      FUN_012d7658(iVar10);
      iVar10 = iVar10 + 0x18;
    }
    param_2[0xd] = 0;
    break;
  case 1:
    local_48 = (uint *)&DAT_80000008;
    iVar10 = param_3[5] * 0x18;
    local_44 = (uint *)CONCAT31(local_44._1_3_,6);
    puVar8 = (undefined4 *)(param_3[4] + -0x18);
    do {
      puVar4 = puVar8;
      if (iVar10 == 0) {
        bVar13 = 6;
        goto LAB_012d7ac4;
      }
      puVar8 = puVar4 + 6;
      iVar10 = iVar10 + -0x18;
    } while ((undefined1 *)*puVar8 != &DAT_80000009);
    bVar13 = *(byte *)(puVar4 + 7);
    puVar9 = (undefined1 *)0x80000006;
    if ((char)bVar13 < '\0') {
      if ((bVar13 & 0x7f) < 0x1f) {
        puVar9 = &DAT_80000008;
      }
    }
    else if ((bVar13 & 0x7f) < 10) {
      puVar9 = &DAT_80000008;
    }
    FUN_01654718(&local_48);
    if (puVar9 != &DAT_80000008) {
      *(byte *)(param_1 + 1) = bVar13;
      *param_1 = puVar9;
      return;
    }
LAB_012d7ac4:
    iVar10 = param_2[0xd];
    if (iVar10 == param_2[0xb]) {
      FUN_018faa08();
    }
    *(byte *)(param_2[0xc] + iVar10) = bVar13;
    uVar15 = 0;
    puVar16 = (uint *)param_3[5];
    param_2[0xd] = iVar10 + 1;
    iVar10 = (int)puVar16 * 0x18;
    if ((uint *)0x5555555 < puVar16) {
LAB_012d7b10:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar15,iVar10);
    }
    puVar5 = (uint *)param_3[1];
    uVar11 = param_3[2];
    uVar6 = param_3[6];
    if (iVar10 == 0) {
      local_68 = (uint *)0x0;
      local_6c = (uint *)&DAT_00000008;
LAB_012d7ea0:
      local_64 = local_6c + (int)puVar16 * 6;
      if (puVar16 != (uint *)0x0) {
        local_40 = (uint *)*local_6c;
        local_3c = (uint *)local_6c[1];
        local_38 = local_6c[2];
        local_34 = local_6c[3];
        uStack_30 = local_6c[4];
        uStack_2c = local_6c[5];
        iVar10 = 0x10;
        if (0x80000000 < local_40) {
          iVar10 = (int)local_40 + 0x7fffffff;
        }
                    /* WARNING: Could not recover jumptable at 0x012d7f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        local_70 = local_6c;
        local_48 = local_6c;
        local_44 = local_6c;
        (*(code *)(&DAT_012d7f24 + *(int *)(&DAT_012d7f24 + iVar10 * 4)))();
        return;
      }
      puVar7 = local_6c;
      puVar16 = local_68;
    }
    else {
      puVar7 = (uint *)param_3[4];
      uVar15 = 8;
      local_64 = (uint *)FUN_01298504(iVar10,8);
      if (local_64 == (uint *)0x0) goto LAB_012d7b10;
      if (puVar16 != (uint *)0x0) {
        local_6c = local_64;
        if (iVar10 != 0) {
          iVar10 = 0x10;
          if (0x80000000 < *puVar7) {
            iVar10 = *puVar7 + 0x7fffffff;
          }
                    /* WARNING: Could not recover jumptable at 0x012d7bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          local_70 = puVar16;
          (*(code *)(&DAT_012d7bc8 + *(int *)(&DAT_012d7bc8 + iVar10 * 4)))();
          return;
        }
        local_68 = puVar16;
        goto LAB_012d7ea0;
      }
      puVar7 = local_64;
    }
    local_68 = (uint *)0x0;
    uVar12 = (int)local_64 - (int)puVar7;
    local_64 = (uint *)0x8;
    local_6c = (uint *)0x8;
    local_70 = (uint *)0x8;
    local_98 = puVar16;
    FUN_0165434c(puVar7,(uVar12 >> 3) * -0x55555555);
    local_38 = 0;
    local_40 = puVar16;
    local_3c = puVar7;
    FUN_01654474(&local_70);
    iVar10 = param_2[10];
    local_48 = puVar5;
    local_44 = (uint *)uVar11;
    local_34 = uVar6;
    if (iVar10 == param_2[8]) {
      FUN_015f5b18(param_2 + 8);
    }
    puVar8 = (undefined4 *)(param_2[9] + iVar10 * 0x18);
    *puVar8 = local_48;
    puVar8[1] = local_44;
    puVar8[2] = local_40;
    puVar8[3] = local_3c;
    puVar8[4] = local_38;
    puVar8[5] = local_34;
    param_2[10] = iVar10 + 1;
    break;
  case 5:
    uVar12 = param_3[7];
    if ((uint)param_2[10] <= uVar12) {
      *param_1 = &DAT_80000005;
      param_1[1] = uVar12;
      return;
    }
    break;
  case 6:
    uVar12 = param_3[0xc];
    if ((uint)param_2[10] <= uVar12) {
      *param_1 = &DAT_80000005;
      param_1[1] = uVar12;
      return;
    }
    if ((uint)param_2[0xd] <= uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar12,param_2[0xd],&DAT_01ce3648);
    }
    *(undefined1 *)(param_3 + 0xe) = *(undefined1 *)(param_2[0xc] + uVar12);
  }
  if (*(char *)(param_2 + 6) == '\0') {
    FUN_012de234(&local_48,param_3,param_2[0xe]);
  }
  else {
    FUN_012db54c(&local_48,param_3,param_2[0xe]);
  }
  if ((char)local_48 == '\x04') {
    param_1[1] = local_44;
    puVar9 = &DAT_80000008;
  }
  else {
    param_1[1] = local_48;
    param_1[2] = local_44;
    puVar9 = (undefined1 *)0x80000001;
  }
  *param_1 = puVar9;
  return;
}

