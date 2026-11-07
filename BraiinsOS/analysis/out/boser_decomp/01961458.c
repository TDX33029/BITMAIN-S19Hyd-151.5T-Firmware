// FUN_01961458 @ 01961458 size=404 calls_out=6 calls_in=7
// strings: 

void FUN_01961458(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int local_58;
  int local_54;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [12];
  
  if (param_3 == 0) {
    local_54 = 8;
    local_58 = 0;
  }
  else {
    iVar1 = param_3 * 0x18;
    local_54 = FUN_01298504(iVar1,8);
    if (local_54 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(8,iVar1);
    }
    iVar7 = 0;
    uVar3 = (uint)auStack_48 | 3;
    do {
      puVar4 = auStack_48;
      local_58 = param_3;
      if (iVar1 == iVar7) break;
      uVar2 = *(undefined1 *)(param_2 + iVar7);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(uVar2) {
      case 1:
        uVar6 = 0x17;
        iVar5 = param_2 + iVar7 + 1;
        goto LAB_01961534;
      case 2:
        uVar6 = 0x10;
        iVar5 = param_2 + iVar7 + 8;
        puVar4 = (undefined1 *)((uint)auStack_48 | 7);
LAB_01961534:
        FUN_01bed4e2(puVar4,iVar5,uVar6);
        break;
      case 3:
        FUN_006666fc(auStack_30,*(undefined4 *)(param_2 + iVar7 + 8),
                     *(undefined4 *)(param_2 + iVar7 + 0xc));
        FUN_01bed4e2(uVar3,auStack_30,0xc);
        break;
      case 4:
        FUN_01961458(auStack_30,*(undefined4 *)(param_2 + iVar7 + 8),
                     *(undefined4 *)(param_2 + iVar7 + 0xc));
        goto LAB_01961588;
      case 5:
        FUN_01960d00(auStack_30,param_2 + iVar7 + 4);
LAB_01961588:
        FUN_01bed4e2(uVar3,auStack_30,0xc);
      }
      *(undefined1 *)(local_54 + iVar7) = uVar2;
      FUN_01bed4e2((undefined1 *)(local_54 + iVar7) + 1,auStack_48,0x17);
      iVar7 = iVar7 + 0x18;
    } while (iVar1 != iVar7);
  }
  *param_1 = local_58;
  param_1[1] = local_54;
  param_1[2] = param_3;
  return;
}

