// FUN_019e0cbc @ 019e0cbc size=1328 calls_out=10 calls_in=15
// strings: internal error: entered unreachable code

undefined4 FUN_019e0cbc(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  uint *puVar7;
  uint uVar8;
  undefined *puVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  undefined8 uVar16;
  undefined4 local_3c;
  uint local_30;
  uint local_2c;
  uint *local_28;
  
  puVar14 = param_1 + 2;
  puVar15 = (uint *)*param_1;
  puVar10 = puVar15 + 1;
  puVar7 = puVar15 + 2;
LAB_019e0ce8:
  if (*(char *)(param_1 + 7) == '\0') {
    DataMemoryBarrier(0xb);
    uVar4 = *puVar15 & 0xfffffffc | 2;
    if (*puVar15 == uVar4) {
      DataMemoryBarrier(0xb);
      do {
        bVar3 = (bool)hasExclusiveAccess(puVar15);
        if (bVar3) {
          *puVar15 = *puVar15 & 0xfffffffc;
          DataMemoryBarrier(0xb);
          *(undefined1 *)(param_1 + 7) = 2;
          goto LAB_019e0ce8;
        }
      } while (*puVar15 == uVar4);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    uVar16 = (**(code **)*param_2)(param_2[1]);
    iVar1 = (int)uVar16;
    if ((char)*puVar10 == '\0') {
      bVar3 = (bool)hasExclusiveAccess(puVar10);
      if (!bVar3) goto LAB_019e0d70;
      *(char *)puVar10 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_019e0d70:
      FUN_0164fba8(puVar10);
    }
    FUN_0165098c(puVar10);
    uVar4 = *puVar15;
    DataMemoryBarrier(0xb);
    if (param_1[1] == uVar4 >> 2) {
LAB_019e0d94:
      switch(uVar4 & 3) {
      case 0:
        uVar5 = uVar4 & 0xfffffffc;
        uVar4 = *puVar15;
        if (uVar4 == uVar5) {
          DataMemoryBarrier(0xb);
          do {
            bVar3 = (bool)hasExclusiveAccess(puVar15);
            if (bVar3) {
              *puVar15 = uVar5 | 1;
              bVar3 = true;
              goto LAB_019e0e5c;
            }
            uVar4 = *puVar15;
          } while (uVar4 == uVar5);
        }
        bVar3 = false;
        ClearExclusiveLocal();
LAB_019e0e5c:
        DataMemoryBarrier(0xb);
        if (!bVar3) {
          local_30 = uVar4 & 3;
          if (local_30 != 2) {
            puVar7 = &local_30;
            puVar9 = &DAT_005288a8;
            goto LAB_019e11ec;
          }
          goto LAB_019e0d94;
        }
      case 1:
        if (iVar1 == 0) {
          iVar1 = 0;
          local_3c = 0;
        }
        else {
          iVar1 = param_1[4];
          *(undefined8 *)(param_1 + 4) = uVar16;
          local_3c = param_1[5];
        }
        puVar11 = (uint *)*puVar7;
        local_28 = puVar14;
        if (puVar14 == puVar11) {
          FUN_019f15d0(puVar7,&local_28);
                    /* WARNING: Does not return */
          pcVar6 = (code *)software_udf(0xfdee,0x19e11fc);
          (*pcVar6)();
        }
        param_1[2] = 0;
        uVar4 = puVar15[3];
        param_1[3] = puVar11;
        if (puVar11 != (uint *)0x0) {
          *puVar11 = (uint)puVar14;
        }
        puVar15[2] = (uint)puVar14;
        if (uVar4 == 0) {
          puVar15[3] = (uint)puVar14;
        }
        *(undefined1 *)(param_1 + 7) = 1;
        FUN_01650a90(puVar10);
        if ((char)*puVar10 != '\x01') goto LAB_019e1088;
        DataMemoryBarrier(0xb);
        goto LAB_019e1070;
      case 2:
        uVar5 = uVar4 & 0xfffffffc;
        uVar4 = *puVar15;
        uVar8 = uVar5 | 2;
        if (uVar4 == uVar8) {
          DataMemoryBarrier(0xb);
          do {
            bVar3 = (bool)hasExclusiveAccess(puVar15);
            if (bVar3) {
              *puVar15 = uVar5;
              bVar3 = true;
              goto LAB_019e0e3c;
            }
            uVar4 = *puVar15;
          } while (uVar4 == uVar8);
        }
        bVar3 = false;
        ClearExclusiveLocal();
LAB_019e0e3c:
        DataMemoryBarrier(0xb);
        if (!bVar3) goto code_r0x019e0e48;
        break;
      case 3:
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d28fec);
      }
    }
    *(undefined1 *)(param_1 + 7) = 2;
    FUN_01650a90(puVar10);
    if ((char)*puVar10 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar3 = (bool)hasExclusiveAccess(puVar10);
        if (bVar3) {
          *(char *)puVar10 = '\0';
          goto LAB_019e0ec0;
        }
      } while ((char)*puVar10 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(puVar10);
LAB_019e0ec0:
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 0xc))((int)((ulonglong)uVar16 >> 0x20));
    }
    goto LAB_019e0ce8;
  }
  if (*(char *)(param_1 + 7) != '\x01') {
    return 0;
  }
  iVar1 = FUN_019dff38(param_1 + 6,2);
  if (iVar1 != 2) {
    iVar1 = param_1[4];
    param_1[4] = 0;
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 0xc))(param_1[5]);
    }
    param_1[6] = 0;
    *(undefined1 *)(param_1 + 7) = 2;
    return 0;
  }
  if ((char)*puVar10 == '\0') {
    bVar3 = (bool)hasExclusiveAccess(puVar10);
    if (!bVar3) goto LAB_019e0fd8;
    *(char *)puVar10 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_019e0fd8:
    FUN_0164fba8(puVar10);
  }
  FUN_0165098c(puVar10);
  iVar1 = FUN_019dff38(param_1 + 6,0);
  if (iVar1 != 2) {
    iVar1 = param_1[4];
    uVar2 = param_1[5];
    param_1[4] = 0;
    param_1[6] = 0;
    FUN_019ec1e8(puVar10);
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 0xc))(uVar2);
    }
    *(undefined1 *)(param_1 + 7) = 2;
    return 0;
  }
  DataMemoryBarrier(0xb);
  puVar12 = (undefined4 *)param_1[4];
  if (param_1[1] != *puVar15 >> 2) {
    local_3c = param_1[5];
    param_1[4] = 0;
    FUN_019dffdc(puVar7,puVar14);
    *(undefined1 *)(param_1 + 7) = 2;
    FUN_01650a90(puVar10);
    if ((char)*puVar10 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar3 = (bool)hasExclusiveAccess(puVar10);
        if (bVar3) {
          *(char *)puVar10 = '\0';
          goto LAB_019e0fbc;
        }
      } while ((char)*puVar10 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(puVar10);
LAB_019e0fbc:
    if (puVar12 != (undefined4 *)0x0) {
      (*(code *)puVar12[3])(local_3c);
    }
    goto LAB_019e0ce8;
  }
  if (puVar12 == (undefined4 *)0x0) {
    iVar1 = param_2[1];
LAB_019e115c:
    uVar16 = (**(code **)*param_2)(iVar1);
    iVar13 = param_1[4];
    local_3c = param_1[5];
    *(undefined8 *)(param_1 + 4) = uVar16;
  }
  else {
    iVar1 = param_2[1];
    if ((param_1[5] != iVar1) || (iVar13 = 0, puVar12 != (undefined4 *)*param_2)) goto LAB_019e115c;
  }
  FUN_019ec1e8(puVar10);
  if (iVar13 == 0) {
    return 1;
  }
  pcVar6 = *(code **)(iVar13 + 0xc);
LAB_019e10a8:
  (*pcVar6)(local_3c);
  return 1;
code_r0x019e0e48:
  local_2c = uVar4 & 3;
  if (local_2c != 0) {
    puVar7 = &local_2c;
    puVar9 = &DAT_00533278;
LAB_019e11ec:
                    /* WARNING: Subroutine does not return */
    FUN_01304210(0,puVar7,puVar9,0);
  }
  goto LAB_019e0d94;
  while ((char)*puVar10 == '\x01') {
LAB_019e1070:
    bVar3 = (bool)hasExclusiveAccess(puVar10);
    if (bVar3) {
      *(char *)puVar10 = '\0';
      goto LAB_019e1094;
    }
  }
LAB_019e1088:
  ClearExclusiveLocal();
  FUN_0164f86c(puVar10);
LAB_019e1094:
  if (iVar1 == 0) {
    return 1;
  }
  pcVar6 = *(code **)(iVar1 + 0xc);
  goto LAB_019e10a8;
}

