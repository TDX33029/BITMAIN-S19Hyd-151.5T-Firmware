// FUN_00ab5054 @ 00ab5054 size=436 calls_out=7 calls_in=2
// strings: 

void FUN_00ab5054(undefined4 *param_1,byte *param_2)

{
  uint uVar1;
  uint *puVar2;
  ulonglong *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  bool bVar9;
  bool bVar10;
  ulonglong in_d16;
  uint local_38;
  uint local_34;
  uint local_30;
  uint uStack_2c;
  
  puVar6 = (undefined1 *)0x80000000;
  uVar7 = (uint)*param_2;
  uVar1 = uVar7;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_2) {
  case 1:
    puVar6 = (undefined1 *)0x80000003;
    uVar7 = (uint)param_2[1];
    uVar1 = 0;
    break;
  case 2:
    puVar3 = (ulonglong *)(param_2 + 0x10);
    if (*(int *)(param_2 + 8) == 2) {
      in_d16 = *puVar3;
    }
    else if (*(int *)(param_2 + 8) == 1) {
      in_d16 = FUN_01bf0cac((int)*puVar3,*(undefined4 *)(param_2 + 0x14));
    }
    else {
      in_d16 = FUN_01bf0e80((int)*puVar3,*(undefined4 *)(param_2 + 0x14));
    }
    puVar6 = (undefined1 *)0x80000001;
    uVar1 = 0;
    break;
  case 3:
    FUN_006666fc(&local_38,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
    puVar6 = (undefined1 *)0x80000002;
    uVar1 = local_38 & 0xffffff00;
    in_d16 = CONCAT44(local_30,local_34);
    uVar7 = local_38;
    break;
  case 4:
    puVar8 = *(undefined1 **)(param_2 + 0xc);
    puVar6 = (undefined1 *)0x0;
    bVar10 = (undefined1 *)0xffffffe < puVar8;
    bVar9 = puVar8 == (undefined1 *)0xfffffff;
    uVar1 = (int)puVar8 * 0x10;
    if (puVar8 < (undefined1 *)0x10000000) {
      bVar10 = 0x7ffffff7 < uVar1;
      bVar9 = uVar1 == 0x7ffffff8;
    }
    if (bVar10 && !bVar9) {
LAB_00ab50bc:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(puVar6,uVar1);
    }
    iVar5 = *(int *)(param_2 + 8);
    if (uVar1 == 0) {
      uVar7 = 8;
    }
    else {
      puVar6 = (undefined1 *)0x8;
      uVar7 = FUN_01298504(uVar1,8);
      if (uVar7 == 0) goto LAB_00ab50bc;
      puVar6 = puVar8;
    }
    puVar4 = (undefined1 *)0x0;
    if (puVar8 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)0x0;
      do {
        FUN_00ab5054(&local_38,iVar5);
        puVar2 = (uint *)(uVar7 + (int)puVar4 * 0x10);
        puVar4 = puVar4 + 1;
        iVar5 = iVar5 + 0x18;
        *puVar2 = local_38;
        puVar2[1] = local_34;
        puVar2[2] = local_30;
        puVar2[3] = uStack_2c;
      } while (puVar8 != puVar4);
      puVar4 = puVar8;
    }
    in_d16 = ZEXT48(puVar4);
    uVar1 = uVar7 & 0xffffff00;
    break;
  case 5:
    FUN_00ab523c(&local_38,param_2 + 4);
    puVar6 = &DAT_80000004;
    uVar1 = local_38 & 0xffffff00;
    in_d16 = CONCAT44(local_30,local_34);
    uVar7 = local_38;
  }
  *(ulonglong *)(param_1 + 2) = in_d16;
  *param_1 = puVar6;
  param_1[1] = uVar1 | uVar7 & 0xff;
  return;
}

