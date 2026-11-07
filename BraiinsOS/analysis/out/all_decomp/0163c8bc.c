// FUN_0163c8bc @ 0163c8bc size=1552 calls_out=9 calls_in=18
// strings: 

/* WARNING: Removing unreachable block (ram,0x0163ca84) */
/* WARNING: Type propagation algorithm not settling */

byte FUN_0163c8bc(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  char cVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  byte bVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  char *pcVar20;
  bool bVar21;
  undefined8 uVar22;
  undefined4 *local_28;
  
  uVar22 = thunk_FUN_016de0ee(param_1,0x40);
  iVar17 = (int)uVar22 + (int)((ulonglong)uVar22 >> 0x20);
  pcVar15 = (char *)*param_1;
  uVar14 = param_1[6];
  if (*(char *)(iVar17 + 0x38) != '\x01') {
    cVar10 = '\0';
    cVar12 = '\0';
    if (*(char *)(iVar17 + 0x38) == '\x02') goto LAB_0163c938;
    FUN_015e8e6c(iVar17,FUN_01655ec4);
    *(undefined1 *)(iVar17 + 0x38) = 1;
  }
  cVar12 = *(char *)(iVar17 + 0x31);
  cVar10 = *(char *)(iVar17 + 0x30);
  cVar5 = cVar12;
  if (cVar10 == '\x01') {
    if (cVar12 == '\0') {
      FUN_016455a4(*(undefined4 *)*param_2,((undefined4 *)*param_2)[1]);
      return 2;
    }
    cVar5 = cVar12 + -1;
  }
  *(char *)(iVar17 + 0x31) = cVar5;
LAB_0163c938:
  cVar5 = *(char *)(param_1 + 7);
  if (cVar5 == '\x01') {
    uVar14 = param_1[5];
    DataMemoryBarrier(0xb);
  }
  DataMemoryBarrier(0xb);
  if ((*(uint *)(pcVar15 + 0x10) & 1) != 0) {
    return 1;
  }
  puVar18 = (uint *)(pcVar15 + 0x10);
  pcVar20 = (char *)0x0;
  puVar6 = param_1 + 1;
  uVar19 = *(uint *)(pcVar15 + 0x10);
  do {
    if (uVar19 < uVar14 * 2) {
      if (pcVar20 == (char *)0x0) {
        if (*pcVar15 == '\0') {
          bVar21 = (bool)hasExclusiveAccess(pcVar15);
          if (!bVar21) goto LAB_0163ca34;
          *pcVar15 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_0163ca34:
          FUN_01280da8(pcVar15);
        }
        FUN_0128236c(pcVar15);
        pcVar20 = pcVar15;
      }
      uVar7 = *puVar18;
      if (uVar7 == uVar19) {
        DataMemoryBarrier(0xb);
LAB_0163ca58:
        bVar21 = (bool)hasExclusiveAccess(puVar18);
        if (!bVar21) goto code_r0x0163ca64;
        *puVar18 = 0;
        DataMemoryBarrier(0xb);
        uVar19 = uVar19 >> 1;
        bVar21 = false;
        cVar2 = pcVar20[0xc];
        pcVar4 = pcVar20;
joined_r0x0163cae4:
        if (cVar2 != '\0') {
          FUN_01282570(pcVar4);
          if (*pcVar4 == '\x01') {
            DataMemoryBarrier(0xb);
            while (bVar3 = (bool)hasExclusiveAccess(pcVar4), !bVar3) {
              if (*pcVar4 != '\x01') goto LAB_0163cbf0;
            }
            *pcVar4 = '\0';
          }
          else {
LAB_0163cbf0:
            ClearExclusiveLocal();
            FUN_01280a5c(pcVar4);
          }
          bVar16 = 1;
          if (!bVar21) {
            return 1;
          }
          goto LAB_0163cc48;
        }
        puVar18 = param_1 + 5;
        DataMemoryBarrier(0xb);
        uVar14 = param_1[5];
        while( true ) {
          uVar13 = *puVar18;
          uVar7 = uVar14;
          if (uVar19 < uVar14) {
            uVar7 = uVar19;
          }
          if (uVar13 == uVar14) break;
LAB_0163caf8:
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
          uVar14 = uVar13;
        }
        DataMemoryBarrier(0xb);
        while (bVar3 = (bool)hasExclusiveAccess(puVar18), !bVar3) {
          uVar13 = *puVar18;
          if (uVar13 != uVar14) goto LAB_0163caf8;
        }
        *puVar18 = uVar14 - uVar7;
        DataMemoryBarrier(0xb);
        if (uVar14 <= uVar19) {
          FUN_0163af68(pcVar15,uVar19 - uVar7,pcVar4);
          bVar16 = 0;
          if (!bVar21) goto LAB_0163cd24;
          goto LAB_0163cc48;
        }
        param_2 = (int *)*param_2;
        if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)*param_2;
          iVar11 = param_2[1];
LAB_0163cd58:
          uVar22 = (*(code *)*puVar8)(iVar11);
          uVar19 = param_1[2];
          iVar11 = param_1[1];
          *(undefined8 *)(param_1 + 1) = uVar22;
        }
        else {
          puVar8 = (undefined4 *)*param_2;
          iVar11 = param_2[1];
          if (param_1[2] != iVar11 || (undefined4 *)param_1[1] != puVar8) goto LAB_0163cd58;
          iVar11 = 0;
        }
        if (cVar5 == '\0') {
          puVar8 = *(undefined4 **)(pcVar4 + 4);
          local_28 = puVar6;
          if (puVar8 == puVar6) {
            FUN_016583a4(pcVar4 + 4,&local_28);
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0x163cec8);
            (*pcVar1)();
          }
          *(undefined4 **)(pcVar4 + 4) = puVar6;
          param_1[3] = 0;
          param_1[4] = puVar8;
          iVar9 = *(int *)(pcVar4 + 8);
          if (puVar8 != (undefined4 *)0x0) {
            puVar8[2] = puVar6;
          }
          if (iVar9 == 0) {
            *(undefined4 **)(pcVar4 + 8) = puVar6;
          }
        }
        FUN_01282570(pcVar4);
        if (*pcVar4 == '\x01') {
          DataMemoryBarrier(0xb);
          while (bVar3 = (bool)hasExclusiveAccess(pcVar4), !bVar3) {
            if (*pcVar4 != '\x01') goto LAB_0163cdf0;
          }
          *pcVar4 = '\0';
        }
        else {
LAB_0163cdf0:
          ClearExclusiveLocal();
          FUN_01280a5c(pcVar4);
        }
        if (iVar11 != 0) {
          (**(code **)(iVar11 + 0xc))(uVar19);
        }
        if (!(bool)(bVar21 & pcVar20 != (char *)0x0)) goto LAB_0163cca0;
        FUN_01282570(pcVar20);
        bVar16 = 2;
        if (*pcVar20 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar21 = (bool)hasExclusiveAccess(pcVar20);
            if (bVar21) {
              *pcVar20 = '\0';
              goto LAB_0163cca0;
            }
          } while (*pcVar20 == '\x01');
        }
        goto LAB_0163cc8c;
      }
LAB_0163ca70:
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    }
    else {
      uVar7 = *puVar18;
      if (uVar7 == uVar19) {
        DataMemoryBarrier(0xb);
        do {
          bVar21 = (bool)hasExclusiveAccess(puVar18);
          if (bVar21) {
            *puVar18 = uVar19 + uVar14 * -2;
            DataMemoryBarrier(0xb);
            bVar16 = 0;
            if (cVar5 == '\0') goto LAB_0163cc48;
            uVar19 = uVar14 & 0x7fffffff;
            if (pcVar20 == (char *)0x0) {
              if (*pcVar15 == '\0') {
                bVar21 = (bool)hasExclusiveAccess(pcVar15);
                if (!bVar21) goto LAB_0163ce88;
                *pcVar15 = '\x01';
                DataMemoryBarrier(0xb);
              }
              else {
                ClearExclusiveLocal();
LAB_0163ce88:
                FUN_01280da8(pcVar15);
              }
              FUN_0128236c(pcVar15);
              bVar21 = true;
              pcVar20 = (char *)0x0;
              cVar2 = pcVar15[0xc];
              pcVar4 = pcVar15;
            }
            else {
              bVar21 = false;
              cVar2 = pcVar20[0xc];
              pcVar4 = pcVar20;
            }
            goto joined_r0x0163cae4;
          }
          uVar7 = *puVar18;
        } while (uVar7 == uVar19);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    }
    uVar19 = uVar7;
  } while ((uVar7 & 1) == 0);
  bVar16 = 1;
LAB_0163cc48:
  if (pcVar20 != (char *)0x0) {
    FUN_01282570(pcVar20);
    if (*pcVar20 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar21 = (bool)hasExclusiveAccess(pcVar20);
        if (bVar21) {
          *pcVar20 = '\0';
          goto LAB_0163cd0c;
        }
      } while (*pcVar20 == '\x01');
    }
LAB_0163cc8c:
    ClearExclusiveLocal();
    FUN_01280a5c(pcVar20);
    if (bVar16 == 2) {
LAB_0163cca0:
      *(undefined1 *)(param_1 + 7) = 1;
      if (cVar10 == '\0') {
        return 2;
      }
      if (*(byte *)(iVar17 + 0x38) != 1) {
        if (*(byte *)(iVar17 + 0x38) == 2) {
          return 2;
        }
        FUN_015e8e6c(iVar17,FUN_01655ec4);
        *(undefined1 *)(iVar17 + 0x38) = 1;
      }
      *(char *)(iVar17 + 0x31) = cVar12;
      *(undefined1 *)(iVar17 + 0x30) = 1;
      return 2;
    }
  }
LAB_0163cd0c:
  if ((bVar16 & 1) != 0) {
    return 1;
  }
LAB_0163cd24:
  *(undefined1 *)(param_1 + 7) = 0;
  return 0;
code_r0x0163ca64:
  uVar7 = *puVar18;
  if (uVar7 != uVar19) goto LAB_0163ca70;
  goto LAB_0163ca58;
}

