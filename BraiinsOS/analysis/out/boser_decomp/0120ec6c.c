// FUN_0120ec6c @ 0120ec6c size=1264 calls_out=19 calls_in=2
// strings: Cannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks. | failed to park thread

void FUN_0120ec6c(uint *param_1,uint param_2,int param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  char *pcVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint local_64;
  uint local_50;
  uint local_4c;
  undefined4 uStack_48;
  uint uStack_44;
  int local_40;
  uint local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  uint local_30;
  undefined8 local_2c;
  
  uVar18 = thunk_FUN_01bee35a(param_1,0x20);
  iVar11 = (int)uVar18 + (int)((ulonglong)uVar18 >> 0x20);
  if (*(char *)(iVar11 + 0x38) != '\x01') {
    if (*(char *)(iVar11 + 0x38) == '\x02') goto LAB_0120eca8;
    FUN_019a2bcc(iVar11,&LAB_019efb68);
    *(undefined1 *)(iVar11 + 0x38) = 1;
  }
  if (*(char *)(iVar11 + 0x32) == '\x02') {
    iVar2 = 0x1f0;
    if ((param_2 & 1) != 0) {
      iVar2 = 0x128;
    }
    *(undefined1 *)(iVar11 + 0x32) = 1;
    uVar18 = FUN_019f7c78(param_3 + iVar2);
    uVar15 = (uint)((ulonglong)uVar18 >> 0x20);
    if ((*(uint *)(iVar11 + 0x24) & 1) == 0) {
      uVar19 = FUN_019e9e08();
      uStack_48 = (undefined4)((ulonglong)uVar19 >> 0x20);
      uStack_44 = 1;
      if (1 < (uint)uVar19) {
        uStack_44 = (uint)uVar19;
      }
    }
    else {
      uStack_48 = *(undefined4 *)(iVar11 + 0x28);
      uStack_44 = *(uint *)(iVar11 + 0x2c);
    }
    *(undefined4 *)(iVar11 + 0x24) = 1;
    *(undefined8 *)(iVar11 + 0x28) = uVar18;
    FUN_019ec774(&local_40,iVar11,param_2,param_3);
    local_50 = local_3c;
    local_4c = uStack_38;
    local_34 = uStack_48;
    local_30 = uStack_44;
    if (local_40 == 4) {
LAB_0120eca8:
                    /* WARNING: Subroutine does not return */
      FUN_019b0950(&DAT_01d301c0);
    }
    if (local_40 != 3) {
      local_2c = FUN_019ee710();
      uVar6 = (undefined4)((ulonglong)local_2c >> 0x20);
      puVar3 = (undefined4 *)local_2c;
      if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("failed to park thread",0x15,&local_50,&DAT_01d29600,&DAT_01c23cfc);
      }
      puVar7 = (undefined4 *)param_4[1];
      iVar8 = param_4[2];
      iVar2 = *param_4;
      do {
        cVar9 = *(char *)(iVar11 + 0x38);
        if (cVar9 == '\x01') {
LAB_0120ee0c:
          cVar9 = *(char *)(iVar11 + 0x30);
          param_4 = (int *)(uint)*(byte *)(iVar11 + 0x31);
          *(undefined2 *)(iVar11 + 0x30) = 0x8001;
        }
        else if (cVar9 != '\x02') {
          FUN_019a2bcc(iVar11,&LAB_019efb68);
          *(undefined1 *)(iVar11 + 0x38) = 1;
          goto LAB_0120ee0c;
        }
        iVar13 = *(int *)(iVar2 + 4);
        pcVar17 = (char *)(iVar13 + 8);
        if (*pcVar17 == '\0') {
          bVar1 = (bool)hasExclusiveAccess(pcVar17);
          if (!bVar1) goto LAB_0120ee4c;
          *pcVar17 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_0120ee4c:
          FUN_0164fba8(pcVar17);
        }
        FUN_0165098c(pcVar17);
        uVar4 = FUN_019ec670(&local_2c);
        uVar16 = 5;
        uVar5 = 0;
        if ((uVar4 & 0xff) != 2) {
          uVar5 = uVar4;
        }
        if ((uVar5 & 1) != 0) goto LAB_0120f04c;
        if (*(char *)(iVar13 + 0x30) == '\0') {
          uVar5 = uVar5 & 0xffffff;
          iVar10 = *(int *)(iVar13 + 0x10);
          uVar4 = *(int *)(iVar13 + 0x1c) - iVar10;
          if (uVar4 != 0) {
            uVar15 = uVar4;
            if (iVar8 != 0) {
              puVar12 = puVar7;
              do {
                if (uVar15 == 0) {
                  uVar15 = 0;
                  break;
                }
                uVar14 = *puVar12;
                uVar16 = *(int *)(iVar13 + 0x14) - iVar10;
                uVar5 = puVar12[1];
                if (uVar15 < (uint)puVar12[1]) {
                  uVar5 = uVar15;
                }
                if (uVar16 < uVar5) {
                  FUN_01283c9c((int *)(iVar13 + 0xc),uVar5);
                  iVar10 = *(int *)(iVar13 + 0x10);
                  uVar16 = *(int *)(iVar13 + 0x14) - iVar10;
                }
                FUN_01bed4e2(*(int *)(iVar13 + 0xc) + iVar10,uVar14,uVar5);
                if (uVar16 < uVar5) {
                  local_50 = uVar5;
                  local_4c = uVar16;
                    /* WARNING: Subroutine does not return */
                  FUN_01284540(&local_50);
                }
                iVar10 = iVar10 + uVar5;
                uVar15 = uVar15 - uVar5;
                puVar12 = puVar12 + 2;
                *(int *)(iVar13 + 0x10) = iVar10;
              } while (puVar12 != puVar7 + iVar8 * 2);
            }
            iVar10 = *(int *)(iVar13 + 0x20);
            *(undefined4 *)(iVar13 + 0x20) = 0;
            if (iVar10 != 0) {
              (**(code **)(iVar10 + 4))(*(undefined4 *)(iVar13 + 0x24));
            }
            uVar16 = 4;
            uVar4 = uVar4 - uVar15;
            goto LAB_0120f03c;
          }
          uVar18 = (*(code *)*puVar3)(uVar6);
          if (*(int *)(iVar13 + 0x28) != 0) {
            (**(code **)(*(int *)(iVar13 + 0x28) + 0xc))(*(undefined4 *)(iVar13 + 0x2c));
          }
          local_64 = 0;
          *(undefined8 *)(iVar13 + 0x28) = uVar18;
          uVar15 = 0xb;
          if ((uVar5 >> 8 & 1) != 0) {
            if (*(char *)(iVar11 + 0x38) != '\x01') {
              if (*(char *)(iVar11 + 0x38) == '\x02') goto LAB_0120f04c;
              FUN_019a2bcc(iVar11,&LAB_019efb68);
              *(undefined1 *)(iVar11 + 0x38) = 1;
            }
            *(char *)(iVar11 + 0x31) = (char)(uVar5 >> 0x10);
            *(char *)(iVar11 + 0x30) = (char)(uVar5 >> 8);
          }
        }
        else {
          uVar16 = 1;
          uVar4 = 0;
LAB_0120f03c:
          uVar15 = uVar4 << 0x18 | 0xb;
          local_64 = uVar4 >> 8;
        }
LAB_0120f04c:
        FUN_01650a90(pcVar17);
        if (*pcVar17 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(pcVar17);
            if (bVar1) {
              *pcVar17 = '\0';
              goto LAB_0120f088;
            }
          } while (*pcVar17 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_0164f86c(pcVar17);
LAB_0120f088:
        if (cVar9 != '\x02') {
          if (*(char *)(iVar11 + 0x38) != '\x01') {
            if (*(char *)(iVar11 + 0x38) == '\x02') goto LAB_0120f0c4;
            FUN_019a2bcc(iVar11,&LAB_019efb68);
            *(undefined1 *)(iVar11 + 0x38) = 1;
          }
          *(char *)(iVar11 + 0x31) = (char)param_4;
          *(char *)(iVar11 + 0x30) = cVar9;
        }
LAB_0120f0c4:
        if (uVar16 != 5) {
          (*(code *)puVar3[3])(uVar6);
          *param_1 = uVar16 | uVar15 << 8;
          param_1[1] = local_64 << 8 | uVar15 >> 0x18;
          FUN_0120e714(&local_40);
          return;
        }
        FUN_019ee698();
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb100("Cannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks."
               ,0x183,&DAT_01c23cbc);
}

