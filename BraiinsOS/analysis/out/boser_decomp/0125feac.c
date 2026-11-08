// FUN_0125feac @ 0125feac size=1160 calls_out=23 calls_in=4
// strings: Cannot get parent path | BUG: basepath.file_name() returns error

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0125feac(undefined4 *param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint *puVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  int *piVar15;
  int *piVar16;
  uint *puVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined4 local_b0;
  int *local_ac;
  int *local_a8;
  int *local_a4;
  int *local_a0;
  int *local_98;
  undefined1 local_94;
  int *local_90;
  undefined1 *local_8c;
  undefined4 local_88;
  int *local_70;
  int *local_6c;
  int *local_68;
  uint local_64;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  int local_30;
  
  pcVar14 = *(char **)(param_2 + 4);
  iVar13 = *(int *)(param_2 + 8);
  local_b8 = 0;
  local_c0 = 0;
  uVar18 = FUN_019b00d0(pcVar14,iVar13);
  if ((int)uVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("BUG: basepath.file_name() returns error",0x27,&DAT_01c25268);
  }
  FUN_006643f0(&local_b4,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
  if ((iVar13 == 0) || (*pcVar14 != '/')) {
    FUN_0197b690(&local_70);
    piVar15 = local_6c;
    piVar16 = local_68;
    if (local_70 == (int *)&DAT_80000000) goto LAB_0125fff0;
    local_48 = local_70;
    local_44 = local_6c;
    local_40 = local_68;
    FUN_019b0140(&local_48,pcVar14,iVar13);
    local_a8 = local_48;
    local_a4 = local_44;
    local_a0 = local_40;
  }
  else {
    FUN_019afae4(&local_a8,pcVar14,iVar13);
  }
  piVar11 = local_a4;
  uVar18 = FUN_019aff98(local_a4,local_a0);
  FUN_01264600(&local_70,"Cannot get parent path",0x16);
  if ((int)uVar18 == 0) {
    piVar15 = local_70;
    piVar16 = local_6c;
  }
  else {
    FUN_0069263c((uint)local_70 & 0xff,local_6c);
    FUN_019adfac(&local_70,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    if (local_70 == (int *)0x0) {
      puVar17 = (uint *)((uint)&local_48 | 4);
      local_98 = local_6c;
      puVar10 = (uint *)((uint)&local_90 | 4);
      local_94 = local_68._0_1_;
      while (FUN_019bb288(&local_70,&local_98), piVar15 = local_68, ((uint)local_70 & 1) != 0) {
        if (local_68 == (int *)0x0) {
          FUN_0069263c(local_64 & 0xff,local_60);
        }
        else {
          *puVar17 = local_64;
          puVar17[1] = local_60;
          puVar17[2] = uStack_5c;
          puVar17[3] = local_58;
          puVar17[4] = uStack_54;
          puVar17[5] = uStack_50;
          puVar17[6] = uStack_4c;
          local_48 = local_68;
          FUN_019a66e4(&local_90,*(undefined4 *)(local_30 + 0xc),*(undefined4 *)(local_30 + 0x10),
                       local_68,(undefined1 *)((int)local_44 + -1));
          puVar4 = local_8c;
          iVar13 = FUN_01982d98(local_8c,local_88);
          FUN_019bb7e0(local_90,puVar4);
          if (iVar13 == 0) {
            FUN_019db4b0(&local_48);
          }
          else {
            *puVar10 = local_64;
            puVar10[1] = local_60;
            puVar10[2] = uStack_5c;
            puVar10[3] = local_58;
            puVar10[4] = uStack_54;
            puVar10[5] = uStack_50;
            puVar10[6] = uStack_4c;
            local_90 = piVar15;
            FUN_019a68c8(&local_70,piVar15,local_8c);
            FUN_019db4b0(&local_90);
            piVar16 = local_6c;
            piVar15 = local_70;
            if (local_70 == (int *)&DAT_80000000) break;
            FUN_006643f0(&local_48,local_6c,local_68);
            piVar5 = local_40;
            piVar11 = local_44;
            if ((local_40 < local_ac) ||
               (iVar13 = thunk_FUN_01bed842(local_b0,local_44), iVar13 != 0)) {
              if (local_48 != (int *)&DAT_80000000) {
                piVar11 = local_44;
                goto LAB_01260174;
              }
            }
            else {
              FUN_01341130(&local_70,piVar11,piVar5);
              piVar7 = local_6c;
              piVar5 = local_70;
              uVar12 = (uint)local_68 & 0xff;
              local_8c = &LAB_012b97d8;
              local_90 = &local_b4;
              FUN_00664898(&local_70,&DAT_005ad067,&local_90);
              piVar9 = local_68;
              piVar8 = local_6c;
              piVar6 = local_70;
              if (piVar7 < local_68) {
                FUN_019bb7e0(local_70);
              }
              else {
                iVar13 = thunk_FUN_01bed842(local_6c,piVar5);
                FUN_019bb7e0(piVar6,piVar8);
                if (iVar13 == 0) {
                  uVar19 = FUN_013411b0((undefined1 *)((int)piVar5 + (int)piVar9),
                                        (int)piVar7 - (int)piVar9);
                  if ((uVar19 & 1) != 0) {
                    FUN_01268fc0(&local_c0,(int)(uVar19 >> 0x20),uVar12);
                  }
                }
              }
              if (local_48 != (int *)&DAT_80000000) {
LAB_01260174:
                FUN_019bb7e0(local_48,piVar11);
              }
            }
            FUN_019bb7e0(piVar15,piVar16);
          }
        }
      }
      DataMemoryBarrier(0xb);
      do {
        iVar13 = *local_98;
        bVar1 = (bool)hasExclusiveAccess(local_98);
      } while (!bVar1);
      *local_98 = iVar13 + -1;
      if (iVar13 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019ad05c(local_98);
      }
      uVar3 = local_b8;
      uVar2 = local_c0;
      FUN_019bb7e0(local_a8,local_a4);
      if (local_b4 != -0x80000000) {
        FUN_019bb7e0(local_b4,local_b0);
      }
      FUN_012681c8((undefined4 *)(param_2 + 0x48));
      *(undefined4 *)(param_2 + 0x48) = uVar2;
      *(undefined4 *)(param_2 + 0x50) = uVar3;
      *(undefined1 *)param_1 = 4;
      *(undefined4 *)(param_2 + 0x4c) = local_bc;
      return;
    }
    piVar15 = local_6c;
    piVar16 = local_68;
  }
  FUN_019bb7e0(local_a8,piVar11);
LAB_0125fff0:
  if (local_b4 != -0x80000000) {
    FUN_019bb7e0(local_b4,local_b0);
  }
  FUN_012681c8(&local_c0);
  *param_1 = piVar15;
  param_1[1] = piVar16;
  return;
}

