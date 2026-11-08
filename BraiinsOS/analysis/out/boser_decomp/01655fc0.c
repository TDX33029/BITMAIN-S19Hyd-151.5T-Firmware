// FUN_01655fc0 @ 01655fc0 size=572 calls_out=5 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01655fc0(uint *param_1,int param_2,uint param_3,uint param_4,undefined2 *param_5)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint local_30;
  uint local_2c;
  int local_28;
  
  uVar4 = 0;
  if ((int)param_3 < 0) {
LAB_01655fd8:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,param_3);
  }
  iVar6 = 0;
  uVar8 = 1;
  local_30 = 0;
  if (param_3 != 0) {
    uVar4 = 1;
    uVar8 = FUN_01298504(param_3,1);
    local_30 = param_3;
    if (uVar8 == 0) goto LAB_01655fd8;
  }
  uVar5 = 0;
  local_28 = 0;
  uVar7 = 0;
  local_2c = uVar8;
LAB_01656040:
  do {
    uVar3 = param_3 - uVar5;
    if (uVar3 < 8) {
      uVar2 = 0;
      if (uVar3 == 0) {
        uVar9 = 0;
      }
      else {
        do {
          if ((uint)*(byte *)(param_2 + uVar5 + uVar2) == (param_4 & 0xff)) {
            uVar9 = CONCAT44(uVar2,1);
            goto LAB_016560a0;
          }
          uVar2 = uVar2 + 1;
        } while (uVar3 != uVar2);
        uVar9 = (ulonglong)uVar3 << 0x20;
      }
    }
    else {
      uVar9 = FUN_01307168(param_4,param_2 + uVar5);
    }
LAB_016560a0:
    if ((uVar9 & 1) == 0) goto LAB_01656190;
    uVar3 = uVar5 + (int)(uVar9 >> 0x20);
    uVar5 = uVar3 + 1;
    if ((uVar3 < param_3) && ((uint)*(byte *)(param_2 + uVar3) == (param_4 & 0xff))) {
      uVar3 = uVar3 - uVar7;
      if (local_30 - iVar6 < uVar3) {
        FUN_006520b4(&local_30,iVar6,uVar3,1,1);
        iVar6 = local_28;
        uVar8 = local_2c;
      }
      uVar2 = local_30;
      FUN_01bed4e2(uVar8 + iVar6,param_2 + uVar7,uVar3);
      local_28 = iVar6 + uVar3;
      if (uVar2 - local_28 < 3) {
        FUN_006520b4(&local_30,local_28,3,1,1);
        uVar8 = local_2c;
      }
      iVar6 = local_28 + 3;
      uVar1 = *(undefined1 *)(param_5 + 1);
      *(undefined2 *)(uVar8 + local_28) = *param_5;
      *(undefined1 *)((undefined2 *)(uVar8 + local_28) + 1) = uVar1;
      uVar7 = uVar5;
      local_28 = iVar6;
      goto LAB_01656040;
    }
    if (param_3 < uVar5) {
LAB_01656190:
      param_3 = param_3 - uVar7;
      if (local_30 - iVar6 < param_3) {
        FUN_006520b4(&local_30,iVar6,param_3,1,1);
        iVar6 = local_28;
        uVar8 = local_2c;
      }
      FUN_01bed4e2(uVar8 + iVar6,param_2 + uVar7,param_3);
      *param_1 = local_30;
      param_1[1] = local_2c;
      param_1[2] = iVar6 + param_3;
      return;
    }
  } while( true );
}

