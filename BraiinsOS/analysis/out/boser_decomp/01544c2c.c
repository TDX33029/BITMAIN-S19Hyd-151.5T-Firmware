// FUN_01544c2c @ 01544c2c size=784 calls_out=13 calls_in=1
// strings: 

undefined4 FUN_01544c2c(int param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  undefined8 uVar19;
  int local_74;
  undefined4 local_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 *local_54;
  undefined *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int *local_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  if (*param_2 == '\x04') {
    iVar9 = *(int *)(param_2 + 0xc);
    FUN_018a7af8(&local_6c,iVar9);
    FUN_0154589c(param_1,param_2,&local_6c,param_5,1);
    local_58 = 0;
    local_74 = 4;
    local_5c = 4;
    local_60 = 0;
    if (iVar9 == 0) {
      FUN_019bb7e0();
    }
    else {
      iVar17 = 0;
      iVar14 = *(int *)(param_2 + 8);
      iVar9 = iVar9 * 0x18;
      iVar5 = *(int *)(param_1 + 0x34);
      iVar11 = 0;
      do {
        iVar7 = iVar11;
        if (iStack_64 == iVar17) break;
        if ((*(char *)(iStack_68 + iVar17) == '\0') &&
           ((iVar5 == 0 ||
            (iVar6 = FUN_01577618((int *)(param_1 + 0x34),iVar14,param_5), iVar6 == 0)))) {
          local_2c = 0;
          local_34 = 0;
          local_48 = 0;
          local_30 = 1;
          local_4c = 0x60000020;
          local_50 = &DAT_01cfb7ac;
          local_54 = &local_34;
          iVar7 = FUN_01968fa4(iVar14,&local_54);
          uVar4 = local_2c;
          uVar3 = local_30;
          uVar15 = local_34;
          if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01cfb7c4,&DAT_01d30334);
          }
          if (iVar11 == local_60) {
            FUN_019abd3c(&local_60);
            local_74 = local_5c;
          }
          iVar7 = iVar11 + 1;
          puVar8 = (undefined4 *)(local_74 + iVar11 * 0xc);
          *puVar8 = uVar15;
          puVar8[1] = uVar3;
          puVar8[2] = uVar4;
          local_58 = iVar7;
        }
        iVar14 = iVar14 + 0x18;
        iVar17 = iVar17 + 1;
        iVar9 = iVar9 + -0x18;
        iVar11 = iVar7;
      } while (iVar9 != 0);
      FUN_019bb7e0(local_6c,iStack_68);
      if (iVar7 != 0) {
        piVar12 = *(int **)(param_1 + 0x70);
        do {
          iVar9 = *piVar12;
          bVar2 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar2);
        *piVar12 = iVar9 + 1;
        if (iVar9 < 0) {
LAB_01544f28:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x1544f28);
          (*pcVar1)();
        }
        uVar16 = *(uint *)(param_1 + 0x74);
        if (param_4 == 0) {
          local_54 = (undefined4 *)0x0;
        }
        else {
          DataMemoryBarrier(0xb);
          if (*(int *)(param_4 + 0x14) != 0) {
            FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
          }
          piVar13 = *(int **)(param_4 + 0xc);
          do {
            iVar9 = *piVar13;
            bVar2 = (bool)hasExclusiveAccess(piVar13);
          } while (!bVar2);
          *piVar13 = iVar9 + 1;
          if (iVar9 < 0) goto LAB_01544f28;
          piVar18 = piVar12 + 2;
          uVar15 = *(undefined4 *)(param_4 + 0x10);
          uVar10 = (*(int **)(param_4 + 4))[1];
          if (uVar16 < uVar10) {
            uVar10 = 0;
          }
          else {
            iVar9 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar18,uVar10);
            if (iVar9 != 0) {
              uVar10 = 0;
            }
            piVar18 = (int *)((int)piVar18 + uVar10);
          }
          local_3c = FUN_016bc0ec(piVar18,uVar16 - uVar10);
          local_48 = 3;
          local_54 = (undefined4 *)0x2;
          local_44 = piVar13;
          local_40 = uVar15;
        }
        uVar19 = FUN_01531840(param_3);
        uVar15 = FUN_01595784(piVar12,uVar16,&local_54,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20),
                              param_2,&local_60);
        return uVar15;
      }
    }
    FUN_006a41c0(&local_60);
  }
  return 0;
}

