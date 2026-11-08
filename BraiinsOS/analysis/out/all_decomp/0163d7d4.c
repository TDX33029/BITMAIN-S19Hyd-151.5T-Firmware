// FUN_0163d7d4 @ 0163d7d4 size=1264 calls_out=17 calls_in=1
// strings: A Tokio 1.x context was found; but IO is disabled. Call `enable_io` on the runtime builder to enable IO.

void FUN_0163d7d4(ulonglong *param_1,ushort *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  ushort uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 extraout_r3;
  uint uVar10;
  ushort *puVar11;
  char *pcVar12;
  undefined1 *puVar13;
  undefined2 uVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  undefined4 extraout_r12;
  undefined4 uVar18;
  ulonglong uVar19;
  undefined4 local_40;
  int *local_3c;
  int *local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  puVar11 = param_2 + 1;
  if ((*param_2 & 1) == 0) {
    iVar2 = FUN_016d997a(2,0x80801,0);
    if (-1 < iVar2) {
      local_40 = &DAT_00000001;
      uVar14 = 2;
      uVar18 = 0x163d8a4;
      iVar3 = FUN_016d98a4(iVar2,1,2,&local_40,4);
      if (-1 < iVar3) {
        uVar9 = 0x10;
        local_34 = 0;
        uVar7 = param_2[3] << 8 | param_2[3] >> 8;
        local_38 = (int *)0x0;
        local_28 = extraout_r3;
        uStack_30 = extraout_r12;
        goto LAB_0163d8c0;
      }
      goto LAB_0163d950;
    }
  }
  else {
    iVar2 = FUN_016d997a(10,0x80801,0);
    if (-1 < iVar2) {
      local_40 = &DAT_00000001;
      iVar3 = FUN_016d98a4(iVar2,1,2,&local_40,4);
      if (-1 < iVar3) {
        local_28 = *(undefined4 *)(param_2 + 0xc);
        puVar11 = param_2 + 10;
        uVar9 = 0x1c;
        local_38 = *(int **)(param_2 + 2);
        local_34 = *(undefined4 *)(param_2 + 4);
        uStack_30 = *(undefined4 *)(param_2 + 6);
        uVar18 = *(undefined4 *)(param_2 + 8);
        uVar14 = 10;
        uVar7 = param_2[0xe] << 8 | param_2[0xe] >> 8;
LAB_0163d8c0:
        local_3c = *(int **)puVar11;
        local_40 = (undefined1 *)CONCAT22(uVar7,uVar14);
        uStack_2c = uVar18;
        iVar3 = FUN_016d6eba(iVar2,&local_40,uVar9);
        if ((-1 < iVar3) && (iVar3 = FUN_016d7b90(iVar2,0x80), -1 < iVar3)) {
          uVar19 = FUN_0164ec90(&DAT_018ac7dc);
          piVar8 = (int *)(uVar19 >> 0x20);
          iVar3 = 0x180;
          if ((uVar19 & 1) != 0) {
            iVar3 = 0xb8;
          }
          if (*(int *)((int)piVar8 + iVar3 + 0x30) == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                         ,0x68,&DAT_018ac7dc);
          }
          pcVar12 = (char *)((int)piVar8 + iVar3 + 0x3c);
          if (*pcVar12 == '\0') {
            bVar1 = (bool)hasExclusiveAccess(pcVar12);
            if (!bVar1) goto LAB_0163d9a0;
            *pcVar12 = '\x01';
            DataMemoryBarrier(0xb);
          }
          else {
            ClearExclusiveLocal();
LAB_0163d9a0:
            FUN_01280da8(pcVar12);
          }
          FUN_0128236c(pcVar12);
          FUN_0164736c(&local_40,(int)piVar8 + iVar3 + 0x40);
          piVar17 = local_3c;
          puVar13 = local_40;
          uVar10 = (uint)local_40 & 0xff;
          if (uVar10 == 4) {
            FUN_01282570(pcVar12);
            if (*pcVar12 == '\x01') {
              DataMemoryBarrier(0xb);
              do {
                bVar1 = (bool)hasExclusiveAccess(pcVar12);
                if (bVar1) {
                  *pcVar12 = '\0';
                  goto LAB_0163da0c;
                }
              } while (*pcVar12 == '\x01');
            }
            ClearExclusiveLocal();
            FUN_01280a5c(pcVar12);
LAB_0163da0c:
            local_34 = 0;
            local_40 = (undefined1 *)0x80002005;
            piVar15 = piVar17 + 8;
            local_38 = piVar15;
            iVar4 = FUN_016d3742(*(undefined4 *)((int)piVar8 + iVar3 + 0x30),1,iVar2,&local_40);
            if (iVar4 < 0) {
              puVar5 = (undefined4 *)FUN_016d2bc8();
              piVar16 = (int *)*puVar5;
              local_40 = (undefined1 *)0x0;
              local_3c = piVar16;
              if (*pcVar12 == '\0') {
                bVar1 = (bool)hasExclusiveAccess(pcVar12);
                if (!bVar1) goto LAB_0163db14;
                *pcVar12 = '\x01';
                DataMemoryBarrier(0xb);
              }
              else {
                ClearExclusiveLocal();
LAB_0163db14:
                FUN_01280da8(pcVar12);
              }
              FUN_0128236c(pcVar12);
              if (*piVar15 == 0) {
                if (*(int **)((int)piVar8 + iVar3 + 0x4c) == piVar15) {
                  piVar6 = (int *)piVar17[9];
                  *(int **)((int)piVar8 + iVar3 + 0x4c) = piVar6;
                  goto joined_r0x0163dba4;
                }
              }
              else {
                piVar6 = (int *)piVar17[9];
                *(int **)(*piVar15 + 4) = piVar6;
joined_r0x0163dba4:
                if (piVar6 == (int *)0x0) {
                  if (*(int **)((int)piVar8 + iVar3 + 0x50) != piVar15) goto LAB_0163dbb8;
                  *(int *)((int)piVar8 + iVar3 + 0x50) = *piVar15;
                }
                else {
                  *piVar6 = *piVar15;
                }
                piVar17[8] = 0;
                piVar17[9] = 0;
                DataMemoryBarrier(0xb);
                do {
                  iVar3 = *piVar17;
                  bVar1 = (bool)hasExclusiveAccess(piVar17);
                } while (!bVar1);
                *piVar17 = iVar3 + -1;
                if (iVar3 == 1) {
                  DataMemoryBarrier(0xb);
                  FUN_01659660(piVar17);
                }
              }
LAB_0163dbb8:
              FUN_01282570(pcVar12);
              if (*pcVar12 == '\x01') {
                DataMemoryBarrier(0xb);
                do {
                  bVar1 = (bool)hasExclusiveAccess(pcVar12);
                  if (bVar1) {
                    *pcVar12 = '\0';
                    goto LAB_0163dbf8;
                  }
                } while (*pcVar12 == '\x01');
              }
              ClearExclusiveLocal();
              FUN_01280a5c(pcVar12);
LAB_0163dbf8:
              DataMemoryBarrier(0xb);
              do {
                iVar3 = *piVar17;
                bVar1 = (bool)hasExclusiveAccess(piVar17);
              } while (!bVar1);
              *piVar17 = iVar3 + -1;
              puVar13 = (undefined1 *)0x0;
              if (iVar3 == 1) {
                DataMemoryBarrier(0xb);
                FUN_01659660(piVar17);
              }
              goto LAB_0163dc28;
            }
LAB_0163dab4:
            if ((int)uVar19 != 2) {
              *(int *)((int)param_1 + 0xc) = iVar2;
              goto LAB_0163dc84;
            }
          }
          else {
            FUN_01282570(pcVar12);
            if (*pcVar12 == '\x01') {
              DataMemoryBarrier(0xb);
              do {
                bVar1 = (bool)hasExclusiveAccess(pcVar12);
                if (bVar1) {
                  *pcVar12 = '\0';
                  goto LAB_0163da9c;
                }
              } while (*pcVar12 == '\x01');
            }
            ClearExclusiveLocal();
            FUN_01280a5c(pcVar12);
LAB_0163da9c:
            piVar16 = piVar17;
            if (uVar10 == 4) goto LAB_0163dab4;
LAB_0163dc28:
            DataMemoryBarrier(0xb);
            do {
              iVar3 = *piVar8;
              bVar1 = (bool)hasExclusiveAccess(piVar8);
            } while (!bVar1);
            *piVar8 = iVar3 + -1;
            piVar17 = piVar16;
            if ((int)uVar19 == 0) {
              uVar19 = CONCAT44(puVar13,2);
              if (iVar3 == 1) {
                DataMemoryBarrier(0xb);
                FUN_01659344(piVar8);
                uVar19 = CONCAT44(puVar13,2);
              }
            }
            else {
              uVar19 = CONCAT44(puVar13,2);
              if (iVar3 == 1) {
                DataMemoryBarrier(0xb);
                FUN_016586fc(piVar8);
                uVar19 = CONCAT44(puVar13,2);
              }
            }
          }
          FUN_016dffb2(iVar2);
LAB_0163dc84:
          *param_1 = uVar19;
          *(int **)(param_1 + 1) = piVar17;
          return;
        }
      }
LAB_0163d950:
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar18 = *puVar5;
      FUN_016dffb2(iVar2);
      goto LAB_0163d96c;
    }
  }
  puVar5 = (undefined4 *)FUN_016d2bc8();
  uVar18 = *puVar5;
LAB_0163d96c:
  *(undefined1 *)((int)param_1 + 7) = 0;
  *(undefined2 *)((int)param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 4) = 0;
  *(undefined4 *)param_1 = 2;
  *(undefined4 *)(param_1 + 1) = uVar18;
  return;
}

