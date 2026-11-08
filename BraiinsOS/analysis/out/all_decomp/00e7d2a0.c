// FUN_00e7d2a0 @ 00e7d2a0 size=1300 calls_out=6 calls_in=2
// strings: 

void FUN_00e7d2a0(undefined4 *param_1,uint *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  uint *local_38;
  int local_28;
  
  uVar1 = param_2[2];
  uVar7 = *(uint *)(uVar1 + 0x40) & *param_2;
  if (*(uint *)(uVar1 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar7,*(uint *)(uVar1 + 0xc),&DAT_01880ac4);
  }
  pcVar8 = (char *)(*(int *)(uVar1 + 8) + uVar7 * 0x70);
  if (*pcVar8 == '\0') {
    bVar11 = (bool)hasExclusiveAccess(pcVar8);
    if (!bVar11) goto LAB_00e7d650;
    *pcVar8 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00e7d650:
    FUN_01280da8(pcVar8);
  }
  FUN_0128236c(pcVar8);
  if (*(uint *)(pcVar8 + 0x60) != *param_2 || *(uint *)(pcVar8 + 100) != param_2[1]) {
    FUN_01282570(pcVar8);
    if (*pcVar8 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar11 = (bool)hasExclusiveAccess(pcVar8);
        if (bVar11) {
          *pcVar8 = '\0';
          goto LAB_00e7d360;
        }
      } while (*pcVar8 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(pcVar8);
LAB_00e7d360:
    uVar1 = param_2[2];
    pcVar9 = (char *)(uVar1 + 0x10);
    if (*pcVar9 == '\0') {
      bVar11 = (bool)hasExclusiveAccess(pcVar9);
      if (!bVar11) goto LAB_00e7d660;
      *pcVar9 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_00e7d660:
      FUN_01280da8(pcVar9);
    }
    FUN_0128236c(pcVar9);
    uVar4 = *(uint *)(param_2[2] + 0xc);
    if (uVar4 <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar7,uVar4,&DAT_01880ad4);
    }
    pcVar8 = (char *)(*(int *)(param_2[2] + 8) + uVar7 * 0x70);
    if (*pcVar8 == '\0') {
      bVar11 = (bool)hasExclusiveAccess(pcVar8);
      if (!bVar11) goto LAB_00e7d3d0;
      *pcVar8 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_00e7d3d0:
      FUN_01280da8(pcVar8);
    }
    FUN_0128236c(pcVar8);
    uVar10 = *param_2;
    uVar7 = *(uint *)(pcVar8 + 0x60);
    uVar4 = param_2[1];
    if (uVar7 != uVar10 || *(uint *)(pcVar8 + 100) != uVar4) {
      uVar2 = *(uint *)(param_2[2] + 0xc);
      if (uVar7 + uVar2 != uVar10 || *(uint *)(pcVar8 + 100) + (uint)CARRY4(uVar7,uVar2) != uVar4) {
        uVar7 = *(uint *)(uVar1 + 0x18) - uVar2;
        uVar1 = *(int *)(uVar1 + 0x1c) - (uint)(*(uint *)(uVar1 + 0x18) < uVar2);
        FUN_01282570(pcVar9);
        if (*pcVar9 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar11 = (bool)hasExclusiveAccess(pcVar9);
            if (bVar11) {
              *pcVar9 = '\0';
              goto LAB_00e7d510;
            }
          } while (*pcVar9 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_01280a5c(pcVar9);
LAB_00e7d510:
        if (uVar7 != uVar10 || uVar1 != uVar4) {
          param_1[1] = 0;
          param_1[2] = uVar7 - uVar10;
          *param_1 = 2;
          param_1[3] = uVar1 - (uVar4 + (uVar7 < uVar10));
          *param_2 = uVar7;
          param_2[1] = uVar1;
          goto LAB_00e7d604;
        }
        uVar1 = *param_2;
        uVar7 = param_2[1];
        *param_1 = 3;
        param_1[1] = 0;
        param_1[2] = pcVar8;
        goto LAB_00e7d470;
      }
      if (*(char *)(uVar1 + 0x2c) != '\0') {
        *param_1 = 1;
        param_1[1] = 0;
        FUN_01282570(pcVar9);
        if (*pcVar9 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar11 = (bool)hasExclusiveAccess(pcVar9);
            if (bVar11) {
              *pcVar9 = '\0';
              goto LAB_00e7d604;
            }
          } while (*pcVar9 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_01280a5c(pcVar9);
LAB_00e7d604:
        FUN_01282570(pcVar8);
        if (*pcVar8 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar11 = (bool)hasExclusiveAccess(pcVar8);
            if (bVar11) {
              *pcVar8 = '\0';
              return;
            }
          } while (*pcVar8 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_01280a5c(pcVar8);
        return;
      }
      if (param_3 == (int *)0x0) {
        local_28 = 0;
        goto LAB_00e7d6cc;
      }
      puVar6 = (undefined4 *)*param_3;
      puVar5 = (undefined4 *)*param_4;
      if (puVar6 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)param_4[1];
LAB_00e7d67c:
        uVar12 = (*(code *)*puVar5)(puVar3);
        local_28 = *param_3;
        param_2 = (uint *)param_3[1];
        *(undefined8 *)param_3 = uVar12;
      }
      else {
        bVar11 = puVar6 != puVar5;
        puVar3 = (undefined4 *)param_4[1];
        if (!bVar11) {
          puVar6 = (undefined4 *)param_3[1];
        }
        if (bVar11 || puVar6 != puVar3) goto LAB_00e7d67c;
        local_28 = 0;
      }
      local_38 = param_2;
      if ((char)param_3[4] == '\0') {
        *(undefined1 *)(param_3 + 4) = 1;
        FUN_00f03100(uVar1 + 0x20);
      }
LAB_00e7d6cc:
      FUN_01282570(pcVar8);
      if (*pcVar8 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar11 = (bool)hasExclusiveAccess(pcVar8);
          if (bVar11) {
            *pcVar8 = '\0';
            goto LAB_00e7d71c;
          }
        } while (*pcVar8 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_01280a5c(pcVar8);
LAB_00e7d71c:
      FUN_01282570(pcVar9);
      if (*pcVar9 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar11 = (bool)hasExclusiveAccess(pcVar9);
          if (bVar11) {
            *pcVar9 = '\0';
            goto LAB_00e7d75c;
          }
        } while (*pcVar9 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_01280a5c(pcVar9);
LAB_00e7d75c:
      if (local_28 != 0) {
        (**(code **)(local_28 + 0xc))(local_38);
      }
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    FUN_01282570(pcVar9);
    if (*pcVar9 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar11 = (bool)hasExclusiveAccess(pcVar9);
        if (bVar11) {
          *pcVar9 = '\0';
          goto LAB_00e7d45c;
        }
      } while (*pcVar9 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(pcVar9);
  }
LAB_00e7d45c:
  uVar1 = *param_2;
  uVar7 = param_2[1];
  param_1[1] = 0;
  param_1[2] = pcVar8;
  *param_1 = 3;
LAB_00e7d470:
  *param_2 = uVar1 + 1;
  param_2[1] = uVar7 + (0xfffffffe < uVar1);
  return;
}

