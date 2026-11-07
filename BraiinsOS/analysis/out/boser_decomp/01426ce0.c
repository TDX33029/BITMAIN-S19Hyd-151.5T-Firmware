// FUN_01426ce0 @ 01426ce0 size=824 calls_out=13 calls_in=0
// strings: buffer space exhausted; sending this messages would overflow the state

void FUN_01426ce0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  int *piVar14;
  ulonglong uVar15;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined1 local_30;
  int local_2c;
  undefined1 local_28;
  
  if (param_5 == 0) {
    param_1[1] = 0;
LAB_01426dbc:
    uVar3 = 4;
    goto LAB_01426dc0;
  }
  if (*(char *)(param_2 + 0x2c) == '\x02') {
LAB_01426d98:
    uVar15 = FUN_0141fa74(param_2 + 0x20,param_3);
    if ((uVar15 & 1) == 0) {
      if ((int)(uVar15 >> 0x20) == 0) {
        *param_1 = 0xb01;
        param_1[1] = 0;
        return;
      }
      FUN_01427298(param_1);
      return;
    }
  }
  else {
    piVar14 = (int *)(param_2 + 0x24);
    DataMemoryBarrier(0xb);
    if (*(uint *)(*piVar14 + 0x1c) < 0x80000000) goto LAB_01426d98;
    iVar4 = FUN_01421e44(piVar14,param_3);
    if (iVar4 == 0) {
      iVar4 = FUN_01298504(param_5,1);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(1,param_5);
      }
      FUN_01bed4e2(iVar4,param_4,param_5);
      local_3c = 0;
      local_40 = 0;
      local_44 = param_5;
      local_48 = iVar4;
      if ((*(char *)(param_2 + 0x2c) != '\x02') && (iVar5 = FUN_01421e44(piVar14), iVar5 == 0)) {
        uVar11 = *(uint *)(*piVar14 + 0x1c);
        puVar6 = (uint *)(*piVar14 + 0x1c);
        DataMemoryBarrier(0xb);
        do {
          if (uVar11 < 0x80000000) goto LAB_01426d90;
          uVar8 = uVar11 & 0x7fffffff;
          if (uVar8 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("buffer space exhausted; sending this messages would overflow the state",
                         0x46,&DAT_01d18ff0);
          }
          uVar13 = *puVar6;
          if (uVar13 == uVar11) {
            DataMemoryBarrier(0xb);
            do {
              bVar2 = (bool)hasExclusiveAccess(puVar6);
              if (bVar2) {
                *puVar6 = uVar11 + 1 | 0x80000000;
                bVar2 = true;
                uVar11 = uVar13;
                goto LAB_01426e54;
              }
              uVar13 = *puVar6;
            } while (uVar13 == uVar11);
          }
          bVar2 = false;
          ClearExclusiveLocal();
          uVar11 = uVar13;
LAB_01426e54:
          DataMemoryBarrier(0xb);
        } while (!bVar2);
        iVar4 = *piVar14;
        if (*(uint *)(iVar4 + 0x18) <= uVar8) {
          piVar14 = *(int **)(param_2 + 0x28);
          FUN_01656cb0(&local_38,piVar14 + 2);
          if (local_38 == 1) {
            local_28 = local_30;
            local_2c = local_34;
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01cf478c,&DAT_01d19000);
          }
          if (*(int *)(local_34 + 8) != 0) {
            (**(code **)(*(int *)(local_34 + 8) + 0xc))(*(undefined4 *)(local_34 + 0xc));
          }
          *(undefined1 *)(local_34 + 0x10) = 1;
          *(undefined4 *)(local_34 + 8) = 0;
          FUN_00a97e8c(local_34,local_30);
          do {
            iVar5 = *piVar14;
            bVar2 = (bool)hasExclusiveAccess(piVar14);
          } while (!bVar2);
          *piVar14 = iVar5 + 1;
          if (iVar5 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0x142700c);
            (*pcVar1)();
          }
          uVar7 = FUN_013cec90(piVar14);
          puVar12 = (undefined4 *)(iVar4 + 0x10);
          DataMemoryBarrier(0xb);
          do {
            puVar9 = (undefined4 *)*puVar12;
            bVar2 = (bool)hasExclusiveAccess(puVar12);
          } while (!bVar2);
          *puVar12 = uVar7;
          DataMemoryBarrier(0xb);
          *puVar9 = uVar7;
          puVar12 = (undefined4 *)(iVar4 + 0x1c);
          DataMemoryBarrier(0xb);
          iVar4 = *(int *)(param_2 + 0x24);
          *(byte *)(param_2 + 0x2c) = (byte)((uint)*puVar12 >> 0x1f);
        }
        iVar5 = FUN_01427160(&local_48);
        piVar14 = (int *)(iVar4 + 8);
        DataMemoryBarrier(0xb);
        do {
          iVar10 = *piVar14;
          bVar2 = (bool)hasExclusiveAccess(piVar14);
        } while (!bVar2);
        *piVar14 = iVar5;
        DataMemoryBarrier(0xb);
        *(int *)(iVar10 + 0x10) = iVar5;
        puVar6 = (uint *)(iVar4 + 0x2c);
        DataMemoryBarrier(0xb);
        do {
          uVar11 = *puVar6;
          bVar2 = (bool)hasExclusiveAccess(puVar6);
        } while (!bVar2);
        *puVar6 = uVar11 | 2;
        DataMemoryBarrier(0xb);
        if (uVar11 == 0) {
          iVar5 = *(int *)(iVar4 + 0x24);
          *(undefined4 *)(iVar4 + 0x24) = 0;
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar2);
          *puVar6 = *puVar6 & 0xfffffffd;
          if (iVar5 != 0) {
            (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar4 + 0x28));
          }
        }
        param_1[1] = param_5;
        goto LAB_01426dbc;
      }
LAB_01426d90:
      thunk_FUN_01be4678(iVar4);
      goto LAB_01426d98;
    }
  }
  uVar3 = 5;
LAB_01426dc0:
  *(undefined1 *)param_1 = uVar3;
  return;
}

