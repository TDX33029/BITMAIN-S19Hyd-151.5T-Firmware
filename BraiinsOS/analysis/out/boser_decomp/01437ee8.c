// FUN_01437ee8 @ 01437ee8 size=704 calls_out=7 calls_in=2
// strings: buffer space exhausted; sending this messages would overflow the state

void FUN_01437ee8(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  uint uVar15;
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
  
  if ((char)param_2[2] == '\x02') {
    uVar11 = param_3[1];
    uVar14 = param_3[2];
    uVar17 = param_3[3];
    *param_1 = *param_3;
    param_1[1] = uVar11;
    param_1[2] = uVar14;
    param_1[3] = uVar17;
    uVar3 = 1;
  }
  else {
    iVar4 = FUN_01437da8(param_2,0);
    if (iVar4 == 0) {
      uVar11 = *param_3;
      uVar14 = param_3[1];
      uVar17 = param_3[2];
      uVar18 = param_3[3];
      uVar12 = *(uint *)(*param_2 + 0x1c);
      puVar5 = (uint *)(*param_2 + 0x1c);
      DataMemoryBarrier(0xb);
      do {
        if (uVar12 < 0x80000000) {
          uVar3 = 1;
          *param_1 = uVar11;
          param_1[1] = uVar14;
          param_1[2] = uVar17;
          param_1[3] = uVar18;
          goto LAB_01438148;
        }
        uVar8 = uVar12 & 0x7fffffff;
        if (uVar8 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("buffer space exhausted; sending this messages would overflow the state",0x46
                       ,&DAT_01d18ff0);
        }
        uVar15 = *puVar5;
        if (uVar15 == uVar12) {
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(puVar5);
            if (bVar2) {
              *puVar5 = uVar12 + 1 | 0x80000000;
              bVar2 = true;
              uVar12 = uVar15;
              goto LAB_01437fbc;
            }
            uVar15 = *puVar5;
          } while (uVar15 == uVar12);
        }
        bVar2 = false;
        ClearExclusiveLocal();
        uVar12 = uVar15;
LAB_01437fbc:
        DataMemoryBarrier(0xb);
      } while (!bVar2);
      iVar4 = *param_2;
      if (*(uint *)(iVar4 + 0x18) <= uVar8) {
        piVar16 = (int *)param_2[1];
        FUN_01656cb0(&local_3c,piVar16 + 2);
        if (local_3c == 1) {
          local_24 = (undefined1)local_34;
          local_28 = local_38;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533467,0x2b,&local_28,&DAT_01cf6b40,&DAT_01d19000);
        }
        if (*(int *)(local_38 + 8) != 0) {
          (**(code **)(*(int *)(local_38 + 8) + 0xc))(*(undefined4 *)(local_38 + 0xc));
        }
        *(undefined1 *)(local_38 + 0x10) = 1;
        *(undefined4 *)(local_38 + 8) = 0;
        FUN_00a97e8c(local_38,local_34 & 0xff);
        do {
          iVar6 = *piVar16;
          bVar2 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar2);
        *piVar16 = iVar6 + 1;
        if (iVar6 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x14381a8);
          (*pcVar1)();
        }
        uVar7 = FUN_013cec90(piVar16);
        puVar13 = (undefined4 *)(iVar4 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          puVar9 = (undefined4 *)*puVar13;
          bVar2 = (bool)hasExclusiveAccess(puVar13);
        } while (!bVar2);
        *puVar13 = uVar7;
        DataMemoryBarrier(0xb);
        *puVar9 = uVar7;
        DataMemoryBarrier(0xb);
        iVar4 = *param_2;
        *(byte *)(param_2 + 2) = (byte)((uint)*(undefined4 *)(*param_2 + 0x1c) >> 0x1f);
      }
      local_3c = 1;
      local_38 = uVar11;
      local_34 = uVar14;
      uStack_30 = uVar17;
      uStack_2c = uVar18;
      iVar6 = FUN_014382d0();
      piVar16 = (int *)(iVar4 + 8);
      DataMemoryBarrier(0xb);
      do {
        iVar10 = *piVar16;
        bVar2 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar2);
      *piVar16 = iVar6;
      DataMemoryBarrier(0xb);
      *(int *)(iVar10 + 0x14) = iVar6;
      puVar5 = (uint *)(iVar4 + 0x2c);
      DataMemoryBarrier(0xb);
      do {
        uVar12 = *puVar5;
        bVar2 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar2);
      *puVar5 = uVar12 | 2;
      uVar3 = 2;
      DataMemoryBarrier(0xb);
      if (uVar12 == 0) {
        iVar6 = *(int *)(iVar4 + 0x24);
        *(undefined4 *)(iVar4 + 0x24) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar2);
        *puVar5 = *puVar5 & 0xfffffffd;
        if (iVar6 != 0) {
          (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar4 + 0x28));
        }
      }
LAB_01438148:
      *(undefined1 *)(param_1 + 4) = uVar3;
      return;
    }
    uVar11 = param_3[1];
    uVar14 = param_3[2];
    uVar17 = param_3[3];
    *param_1 = *param_3;
    param_1[1] = uVar11;
    param_1[2] = uVar14;
    param_1[3] = uVar17;
    uVar3 = 0;
  }
  *(undefined1 *)(param_1 + 4) = uVar3;
  return;
}

