// FUN_00a6f724 @ 00a6f724 size=1204 calls_out=17 calls_in=0
// strings: BUG: missing ASC parameter | BUG: invalid ASC parameter type

void FUN_00a6f724(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  ulonglong uVar10;
  int local_998;
  int iStack_994;
  int iStack_990;
  undefined1 auStack_988 [152];
  int local_8f0;
  int iStack_8ec;
  int iStack_8e8;
  int local_8e0;
  int iStack_8dc;
  int iStack_8d8;
  int local_8d0;
  int local_8cc;
  int local_8c8;
  int local_8c4;
  int iStack_8c0;
  int iStack_8bc;
  int local_8b8;
  int local_8b4;
  undefined1 auStack_8b0 [704];
  int local_5f0;
  int local_5ec;
  int local_5e8;
  int local_5e4;
  int local_5e0;
  int local_5dc;
  int local_5d8;
  int local_5d4;
  undefined1 auStack_5d0 [144];
  int local_540;
  int local_53c;
  int iStack_538;
  int iStack_534;
  undefined1 auStack_310 [704];
  int local_50;
  int iStack_4c;
  int iStack_48;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined1 auStack_30 [12];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 3)) {
  case 0:
    if (param_2[1] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("BUG: missing ASC parameter",0x1a,&DAT_01c0f4ac);
    }
    uVar8 = *param_2;
    uVar10 = FUN_014a8df0();
    if ((uVar10 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("BUG: invalid ASC parameter type",0x1f,&DAT_01c0f4bc);
    }
    param_2[4] = uVar8;
    *(undefined1 *)(param_2 + 0x36) = 0;
    param_2[2] = (int)(uVar10 >> 0x20);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c0f4cc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0f4cc);
  case 4:
    goto switchD_00a6f748_caseD_4;
  }
  piVar3 = param_2 + 4;
  FUN_00a6fd0c(&local_5f0,piVar3,param_3);
  iVar6 = local_5dc;
  iVar4 = local_5e0;
  iVar5 = local_5f0;
  if (local_5f0 == 3) {
    param_1[0x2c] = -0x7fffffff;
    uVar2 = 3;
    goto LAB_00a6fb94;
  }
  local_8e0 = local_5ec;
  iStack_8dc = local_5e8;
  iStack_8d8 = local_5e4;
  cVar1 = *(char *)(param_2 + 0x36);
  bVar9 = cVar1 == '\x03';
  if (bVar9) {
    cVar1 = *(char *)(param_2 + 0x35);
  }
  if (bVar9 && cVar1 == '\x03') {
    FUN_00b99500(param_2 + 6);
  }
  if (iVar5 == 2) {
    *piVar3 = local_8e0;
    param_2[5] = iStack_8dc;
    param_2[6] = iStack_8d8;
    *(undefined2 *)(param_2 + 0x171) = 0x200;
    param_2[0x170] = piVar3;
switchD_00a6f748_caseD_4:
    FUN_00a6fe94(&local_5f0,param_2 + 8,param_3);
    iVar5 = local_5e8;
    iVar6 = local_5ec;
    iVar4 = local_5f0;
    if (local_5f0 == 4 && local_5ec == 0) {
      param_1[0x2c] = -0x7fffffff;
      uVar2 = 4;
      goto LAB_00a6fb94;
    }
    local_50 = local_5e4;
    iStack_4c = local_5e0;
    iStack_48 = local_5dc;
    FUN_01bed4e2(auStack_310,auStack_5d0,0x2c0);
    if (*(char *)(param_2 + 0x171) == '\x03') {
      FUN_00a7389c(param_2 + 8);
    }
    if (iVar4 != 3 || iVar6 != 0) {
      FUN_01bed4e2(auStack_8b0,auStack_310,0x2c0);
      local_8c4 = local_50;
      iStack_8c0 = iStack_4c;
      iStack_8bc = iStack_48;
      local_8b4 = local_5d4;
      local_8b8 = local_5d8;
      local_8cc = iVar6;
      local_8d0 = iVar4;
      local_8c8 = iVar5;
      piVar3 = (int *)FUN_01220dcc(&local_8d0);
      iVar5 = param_2[2];
      if (iVar5 != 0) {
        do {
          if (*piVar3 == 1) {
            iVar4 = piVar3[1];
            piVar3[1] = 0;
            if (iVar4 == 0) {
              *piVar3 = 0;
              goto LAB_00a6f96c;
            }
          }
          else {
LAB_00a6f96c:
            iVar6 = 0;
            if ((piVar3[2] != 1) || (iVar4 = FUN_0122143c(piVar3 + 3), iVar4 == 0))
            goto LAB_00a6f9f4;
          }
          if (*(int *)(iVar4 + 0x2b0) == 0) {
            iVar5 = iVar5 + -1;
          }
        } while (iVar5 != 0);
      }
      do {
        if (*piVar3 == 1) {
          iVar5 = piVar3[1];
          piVar3[1] = 0;
          if (iVar5 == 0) {
            *piVar3 = 0;
            goto LAB_00a6f9c4;
          }
        }
        else {
LAB_00a6f9c4:
          iVar6 = 0;
          if ((piVar3[2] != 1) || (iVar5 = FUN_0122143c(piVar3 + 3), iVar5 == 0)) break;
        }
        iVar6 = iVar5;
      } while (*(int *)(iVar5 + 0x2b0) != 0);
LAB_00a6f9f4:
      FUN_018f2d80(piVar3,&DAT_01c245a8);
      if (iVar6 == 0) {
        uVar8 = param_2[2];
        piVar3 = (int *)FUN_01220dcc(&local_8d0);
        FUN_01220ee0(auStack_30,piVar3);
        iVar5 = 0;
        do {
          if (*piVar3 == 1) {
            iVar4 = piVar3[1];
            piVar3[1] = 0;
            if (iVar4 == 0) {
              *piVar3 = 0;
              goto LAB_00a6fabc;
            }
          }
          else {
LAB_00a6fabc:
            if ((piVar3[2] != 1) || (iVar4 = FUN_0122143c(piVar3 + 3), iVar4 == 0))
            goto LAB_00a6fae8;
          }
          if (*(int *)(iVar4 + 0x2b0) == 0) {
            iVar5 = iVar5 + 1;
          }
        } while( true );
      }
      FUN_00a5cf20(&local_5f0,param_2[2],iVar6);
      piVar3 = (int *)((uint)&local_5f0 | 4);
      local_8f0 = *piVar3;
      iStack_8ec = piVar3[1];
      iStack_8e8 = piVar3[2];
      FUN_01bed4e2(auStack_988,&local_5d8,0x98);
      local_998 = local_53c;
      iStack_994 = iStack_538;
      iStack_990 = iStack_534;
      iVar6 = local_5dc;
      iVar7 = local_540;
      iVar5 = local_5f0;
      iVar4 = local_5e0;
      goto LAB_00a6fb40;
    }
    iVar7 = -0x80000000;
    local_8f0 = local_50;
    iStack_8ec = iStack_4c;
    iStack_8e8 = iStack_48;
    FUN_0084ec48(param_2 + 4);
    iVar6 = local_5d4;
    iVar4 = local_5d8;
  }
  else {
    iVar7 = -0x80000000;
    local_8f0 = local_8e0;
    iStack_8ec = iStack_8dc;
    iStack_8e8 = iStack_8d8;
  }
  goto LAB_00a6fb50;
LAB_00a6fae8:
  FUN_018f2d80(piVar3,&DAT_01c245a8);
  local_38 = iVar5 + -1;
  local_40 = 10;
  local_3c = uVar8;
  FUN_014a5cd0(&local_5f0,&local_40);
  iVar7 = -0x80000000;
  local_8f0 = local_5ec;
  iStack_8ec = local_5e8;
  iStack_8e8 = local_5e4;
  iVar6 = local_5dc;
  iVar5 = local_5f0;
  iVar4 = local_5e0;
LAB_00a6fb40:
  FUN_00a57438(&local_8d0);
  FUN_0084ec48(param_2 + 4);
LAB_00a6fb50:
  *param_1 = iVar5;
  param_1[1] = local_8f0;
  param_1[2] = iStack_8ec;
  param_1[3] = iStack_8e8;
  param_1[4] = iVar4;
  param_1[5] = iVar6;
  FUN_01bed4e2(param_1 + 6,auStack_988,0x98);
  param_1[0x2c] = iVar7;
  param_1[0x2d] = local_998;
  param_1[0x2e] = iStack_994;
  param_1[0x2f] = iStack_990;
  uVar2 = 1;
LAB_00a6fb94:
  *(undefined1 *)(param_2 + 3) = uVar2;
  return;
}

