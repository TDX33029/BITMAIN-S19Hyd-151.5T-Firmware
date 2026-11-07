// FUN_0127ebd4 @ 0127ebd4 size=1324 calls_out=14 calls_in=1
// strings: RwLock reader count overflow

void FUN_0127ebd4(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
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
  
  uVar2 = (int)param_1 * -0x61c88647;
  iVar3 = thunk_FUN_016de0ee(uVar2,param_2,0x1c4);
  uVar8 = *param_1;
  piVar10 = (int *)(iVar3 + extraout_r2);
  uVar4 = 0;
  do {
    if (uVar4 < 10) {
      do {
        while( true ) {
          uVar6 = uVar8;
          if ((uVar8 & 0xc) == 0) {
            uVar8 = 0;
            do {
              if (0xffffffeb < uVar6) goto LAB_0127f0d0;
              if (*param_1 == uVar6) {
                bVar1 = (bool)hasExclusiveAccess(param_1);
                if (bVar1) {
                  *param_1 = uVar6 + 0x14;
                  goto LAB_0127f0c4;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              if (8 < uVar8) {
                uVar8 = 9;
              }
              iVar3 = 2 << (uVar8 & 0xff);
              do {
                iVar3 = iVar3 + -1;
                HintYield();
              } while (iVar3 != 0);
              uVar6 = *param_1;
              uVar8 = uVar8 + 1;
            } while ((uVar6 & 0xc) == 0);
          }
          if ((uVar6 & 3) == 0) {
            uVar6 = uVar4 + 1;
            if (uVar4 < 3) {
              iVar3 = 2 << (uVar4 & 0xff);
              do {
                iVar3 = iVar3 + -1;
                HintYield();
              } while (iVar3 != 0);
            }
            else {
              FUN_016da3a8();
            }
            goto LAB_0127f034;
          }
          if ((uVar6 & 1) != 0) goto LAB_0127ed90;
          uVar8 = *param_1;
          if (uVar8 == uVar6) break;
          ClearExclusiveLocal();
        }
        bVar1 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar1);
      *param_1 = uVar6 | 1;
    }
    else {
LAB_0127ec3c:
      do {
        uVar4 = uVar8;
        if ((uVar8 & 0xc) == 0) {
          uVar8 = 0;
          do {
            if (0xffffffeb < uVar4) {
LAB_0127f0d0:
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8("RwLock reader count overflow",0x1c,&DAT_0188b8c0);
            }
            if (*param_1 == uVar4) {
              bVar1 = (bool)hasExclusiveAccess(param_1);
              if (bVar1) {
                *param_1 = uVar4 + 0x14;
LAB_0127f0c4:
                DataMemoryBarrier(0xb);
                return;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            if (8 < uVar8) {
              uVar8 = 9;
            }
            iVar3 = 2 << (uVar8 & 0xff);
            do {
              iVar3 = iVar3 + -1;
              HintYield();
            } while (iVar3 != 0);
            uVar4 = *param_1;
            uVar8 = uVar8 + 1;
          } while ((uVar4 & 0xc) == 0);
        }
        if ((uVar4 & 1) != 0) goto LAB_0127ed90;
        uVar8 = *param_1;
        if (uVar8 != uVar4) {
          ClearExclusiveLocal();
          goto LAB_0127ec3c;
        }
        bVar1 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar1);
      *param_1 = uVar4 | 1;
    }
LAB_0127ed90:
    local_90 = 0;
    piVar7 = piVar10;
    if ((char)piVar10[0xd] != '\x01') {
      piVar7 = (int *)FUN_01280554(piVar10);
      if ((piVar7 == (int *)0x0) && (piVar7 = &local_8c, local_90 == 0)) {
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
LAB_0127eda8:
    DataMemoryBarrier(0xb);
    piVar5 = DAT_018dd950;
    if (DAT_018dd950 == (int *)0x0) {
      piVar5 = (int *)FUN_01283a38();
    }
    uVar4 = uVar2 >> (-piVar5[2] & 0x1fU);
    if ((uint)piVar5[1] <= uVar2 >> (-piVar5[2] & 0x1fU)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar4,piVar5[1],&DAT_0188b980);
    }
    iVar3 = *piVar5 + uVar4 * 0x40;
    puVar11 = (uint *)(iVar3 + 0x18);
    if (*puVar11 == 0) {
      bVar1 = (bool)hasExclusiveAccess(puVar11);
      if (!bVar1) goto LAB_0127ee48;
      *puVar11 = 1;
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_0127ee48:
      FUN_01286a10(puVar11);
    }
    if (DAT_018dd950 != piVar5) {
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *puVar11;
        bVar1 = (bool)hasExclusiveAccess(puVar11);
      } while (!bVar1);
      *puVar11 = uVar4 - 1;
      if ((3 < uVar4) && ((uVar4 & 2) == 0)) {
        FUN_01286894(puVar11);
      }
      goto LAB_0127eda8;
    }
    if ((*param_1 & 1) == 0 || (*param_1 & 0xc) == 0) {
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *puVar11;
        bVar1 = (bool)hasExclusiveAccess(puVar11);
      } while (!bVar1);
      *puVar11 = uVar4 - 1;
      iVar3 = DAT_018dd954;
      if ((3 < uVar4) && ((uVar4 & 2) == 0)) {
        FUN_01286894(puVar11);
        iVar3 = DAT_018dd954;
      }
      DAT_018dd954 = iVar3;
      if (local_90 != 0) {
        do {
          DAT_018dd954 = iVar3 + -1;
          bVar1 = (bool)hasExclusiveAccess(0x18dd954);
        } while (!bVar1);
        if (local_70 != 0) {
          thunk_FUN_016d3fb4(local_6c);
        }
        if (local_78 != 3) {
          FUN_0128155c(local_78,local_74);
        }
      }
      uVar8 = *param_1;
      uVar4 = 0;
    }
    else {
      piVar7[2] = 0;
      *(undefined1 *)(piVar7 + 0xc) = 0;
      piVar7[1] = (int)param_1;
      piVar7[4] = 0x14;
      *piVar7 = 1;
      if (*(int *)(iVar3 + 0x1c) == 0) {
        *(int **)(iVar3 + 0x1c) = piVar7;
      }
      else {
        *(int **)(*(int *)(iVar3 + 0x20) + 8) = piVar7;
      }
      *(int **)(iVar3 + 0x20) = piVar7;
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *puVar11;
        bVar1 = (bool)hasExclusiveAccess(puVar11);
      } while (!bVar1);
      *puVar11 = uVar4 - 1;
      if ((3 < uVar4) && ((uVar4 & 2) == 0)) {
        FUN_01286894(puVar11);
      }
      while (DataMemoryBarrier(0xb), *piVar7 != 0) {
        FUN_016d6968(0xf0,piVar7,0x80,1,0);
      }
      FUN_012826f4(piVar7);
      iVar3 = piVar7[3];
      if (local_90 != 0) {
        do {
          iVar9 = DAT_018dd954 + -1;
          bVar1 = (bool)hasExclusiveAccess(0x18dd954);
        } while (!bVar1);
        DAT_018dd954 = iVar9;
        if (local_70 != 0) {
          thunk_FUN_016d3fb4(local_6c);
        }
        if (local_78 != 3) {
          FUN_0128155c(local_78,local_74);
        }
      }
      uVar6 = 0;
      if (iVar3 == 1) {
        return;
      }
LAB_0127f034:
      uVar8 = *param_1;
      uVar4 = uVar6;
    }
  } while( true );
}

