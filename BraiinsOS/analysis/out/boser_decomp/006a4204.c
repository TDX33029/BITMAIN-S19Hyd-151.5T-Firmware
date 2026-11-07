// FUN_006a4204 @ 006a4204 size=532 calls_out=5 calls_in=0
// strings: 

void FUN_006a4204(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint local_30;
  uint local_2c;
  int local_28;
  
  uVar3 = 0;
  if ((int)param_3 < 0) {
LAB_006a421c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar3,param_3);
  }
  iVar5 = 0;
  uVar7 = 1;
  local_30 = 0;
  if (param_3 != 0) {
    uVar3 = 1;
    uVar7 = FUN_01298504(param_3,1);
    local_30 = param_3;
    if (uVar7 == 0) goto LAB_006a421c;
  }
  uVar6 = 0;
  local_2c = uVar7;
LAB_006a4274:
  uVar4 = uVar6;
  local_28 = iVar5;
  do {
    uVar2 = param_3 - uVar4;
    if (uVar2 < 8) {
      uVar1 = 0;
      if (uVar2 == 0) {
        uVar8 = 0;
      }
      else {
        do {
          if (*(char *)(param_2 + uVar4 + uVar1) == '\"') {
            uVar8 = CONCAT44(uVar1,1);
            goto LAB_006a42d4;
          }
          uVar1 = uVar1 + 1;
        } while (uVar2 != uVar1);
        uVar8 = (ulonglong)uVar2 << 0x20;
      }
    }
    else {
      uVar8 = FUN_01307168(0x22,param_2 + uVar4);
    }
LAB_006a42d4:
    if ((uVar8 & 1) == 0) goto LAB_006a43b4;
    uVar2 = uVar4 + (int)(uVar8 >> 0x20);
    uVar4 = uVar2 + 1;
    if ((uVar2 < param_3) && (*(char *)(param_2 + uVar2) == '\"')) break;
    if (param_3 < uVar4) {
LAB_006a43b4:
      param_3 = param_3 - uVar6;
      if (local_30 - iVar5 < param_3) {
        FUN_0132b898(&local_30,iVar5,param_3,1,1);
        iVar5 = local_28;
        uVar7 = local_2c;
      }
      FUN_01bed4e2(uVar7 + iVar5,param_2 + uVar6,param_3);
      *param_1 = local_30;
      param_1[1] = local_2c;
      param_1[2] = iVar5 + param_3;
      return;
    }
  } while( true );
  uVar2 = uVar2 - uVar6;
  if (local_30 - iVar5 < uVar2) {
    FUN_0132b898(&local_30,iVar5,uVar2,1,1);
    iVar5 = local_28;
    uVar7 = local_2c;
  }
  uVar1 = local_30;
  FUN_01bed4e2(uVar7 + iVar5,param_2 + uVar6,uVar2);
  local_28 = iVar5 + uVar2;
  if (uVar1 - local_28 < 2) {
    FUN_0132b898(&local_30,local_28,2,1,1);
    uVar7 = local_2c;
  }
  iVar5 = local_28 + 2;
  *(undefined2 *)(uVar7 + local_28) = 0x225c;
  uVar6 = uVar4;
  goto LAB_006a4274;
}

