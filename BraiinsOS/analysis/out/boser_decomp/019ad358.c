// FUN_019ad358 @ 019ad358 size=824 calls_out=3 calls_in=1
// strings: unexpected copy_file_range probe success

/* WARNING: Removing unreachable block (ram,0x019ad3a4) */
/* WARNING: Removing unreachable block (ram,0x019ad3c8) */
/* WARNING: Removing unreachable block (ram,0x019ad3d0) */
/* WARNING: Removing unreachable block (ram,0x019ad3d8) */
/* WARNING: Removing unreachable block (ram,0x019ad3e0) */
/* WARNING: Removing unreachable block (ram,0x019ad3f0) */
/* WARNING: Removing unreachable block (ram,0x019ad3f8) */
/* WARNING: Removing unreachable block (ram,0x019ad3fc) */
/* WARNING: Removing unreachable block (ram,0x019ad400) */
/* WARNING: Removing unreachable block (ram,0x019ad404) */
/* WARNING: Removing unreachable block (ram,0x019ad428) */
/* WARNING: Removing unreachable block (ram,0x019ad430) */
/* WARNING: Removing unreachable block (ram,0x019ad448) */
/* WARNING: Removing unreachable block (ram,0x019ad690) */

void FUN_019ad358(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  undefined8 uVar10;
  
  if (DAT_01d51a6c == '\x01') {
LAB_019ad538:
    param_1[2] = 0;
    param_1[3] = 0;
    uVar1 = 6;
LAB_019ad548:
    *(undefined1 *)param_1 = uVar1;
    return;
  }
  bVar9 = DAT_01d51a6c != '\0';
  uVar7 = 0;
  uVar10 = FUN_01be6c3c(0x187,param_2,0,param_3,0,0x40000000,0);
  uVar5 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar3 = (uint)uVar10;
  if (uVar3 != 0xffffffff) {
    if (!bVar9) {
      DAT_01d51a6c = '\x02';
    }
    if (uVar3 != 0) {
      iVar8 = (int)uVar3 >> 0x1f;
      uVar7 = uVar3;
      while( true ) {
        uVar3 = 0;
        if (iVar8 == -1) {
          uVar3 = uVar7;
        }
        if (uVar3 < 0xc0000000) {
          uVar3 = 0xbfffffff;
        }
        uVar10 = FUN_01be6c3c(0x187,param_2,0,param_3,0,~uVar3,0);
        uVar5 = (undefined4)((ulonglong)uVar10 >> 0x20);
        uVar3 = (uint)uVar10;
        if (uVar3 == 0xffffffff) {
          bVar9 = true;
          goto LAB_019ad560;
        }
        if (uVar3 == 0) break;
        bVar9 = CARRY4(uVar7,uVar3);
        uVar7 = uVar7 + uVar3;
        iVar8 = iVar8 + ((int)uVar3 >> 0x1f) + (uint)bVar9;
        if (uVar7 == 0xffffffff && iVar8 == -1) {
          param_1[2] = 0xffffffff;
          param_1[3] = 0xffffffff;
          *(undefined1 *)param_1 = 4;
          return;
        }
      }
      if (uVar7 == 0 && iVar8 == 0) goto LAB_019ad538;
      uVar1 = 4;
      param_1[2] = uVar7;
      param_1[3] = iVar8;
      goto LAB_019ad548;
    }
    goto LAB_019ad538;
  }
  iVar8 = 0;
LAB_019ad560:
  piVar4 = (int *)FUN_01be3244(0xffffffff,uVar5);
  iVar6 = *piVar4;
  switch(iVar6) {
  case 1:
  case 0x26:
    goto switchD_019ad588_caseD_1;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
    goto switchD_019ad588_caseD_2;
  case 9:
  case 0x12:
  case 0x16:
    if (uVar7 != 0 || iVar8 != 0) goto switchD_019ad588_caseD_2;
    uVar7 = 0;
    cVar2 = '\x02';
    iVar8 = 0;
    if (bVar9) goto LAB_019ad6f8;
    goto LAB_019ad6ec;
  default:
    if (iVar6 == 0x4b) goto LAB_019ad6f8;
    if (iVar6 != 0x5f) goto switchD_019ad588_caseD_2;
switchD_019ad588_caseD_1:
    if (uVar7 != 0 || iVar8 != 0) {
switchD_019ad588_caseD_2:
      *param_1 = 0;
      param_1[1] = iVar6;
      param_1[2] = uVar7;
      param_1[3] = iVar8;
      return;
    }
    uVar7 = 0;
    iVar8 = 0;
    if (!bVar9) {
      iVar8 = FUN_01be6c3c(0x187,0xffffffff,0,0xffffffff,0,1,0);
      if (iVar8 != -1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("unexpected copy_file_range probe success",0x51,&DAT_01d27880);
      }
      cVar2 = '\x01';
      if (*piVar4 == 9) {
        cVar2 = '\x02';
      }
LAB_019ad6ec:
      iVar8 = 0;
      uVar7 = 0;
      DAT_01d51a6c = cVar2;
    }
LAB_019ad6f8:
    param_1[2] = uVar7;
    *(undefined1 *)param_1 = 6;
    param_1[3] = iVar8;
    return;
  }
}

