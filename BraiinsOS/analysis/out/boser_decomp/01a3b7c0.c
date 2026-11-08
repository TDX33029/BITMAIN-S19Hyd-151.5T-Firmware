// FUN_01a3b7c0 @ 01a3b7c0 size=1108 calls_out=7 calls_in=18
// strings: 

void FUN_01a3b7c0(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int *local_40;
  int *local_3c;
  int *local_38;
  int local_34;
  undefined1 local_30;
  int local_2c;
  undefined1 local_28;
  
  FUN_01656cb0(&local_38,param_1 + 6);
  uVar4 = local_30;
  iVar3 = local_34;
  if (local_38 == (int *)&DAT_00000001) {
    local_28 = local_30;
    local_2c = local_34;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01d2bd10,&DAT_01d2bce0);
  }
  if (*(char *)(local_34 + 0x20) != '\0') {
    FUN_00a97e8c(local_34);
    return;
  }
  iVar7 = local_34 + 8;
  do {
    if (*(int *)(iVar3 + 0x10) == 0) {
      *(undefined1 *)(iVar3 + 0x20) = 1;
      FUN_01a3b770(iVar7);
      *(undefined4 *)(iVar3 + 0xc) = 4;
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined4 *)(iVar3 + 0x10) = 0;
      FUN_00a97e8c(iVar3,uVar4);
      FUN_019e03e8(param_1 + 2);
      return;
    }
    iVar8 = *(int *)(iVar3 + 0x10) + -1;
    piVar13 = *(int **)(*(int *)(iVar3 + 0xc) + iVar8 * 4);
    *(int *)(iVar3 + 0x10) = iVar8;
    local_40 = piVar13;
    FUN_01656cb0(&local_38,piVar13 + 6);
    uVar5 = local_30;
    iVar8 = local_34;
    if (local_38 == (int *)&DAT_00000001) {
      local_28 = local_30;
      local_2c = local_34;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01d2bd10,&DAT_01d2bcf0);
    }
    piVar9 = *(int **)(local_34 + 0x14);
    if (piVar9 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar11 = *piVar9;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = iVar11 + -1;
      if (iVar11 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a3b144((int *)(local_34 + 0x14));
      }
    }
    *(undefined4 *)(iVar8 + 0x14) = 0;
    *(undefined4 *)(iVar8 + 0x18) = 0;
    if (*(char *)(iVar8 + 0x20) == '\0') {
      iVar11 = *(int *)(iVar8 + 0x10);
      while (iVar11 != 0) {
        piVar9 = *(int **)(*(int *)(iVar8 + 0xc) + (iVar11 + -1) * 4);
        *(int *)(iVar8 + 0x10) = iVar11 + -1;
        local_3c = piVar9;
        FUN_01656cb0(&local_38,piVar9 + 6);
        uVar6 = local_30;
        iVar11 = local_34;
        if (local_38 == (int *)&DAT_00000001) {
          local_28 = local_30;
          local_2c = local_34;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01d2bd10,&DAT_01d2bd00);
        }
        piVar14 = (int *)(local_34 + 0x14);
        piVar10 = (int *)*piVar14;
        if (piVar10 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar12 = *piVar10;
            bVar2 = (bool)hasExclusiveAccess(piVar10);
          } while (!bVar2);
          *piVar10 = iVar12 + -1;
          if (iVar12 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01a3b144(piVar14);
          }
        }
        *(undefined4 *)(iVar11 + 0x14) = 0;
        *(undefined4 *)(iVar11 + 0x18) = 0;
        if (*(char *)(iVar11 + 0x20) == '\x01') {
          FUN_00a97e8c(iVar11,uVar6);
          DataMemoryBarrier(0xb);
          do {
            iVar11 = *piVar9;
            bVar2 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar2);
          *piVar9 = iVar11 + -1;
LAB_01a3ba98:
          if (iVar11 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01a3b144(&local_3c);
          }
        }
        else {
          if (*(int *)(iVar11 + 0x10) == 0) {
            *(undefined1 *)(iVar11 + 0x20) = 1;
            FUN_01a3b770(iVar11 + 8);
            *(undefined4 *)(iVar11 + 0xc) = 4;
            *(undefined4 *)(iVar11 + 8) = 0;
            *(undefined4 *)(iVar11 + 0x10) = 0;
            FUN_00a97e8c(iVar11,uVar6);
            FUN_019e03e8(piVar9 + 2);
            DataMemoryBarrier(0xb);
            do {
              iVar11 = *piVar9;
              bVar2 = (bool)hasExclusiveAccess(piVar9);
            } while (!bVar2);
            *piVar9 = iVar11 + -1;
            goto LAB_01a3ba98;
          }
          do {
            iVar12 = *param_1;
            bVar2 = (bool)hasExclusiveAccess(param_1);
          } while (!bVar2);
          *param_1 = iVar12 + 1;
          if (iVar12 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0x1a3bc18);
            (*pcVar1)();
          }
          piVar10 = (int *)*piVar14;
          if (piVar10 != (int *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar12 = *piVar10;
              bVar2 = (bool)hasExclusiveAccess(piVar10);
            } while (!bVar2);
            *piVar10 = iVar12 + -1;
            if (iVar12 == 1) {
              DataMemoryBarrier(0xb);
              FUN_01a3b144(piVar14);
            }
          }
          *(int **)(iVar11 + 0x14) = param_1;
          *(undefined4 *)(iVar11 + 0x18) = *(undefined4 *)(iVar3 + 0x10);
          FUN_00a97e8c(iVar11,uVar6);
          iVar11 = *(int *)(iVar3 + 0x10);
          local_38 = piVar9;
          if (iVar11 == *(int *)(iVar3 + 8)) {
            FUN_019ee1a8(iVar7);
          }
          *(int **)(*(int *)(iVar3 + 0xc) + iVar11 * 4) = piVar9;
          *(int *)(iVar3 + 0x10) = iVar11 + 1;
        }
        iVar11 = *(int *)(iVar8 + 0x10);
      }
      *(undefined1 *)(iVar8 + 0x20) = 1;
      FUN_01a3b770(iVar8 + 8);
      *(undefined4 *)(iVar8 + 0xc) = 4;
      *(undefined4 *)(iVar8 + 8) = 0;
      *(undefined4 *)(iVar8 + 0x10) = 0;
      FUN_00a97e8c(iVar8,uVar5);
      FUN_019e03e8(piVar13 + 2);
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar13;
        bVar2 = (bool)hasExclusiveAccess(piVar13);
      } while (!bVar2);
      *piVar13 = iVar8 + -1;
    }
    else {
      FUN_00a97e8c(iVar8,uVar5);
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar13;
        bVar2 = (bool)hasExclusiveAccess(piVar13);
      } while (!bVar2);
      *piVar13 = iVar8 + -1;
    }
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a3b144(&local_40);
    }
  } while( true );
}

