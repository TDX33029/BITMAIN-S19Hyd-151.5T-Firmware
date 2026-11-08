// FUN_01822d70 @ 01822d70 size=1232 calls_out=7 calls_in=0
// strings: Out of bounds access

/* WARNING: Removing unreachable block (ram,0x01823368) */

undefined4 FUN_01822d70(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  code *pcVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  int **local_244;
  int *local_240;
  int *local_23c;
  int *local_238 [128];
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  
  if ((*(char *)(param_1 + 0x158) == '\x01') && (*(int *)(param_1 + 0x14c) != 0)) {
    local_240 = (int *)CONCAT31(local_240._1_3_,4);
    goto LAB_018232b4;
  }
  uVar16 = *(uint *)(param_1 + 0x110);
  uVar13 = *(uint *)(param_1 + 0x114);
  FUN_0170f924(local_238);
  iVar2 = FUN_01857c8c(local_238);
  if ((uVar16 - uVar13) + iVar2 != 0) {
    if (*(char *)(param_1 + 300) == '\x01') {
      uVar15 = *(uint *)(param_1 + 0x120);
      iVar3 = *(int *)(param_1 + 0x10c);
      uVar4 = *(uint *)(param_1 + 0x118);
      iVar5 = *(int *)(param_1 + 0x11c);
      iVar6 = *(int *)(param_1 + 0x124);
      uVar10 = *(undefined4 *)(param_1 + 0x13c);
      iVar2 = *(int *)(param_1 + 0x140);
      do {
        iVar9 = 0;
        do {
          local_238[iVar9 * 2] = (int *)0x1;
          iVar7 = iVar9 + 1;
          local_238[iVar9 * 2 + 1] = (int *)0x0;
          iVar9 = iVar7;
        } while (iVar7 != 0x40);
        uVar14 = 0;
        local_244 = local_238;
        if (uVar16 != uVar13) {
          if (uVar16 < uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(uVar13,uVar16,uVar16,&DAT_01d20b48);
          }
          uVar14 = 1;
          local_238[1] = (int *)(uVar16 - uVar13);
          local_238[0] = (int *)(iVar3 + uVar13);
          local_244 = local_238 + 2;
        }
        FUN_0170f924(&local_38,param_1 + 0x118);
        if (local_38 == local_34) {
          piVar12 = local_30;
          if (local_30 != local_2c) goto LAB_01822f10;
        }
        else {
          piVar12 = local_38;
LAB_01822f10:
          if (piVar12 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01822f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar10 = (*(code *)(&DAT_01822f4c + *(int *)(&DAT_01822f4c + *piVar12 * 4)))
                               (*(int *)(&DAT_01822f4c + *piVar12 * 4),local_244,0x40 - uVar14);
            return uVar10;
          }
        }
        if (0x40 < uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar14,0x40,&DAT_01d20ae8);
        }
        (**(code **)(iVar2 + 0x20))(&local_38,uVar10,param_2,local_238,uVar14);
        piVar12 = local_34;
        if ((char)local_38 == '\x05') goto LAB_01823348;
        if (((uint)local_38 & 0xff) != 4) {
          local_240 = local_38;
          local_23c = local_34;
          goto LAB_01822dec;
        }
        piVar8 = (int *)(uVar16 - uVar13);
        bVar17 = piVar8 < local_34;
        bVar1 = !bVar17 && piVar8 != local_34;
        if (bVar1 == bVar17) {
          uVar13 = 0;
          uVar16 = 0;
          *(undefined4 *)(param_1 + 0x110) = 0;
LAB_01823088:
          *(uint *)(param_1 + 0x114) = uVar13;
        }
        else {
          if ((char)(bVar1 - bVar17) == '\x01') {
            uVar13 = uVar13 + (int)local_34;
            goto LAB_01823088;
          }
          *(undefined4 *)(param_1 + 0x110) = 0;
          *(undefined4 *)(param_1 + 0x114) = 0;
          if (local_34 != piVar8) {
            if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("Out of bounds access",0x14,&DAT_01d20b28);
            }
            uVar13 = uVar15 - uVar4;
            if (uVar15 < uVar4) {
              uVar13 = uVar15;
            }
                    /* WARNING: Could not recover jumptable at 0x018230d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar10 = (*(code *)(&DAT_018230d8 +
                               *(int *)(&DAT_018230d8 + *(int *)(iVar5 + uVar13 * 0x28) * 4)))();
            return uVar10;
          }
          uVar16 = 0;
          uVar13 = 0;
        }
        FUN_0170f924(local_238,param_1 + 0x118);
        iVar9 = FUN_01857c8c(local_238);
        if ((uVar16 - uVar13) + iVar9 == 0) goto LAB_01822ddc;
      } while (piVar12 != (int *)0x0);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x10c);
      uVar10 = *(undefined4 *)(param_1 + 0x13c);
      iVar2 = *(int *)(param_1 + 0x140);
      do {
        if (uVar16 < uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar13,uVar16,uVar16,&DAT_01d20b48);
        }
        (**(code **)(iVar2 + 0x10))(local_238,uVar10,param_2,iVar3 + uVar13,uVar16 - uVar13);
        if ((char)local_238[0] == '\x05') goto LAB_01823348;
        if (((uint)local_238[0] & 0xff) != 4) {
          local_240 = local_238[0];
          local_23c = local_238[1];
          goto LAB_01822dec;
        }
        uVar13 = uVar13 + (int)local_238[1];
        *(uint *)(param_1 + 0x114) = uVar13;
        if (uVar16 == uVar13) {
          pcVar11 = *(code **)(iVar2 + 0x14);
          *(undefined4 *)(param_1 + 0x110) = 0;
          *(undefined4 *)(param_1 + 0x114) = 0;
          goto LAB_01822de0;
        }
      } while (local_238[1] != (int *)0x0);
    }
    local_23c = (int *)0x0;
    local_240 = (int *)0x1701;
    goto LAB_018232b4;
  }
  iVar2 = *(int *)(param_1 + 0x140);
  uVar10 = *(undefined4 *)(param_1 + 0x13c);
LAB_01822ddc:
  pcVar11 = *(code **)(iVar2 + 0x14);
LAB_01822de0:
  (*pcVar11)(&local_240,uVar10,param_2);
LAB_01822dec:
  if ((char)local_240 == '\x05') {
    return 1;
  }
LAB_018232b4:
  if (((uint)local_240 & 0xff) == 5) {
    return 1;
  }
  if (((uint)local_240 & 0xff) == 4) {
    FUN_0187246c(param_1);
    FUN_0187254c(param_1,param_2);
  }
  else {
    local_238[0] = local_240;
    local_238[1] = local_23c;
    FUN_01854058(local_238);
  }
  return 0;
LAB_01823348:
  local_240 = (int *)CONCAT31(local_240._1_3_,5);
  goto LAB_01822dec;
}

