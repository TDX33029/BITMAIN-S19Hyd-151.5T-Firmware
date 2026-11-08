// FUN_006618cc @ 006618cc size=1432 calls_out=12 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x00661b94) */
/* WARNING: Removing unreachable block (ram,0x00661b80) */
/* WARNING: Removing unreachable block (ram,0x00661b6c) */

undefined4 FUN_006618cc(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  char cVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined4 *puVar11;
  char local_29;
  char *local_28;
  code *local_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0xf]) {
  case '\0':
    iVar7 = *param_1 + 4;
    *(undefined1 *)((int)param_1 + 0x29) = 0;
    iVar3 = param_1[1];
    iVar5 = param_1[2];
    param_1[5] = iVar3;
    param_1[6] = iVar5;
    param_1[9] = iVar7;
LAB_00661920:
    param_1[7] = iVar7;
    *(undefined1 *)(param_1 + 10) = 1;
    param_1[0xb] = iVar7 + 4;
    param_1[0xc] = -1;
    param_1[3] = iVar3;
    param_1[4] = iVar5;
switchD_00661bfc_caseD_3:
    iVar3 = FUN_006f59b4(param_1 + 0xb,param_2);
    if (iVar3 == 0) {
      uVar2 = 3;
      goto LAB_00661dac;
    }
    param_1[8] = iVar3;
    if (param_1[0xb] != 0) {
      FUN_006f5fbc(param_1[0xb],param_1[0xc],1);
    }
    *(undefined1 *)(param_1 + 0xe) = 0;
    iVar3 = param_1[7];
    param_1[0xb] = iVar3;
LAB_00661988:
    param_1[0xc] = iVar3 + 0x34;
    param_1[0xd] = -1;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0185847c);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185847c);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0x29)) {
    case 0:
      iVar3 = param_1[5];
      iVar5 = param_1[6];
      iVar7 = param_1[9];
      goto LAB_00661920;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0185849c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0185849c);
    case 3:
      goto switchD_00661bfc_caseD_3;
    case 5:
switchD_00661bfc_caseD_5:
      iVar3 = FUN_00662244(param_1 + 0xb,*param_2);
      if (iVar3 == 0) {
        if (((char)param_1[0xe] == '\x03') && (param_1[0xc] != 0)) {
          FUN_006f5fbc(param_1[0xc],param_1[0xd],1);
        }
        goto LAB_00661de8;
      }
      uVar2 = 5;
      goto LAB_00661dac;
    case 6:
switchD_00661bfc_caseD_6:
      iVar3 = FUN_00662244(param_1 + 0xb,*param_2);
      if (iVar3 != 0) {
        uVar2 = 6;
        goto LAB_00661dac;
      }
      if (((char)param_1[0xe] == '\x03') && (param_1[0xc] != 0)) {
        FUN_006f5fbc(param_1[0xc],param_1[0xd],1);
      }
LAB_00661de8:
      FUN_006f625c(param_1[8]);
      if ((char)param_1[10] != '\0') {
        iVar3 = param_1[3];
        puVar11 = (undefined4 *)param_1[4];
        pcVar6 = (code *)*puVar11;
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(iVar3);
        }
        if (puVar11[1] != 0) {
          thunk_FUN_016d3fb4(iVar3);
        }
      }
      uVar9 = 1;
LAB_00661e30:
      *(undefined1 *)(param_1 + 10) = 0;
      *(undefined1 *)((int)param_1 + 0x29) = 1;
      FUN_00656120(param_1 + 3);
      *(undefined1 *)(param_1 + 0xf) = 1;
      return uVar9;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0xe]) {
    case '\0':
      iVar3 = param_1[0xb];
      goto LAB_00661988;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0185848c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0185848c);
    }
  }
  iVar3 = FUN_006f5654(param_1 + 0xc,*param_2);
  if (iVar3 != 0) {
    iVar5 = param_1[0xc];
    if (iVar5 != 0) {
      FUN_006f5fbc(iVar5,param_1[0xd],1);
    }
    do {
      uVar4 = FUN_006b2698(iVar3 + 0x20);
    } while ((uVar4 & 1) != 0);
    FUN_006f625c(iVar3);
    *(undefined1 *)(param_1 + 0xe) = 1;
    cVar8 = *(char *)(*(int *)(param_1[8] + 0x20) + 8);
    do {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(cVar8) {
      default:
        local_24 = FUN_00662208;
        local_28 = &local_29;
        local_29 = cVar8;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00586e22,&local_28,&DAT_018584ac);
      case '\x04':
        pcVar10 = (char *)(*(int *)(param_1[8] + 0x20) + 8);
        while (cVar8 = *pcVar10, cVar8 == '\x04') {
          bVar1 = (bool)hasExclusiveAccess(pcVar10);
          if (bVar1) {
            *pcVar10 = '\t';
            uVar9 = DAT_018d7c90;
            local_29 = '\x04';
            DataMemoryBarrier(0xb);
            if (DAT_018d7c7c == 0) {
              *(undefined1 *)(param_1 + 10) = 0;
              FUN_0077df34(uVar9,param_1[3],param_1[4],0);
            }
            *(undefined1 *)(param_1 + 0xe) = 0;
            param_1[0xb] = param_1[7];
            goto switchD_00661bfc_caseD_5;
          }
        }
        ClearExclusiveLocal();
        break;
      case '\x05':
        pcVar10 = (char *)(*(int *)(param_1[8] + 0x20) + 8);
        while (cVar8 = *pcVar10, cVar8 == '\x05') {
          bVar1 = (bool)hasExclusiveAccess(pcVar10);
          if (bVar1) {
            *pcVar10 = '\n';
            uVar9 = DAT_018d7c90;
            local_29 = '\x05';
            DataMemoryBarrier(0xb);
            if (DAT_018d7c7c == 0) {
              *(undefined1 *)(param_1 + 10) = 0;
              FUN_0077df34(uVar9,param_1[3],param_1[4],0xff);
            }
            *(undefined1 *)(param_1 + 0xe) = 0;
            param_1[0xb] = param_1[7];
            goto switchD_00661bfc_caseD_6;
          }
        }
        ClearExclusiveLocal();
        break;
      case '\x06':
        pcVar10 = (char *)(*(int *)(param_1[8] + 0x20) + 8);
        while (cVar8 = *pcVar10, cVar8 == '\x06') {
          bVar1 = (bool)hasExclusiveAccess(pcVar10);
          if (bVar1) {
            *pcVar10 = '\n';
            uVar9 = DAT_018d7c90;
            local_29 = '\x06';
            DataMemoryBarrier(0xb);
            if (DAT_018d7c7c == 0) {
              *(undefined1 *)(param_1 + 10) = 0;
              FUN_0077df34(uVar9,param_1[3],param_1[4],0xff);
            }
            goto LAB_00661de8;
          }
        }
        ClearExclusiveLocal();
        break;
      case '\a':
        pcVar10 = (char *)(*(int *)(param_1[8] + 0x20) + 8);
        while (cVar8 = *pcVar10, cVar8 == '\a') {
          bVar1 = (bool)hasExclusiveAccess(pcVar10);
          if (bVar1) {
            *pcVar10 = '\x01';
LAB_00661ba8:
            FUN_006f625c(param_1[8]);
            iVar3 = param_1[3];
            puVar11 = (undefined4 *)param_1[4];
            pcVar6 = (code *)*puVar11;
            if (pcVar6 != (code *)0x0) {
              (*pcVar6)(iVar3);
            }
            if (puVar11[1] != 0) {
              thunk_FUN_016d3fb4(iVar3);
            }
            uVar9 = 0;
            goto LAB_00661e30;
          }
        }
        ClearExclusiveLocal();
        break;
      case '\b':
        pcVar10 = (char *)(*(int *)(param_1[8] + 0x20) + 8);
        while (cVar8 = *pcVar10, cVar8 == '\b') {
          bVar1 = (bool)hasExclusiveAccess(pcVar10);
          if (bVar1) {
            *pcVar10 = '\x02';
            goto LAB_00661ba8;
          }
        }
        ClearExclusiveLocal();
      }
    } while( true );
  }
  *(undefined1 *)(param_1 + 0xe) = 3;
  uVar2 = 4;
LAB_00661dac:
  *(undefined1 *)((int)param_1 + 0x29) = uVar2;
  *(undefined1 *)(param_1 + 0xf) = 3;
  return 2;
}

