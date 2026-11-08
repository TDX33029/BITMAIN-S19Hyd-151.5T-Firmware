// FUN_0129a658 @ 0129a658 size=624 calls_out=3 calls_in=1
// strings: 

void FUN_0129a658(uint *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  int local_64;
  uint local_50;
  uint local_4c;
  uint local_30;
  uint local_2c;
  
  uVar6 = 0;
  iVar8 = param_3 * 0xc;
  if (0xaaaaaaa < param_3) {
LAB_0129a67c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar6,iVar8);
  }
  if (iVar8 == 0) {
    local_4c = 4;
    local_50 = 0;
  }
  else {
    uVar6 = 4;
    uVar13 = FUN_01298504(iVar8,4);
    local_2c = (uint)((ulonglong)uVar13 >> 0x20);
    local_4c = (uint)uVar13;
    if (local_4c == 0) goto LAB_0129a67c;
    local_50 = param_3;
    if (param_3 != 0) {
      iVar1 = param_2 + param_3 * 0xc;
      uVar5 = param_3;
      iVar8 = 0;
      do {
        if (param_2 == iVar1) break;
        uVar7 = *(uint *)(param_2 + 8);
        uVar6 = 0;
        if (0xaaaaaaa < uVar7) {
LAB_0129a8b0:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar6,local_2c);
        }
        local_2c = uVar7 * 0xc;
        if (local_2c == 0) {
          local_2c = 4;
          local_30 = 0;
          uVar2 = local_2c;
        }
        else {
          iVar4 = *(int *)(param_2 + 4);
          uVar6 = 4;
          uVar2 = FUN_01298504(local_2c,4);
          if (uVar2 == 0) goto LAB_0129a8b0;
          local_30 = uVar7;
          if (uVar7 != 0) {
            piVar9 = (int *)(uVar2 + 4);
            uVar10 = 0;
            do {
              if (local_2c == 0) break;
              iVar12 = 0;
              iVar11 = *(int *)(iVar4 + 8);
              if (iVar11 < 0) {
LAB_0129a8c0:
                    /* WARNING: Subroutine does not return */
                FUN_00664620(iVar12,local_64);
              }
              uVar6 = *(undefined4 *)(iVar4 + 4);
              if (iVar11 == 0) {
                local_64 = 1;
              }
              else {
                iVar12 = 1;
                local_64 = FUN_01298504(iVar11,1);
                if (local_64 == 0) {
                  local_64 = iVar11;
                  goto LAB_0129a8c0;
                }
                iVar12 = iVar11;
              }
              FUN_01bed4e2(local_64,uVar6,iVar11);
              iVar4 = iVar4 + 0xc;
              *piVar9 = local_64;
              piVar9[1] = iVar11;
              local_2c = local_2c - 0xc;
              piVar9[-1] = iVar12;
              piVar9 = piVar9 + 3;
              uVar10 = uVar10 + 1;
            } while (uVar7 != uVar10);
          }
        }
        local_2c = uVar2;
        uVar5 = uVar5 - 1;
        param_2 = param_2 + 0xc;
        puVar3 = (uint *)(local_4c + iVar8 * 0xc);
        *puVar3 = local_30;
        puVar3[1] = local_2c;
        puVar3[2] = uVar7;
        iVar8 = iVar8 + 1;
      } while (uVar5 != 0);
    }
  }
  *param_1 = local_50;
  param_1[1] = local_4c;
  param_1[2] = param_3;
  return;
}

