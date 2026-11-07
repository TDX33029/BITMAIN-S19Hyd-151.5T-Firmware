// FUN_0163c044 @ 0163c044 size=1636 calls_out=7 calls_in=16
// strings: 

/* WARNING: Removing unreachable block (ram,0x0163c1cc) */
/* WARNING: Removing unreachable block (ram,0x0163c178) */

undefined4 FUN_0163c044(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined *puVar10;
  uint *puVar11;
  uint *puVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 uVar16;
  undefined4 local_38;
  uint local_30;
  uint local_2c;
  uint *local_28;
  
  puVar15 = param_1 + 2;
  puVar12 = (uint *)*param_1;
  uVar13 = 0;
  puVar11 = puVar12 + 2;
  puVar7 = puVar12 + 1;
LAB_0163c068:
  if (*(char *)(param_1 + 7) == '\0') {
    DataMemoryBarrier(0xb);
    uVar5 = *puVar12 & 0xfffffffc | 2;
    if (*puVar12 == uVar5) {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar12);
        if (bVar2) {
          *puVar12 = *puVar12 & 0xfffffffc;
          DataMemoryBarrier(0xb);
          *(undefined1 *)(param_1 + 7) = 2;
          goto LAB_0163c068;
        }
      } while (*puVar12 == uVar5);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    uVar16 = (**(code **)*param_2)(param_2[1]);
    iVar3 = (int)uVar16;
    if ((char)*puVar7 == '\0') {
      bVar2 = (bool)hasExclusiveAccess(puVar7);
      if (!bVar2) goto LAB_0163c0f0;
      *(char *)puVar7 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_0163c0f0:
      FUN_01280da8(puVar7);
    }
    FUN_0128236c(puVar7);
    uVar5 = *puVar12;
    DataMemoryBarrier(0xb);
    if (param_1[1] == uVar5 >> 2) {
      do {
        switch(uVar5 & 3) {
        case 0:
          uVar6 = uVar5 & 0xfffffffc;
          uVar5 = *puVar12;
          if (uVar5 == uVar6) {
            DataMemoryBarrier(0xb);
            do {
              bVar2 = (bool)hasExclusiveAccess(puVar12);
              if (bVar2) {
                *puVar12 = uVar6 | 1;
                DataMemoryBarrier(0xb);
                goto switchD_0163c120_caseD_1;
              }
              uVar5 = *puVar12;
            } while (uVar5 == uVar6);
          }
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
          local_30 = uVar5 & 3;
          if (local_30 != 2) {
            puVar7 = &local_30;
            puVar10 = &DAT_00414ca0;
            goto LAB_0163c5c0;
          }
          break;
        case 1:
switchD_0163c120_caseD_1:
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = param_1[4];
            uVar13 = param_1[5];
            *(undefined8 *)(param_1 + 4) = uVar16;
          }
          puVar4 = (uint *)*puVar11;
          local_28 = puVar15;
          if (puVar4 == puVar15) {
            FUN_0165842c(puVar11,&local_28);
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0x163c6bc);
            (*pcVar1)();
          }
          param_1[2] = 0;
          uVar5 = puVar12[3];
          param_1[3] = puVar4;
          if (puVar4 != (uint *)0x0) {
            *puVar4 = (uint)puVar15;
          }
          puVar12[2] = (uint)puVar15;
          if (uVar5 == 0) {
            puVar12[3] = (uint)puVar15;
          }
          *(undefined1 *)(param_1 + 7) = 1;
          FUN_01282570(puVar7);
          if ((char)*puVar7 != '\x01') goto LAB_0163c480;
          DataMemoryBarrier(0xb);
          goto LAB_0163c468;
        case 2:
          uVar6 = uVar5 & 0xfffffffc;
          uVar5 = *puVar12;
          uVar9 = uVar6 | 2;
          if (uVar5 == uVar9) {
            DataMemoryBarrier(0xb);
            do {
              bVar2 = (bool)hasExclusiveAccess(puVar12);
              if (bVar2) {
                *puVar12 = uVar6;
                DataMemoryBarrier(0xb);
                goto LAB_0163c214;
              }
              uVar5 = *puVar12;
            } while (uVar5 == uVar9);
          }
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
          local_2c = uVar5 & 3;
          if (local_2c != 0) {
            puVar7 = &local_2c;
            puVar10 = &DAT_00568f30;
LAB_0163c5c0:
                    /* WARNING: Subroutine does not return */
            FUN_00fb3aac(0,puVar7,puVar10,0);
          }
          break;
        case 3:
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00419463,0x28,&DAT_018ac70c);
        }
      } while( true );
    }
LAB_0163c214:
    *(undefined1 *)(param_1 + 7) = 2;
    FUN_01282570(puVar7);
    if ((char)*puVar7 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar7);
        if (bVar2) {
          *(char *)puVar7 = '\0';
          goto LAB_0163c258;
        }
      } while ((char)*puVar7 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(puVar7);
LAB_0163c258:
    if (iVar3 != 0) {
      (**(code **)(iVar3 + 0xc))((int)((ulonglong)uVar16 >> 0x20));
    }
    goto LAB_0163c068;
  }
  if (*(char *)(param_1 + 7) != '\x01') {
    return 0;
  }
  iVar3 = param_1[6];
  DataMemoryBarrier(0xb);
  if (iVar3 - 1U < 2) {
LAB_0163c4b8:
    iVar3 = param_1[4];
    param_1[4] = 0;
    if (iVar3 != 0) {
      (**(code **)(iVar3 + 0xc))(param_1[5]);
    }
    param_1[6] = 0;
    *(undefined1 *)(param_1 + 7) = 2;
    return 0;
  }
  if (iVar3 != 0) {
    if (iVar3 != 5) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018ac71c);
    }
    goto LAB_0163c4b8;
  }
  if ((char)*puVar7 == '\0') {
    bVar2 = (bool)hasExclusiveAccess(puVar7);
    if (!bVar2) goto LAB_0163c3c8;
    *(char *)puVar7 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0163c3c8:
    FUN_01280da8(puVar7);
  }
  FUN_0128236c(puVar7);
  iVar3 = param_1[6];
  if (iVar3 - 1U < 2) {
LAB_0163c4f8:
    iVar3 = param_1[4];
    uVar13 = param_1[5];
    param_1[4] = 0;
    param_1[6] = 0;
    FUN_01282570(puVar7);
    if ((char)*puVar7 != '\x01') goto LAB_0163c540;
    DataMemoryBarrier(0xb);
    goto LAB_0163c528;
  }
  if (iVar3 != 0) {
    if (iVar3 != 5) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018ac71c);
    }
    goto LAB_0163c4f8;
  }
  DataMemoryBarrier(0xb);
  puVar14 = (undefined4 *)param_1[4];
  if (param_1[1] != *puVar12 >> 2) {
    local_38 = param_1[5];
    param_1[4] = 0;
    if (param_1[2] == 0) {
      if ((uint *)*puVar11 == puVar15) {
        puVar4 = (uint *)param_1[3];
        *puVar11 = (uint)puVar4;
        goto joined_r0x0163c358;
      }
    }
    else {
      puVar4 = (uint *)param_1[3];
      *(uint **)(param_1[2] + 4) = puVar4;
joined_r0x0163c358:
      if (puVar4 == (uint *)0x0) {
        if ((uint *)puVar12[3] != puVar15) goto LAB_0163c368;
        puVar12[3] = *puVar15;
      }
      else {
        *puVar4 = *puVar15;
      }
      param_1[2] = 0;
      param_1[3] = 0;
    }
LAB_0163c368:
    *(undefined1 *)(param_1 + 7) = 2;
    FUN_01282570(puVar7);
    if ((char)*puVar7 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar7);
        if (bVar2) {
          *(char *)puVar7 = '\0';
          goto LAB_0163c3ac;
        }
      } while ((char)*puVar7 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(puVar7);
LAB_0163c3ac:
    if (puVar14 != (undefined4 *)0x0) {
      (*(code *)puVar14[3])(local_38);
    }
    goto LAB_0163c068;
  }
  if (puVar14 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)*param_2;
  }
  else {
    puVar8 = (undefined4 *)*param_2;
    if ((param_1[5] == param_2[1]) && (iVar3 = 0, puVar14 == puVar8)) goto LAB_0163c628;
  }
  uVar16 = (*(code *)*puVar8)();
  iVar3 = param_1[4];
  local_38 = param_1[5];
  *(undefined8 *)(param_1 + 4) = uVar16;
LAB_0163c628:
  FUN_01282570(puVar7);
  if ((char)*puVar7 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(puVar7);
      if (bVar2) {
        *(char *)puVar7 = '\0';
        goto LAB_0163c668;
      }
    } while ((char)*puVar7 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(puVar7);
LAB_0163c668:
  if (iVar3 == 0) {
    return 1;
  }
  (**(code **)(iVar3 + 0xc))(local_38);
  return 1;
  while ((char)*puVar7 == '\x01') {
LAB_0163c468:
    bVar2 = (bool)hasExclusiveAccess(puVar7);
    if (bVar2) {
      *(char *)puVar7 = '\0';
      goto LAB_0163c48c;
    }
  }
LAB_0163c480:
  ClearExclusiveLocal();
  FUN_01280a5c(puVar7);
LAB_0163c48c:
  if (iVar3 == 0) {
    return 1;
  }
  (**(code **)(iVar3 + 0xc))(uVar13);
  return 1;
  while ((char)*puVar7 == '\x01') {
LAB_0163c528:
    bVar2 = (bool)hasExclusiveAccess(puVar7);
    if (bVar2) {
      *(char *)puVar7 = '\0';
      goto LAB_0163c54c;
    }
  }
LAB_0163c540:
  ClearExclusiveLocal();
  FUN_01280a5c(puVar7);
LAB_0163c54c:
  if (iVar3 != 0) {
    (**(code **)(iVar3 + 0xc))(uVar13);
  }
  *(undefined1 *)(param_1 + 7) = 2;
  return 0;
}

