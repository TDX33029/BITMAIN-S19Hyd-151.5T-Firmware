// FUN_01a6434c @ 01a6434c size=708 calls_out=6 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01a6434c(uint *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint local_d0;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint local_30;
  uint *local_2c;
  uint local_28;
  
  iVar9 = *param_2;
  if (iVar9 == 1) {
    local_d0 = param_2[1];
  }
  FUN_015e8ad4(&local_30,param_2[3],param_2[4]);
  FUN_01299464(&local_80,param_2[6],param_2[7]);
  uVar8 = local_28;
  puVar7 = local_2c;
  uVar6 = local_30;
  uVar5 = uStack_78;
  uVar4 = uStack_7c;
  uVar3 = local_80;
  iVar2 = param_2[0x12];
  uVar1 = *(undefined1 *)((int)param_2 + 0x49);
  FUN_015e8ad4(&local_a0,param_2[9],param_2[10]);
  uVar16 = param_2[0xd];
  uVar13 = 0;
  iVar15 = uVar16 * 0x4c;
  if (0x1af286b < uVar16) {
LAB_01a64418:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar13,iVar15);
  }
  if (iVar15 == 0) {
    local_2c = (uint *)0x4;
    local_30 = 0;
  }
  else {
    iVar12 = param_2[0xc];
    uVar13 = 4;
    uVar10 = FUN_01298504(iVar15,4);
    if (uVar10 == 0) goto LAB_01a64418;
    local_30 = uVar16;
    local_2c = (uint *)uVar10;
    if (uVar16 != 0) {
      uVar14 = 0;
      do {
        if (iVar15 == 0) break;
        FUN_01a6434c(&local_80,iVar12);
        FUN_01bed4e2(uVar10,&local_80,0x4c);
        uVar14 = uVar14 + 1;
        uVar10 = uVar10 + 0x4c;
        iVar15 = iVar15 + -0x4c;
        iVar12 = iVar12 + 0x4c;
      } while (uVar16 != uVar14);
    }
  }
  uVar13 = 0;
  local_90 = local_30;
  uStack_8c = (uint)local_2c;
  uVar10 = param_2[0x10];
  iVar15 = uVar10 * 0xc;
  uStack_88 = uVar16;
  local_28 = uVar16;
  if (0xaaaaaaa < uVar10) {
LAB_01a644f4:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar13,iVar15);
  }
  if (iVar15 == 0) {
    local_2c = (uint *)&SUB_00000004;
    local_30 = 0;
  }
  else {
    iVar12 = param_2[0xf];
    uVar13 = 4;
    puVar11 = (uint *)FUN_01298504(iVar15,4);
    if (puVar11 == (uint *)0x0) goto LAB_01a644f4;
    local_30 = uVar10;
    local_2c = puVar11;
    if (uVar10 != 0) {
      uVar16 = 0;
      do {
        if (iVar15 == 0) break;
        FUN_015e8ad4(&local_80,*(undefined4 *)(iVar12 + 4),*(undefined4 *)(iVar12 + 8));
        uVar16 = uVar16 + 1;
        iVar15 = iVar15 + -0xc;
        iVar12 = iVar12 + 0xc;
        *puVar11 = local_80;
        puVar11[1] = uStack_7c;
        puVar11[2] = uStack_78;
        puVar11 = puVar11 + 3;
      } while (uVar10 != uVar16);
    }
  }
  param_1[0xe] = local_30;
  param_1[0xf] = (uint)local_2c;
  param_1[0x10] = uVar10;
  uVar16 = param_2[0x11];
  param_1[2] = uVar6;
  param_1[3] = (uint)puVar7;
  param_1[4] = uVar8;
  param_1[5] = uVar3;
  param_1[6] = uVar4;
  param_1[7] = uVar5;
  *(char *)(param_1 + 0x12) = (char)iVar2;
  param_1[0x11] = uVar16;
  param_1[8] = local_a0;
  param_1[9] = uStack_9c;
  param_1[10] = uStack_98;
  *(undefined1 *)((int)param_1 + 0x49) = uVar1;
  param_1[0xb] = local_90;
  param_1[0xc] = uStack_8c;
  param_1[0xd] = uStack_88;
  *param_1 = (uint)(iVar9 == 1);
  param_1[1] = local_d0;
  return;
}

