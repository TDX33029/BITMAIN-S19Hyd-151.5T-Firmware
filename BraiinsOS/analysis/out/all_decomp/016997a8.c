// FUN_016997a8 @ 016997a8 size=764 calls_out=7 calls_in=3
// strings: 

void FUN_016997a8(undefined4 *param_1,int param_2,int *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  
  DataMemoryBarrier(0xb);
  iVar10 = *(int *)(param_2 + 0x24);
  DataMemoryBarrier(0xb);
  if ((*(uint *)(param_2 + 0x20) & 1) == 0) {
    piVar9 = (int *)(param_2 + 0x24);
    puVar7 = (uint *)(param_2 + 0x20);
    uVar8 = 0;
    iVar11 = 0;
    uVar3 = *(uint *)(param_2 + 0x20);
    do {
      uVar12 = (uVar3 & 0x3f) >> 1;
      if (uVar12 == 0x1f) {
        if (uVar8 < 7) {
          uVar3 = 1;
          do {
            uVar12 = uVar3 >> (uVar8 & 0xff);
            uVar3 = uVar3 + 1;
            HintYield();
          } while (uVar12 == 0);
          uVar8 = uVar8 + 1;
        }
        else {
          FUN_016da3a8();
          if (uVar8 < 0xb) {
            uVar8 = uVar8 + 1;
          }
        }
        uVar13 = *puVar7;
        DataMemoryBarrier(0xb);
        iVar10 = *piVar9;
        DataMemoryBarrier(0xb);
      }
      else {
        if (uVar12 == 0x1e && iVar11 == 0) {
          iVar11 = thunk_FUN_016d4a50(500);
          if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,500);
          }
          FUN_016dd606(iVar11,0,500);
        }
        if (iVar10 == 0) {
          iVar5 = thunk_FUN_016d4a50(500);
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,500);
          }
          FUN_016dd606(iVar5,0,500);
          if (*piVar9 == 0) {
            DataMemoryBarrier(0xb);
            do {
              bVar2 = (bool)hasExclusiveAccess(piVar9);
              if (bVar2) {
                *piVar9 = iVar5;
                DataMemoryBarrier(0xb);
                *(int *)(param_2 + 4) = iVar5;
                uVar13 = *puVar7;
                iVar10 = iVar5;
                goto joined_r0x01699914;
              }
            } while (*piVar9 == 0);
          }
          ClearExclusiveLocal();
          if (iVar11 != 0) {
            thunk_FUN_016d3fb4(iVar11);
          }
          uVar13 = *puVar7;
          DataMemoryBarrier(0xb);
          iVar10 = *piVar9;
          DataMemoryBarrier(0xb);
          iVar11 = iVar5;
        }
        else {
          uVar13 = *puVar7;
joined_r0x01699914:
          if (uVar13 == uVar3) {
            DataMemoryBarrier(0xb);
            bVar4 = hasExclusiveAccess(puVar7);
            if ((bool)bVar4) {
              *puVar7 = uVar3 + 2;
            }
          }
          else {
            bVar4 = 0;
            ClearExclusiveLocal();
          }
          DataMemoryBarrier(0xb);
          if ((bool)(bVar4 & 1)) {
            if (uVar12 == 0x1e) {
              if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa444(&DAT_018ae240);
              }
              DataMemoryBarrier(0xb);
              *piVar9 = iVar11;
              DataMemoryBarrier(0xb);
              do {
                bVar2 = (bool)hasExclusiveAccess(puVar7);
              } while (!bVar2);
              *puVar7 = *puVar7 + 2;
              DataMemoryBarrier(0xb);
              *(int *)(iVar10 + 0x1f0) = iVar11;
              iVar11 = *param_3;
              iVar5 = param_3[1];
              iVar6 = param_3[2];
              uVar12 = 0x1e;
              goto LAB_016999cc;
            }
            goto LAB_016999ac;
          }
          iVar10 = *piVar9;
          uVar12 = 1;
          uVar3 = uVar8;
          if (5 < uVar8) {
            uVar3 = 6;
          }
          DataMemoryBarrier(0xb);
          do {
            uVar1 = uVar12 >> (uVar3 & 0xff);
            uVar12 = uVar12 + 1;
            HintYield();
          } while (uVar1 == 0);
          if (uVar8 < 7) {
            uVar8 = uVar8 + 1;
          }
        }
      }
      uVar3 = uVar13;
    } while ((uVar13 & 1) == 0);
    iVar10 = 0;
    uVar12 = 0;
LAB_016999ac:
    if (iVar11 != 0) {
      thunk_FUN_016d3fb4(iVar11);
    }
    iVar11 = *param_3;
    iVar5 = param_3[1];
    iVar6 = param_3[2];
    if (iVar10 != 0) {
LAB_016999cc:
      piVar9 = (int *)(iVar10 + uVar12 * 0x10);
      *piVar9 = iVar11;
      puVar7 = (uint *)(piVar9 + 3);
      piVar9[1] = iVar5;
      piVar9[2] = iVar6;
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar2);
      *puVar7 = *puVar7 | 1;
      FUN_01699374(param_2 + 0x40);
      *param_1 = 2;
      return;
    }
  }
  else {
    iVar11 = *param_3;
    iVar5 = param_3[1];
    iVar6 = param_3[2];
  }
  if (iVar11 == -0x7fffffff) {
    *param_1 = 2;
    return;
  }
  param_1[1] = iVar11;
  param_1[2] = iVar5;
  param_1[3] = iVar6;
  *param_1 = 1;
  return;
}

