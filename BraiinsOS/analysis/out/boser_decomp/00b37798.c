// FUN_00b37798 @ 00b37798 size=336 calls_out=3 calls_in=4
// strings: 

void FUN_00b37798(uint *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  double dVar11;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_3c;
  undefined4 local_38;
  
  if (*(int *)(param_2 + 0x2cc) == -0x80000000) {
    *param_1 = 0x80000000;
  }
  else {
    uVar9 = *(uint *)(param_2 + 0x2d4);
    uVar8 = 0;
    iVar5 = uVar9 * 0x14;
    if (0x6666666 < uVar9) {
LAB_00b377e4:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar8,iVar5);
    }
    iVar10 = *(int *)(param_2 + 0x2d0);
    if (iVar5 == 0) {
      puVar2 = (undefined4 *)&SUB_00000004;
      uVar3 = 0;
    }
    else {
      uVar8 = 4;
      puVar2 = (undefined4 *)FUN_01298504(iVar5,4);
      uVar3 = uVar9;
      if (puVar2 == (undefined4 *)0x0) goto LAB_00b377e4;
    }
    uVar6 = 0;
    if (uVar9 != 0) {
      iVar5 = 0;
      uVar6 = 0;
      puVar7 = puVar2;
      do {
        FUN_006666fc(&local_48,*(undefined4 *)(iVar10 + iVar5 + 0x14),
                     *(undefined4 *)(iVar10 + iVar5 + 0x18));
        puVar4 = (uint *)(iVar10 + iVar5);
        iVar5 = iVar5 + 0x20;
        iVar1 = uVar6 * 0x20;
        uVar6 = uVar6 + 1;
        dVar11 = *(double *)(puVar4 + 2) * 100.0;
        local_38 = *(undefined4 *)(iVar10 + iVar1 + 0x1c);
        local_3c = 0;
        if ((*puVar4 & 1) != 0) {
          local_3c = (uint)(0.0 < dVar11) * (int)(longlong)dVar11;
        }
        *puVar7 = local_48;
        puVar7[1] = uStack_44;
        puVar7[2] = uStack_40;
        puVar7[3] = local_3c;
        puVar7[4] = local_38;
        puVar7 = puVar7 + 5;
      } while (uVar9 != uVar6);
      uVar6 = uVar9;
    }
    *param_1 = uVar3;
    param_1[1] = (uint)puVar2;
    param_1[2] = uVar6;
  }
  return;
}

