// FUN_01764558 @ 01764558 size=1252 calls_out=8 calls_in=1
// strings: Out of bounds access

/* WARNING: Removing unreachable block (ram,0x01764cd8) */

undefined8 FUN_01764558(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  code *pcVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  undefined8 uVar14;
  uint local_248;
  int *local_240;
  int *local_23c;
  int *local_238 [128];
  int *local_38;
  int *local_34;
  int *piStack_30;
  int *piStack_2c;
  
  if ((*(char *)(param_1 + 0x158) == '\x01') && (*(int *)(param_1 + 0x14c) != 0)) {
    local_240 = (int *)CONCAT31(local_240._1_3_,4);
LAB_017645ec:
    piVar7 = local_23c;
    piVar6 = local_240;
    if (((uint)local_240 & 0xff) != 5) {
      if (((uint)local_240 & 0xff) == 4) {
        FUN_0187246c(param_1);
        FUN_0175f2ec(param_1,param_2);
        param_1 = 0;
      }
      else {
        param_1 = FUN_01427b74(9);
        local_238[1] = piVar7;
        local_238[0] = piVar6;
        FUN_01427bf4(param_1,local_238);
      }
      uVar3 = 0;
      goto LAB_0176464c;
    }
  }
  else {
    uVar12 = *(uint *)(param_1 + 0x110);
    local_248 = *(uint *)(param_1 + 0x114);
    FUN_0170f924(local_238);
    iVar2 = FUN_01857c8c(local_238);
    if ((uVar12 - local_248) + iVar2 != 0) {
      if (*(char *)(param_1 + 300) == '\x01') {
        iVar11 = *(int *)(param_1 + 0x124);
        iVar2 = *(int *)(param_1 + 0x10c);
        uVar3 = *(undefined4 *)(param_1 + 0x13c);
        iVar4 = *(int *)(param_1 + 0x140);
        do {
          iVar8 = 0;
          do {
            local_238[iVar8 * 2] = (int *)0x1;
            iVar5 = iVar8 + 1;
            local_238[iVar8 * 2 + 1] = (int *)0x0;
            iVar8 = iVar5;
          } while (iVar5 != 0x40);
          uVar10 = 0;
          if (uVar12 != local_248) {
            if (uVar12 < local_248) goto LAB_01764d58;
            uVar10 = 1;
            local_238[1] = (int *)(uVar12 - local_248);
            local_238[0] = (int *)(iVar2 + local_248);
          }
          FUN_0170f924(&local_38,param_1 + 0x118);
          if (local_38 == local_34) {
            piVar6 = piStack_2c;
            piVar7 = piStack_30;
            if (piStack_30 != piStack_2c) goto LAB_01764748;
          }
          else {
            piVar6 = local_34;
            piVar7 = local_38;
LAB_01764748:
            if (piVar7 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01764778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar14 = (*(code *)(&DAT_0176477c + *(int *)(&DAT_0176477c + *piVar7 * 4)))
                                 (*(int *)(&DAT_0176477c + *piVar7 * 4),0x40 - uVar10,0x40 - uVar10,
                                  piVar6);
              return uVar14;
            }
          }
          if (0x40 < uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar10,0x40,&DAT_01d20ae8);
          }
          (**(code **)(iVar4 + 0x20))(&local_38,uVar3,param_2,local_238,uVar10);
          piVar6 = local_34;
          if ((char)local_38 == '\x05') {
            local_240 = (int *)CONCAT31(local_240._1_3_,5);
            goto LAB_017645e0;
          }
          if (((uint)local_38 & 0xff) != 4) {
            local_240 = local_38;
            local_23c = local_34;
            goto LAB_017645e0;
          }
          piVar7 = (int *)(uVar12 - local_248);
          bVar13 = piVar7 < local_34;
          bVar1 = !bVar13 && piVar7 != local_34;
          if (bVar1 == bVar13) {
            local_248 = 0;
            uVar12 = 0;
            *(undefined4 *)(param_1 + 0x110) = 0;
LAB_01764a28:
            *(uint *)(param_1 + 0x114) = local_248;
          }
          else {
            if ((char)(bVar1 - bVar13) == '\x01') {
              local_248 = local_248 + (int)local_34;
              goto LAB_01764a28;
            }
            *(undefined4 *)(param_1 + 0x110) = 0;
            *(undefined4 *)(param_1 + 0x114) = 0;
            if (local_34 != piVar7) {
              uVar12 = *(uint *)(param_1 + 0x120);
              if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("Out of bounds access",0x14,&DAT_01d20b28);
              }
              uVar10 = uVar12 - *(uint *)(param_1 + 0x118);
              if (uVar12 < *(uint *)(param_1 + 0x118)) {
                uVar10 = uVar12;
              }
                    /* WARNING: Could not recover jumptable at 0x01764a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar14 = (*(code *)(&DAT_01764a84 +
                                 *(int *)(&DAT_01764a84 +
                                         *(int *)(*(int *)(param_1 + 0x11c) + uVar10 * 0x28) * 4)))
                                 ();
              return uVar14;
            }
            uVar12 = 0;
            local_248 = 0;
          }
          FUN_0170f924(local_238,param_1 + 0x118);
          iVar8 = FUN_01857c8c(local_238);
          if ((uVar12 - local_248) + iVar8 == 0) {
            pcVar9 = *(code **)(iVar4 + 0x14);
            uVar3 = *(undefined4 *)(param_1 + 0x13c);
            goto LAB_017645d4;
          }
        } while (piVar6 != (int *)0x0);
        local_23c = (int *)0x0;
        local_240 = (int *)0x1701;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x10c);
        uVar3 = *(undefined4 *)(param_1 + 0x13c);
        iVar4 = *(int *)(param_1 + 0x140);
        do {
          if (uVar12 < local_248) {
LAB_01764d58:
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(local_248,uVar12,uVar12,&DAT_01d20b48);
          }
          (**(code **)(iVar4 + 0x10))(local_238,uVar3,param_2,iVar2 + local_248,uVar12 - local_248);
          if ((char)local_238[0] == '\x05') {
            local_240 = (int *)CONCAT31(local_240._1_3_,5);
            goto LAB_017645e0;
          }
          if (((uint)local_238[0] & 0xff) != 4) {
            local_240 = local_238[0];
            local_23c = local_238[1];
            goto LAB_017645e0;
          }
          local_248 = local_248 + (int)local_238[1];
          *(uint *)(param_1 + 0x114) = local_248;
          if (uVar12 == local_248) {
            pcVar9 = *(code **)(iVar4 + 0x14);
            *(undefined4 *)(param_1 + 0x110) = 0;
            *(undefined4 *)(param_1 + 0x114) = 0;
            goto LAB_017645d4;
          }
        } while (local_238[1] != (int *)0x0);
        local_23c = (int *)0x0;
        local_240 = (int *)0x1701;
      }
      goto LAB_017645ec;
    }
    uVar3 = *(undefined4 *)(param_1 + 0x13c);
    pcVar9 = *(code **)(*(int *)(param_1 + 0x140) + 0x14);
LAB_017645d4:
    (*pcVar9)(&local_240,uVar3,param_2);
LAB_017645e0:
    if ((char)local_240 != '\x05') goto LAB_017645ec;
  }
  uVar3 = 1;
LAB_0176464c:
  return CONCAT44(param_1,uVar3);
}

