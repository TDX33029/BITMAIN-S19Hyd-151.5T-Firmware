// FUN_014fcef8 @ 014fcef8 size=424 calls_out=6 calls_in=26
// strings: 

void FUN_014fcef8(uint *param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint local_58;
  uint local_54;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [12];
  
  uVar8 = *(uint *)(param_2 + 8);
  uVar6 = 0;
  iVar1 = uVar8 * 0x18;
  if (0x5555555 < uVar8) {
LAB_014fcf24:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar6,iVar1);
  }
  if (iVar1 == 0) {
    local_54 = 8;
    local_58 = 0;
  }
  else {
    iVar3 = *(int *)(param_2 + 4);
    uVar6 = 8;
    local_54 = FUN_01298504(iVar1,8);
    if (local_54 == 0) goto LAB_014fcf24;
    local_58 = uVar8;
    if (uVar8 != 0) {
      iVar9 = 0;
      uVar7 = 0;
      do {
        if (iVar1 == iVar9) break;
        uVar7 = uVar7 + 1;
        uVar2 = *(undefined1 *)(iVar3 + iVar9);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(uVar2) {
        case 0:
          goto switchD_014fcfb0_caseD_0;
        case 1:
          uVar6 = 0x17;
          puVar5 = (undefined1 *)(iVar3 + iVar9 + 1);
          puVar4 = auStack_48;
          goto LAB_014fd060;
        case 2:
          uVar6 = 0x10;
          puVar5 = (undefined1 *)(iVar3 + iVar9 + 8);
          puVar4 = (undefined1 *)((uint)auStack_48 | 7);
          goto LAB_014fd060;
        case 3:
          FUN_006666fc(auStack_30,*(undefined4 *)(iVar3 + iVar9 + 8),
                       *(undefined4 *)(iVar3 + iVar9 + 0xc));
          break;
        case 4:
          FUN_014fcef8(auStack_30,iVar3 + iVar9 + 4);
          break;
        case 5:
          FUN_0156aa80(auStack_30,iVar3 + iVar9 + 4);
        }
        uVar6 = 0xc;
        puVar4 = (undefined1 *)((uint)auStack_48 | 3);
        puVar5 = auStack_30;
LAB_014fd060:
        FUN_01bed4e2(puVar4,puVar5,uVar6);
switchD_014fcfb0_caseD_0:
        *(undefined1 *)(local_54 + iVar9) = uVar2;
        FUN_01bed4e2((undefined1 *)(local_54 + iVar9) + 1,auStack_48,0x17);
        iVar9 = iVar9 + 0x18;
      } while (uVar8 != uVar7);
    }
  }
  *param_1 = local_58;
  param_1[1] = local_54;
  param_1[2] = uVar8;
  return;
}

