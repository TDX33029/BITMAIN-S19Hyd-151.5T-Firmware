// FUN_00bd24ac @ 00bd24ac size=1036 calls_out=12 calls_in=2
// strings: internal error: entered unreachable code

undefined4 FUN_00bd24ac(int *param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  int iVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[7]) {
  case '\0':
    param_1[1] = *param_1;
    iVar5 = *(int *)(*param_1 + 0x44) + 8;
    param_1[8] = iVar5;
    *(undefined1 *)(param_1 + 0x16) = 0;
LAB_00bd253c:
    *(undefined1 *)(param_1 + 0x15) = 0;
    param_1[9] = iVar5;
LAB_00bd254c:
    *(undefined1 *)(param_1 + 0xc) = 0;
    param_1[10] = iVar5;
LAB_00bd255c:
    param_1[0xb] = iVar5;
LAB_00bd2560:
    *(undefined1 *)(param_1 + 0x14) = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 1;
    param_1[0x13] = 1;
    param_1[0xd] = iVar5;
    param_1[0xe] = 0;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c20274);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c20274);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x16]) {
    case '\0':
      iVar5 = param_1[8];
      goto LAB_00bd253c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c23280);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c23280);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x15]) {
    case '\0':
      iVar5 = param_1[9];
      goto LAB_00bd254c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c23290);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c23290);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0xc]) {
    case '\0':
      iVar5 = param_1[10];
      goto LAB_00bd255c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c232a0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c232a0);
    case '\x03':
      iVar5 = param_1[0xb];
      goto LAB_00bd2560;
    }
    break;
  case '\x04':
    goto switchD_00bd24c8_caseD_4;
  case '\x05':
    goto switchD_00bd24c8_caseD_5;
  case '\x06':
    goto switchD_00bd24c8_caseD_6;
  }
  bVar2 = FUN_019f9bc4(param_1 + 0xd,param_2);
  if (bVar2 == 2) {
    uVar8 = 3;
    *(undefined1 *)(param_1 + 0xc) = 4;
    uVar7 = 1;
    *(undefined1 *)(param_1 + 0x15) = 3;
    *(undefined1 *)(param_1 + 0x16) = 3;
  }
  else {
    FUN_0193c3cc(param_1 + 0xd);
    if ((bVar2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c232b0);
    }
    iVar5 = param_1[9];
    *(undefined1 *)(param_1 + 0x16) = 1;
    *(undefined1 *)(param_1 + 0x15) = 1;
    *(undefined1 *)(param_1 + 0xc) = 1;
    param_1[2] = iVar5;
    iVar9 = *(int *)(iVar5 + 0x18);
    puVar3 = (undefined4 *)(iVar9 + 4);
    for (iVar4 = *(int *)(iVar5 + 0x1c); iVar4 != 0; iVar4 = iVar4 + -1) {
      FUN_019bb7e0(puVar3[-1],*puVar3);
      puVar3 = puVar3 + 3;
    }
    FUN_0132b958(*(undefined4 *)(iVar5 + 0x14),iVar9,4,0xc);
    *(undefined4 *)(iVar5 + 0x18) = 4;
    *(undefined4 *)(iVar5 + 0x14) = 0;
    *(undefined4 *)(iVar5 + 0x1c) = 0;
    *(undefined1 *)(param_1 + 0x15) = 0;
    param_1[8] = param_1[1] + 0x3c;
switchD_00bd24c8_caseD_4:
    uVar11 = FUN_00df39fc(param_1 + 8,param_2);
    iVar5 = (int)((ulonglong)uVar11 >> 0x20);
    if ((int)uVar11 == 0) {
      uVar7 = 1;
      uVar8 = 4;
    }
    else {
      *(undefined8 *)(param_1 + 5) = uVar11;
      if ((char)param_1[0x15] == '\x03') {
        cVar1 = (char)param_1[0x14];
        bVar10 = cVar1 == '\x03';
        if (bVar10) {
          cVar1 = (char)param_1[0x13];
        }
        if (bVar10 && cVar1 == '\x03') {
          FUN_0193c3cc(param_1 + 0xb);
          iVar5 = param_1[6];
        }
      }
      *(undefined1 *)(param_1 + 0x15) = 0;
      param_1[8] = iVar5 + 0x50;
switchD_00bd24c8_caseD_5:
      uVar11 = FUN_00df39fc(param_1 + 8,param_2);
      iVar5 = (int)((ulonglong)uVar11 >> 0x20);
      if ((int)uVar11 == 0) {
        uVar7 = 1;
        uVar8 = 5;
      }
      else {
        *(undefined8 *)(param_1 + 3) = uVar11;
        if ((char)param_1[0x15] == '\x03') {
          cVar1 = (char)param_1[0x14];
          bVar10 = cVar1 == '\x03';
          if (bVar10) {
            cVar1 = (char)param_1[0x13];
          }
          if (bVar10 && cVar1 == '\x03') {
            FUN_0193c3cc(param_1 + 0xb);
            iVar5 = param_1[4];
          }
        }
        iVar4 = *(int *)(iVar5 + 4);
        iVar5 = iVar4 + *(int *)(iVar5 + 8) * 4;
        param_1[9] = iVar4;
        param_1[10] = iVar5;
        while (iVar4 != iVar5) {
          param_1[0xb] = iVar4;
          param_1[8] = param_1[2] + 0x14;
          param_1[9] = iVar4 + 4;
          *(undefined1 *)(param_1 + 0x18) = 0;
switchD_00bd24c8_caseD_6:
          uVar11 = FUN_00e06fc8(param_1 + 0xb,param_2);
          iVar5 = (int)((ulonglong)uVar11 >> 0x20);
          if ((int)uVar11 == 0) {
            uVar7 = 1;
            uVar8 = 6;
            goto LAB_00bd29c8;
          }
          if ((char)param_1[0x18] == '\x03') {
            cVar1 = (char)param_1[0x17];
            bVar10 = cVar1 == '\x03';
            if (bVar10) {
              cVar1 = (char)param_1[0x16];
            }
            if (bVar10 && cVar1 == '\x03') {
              FUN_0193c3cc(param_1 + 0xe);
            }
          }
          FUN_006666fc(&local_30,*(undefined4 *)(iVar5 + 0x14),*(undefined4 *)(iVar5 + 0x18));
          piVar6 = (int *)param_1[8];
          iVar5 = piVar6[2];
          if (iVar5 == *piVar6) {
            FUN_00f9d5cc(piVar6);
          }
          puVar3 = (undefined4 *)(piVar6[1] + iVar5 * 0xc);
          *puVar3 = local_30;
          puVar3[1] = uStack_2c;
          puVar3[2] = uStack_28;
          piVar6[2] = iVar5 + 1;
          FUN_019f8c54((int)uVar11,1);
          iVar5 = param_1[10];
          iVar4 = param_1[9];
        }
        FUN_019f8c54(param_1[3],1);
        uVar8 = 1;
        FUN_019f8c54(param_1[5],1);
        uVar7 = 0;
        FUN_019f8c54(param_1[2],1);
      }
    }
  }
LAB_00bd29c8:
  *(undefined1 *)(param_1 + 7) = uVar8;
  return uVar7;
}

