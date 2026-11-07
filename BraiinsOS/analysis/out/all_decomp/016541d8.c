// FUN_016541d8 @ 016541d8 size=1428 calls_out=16 calls_in=1
// strings: park missing | core missing | A Tokio 1.x context was found; but IO is disabled. Call `enable_io` on the runtime builder to enable IO.

/* WARNING: Removing unreachable block (ram,0x016542a8) */

int FUN_016541d8(int *param_1,int param_2,undefined1 *param_3)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  ulonglong uVar13;
  uint local_2c;
  uint *local_28;
  undefined1 *local_24;
  
  iVar6 = *(int *)(param_2 + 0x5c);
  *(undefined4 *)(param_2 + 0x5c) = 0;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("park missing",0xc,&DAT_018ad02c);
  }
  if (param_1[1] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_018ad05c);
  }
  iVar8 = param_1[2];
  param_1[1] = -1;
  if (iVar8 == 0) {
    iVar8 = 0;
  }
  else {
    FUN_01654f0c(iVar8);
    thunk_FUN_016d3fb4(iVar8);
    iVar8 = param_1[1] + 1;
  }
  param_1[1] = iVar8;
  param_1[2] = param_2;
  iVar11 = *(int *)(*param_1 + 8);
  piVar2 = (int *)(iVar6 + 8);
  iVar8 = iVar11 + 0xb8;
  if (param_3 == &DAT_3b9aca00) {
    puVar9 = (uint *)(iVar6 + 0xc);
    if (*puVar9 == 3) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar9);
        if (bVar1) {
          *puVar9 = 0;
          DataMemoryBarrier(0xb);
          goto LAB_0165434c;
        }
      } while (*puVar9 == 3);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    iVar10 = *piVar2;
    pcVar7 = (char *)(iVar10 + 0x2c);
    if (*pcVar7 == '\0') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(pcVar7);
        if (bVar1) {
          *pcVar7 = '\x01';
          DataMemoryBarrier(0xb);
          local_2c = *puVar9;
          if (local_2c != 0) goto LAB_01654564;
          DataMemoryBarrier(0xb);
          goto LAB_0165454c;
        }
      } while (*pcVar7 == '\0');
    }
    ClearExclusiveLocal();
    param_3 = &DAT_3b9aca00;
    DataMemoryBarrier(0xb);
LAB_01654344:
    FUN_0163a080(piVar2,param_3);
  }
  else {
    iVar10 = *piVar2;
    pcVar7 = (char *)(iVar10 + 0x2c);
    if (*pcVar7 == '\0') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(pcVar7);
        if (bVar1) {
          *pcVar7 = '\x01';
          DataMemoryBarrier(0xb);
          if (param_3 == (undefined1 *)0x0) {
            FUN_016476c4(iVar10 + 8,iVar8,0);
            goto LAB_01654698;
          }
          puVar9 = (uint *)(iVar6 + 0xc);
          local_2c = *puVar9;
          if (local_2c != 0) goto LAB_016544d8;
          DataMemoryBarrier(0xb);
          goto LAB_016544c0;
        }
      } while (*pcVar7 == '\0');
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    if (param_3 != (undefined1 *)0x0) goto LAB_01654344;
  }
LAB_0165434c:
  if (param_1[3] != 0) goto LAB_01654398;
  goto LAB_0165435c;
LAB_016544c0:
  bVar1 = (bool)hasExclusiveAccess(puVar9);
  if (!bVar1) goto code_r0x016544cc;
  *puVar9 = 2;
  DataMemoryBarrier(0xb);
  FUN_016476c4(iVar10 + 8,iVar8,param_3);
  DataMemoryBarrier(0xb);
  do {
    local_2c = *puVar9;
    bVar1 = (bool)hasExclusiveAccess(puVar9);
  } while (!bVar1);
  *puVar9 = 0;
  DataMemoryBarrier(0xb);
  if ((local_2c & 0xfffffffe) != 2) {
    puVar5 = &DAT_018ac5ac;
    puVar4 = &DAT_0057e51e;
    goto LAB_016545e0;
  }
  goto LAB_01654698;
code_r0x016544cc:
  local_2c = *puVar9;
  if (local_2c != 0) goto LAB_016544d8;
  goto LAB_016544c0;
LAB_016544d8:
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  if (local_2c != 3) {
    puVar5 = &DAT_018ac5bc;
    puVar4 = &DAT_0057f434;
LAB_016545e0:
    local_28 = &local_2c;
    local_24 = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(puVar4,&local_28,puVar5);
  }
  goto LAB_01654618;
LAB_0165454c:
  bVar1 = (bool)hasExclusiveAccess(puVar9);
  if (!bVar1) goto code_r0x01654558;
  *puVar9 = 2;
  DataMemoryBarrier(0xb);
  piVar2 = (int *)(iVar10 + 0xc);
  if (*(int *)(iVar10 + 8) == 0) {
    FUN_0165b5bc(piVar2);
  }
  else if (*piVar2 == -0x80000000) {
    FUN_01639cac(*(int *)(iVar10 + 0x10) + 8);
  }
  else {
    piVar12 = (int *)(iVar11 + 0xe8);
    if (*piVar12 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                   ,0x68,&DAT_018ad354);
    }
    FUN_0165af70(piVar2,piVar12,&DAT_3b9aca00,0,&DAT_3b9aca00);
    FUN_0163edcc(piVar2);
    FUN_01644d00(iVar10 + 0x28);
  }
  DataMemoryBarrier(0xb);
  do {
    local_2c = *puVar9;
    bVar1 = (bool)hasExclusiveAccess(puVar9);
  } while (!bVar1);
  *puVar9 = 0;
  DataMemoryBarrier(0xb);
  if ((local_2c & 0xfffffffe) != 2) {
    puVar5 = &DAT_018ac5ac;
    puVar4 = &DAT_0057e51e;
    goto LAB_0165473c;
  }
  goto LAB_01654698;
code_r0x01654558:
  local_2c = *puVar9;
  if (local_2c != 0) goto LAB_01654564;
  goto LAB_0165454c;
LAB_01654564:
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  if (local_2c != 3) {
    puVar5 = &DAT_018ac5bc;
    puVar4 = &DAT_0057f434;
LAB_0165473c:
    local_28 = &local_2c;
    local_24 = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(puVar4,&local_28,puVar5);
  }
LAB_01654618:
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess((undefined4 *)(iVar6 + 0xc));
  } while (!bVar1);
  *(undefined4 *)(iVar6 + 0xc) = 0;
  DataMemoryBarrier(0xb);
LAB_01654698:
  DataMemoryBarrier(0xb);
  *(undefined1 *)(iVar10 + 0x2c) = 0;
  DataMemoryBarrier(0xb);
  if (param_1[3] == 0) {
LAB_0165435c:
    do {
      param_1[3] = -1;
      if (param_1[6] == 0) {
        param_1[3] = 0;
        if (param_1[1] != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb715c(&DAT_018ad04c);
        }
        iVar8 = param_1[2];
        param_1[1] = -1;
        param_1[2] = 0;
        if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("core missing",0xc,&DAT_018ad03c);
        }
        param_1[1] = 0;
        piVar2 = *(int **)(iVar8 + 0x5c);
        if (piVar2 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar11 = *piVar2;
            bVar1 = (bool)hasExclusiveAccess(piVar2);
          } while (!bVar1);
          *piVar2 = iVar11 + -1;
          if (iVar11 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01658b0c(*(undefined4 *)(iVar8 + 0x5c));
          }
        }
        *(int *)(iVar8 + 0x5c) = iVar6;
        if (*(char *)(iVar8 + 0x65) == '\0') {
          iVar6 = *(int *)(iVar8 + 0x50);
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
          uVar3 = *(int *)(iVar6 + 0x10) - *(int *)(iVar6 + 8);
          if (*(int *)(iVar8 + 0x58) != 0) {
            uVar3 = uVar3 + 1;
          }
          if (1 < uVar3) {
            iVar11 = *(int *)(*param_1 + 8);
            uVar13 = FUN_0164ff24(iVar11 + 0x80,iVar11 + 8,*(int *)(iVar6 + 8),
                                  *(undefined4 *)(iVar6 + 0xc));
            uVar3 = (uint)(uVar13 >> 0x20);
            if ((uVar13 & 1) != 0) {
              if (*(uint *)(iVar11 + 0x4c) <= uVar3) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar3,*(uint *)(iVar11 + 0x4c),&DAT_018ac60c);
              }
              FUN_0163a560(*(undefined4 *)(*(int *)(iVar11 + 0x48) + uVar3 * 8 + 4),iVar11 + 0xb8);
            }
          }
        }
        return iVar8;
      }
      iVar8 = param_1[6] + -1;
      param_1[6] = iVar8;
      piVar2 = (int *)(param_1[5] + iVar8 * 8);
      (**(code **)(*piVar2 + 4))(piVar2[1]);
      uVar3 = param_1[3];
      param_1[3] = uVar3 + 1;
    } while (0xfffffffe < uVar3);
  }
LAB_01654398:
                    /* WARNING: Subroutine does not return */
  FUN_00fb715c(&DAT_018ad0cc);
}

