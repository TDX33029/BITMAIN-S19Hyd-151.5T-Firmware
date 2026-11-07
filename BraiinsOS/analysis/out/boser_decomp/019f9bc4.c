// FUN_019f9bc4 @ 019f9bc4 size=1288 calls_out=8 calls_in=75
// strings: 

uint FUN_019f9bc4(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined4 *puVar11;
  char *pcVar12;
  uint *puVar13;
  uint uVar14;
  char *pcVar15;
  uint uVar16;
  char *pcVar17;
  uint uVar18;
  char *pcVar19;
  undefined8 uVar20;
  uint local_38;
  undefined4 *local_28;
  
  pcVar19 = (char *)*param_1;
  uVar16 = param_1[6];
  uVar5 = FUN_019ec670(*param_2);
  if ((uVar5 & 0xff) == 2) {
    uVar5 = 0;
  }
  else {
    FUN_019edbc4(0);
    if ((uVar5 & 1) != 0) {
      return 2;
    }
    local_38 = (uVar5 & 0xffffff) >> 0x10;
    uVar5 = (uVar5 & 0xffffff) >> 8;
  }
  cVar2 = *(char *)(param_1 + 7);
  if (cVar2 == '\x01') {
    uVar16 = param_1[5];
    DataMemoryBarrier(0xb);
  }
  puVar6 = param_1 + 1;
  uVar18 = uVar16 & 0x7fffffff;
  uVar7 = *(uint *)(pcVar19 + 0x10);
  puVar13 = (uint *)(pcVar19 + 0x10);
  pcVar15 = (char *)0x0;
  pcVar12 = (char *)0x0;
  DataMemoryBarrier(0xb);
  do {
    uVar14 = uVar7;
    while( true ) {
      if ((uVar14 & 1) != 0) {
        uVar16 = 1;
        goto LAB_019f9da4;
      }
      if (uVar14 < uVar16 * 2) break;
      uVar7 = *puVar13;
      if (uVar7 == uVar14) {
        DataMemoryBarrier(0xb);
        do {
          bVar10 = (bool)hasExclusiveAccess(puVar13);
          if (bVar10) {
            *puVar13 = uVar14 + uVar16 * -2;
            bVar10 = true;
            goto LAB_019f9cc0;
          }
          uVar7 = *puVar13;
        } while (uVar7 == uVar14);
      }
      bVar10 = false;
      ClearExclusiveLocal();
LAB_019f9cc0:
      DataMemoryBarrier(0xb);
      uVar14 = uVar7;
      if (bVar10) {
        uVar16 = 0;
        if (cVar2 == '\0') goto LAB_019f9da4;
        if (pcVar12 == (char *)0x0) {
          if (*pcVar19 == '\0') {
            bVar10 = (bool)hasExclusiveAccess(pcVar19);
            if (!bVar10) goto LAB_019f9e38;
            *pcVar19 = '\x01';
            DataMemoryBarrier(0xb);
          }
          else {
            ClearExclusiveLocal();
LAB_019f9e38:
            FUN_0164fba8(pcVar19);
          }
          FUN_0165098c(pcVar19);
          bVar10 = true;
          pcVar12 = pcVar19;
          pcVar17 = (char *)0x0;
        }
        else {
          bVar10 = false;
          pcVar17 = pcVar12;
        }
        goto LAB_019f9e58;
      }
    }
    if (pcVar12 == (char *)0x0) {
      if (*pcVar19 == '\0') {
        bVar10 = (bool)hasExclusiveAccess(pcVar19);
        if (!bVar10) goto LAB_019f9cfc;
        *pcVar19 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_019f9cfc:
        FUN_0164fba8(pcVar19);
      }
      FUN_0165098c(pcVar19);
      pcVar12 = pcVar19;
      pcVar15 = pcVar19;
    }
    uVar7 = *puVar13;
    if (uVar7 == uVar14) {
      DataMemoryBarrier(0xb);
      do {
        bVar10 = (bool)hasExclusiveAccess(puVar13);
        if (bVar10) {
          *puVar13 = 0;
          bVar10 = true;
          goto LAB_019f9d4c;
        }
        uVar7 = *puVar13;
      } while (uVar7 == uVar14);
    }
    bVar10 = false;
    ClearExclusiveLocal();
LAB_019f9d4c:
    DataMemoryBarrier(0xb);
  } while (!bVar10);
  uVar18 = uVar14 >> 1;
  bVar10 = false;
  pcVar17 = pcVar12;
LAB_019f9e58:
  if (pcVar12[0xc] == '\0') {
    puVar13 = param_1 + 5;
    DataMemoryBarrier(0xb);
    uVar16 = param_1[5];
    do {
      uVar14 = uVar16;
      uVar16 = *puVar13;
      uVar7 = uVar14;
      if (uVar18 < uVar14) {
        uVar7 = uVar18;
      }
      if (uVar16 == uVar14) {
        DataMemoryBarrier(0xb);
        do {
          bVar3 = (bool)hasExclusiveAccess(puVar13);
          if (bVar3) {
            *puVar13 = uVar14 - uVar7;
            bVar3 = true;
            goto LAB_019f9f08;
          }
          uVar16 = *puVar13;
        } while (uVar16 == uVar14);
      }
      bVar3 = false;
      ClearExclusiveLocal();
LAB_019f9f08:
      DataMemoryBarrier(0xb);
    } while (!bVar3);
    if (uVar14 <= uVar18) {
      uVar16 = 0;
      FUN_019f8cb4(pcVar19,uVar18 - uVar7,pcVar12);
      goto LAB_019f9f74;
    }
    param_2 = (int *)*param_2;
    if ((undefined4 *)*puVar6 == (undefined4 *)0x0) {
      iVar8 = param_2[1];
LAB_019f9fbc:
      uVar20 = (**(code **)*param_2)(iVar8);
      iVar8 = param_1[1];
      uVar18 = param_1[2];
      *(undefined8 *)(param_1 + 1) = uVar20;
    }
    else {
      iVar8 = param_2[1];
      if (param_1[2] != iVar8 || (undefined4 *)*puVar6 != (undefined4 *)*param_2) goto LAB_019f9fbc;
      iVar8 = 0;
    }
    if (cVar2 == '\0') {
      puVar11 = *(undefined4 **)(pcVar12 + 4);
      local_28 = puVar6;
      if (puVar6 == puVar11) {
        FUN_019f1614(pcVar12 + 4,&local_28);
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x19fa0c8);
        (*pcVar1)();
      }
      param_1[3] = 0;
      param_1[4] = puVar11;
      iVar9 = *(int *)(pcVar12 + 8);
      if (puVar11 != (undefined4 *)0x0) {
        puVar11[2] = puVar6;
      }
      *(undefined4 **)(pcVar12 + 4) = puVar6;
      if (iVar9 == 0) {
        *(undefined4 **)(pcVar12 + 8) = puVar6;
      }
    }
    FUN_01650a90(pcVar12);
    if (*pcVar12 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar3 = (bool)hasExclusiveAccess(pcVar12);
        if (bVar3) {
          *pcVar12 = '\0';
          goto LAB_019fa058;
        }
      } while (*pcVar12 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(pcVar12);
LAB_019fa058:
    if (iVar8 != 0) {
      (**(code **)(iVar8 + 0xc))(uVar18);
    }
    uVar16 = 2;
    uVar4 = 1;
    if ((bool)(bVar10 & pcVar17 != (char *)0x0)) goto LAB_019f9dac;
    uVar18 = uVar16;
  }
  else {
    FUN_01650a90(pcVar12);
    if (*pcVar12 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar3 = (bool)hasExclusiveAccess(pcVar12);
        if (bVar3) {
          *pcVar12 = '\0';
          uVar16 = 1;
          goto LAB_019f9f74;
        }
      } while (*pcVar12 == '\x01');
    }
    uVar16 = 1;
    ClearExclusiveLocal();
    FUN_0164f86c(pcVar12);
LAB_019f9f74:
    pcVar12 = pcVar17;
    if (bVar10) {
LAB_019f9da4:
      if (pcVar12 != (char *)0x0) {
LAB_019f9dac:
        FUN_01650a90(pcVar15);
        if (*pcVar15 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar10 = (bool)hasExclusiveAccess(pcVar15);
            if (bVar10) {
              *pcVar15 = '\0';
              goto LAB_019f9df0;
            }
          } while (*pcVar15 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_0164f86c(pcVar15);
LAB_019f9df0:
        if (uVar16 == 2) {
          uVar4 = 1;
          uVar18 = 2;
          goto LAB_019f9f98;
        }
        uVar16 = uVar16 & 1;
      }
    }
    uVar5 = 0;
    uVar7 = 1;
    uVar4 = 0;
    uVar18 = 0;
    if (uVar16 != 0) goto LAB_019f9fa0;
  }
LAB_019f9f98:
  uVar7 = uVar18;
  *(undefined1 *)(param_1 + 7) = uVar4;
LAB_019f9fa0:
  FUN_019edbc4(uVar5,local_38);
  return uVar7;
}

