// FUN_009dc1f4 @ 009dc1f4 size=1096 calls_out=10 calls_in=1
// strings: Out of bounds access

/* WARNING: Removing unreachable block (ram,0x009dc7b4) */

undefined8 FUN_009dc1f4(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  uint extraout_r2;
  uint extraout_r2_00;
  uint uVar13;
  int *piVar14;
  uint extraout_r3;
  uint extraout_r3_00;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  undefined8 uVar18;
  uint local_238 [128];
  int *local_38;
  int *local_34;
  int *piStack_30;
  int *piStack_2c;
  
  if ((*(char *)(param_1 + 0x15c) != '\x01') || (*(int *)(param_1 + 0x150) == 0)) {
    uVar16 = *(uint *)(param_1 + 0x120);
    uVar15 = *(uint *)(param_1 + 0x124);
    FUN_0170f924(local_238);
    iVar2 = FUN_01857c8c(local_238);
    if ((uVar16 - uVar15) + iVar2 != 0) {
      if (*(char *)(param_1 + 0x13c) == '\x01') {
        uVar4 = *(uint *)(param_1 + 0x128);
        iVar2 = *(int *)(param_1 + 300);
        uVar5 = *(uint *)(param_1 + 0x130);
        iVar6 = *(int *)(param_1 + 0x134);
        do {
          iVar10 = 0;
          do {
            local_238[iVar10 * 2] = 1;
            iVar7 = iVar10 + 1;
            local_238[iVar10 * 2 + 1] = 0;
            iVar10 = iVar7;
          } while (iVar7 != 0x40);
          uVar8 = FUN_01876620(param_1 + 0x118,local_238);
          FUN_0170f924(&local_38,param_1 + 0x128);
          if (local_38 == local_34) {
            piVar14 = piStack_30;
            if (piStack_30 != piStack_2c) goto LAB_009dc378;
          }
          else {
            piVar14 = local_38;
LAB_009dc378:
            if (piVar14 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009dc3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar18 = (*(code *)(&DAT_009dc3b4 + *(int *)(&DAT_009dc3b4 + *piVar14 * 4)))
                                 (*(int *)(&DAT_009dc3b4 + *piVar14 * 4),local_238 + uVar8 * 2,
                                  0x40 - uVar8);
              return uVar18;
            }
          }
          if (0x40 < uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar8,0x40,&DAT_01d20ae8);
          }
          FUN_019dfc70(&local_38,param_1 + 0x100,param_2,local_238,uVar8);
          piVar14 = local_34;
          uVar13 = extraout_r2;
          uVar8 = extraout_r3;
          if ((char)local_38 == '\x05') goto LAB_009dc740;
          uVar12 = (uint)local_38 & 0xff;
          if (uVar12 != 4) {
            uVar13 = (uint)local_38 >> 8 | (int)local_34 << 0x18;
            uVar8 = (uint)local_34 >> 8;
            goto LAB_009dc774;
          }
          piVar9 = (int *)(uVar16 - uVar15);
          bVar17 = piVar9 < local_34;
          bVar1 = !bVar17 && piVar9 != local_34;
          if (bVar1 == bVar17) {
            uVar15 = 0;
            uVar16 = 0;
            *(undefined4 *)(param_1 + 0x120) = 0;
LAB_009dc4e4:
            *(uint *)(param_1 + 0x124) = uVar15;
          }
          else {
            if ((char)(bVar1 - bVar17) == '\x01') {
              uVar15 = uVar15 + (int)local_34;
              goto LAB_009dc4e4;
            }
            *(undefined4 *)(param_1 + 0x120) = 0;
            *(undefined4 *)(param_1 + 0x124) = 0;
            if (local_34 != piVar9) {
              if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("Out of bounds access",0x14,&DAT_01d20b28);
              }
              uVar15 = uVar5 - uVar4;
              if (uVar5 < uVar4) {
                uVar15 = uVar5;
              }
                    /* WARNING: Could not recover jumptable at 0x009dc534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar18 = (*(code *)(&DAT_009dc538 +
                                 *(int *)(&DAT_009dc538 + *(int *)(iVar2 + uVar15 * 0x28) * 4)))();
              return uVar18;
            }
            uVar16 = 0;
            uVar15 = 0;
          }
          FUN_0170f924(local_238,param_1 + 0x128);
          iVar10 = FUN_01857c8c(local_238);
          if ((uVar16 - uVar15) + iVar10 == 0) goto LAB_009dc24c;
        } while (piVar14 != (int *)0x0);
      }
      else {
        uVar11 = *(undefined4 *)(param_1 + 0x108);
        uVar3 = *(undefined4 *)(param_1 + 0x10c);
        iVar2 = *(int *)(param_1 + 0x11c);
        do {
          if (uVar16 < uVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(uVar15,uVar16,uVar16,&DAT_01d20b48);
          }
          FUN_019dfa94(local_238,uVar11,uVar3,param_2,iVar2 + uVar15,uVar16 - uVar15);
          uVar13 = extraout_r2_00;
          uVar8 = extraout_r3_00;
          if ((char)local_238[0] == '\x05') goto LAB_009dc740;
          uVar12 = local_238[0] & 0xff;
          if (uVar12 != 4) {
            uVar8 = local_238[1] >> 8;
            uVar13 = local_238[0] >> 8 | local_238[1] << 0x18;
            goto LAB_009dc774;
          }
          uVar15 = uVar15 + local_238[1];
          *(uint *)(param_1 + 0x124) = uVar15;
          if (uVar16 == uVar15) {
            *(undefined4 *)(param_1 + 0x120) = 0;
            *(undefined4 *)(param_1 + 0x124) = 0;
            goto LAB_009dc24c;
          }
        } while (local_238[1] != 0);
      }
      uVar8 = 0;
      uVar13 = 0x17;
      uVar12 = 1;
      goto LAB_009dc78c;
    }
  }
LAB_009dc24c:
  FUN_0187246c(param_1);
  FUN_00a5e8fc(param_1,param_2);
  uVar11 = 0;
  goto LAB_009dc264;
LAB_009dc740:
  uVar12 = 5;
LAB_009dc774:
  uVar3 = 1;
  if (uVar12 == 5) {
    uVar11 = 5;
    goto LAB_009dc268;
  }
  if (uVar12 == 4) goto LAB_009dc24c;
LAB_009dc78c:
  local_238[0] = uVar12 | uVar13 << 8;
  local_238[1] = uVar8 << 8 | uVar13 >> 0x18;
  uVar11 = FUN_01854058(local_238);
LAB_009dc264:
  uVar3 = 0;
LAB_009dc268:
  return CONCAT44(uVar11,uVar3);
}

