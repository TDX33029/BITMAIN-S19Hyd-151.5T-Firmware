// FUN_014aefc0 @ 014aefc0 size=1104 calls_out=10 calls_in=3
// strings: 

void FUN_014aefc0(byte *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint *unaff_r11;
  bool bVar9;
  uint local_64;
  int local_60;
  undefined4 uStack_5c;
  uint local_58;
  int local_54;
  undefined4 *local_50;
  int *local_4c;
  byte local_48;
  byte local_47;
  undefined2 local_46;
  int *local_44;
  undefined *local_40;
  uint *local_3c;
  uint uStack_38;
  uint uStack_34;
  
  local_47 = param_1[0x31];
  local_46 = *(undefined2 *)(param_1 + 0x32);
  param_1[0x31] = 2;
  if (local_47 == 2) {
    return;
  }
  local_60 = *(int *)(param_1 + 0x18);
  uStack_5c = *(undefined4 *)(param_1 + 0x1c);
  local_58 = *(uint *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x24);
  puVar5 = *(undefined4 **)(param_1 + 0x28);
  local_4c = *(int **)(param_1 + 0x2c);
  local_48 = param_1[0x30];
  local_54 = iVar3;
  local_50 = puVar5;
  if ((char)local_4c[2] == '\0') {
    DataMemoryBarrier(0xb);
    bVar9 = *(int *)(local_60 + 8) != 3;
    if ((local_58 & 0xff) != 2) {
      bVar9 = *(int *)(local_60 + 8) == 1;
    }
    if (bVar9) {
      piVar4 = *(int **)(param_1 + 0x34);
      if (1 < (int)piVar4 + 1U) {
        iVar3 = *piVar4;
        do {
          if (iVar3 == 0) goto LAB_014af064;
          if (iVar3 < 0) {
            local_3c = &DAT_0157d360;
            local_40 = &DAT_018ae270;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00590e71,&local_40,&DAT_018ae288);
          }
          iVar2 = *piVar4;
          if (iVar2 == iVar3) {
            bVar1 = (bool)hasExclusiveAccess(piVar4);
            if (bVar1) {
              *piVar4 = iVar3 + 1;
            }
            bVar9 = false;
            if (bVar1) {
              DataMemoryBarrier(0xb);
              bVar9 = true;
            }
          }
          else {
            bVar9 = false;
            ClearExclusiveLocal();
          }
          iVar3 = iVar2;
        } while (!bVar9);
        piVar6 = piVar4 + 2;
        do {
          local_44 = piVar4;
          if (*piVar6 != 0) {
            ClearExclusiveLocal();
            FUN_015bf680(piVar6);
            goto LAB_014af1b4;
          }
          bVar9 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar9);
        *piVar6 = 1;
        DataMemoryBarrier(0xb);
LAB_014af1b4:
        if ((DAT_018dd988 & 0x7fffffff) == 0) {
          bVar9 = (char)piVar4[3] == '\0';
          if ((char)piVar4[3] != '\0') {
LAB_014af1e0:
            if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar3 = FUN_015bf3f8(), iVar3 == 0)) {
              *(undefined1 *)(piVar4 + 3) = 1;
            }
            goto LAB_014af1f0;
          }
          local_64 = 0;
          uVar7 = (uint)*param_1;
          uVar8 = uVar7;
          if (uVar7 != 0) goto LAB_014af224;
LAB_014af324:
          uVar8 = uVar7;
LAB_014af328:
          local_40 = (undefined *)(uVar7 | uVar8);
          local_3c = unaff_r11;
          (*(code *)**(undefined4 **)(param_1 + 8))
                    (&uStack_38,param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),
                     *(undefined4 *)(param_1 + 0x10));
          FUN_014af5b8(piVar4 + 4,&local_40,&local_60,&local_44);
          if (((local_64 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
             (iVar3 = FUN_015bf3f8(), iVar3 == 0)) {
            *(undefined1 *)(piVar4 + 3) = 1;
          }
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar6;
            bVar1 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar1);
          *piVar6 = 0;
        }
        else {
          local_64 = FUN_015bf3f8();
          local_64 = local_64 ^ 1;
          bVar9 = (char)piVar4[3] == '\0';
          if ((char)piVar4[3] == '\0') {
            uVar7 = (uint)*param_1;
            uVar8 = uVar7;
            if (uVar7 == 0) goto LAB_014af324;
LAB_014af224:
            if (uVar8 == 1) {
              uVar7 = (uint)param_1[1] << 8;
            }
            else {
              puVar5 = *(undefined4 **)(param_1 + 4);
              unaff_r11 = (uint *)FUN_01495428();
              (**(code **)*puVar5)(&local_40,puVar5 + 3,puVar5[1],puVar5[2]);
              *unaff_r11 = (uint)local_40;
              unaff_r11[1] = (uint)local_3c;
              unaff_r11[2] = uStack_38;
              unaff_r11[3] = uStack_34;
              uVar7 = 0;
            }
            goto LAB_014af328;
          }
          if (local_64 == 0) goto LAB_014af1e0;
LAB_014af1f0:
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar6;
            bVar1 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar1);
          *piVar6 = 0;
        }
        if (iVar3 == 2) {
          FUN_016d6968(0xf0,piVar6,0x81,1);
        }
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar4;
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0149f9e0(piVar4);
        }
        if (bVar9) {
          return;
        }
      }
LAB_014af064:
      puVar5 = local_50;
      iVar3 = local_54;
      if (local_54 != 0) {
        if ((code *)*local_50 != (code *)0x0) {
          (*(code *)*local_50)(local_54);
        }
        if (puVar5[1] != 0) {
          thunk_FUN_016d3fb4(iVar3);
        }
      }
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *local_4c;
        bVar9 = (bool)hasExclusiveAccess(local_4c);
      } while (!bVar9);
      *local_4c = iVar3 + -1;
      goto LAB_014af110;
    }
  }
  if (iVar3 != 0) {
    if ((code *)*puVar5 != (code *)0x0) {
      (*(code *)*puVar5)(iVar3);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_016d3fb4(iVar3);
    }
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *local_4c;
    bVar9 = (bool)hasExclusiveAccess(local_4c);
  } while (!bVar9);
  *local_4c = iVar3 + -1;
LAB_014af110:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(local_4c);
  }
  FUN_014952b4(&local_60);
  return;
}

