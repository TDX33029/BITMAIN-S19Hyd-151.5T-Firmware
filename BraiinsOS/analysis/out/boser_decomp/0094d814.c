// FUN_0094d814 @ 0094d814 size=464 calls_out=8 calls_in=1
// strings: 

void FUN_0094d814(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint local_8cc;
  uint local_8c8;
  uint local_8c4;
  undefined1 auStack_8c0 [728];
  uint local_5e8;
  int local_5e4;
  uint local_5e0;
  undefined1 auStack_5dc [724];
  uint local_308;
  int local_304;
  uint local_300;
  undefined4 local_2fc [182];
  
  if (param_2[1] == 0) {
    *param_1 = 0x80000000;
  }
  else {
    uVar5 = *param_2;
    param_2[1] = param_2[1] + -1;
    FUN_009c98e8(&local_308,uVar5);
    if (local_308 == 1) {
      uVar9 = CONCAT44(local_304,1);
    }
    else {
      uVar9 = FUN_00736cb4(local_300,local_2fc[0]);
    }
    uVar8 = (uint)(uVar9 >> 0x20);
    uVar4 = uVar8;
    if ((uVar9 & 1) == 0) {
      uVar6 = uVar8;
      if (0x58fffffffff < uVar9) {
        uVar6 = 0x590;
      }
      iVar7 = 0;
      if (uVar8 == 0) {
        uVar4 = 8;
        uVar6 = 0;
      }
      else {
        uVar4 = FUN_01298504(uVar6 * 0x2e0,8);
        if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(8,uVar6 * 0x2e0);
        }
      }
      local_8c4 = 0;
      local_8cc = uVar6;
      local_8c8 = uVar4;
      while (uVar6 = local_8c4, uVar8 != local_8c4) {
        FUN_00963958(&local_308,uVar5);
        uVar3 = local_300;
        iVar2 = local_304;
        uVar1 = local_308;
        if (local_308 == 3 && local_304 == 0) {
          FUN_00856028(&local_8cc);
          uVar4 = local_300;
          goto LAB_0094d9d0;
        }
        FUN_01bed4e2(auStack_8c0,local_2fc,0x2d4);
        if ((uVar1 & 7) == 3) break;
        local_5e8 = uVar1;
        local_5e0 = uVar3;
        local_5e4 = iVar2;
        FUN_01bed4e2(auStack_5dc,auStack_8c0,0x2d4);
        if (uVar6 == local_8cc) {
          FUN_00a20ea0(&local_8cc);
          uVar4 = local_8c8;
        }
        FUN_01bed4e2(uVar4 + iVar7,&local_5e8,0x2e0);
        iVar7 = iVar7 + 0x2e0;
        local_8c4 = uVar6 + 1;
      }
      if (local_8cc != 0x80000000) {
        *param_1 = local_8cc;
        param_1[1] = uVar4;
        param_1[2] = uVar6;
        return;
      }
    }
LAB_0094d9d0:
    *param_1 = 0x80000001;
    param_1[1] = uVar4;
  }
  return;
}

