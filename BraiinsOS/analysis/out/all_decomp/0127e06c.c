// FUN_0127e06c @ 0127e06c size=1252 calls_out=14 calls_in=48
// strings: 

void FUN_0127e06c(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int extraout_r2;
  int *piVar10;
  uint *puVar11;
  int local_90;
  int local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  int local_78;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  int iStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar2 = thunk_FUN_016de0ee(0x9e3779b9,param_2,0x1c4);
  uVar7 = *param_1;
  piVar10 = (int *)(iVar2 + extraout_r2);
  uVar8 = 0;
  do {
    if (uVar8 < 10) {
      do {
        while( true ) {
          if ((uVar7 & 0xc) == 0) {
            do {
              uVar3 = *param_1;
              if (uVar3 == uVar7) {
                bVar1 = (bool)hasExclusiveAccess(param_1);
                if (bVar1) {
                  *param_1 = uVar7 | 8;
                }
                bVar6 = false;
                if (bVar1) {
                  DataMemoryBarrier(0xb);
                  bVar6 = true;
                }
              }
              else {
                bVar6 = false;
                ClearExclusiveLocal();
              }
              if (bVar6) goto LAB_0127e530;
              uVar7 = uVar3;
            } while ((uVar3 & 0xc) == 0);
          }
          else {
            uVar3 = uVar7;
          }
          if ((uVar3 & 3) == 0) {
            uVar3 = uVar8 + 1;
            if (uVar8 < 3) {
              iVar2 = 2 << (uVar8 & 0xff);
              do {
                iVar2 = iVar2 + -1;
                HintYield();
              } while (iVar2 != 0);
            }
            else {
              FUN_016da3a8();
            }
            goto LAB_0127e4a4;
          }
          if ((uVar3 & 1) != 0) goto LAB_0127e1f8;
          uVar7 = *param_1;
          if (uVar7 == uVar3) break;
          ClearExclusiveLocal();
        }
        bVar6 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar6);
      *param_1 = uVar3 | 1;
    }
    else {
      do {
        while( true ) {
          uVar8 = uVar7;
          if ((uVar7 & 0xc) == 0) {
            do {
              uVar7 = *param_1;
              if (uVar7 == uVar8) {
                bVar1 = (bool)hasExclusiveAccess(param_1);
                if (bVar1) {
                  *param_1 = uVar8 | 8;
                }
                bVar6 = false;
                if (bVar1) {
                  DataMemoryBarrier(0xb);
                  bVar6 = true;
                }
              }
              else {
                bVar6 = false;
                ClearExclusiveLocal();
              }
              if (bVar6) goto LAB_0127e530;
              uVar8 = uVar7;
            } while ((uVar7 & 0xc) == 0);
          }
          if ((uVar7 & 1) != 0) goto LAB_0127e1f8;
          uVar8 = *param_1;
          if (uVar8 == uVar7) break;
          ClearExclusiveLocal();
          uVar7 = uVar8;
        }
        uVar3 = uVar7 | 1;
        bVar6 = (bool)hasExclusiveAccess(param_1);
        uVar7 = uVar8;
      } while (!bVar6);
      *param_1 = uVar3;
    }
LAB_0127e1f8:
    local_90 = 0;
    piVar5 = piVar10;
    if ((char)piVar10[0xd] != '\x01') {
      piVar5 = (int *)FUN_01280554(piVar10);
      if ((piVar5 == (int *)0x0) && (piVar5 = &local_8c, local_90 == 0)) {
        FUN_01283788(&local_58);
        FUN_0127d2e4(&local_90);
        local_90 = 1;
        local_8c = local_58;
        uStack_88 = uStack_54;
        uStack_84 = uStack_50;
        uStack_80 = uStack_4c;
        local_7c = local_48;
        local_78 = iStack_44;
        local_74 = uStack_40;
        local_70 = iStack_3c;
        local_6c = local_38;
        uStack_68 = uStack_34;
        uStack_64 = uStack_30;
        uStack_60 = uStack_2c;
        uStack_5c = uStack_28;
      }
    }
LAB_0127e210:
    DataMemoryBarrier(0xb);
    piVar4 = DAT_018dd950;
    if (DAT_018dd950 == (int *)0x0) {
      piVar4 = (int *)FUN_01283a38();
    }
    uVar8 = (uint)((int)param_1 * -0x61c88647) >> (-piVar4[2] & 0x1fU);
    if ((uint)piVar4[1] <= (uint)((int)param_1 * -0x61c88647) >> (-piVar4[2] & 0x1fU)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar8,piVar4[1],&DAT_0188b980);
    }
    iVar2 = *piVar4 + uVar8 * 0x40;
    puVar11 = (uint *)(iVar2 + 0x18);
    if (*puVar11 == 0) {
      bVar6 = (bool)hasExclusiveAccess(puVar11);
      if (!bVar6) goto LAB_0127e2a8;
      *puVar11 = 1;
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_0127e2a8:
      FUN_01286a10(puVar11);
    }
    if (DAT_018dd950 != piVar4) {
      DataMemoryBarrier(0xb);
      do {
        uVar8 = *puVar11;
        bVar6 = (bool)hasExclusiveAccess(puVar11);
      } while (!bVar6);
      *puVar11 = uVar8 - 1;
      if ((3 < uVar8) && ((uVar8 & 2) == 0)) {
        FUN_01286894(puVar11);
      }
      goto LAB_0127e210;
    }
    if ((*param_1 & 1) == 0 || (*param_1 & 0xc) == 0) {
      DataMemoryBarrier(0xb);
      do {
        uVar8 = *puVar11;
        bVar6 = (bool)hasExclusiveAccess(puVar11);
      } while (!bVar6);
      *puVar11 = uVar8 - 1;
      iVar2 = DAT_018dd954;
      if ((3 < uVar8) && ((uVar8 & 2) == 0)) {
        FUN_01286894(puVar11);
        iVar2 = DAT_018dd954;
      }
      DAT_018dd954 = iVar2;
      if (local_90 != 0) {
        do {
          DAT_018dd954 = iVar2 + -1;
          bVar6 = (bool)hasExclusiveAccess(0x18dd954);
        } while (!bVar6);
        if (local_70 != 0) {
          thunk_FUN_016d3fb4(local_6c);
        }
        if (local_78 != 3) {
          FUN_0128155c(local_78,local_74);
        }
      }
      uVar7 = *param_1;
      uVar8 = 0;
    }
    else {
      piVar5[2] = 0;
      *(undefined1 *)(piVar5 + 0xc) = 0;
      piVar5[1] = (int)param_1;
      piVar5[4] = 8;
      *piVar5 = 1;
      if (*(int *)(iVar2 + 0x1c) == 0) {
        *(int **)(iVar2 + 0x1c) = piVar5;
      }
      else {
        *(int **)(*(int *)(iVar2 + 0x20) + 8) = piVar5;
      }
      *(int **)(iVar2 + 0x20) = piVar5;
      DataMemoryBarrier(0xb);
      do {
        uVar8 = *puVar11;
        bVar6 = (bool)hasExclusiveAccess(puVar11);
      } while (!bVar6);
      *puVar11 = uVar8 - 1;
      if ((3 < uVar8) && ((uVar8 & 2) == 0)) {
        FUN_01286894(puVar11);
      }
      while (DataMemoryBarrier(0xb), *piVar5 != 0) {
        FUN_016d6968(0xf0,piVar5,0x80,1,0);
      }
      FUN_012826f4(piVar5);
      iVar2 = piVar5[3];
      if (local_90 != 0) {
        do {
          iVar9 = DAT_018dd954 + -1;
          bVar6 = (bool)hasExclusiveAccess(0x18dd954);
        } while (!bVar6);
        DAT_018dd954 = iVar9;
        if (local_70 != 0) {
          thunk_FUN_016d3fb4(local_6c);
        }
        if (local_78 != 3) {
          FUN_0128155c(local_78,local_74);
        }
      }
      uVar3 = 0;
      if (iVar2 == 1) {
LAB_0127e530:
        FUN_0127ced4(param_1);
        return;
      }
LAB_0127e4a4:
      uVar7 = *param_1;
      uVar8 = uVar3;
    }
  } while( true );
}

