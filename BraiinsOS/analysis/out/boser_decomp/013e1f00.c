// FUN_013e1f00 @ 013e1f00 size=808 calls_out=7 calls_in=2
// strings: buffer space exhausted; sending this messages would overflow the state

void FUN_013e1f00(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int local_34;
  int local_30;
  undefined1 local_2c;
  int local_28;
  undefined1 local_24;
  
  if (*(byte *)(param_2 + 2) == 2) {
LAB_013e1f1c:
    FUN_01bed4e2(param_1,param_3,0x74);
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  else {
    if ((*(byte *)(param_2 + 2) & 1) != 0) {
      FUN_01656cb0(&local_34,param_2[1] + 8);
      if (local_34 == 1) {
        local_24 = local_2c;
        local_28 = local_30;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_28,&DAT_01cf2f98,&DAT_01d18fe0);
      }
      if (*(char *)(local_30 + 0x10) == '\x01') {
        if (*(int *)(local_30 + 8) != 0) {
          (**(code **)(*(int *)(local_30 + 8) + 0xc))(*(undefined4 *)(local_30 + 0xc));
        }
        *(undefined4 *)(local_30 + 8) = 0;
        FUN_00a97e8c(local_30,local_2c);
        FUN_01bed4e2(param_1,param_3,0x74);
        *(undefined1 *)(param_1 + 0x1d) = 0;
        return;
      }
      *(undefined1 *)(param_2 + 2) = 0;
      FUN_00a97e8c(local_30,local_2c);
    }
    uVar9 = *(uint *)(*param_2 + 0x1c);
    puVar3 = (uint *)(*param_2 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      if (uVar9 < 0x80000000) goto LAB_013e1f1c;
      uVar6 = uVar9 & 0x7fffffff;
      if (uVar6 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("buffer space exhausted; sending this messages would overflow the state",0x46,
                     &DAT_01d18ff0);
      }
      uVar11 = *puVar3;
      if (uVar11 == uVar9) {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(puVar3);
          if (bVar2) {
            *puVar3 = uVar9 + 1 | 0x80000000;
            bVar2 = true;
            uVar9 = uVar11;
            goto LAB_013e2030;
          }
          uVar11 = *puVar3;
        } while (uVar11 == uVar9);
      }
      bVar2 = false;
      ClearExclusiveLocal();
      uVar9 = uVar11;
LAB_013e2030:
      DataMemoryBarrier(0xb);
    } while (!bVar2);
    iVar13 = *param_2;
    if (*(uint *)(iVar13 + 0x18) <= uVar6) {
      piVar12 = (int *)param_2[1];
      FUN_01656cb0(&local_34,piVar12 + 2);
      if (local_34 == 1) {
        local_24 = local_2c;
        local_28 = local_30;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_28,&DAT_01cf2f98,&DAT_01d19000);
      }
      if (*(int *)(local_30 + 8) != 0) {
        (**(code **)(*(int *)(local_30 + 8) + 0xc))(*(undefined4 *)(local_30 + 0xc));
      }
      *(undefined1 *)(local_30 + 0x10) = 1;
      *(undefined4 *)(local_30 + 8) = 0;
      FUN_00a97e8c(local_30,local_2c);
      do {
        iVar4 = *piVar12;
        bVar2 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar2);
      *piVar12 = iVar4 + 1;
      if (iVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x13e222c);
        (*pcVar1)();
      }
      uVar5 = FUN_013cec90(piVar12);
      puVar10 = (undefined4 *)(iVar13 + 0x10);
      DataMemoryBarrier(0xb);
      do {
        puVar7 = (undefined4 *)*puVar10;
        bVar2 = (bool)hasExclusiveAccess(puVar10);
      } while (!bVar2);
      *puVar10 = uVar5;
      DataMemoryBarrier(0xb);
      *puVar7 = uVar5;
      puVar10 = (undefined4 *)(iVar13 + 0x1c);
      DataMemoryBarrier(0xb);
      iVar13 = *param_2;
      *(byte *)(param_2 + 2) = (byte)((uint)*puVar10 >> 0x1f);
    }
    iVar4 = FUN_013cec10(param_3);
    piVar12 = (int *)(iVar13 + 8);
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar4;
    DataMemoryBarrier(0xb);
    *(int *)(iVar8 + 0x74) = iVar4;
    puVar3 = (uint *)(iVar13 + 0x2c);
    DataMemoryBarrier(0xb);
    do {
      uVar9 = *puVar3;
      bVar2 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar2);
    *puVar3 = uVar9 | 2;
    DataMemoryBarrier(0xb);
    if (uVar9 == 0) {
      iVar4 = *(int *)(iVar13 + 0x24);
      *(undefined4 *)(iVar13 + 0x24) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar2);
      *puVar3 = *puVar3 & 0xfffffffd;
      if (iVar4 != 0) {
        (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar13 + 0x28));
      }
    }
    *param_1 = 0x80000001;
  }
  return;
}

