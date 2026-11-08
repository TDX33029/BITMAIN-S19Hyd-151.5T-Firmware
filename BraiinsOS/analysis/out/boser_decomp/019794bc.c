// FUN_019794bc @ 019794bc size=580 calls_out=6 calls_in=2
// strings: 

void FUN_019794bc(int *param_1,int param_2,int param_3)

{
  code *pcVar1;
  ushort uVar2;
  bool bVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 uVar19;
  int local_3c;
  undefined4 local_38;
  int local_34;
  undefined8 local_30;
  int local_28;
  
  if (param_3 == 0) {
    iVar18 = FUN_0197949c();
    uVar13 = 0;
    uVar2 = *(ushort *)(param_2 + 0x10e);
    *(undefined2 *)(iVar18 + 0x10e) = 0;
    *(undefined4 *)(iVar18 + 0x108) = 0;
    if (uVar2 != 0) {
      uVar14 = 0;
      do {
        puVar7 = (undefined4 *)(param_2 + 0xb0 + uVar14 * 8);
        piVar15 = (int *)*puVar7;
        uVar13 = uVar14 + 1;
        puVar5 = (undefined4 *)(param_2 + uVar14 * 0x10);
        uVar11 = *puVar5;
        uVar8 = puVar5[1];
        uVar12 = puVar5[2];
        uVar17 = puVar5[3];
        do {
          iVar9 = *piVar15;
          bVar3 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar3);
        *piVar15 = iVar9 + 1;
        if (iVar9 < 0) goto LAB_019796fc;
        FUN_0197871c(&local_30,iVar18,uVar11,uVar8,uVar12,uVar17,piVar15,puVar7[1]);
        uVar14 = uVar13;
      } while (uVar13 < *(ushort *)(param_2 + 0x10e));
    }
    *param_1 = iVar18;
    param_1[1] = 0;
    param_1[2] = uVar13;
  }
  else {
    FUN_019794bc(&local_30,*(undefined4 *)(param_2 + 0x110));
    if ((int)local_30 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d27490);
    }
    local_30 = FUN_019788d0((int)local_30,local_30._4_4_);
    uVar4 = (ulonglong)local_30 >> 0x20;
    uVar11 = (undefined4)local_30;
    if (*(ushort *)(param_2 + 0x10e) != 0) {
      uVar13 = 0;
      iVar18 = local_28;
      do {
        puVar7 = (undefined4 *)(param_2 + uVar13 * 0x10);
        uVar12 = *puVar7;
        puVar5 = (undefined4 *)(param_2 + 0xb0 + uVar13 * 8);
        piVar15 = (int *)*puVar5;
        uVar13 = uVar13 + 1;
        uVar19 = puVar7[1];
        uVar17 = puVar7[2];
        uVar8 = puVar7[3];
        do {
          iVar9 = *piVar15;
          bVar3 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar3);
        *piVar15 = iVar9 + 1;
        if (iVar9 < 0) {
LAB_019796fc:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x19796fc);
          (*pcVar1)();
        }
        uVar16 = puVar5[1];
        FUN_019794bc(&local_3c,((undefined4 *)(param_2 + 0x110))[uVar13],param_3 + -1);
        iVar9 = local_34;
        if (local_3c == 0) {
          iVar6 = FUN_0197949c();
          uVar10 = 0;
          *(undefined2 *)(iVar6 + 0x10e) = 0;
          *(undefined4 *)(iVar6 + 0x108) = 0;
        }
        else {
          iVar6 = local_3c;
          uVar10 = local_38;
        }
        FUN_019787d8(uVar11,(int)uVar4,uVar12,uVar19,uVar17,uVar8,piVar15,uVar16,iVar6,uVar10);
        iVar18 = iVar9 + iVar18 + 1;
      } while (uVar13 < *(ushort *)(param_2 + 0x10e));
      local_28 = iVar18;
    }
    *(undefined8 *)param_1 = local_30;
    param_1[2] = local_28;
  }
  return;
}

