// FUN_01700670 @ 01700670 size=668 calls_out=7 calls_in=1
// strings: buffer space exhausted; sending this messages would overflow the state

void FUN_01700670(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined1 uVar15;
  int *piVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int local_3c;
  int local_38;
  uint local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28;
  undefined1 local_24;
  
  iVar3 = FUN_01700530(param_2,0);
  if (iVar3 == 0) {
    uVar10 = *param_3;
    uVar13 = param_3[1];
    uVar17 = param_3[2];
    uVar18 = param_3[3];
    uVar11 = *(uint *)(*param_2 + 0x1c);
    puVar4 = (uint *)(*param_2 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      if (uVar11 < 0x80000000) {
        uVar15 = 1;
        *param_1 = uVar10;
        param_1[1] = uVar13;
        param_1[2] = uVar17;
        param_1[3] = uVar18;
        goto LAB_017008ac;
      }
      uVar7 = uVar11 & 0x7fffffff;
      if (uVar7 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("buffer space exhausted; sending this messages would overflow the state",0x46,
                     &DAT_01d18ff0);
      }
      uVar14 = *puVar4;
      if (uVar14 == uVar11) {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(puVar4);
          if (bVar2) {
            *puVar4 = uVar11 + 1 | 0x80000000;
            bVar2 = true;
            uVar11 = uVar14;
            goto LAB_01700724;
          }
          uVar14 = *puVar4;
        } while (uVar14 == uVar11);
      }
      bVar2 = false;
      ClearExclusiveLocal();
      uVar11 = uVar14;
LAB_01700724:
      DataMemoryBarrier(0xb);
    } while (!bVar2);
    iVar3 = *param_2;
    if (*(uint *)(iVar3 + 0x18) <= uVar7) {
      piVar16 = (int *)param_2[1];
      FUN_01656cb0(&local_3c,piVar16 + 2);
      if (local_3c == 1) {
        local_24 = (undefined1)local_34;
        local_28 = local_38;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_28,&DAT_01d19010,&DAT_01d19000);
      }
      if (*(int *)(local_38 + 8) != 0) {
        (**(code **)(*(int *)(local_38 + 8) + 0xc))(*(undefined4 *)(local_38 + 0xc));
      }
      *(undefined1 *)(local_38 + 0x10) = 1;
      *(undefined4 *)(local_38 + 8) = 0;
      FUN_00a97e8c(local_38,local_34 & 0xff);
      do {
        iVar5 = *piVar16;
        bVar2 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar2);
      *piVar16 = iVar5 + 1;
      if (iVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x170090c);
        (*pcVar1)();
      }
      uVar6 = FUN_013cec90(piVar16);
      puVar12 = (undefined4 *)(iVar3 + 0x10);
      DataMemoryBarrier(0xb);
      do {
        puVar8 = (undefined4 *)*puVar12;
        bVar2 = (bool)hasExclusiveAccess(puVar12);
      } while (!bVar2);
      *puVar12 = uVar6;
      DataMemoryBarrier(0xb);
      *puVar8 = uVar6;
      puVar12 = (undefined4 *)(iVar3 + 0x1c);
      DataMemoryBarrier(0xb);
      iVar3 = *param_2;
      *(byte *)(param_2 + 2) = (byte)((uint)*puVar12 >> 0x1f);
    }
    local_3c = 1;
    local_38 = uVar10;
    local_34 = uVar13;
    uStack_30 = uVar17;
    uStack_2c = uVar18;
    iVar5 = FUN_017319a8();
    piVar16 = (int *)(iVar3 + 8);
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar16;
      bVar2 = (bool)hasExclusiveAccess(piVar16);
    } while (!bVar2);
    *piVar16 = iVar5;
    DataMemoryBarrier(0xb);
    *(int *)(iVar9 + 0x14) = iVar5;
    puVar4 = (uint *)(iVar3 + 0x2c);
    DataMemoryBarrier(0xb);
    do {
      uVar11 = *puVar4;
      bVar2 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar2);
    *puVar4 = uVar11 | 2;
    uVar15 = 2;
    DataMemoryBarrier(0xb);
    if (uVar11 == 0) {
      iVar5 = *(int *)(iVar3 + 0x24);
      *(undefined4 *)(iVar3 + 0x24) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar2);
      *puVar4 = *puVar4 & 0xfffffffd;
      if (iVar5 != 0) {
        (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar3 + 0x28));
      }
    }
LAB_017008ac:
    *(undefined1 *)(param_1 + 4) = uVar15;
  }
  else {
    uVar10 = param_3[1];
    uVar13 = param_3[2];
    uVar17 = param_3[3];
    *param_1 = *param_3;
    param_1[1] = uVar10;
    param_1[2] = uVar13;
    param_1[3] = uVar17;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}

