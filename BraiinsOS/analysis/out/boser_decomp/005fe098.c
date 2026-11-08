// FUN_005fe098 @ 005fe098 size=764 calls_out=14 calls_in=2
// strings: autoupgrade | Using autoupgrade default! | boser::system_upgrade::upgrade | boser::system_upgrade::upgrade | Autoupgrade cron entry found! | boser::system_upgrade::upgrade

void FUN_005fe098(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  char *pcVar7;
  int iVar8;
  bool bVar9;
  undefined8 uVar10;
  int iStack_1ac;
  int iStack_1a8;
  int local_1a4;
  char *local_1a0;
  char *local_19c;
  char *local_198;
  char *local_194;
  undefined *local_190;
  undefined1 auStack_e8 [184];
  int local_30;
  int local_2c;
  int local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0xf]) {
  case '\0':
    iVar4 = *param_2 + 0x18;
    param_2[1] = iVar4;
    *(undefined1 *)(param_2 + 0xe) = 0;
LAB_005fe114:
    iVar4 = *(int *)(iVar4 + 4);
    *(undefined1 *)(param_2 + 0xd) = 0;
    param_2[2] = iVar4 + 8;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1de5c);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1de5c);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0xe]) {
    case '\0':
      iVar4 = param_2[1];
      goto LAB_005fe114;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1f0b0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1f0b0);
    }
  }
  uVar10 = FUN_00617650(param_2 + 2,param_3);
  if ((int)uVar10 == 0) {
    *(undefined1 *)(param_2 + 0xe) = 3;
  }
  else {
    cVar1 = (char)param_2[0xd];
    bVar9 = cVar1 == '\x03';
    if (bVar9) {
      cVar1 = (char)param_2[0xc];
    }
    if (bVar9 && cVar1 == '\x03') {
      FUN_0193c3cc(param_2 + 4);
    }
    FUN_01959dc4(&local_1a0,(int)((ulonglong)uVar10 >> 0x20));
    local_194 = local_19c + (int)local_198 * 4;
    local_198 = local_1a0;
    local_1a0 = local_19c;
    FUN_00ded1a0(&local_30,&local_1a0);
    FUN_019f8c54((int)uVar10,1);
    *(undefined1 *)(param_2 + 0xe) = 1;
    if (local_30 != -0x80000000) {
      iStack_1ac = local_30;
      iStack_1a8 = local_2c;
      local_1a4 = local_28;
      if (local_28 != 0) {
        iVar8 = local_28 * 0xd0;
        iVar4 = local_2c;
        do {
          if ((*(int *)(iVar4 + 0xc4) != -0x80000000) &&
             (FUN_006666fc(&local_1a0,*(undefined4 *)(iVar4 + 200),*(undefined4 *)(iVar4 + 0xcc)),
             pcVar2 = local_19c, pcVar7 = local_1a0, local_1a0 != (char *)0x80000000)) {
            if (local_198 == (char *)0xb) {
              iVar5 = thunk_FUN_01bed842(local_19c,"autoupgrade",0xb);
              FUN_019bb7e0(pcVar7,pcVar2);
              if (iVar5 == 0) {
                if (3 < DAT_01d51b00) {
                  local_194 = (char *)0x1e;
                  local_19c = (char *)0x1e;
                  local_190 = &DAT_01c1de6c;
                  local_198 = "boser::system_upgrade::upgrade";
                  local_1a0 = "boser::system_upgrade::upgrade";
                  FUN_0193b350("Autoupgrade cron entry found!",0x3b,4,&local_1a0);
                }
                FUN_005fd7d0(&local_1a0,iVar4);
                pcVar7 = local_1a0;
                FUN_01bed4e2(auStack_e8,&local_19c,0xb4);
                uVar6 = 1;
                goto LAB_005fe2b0;
              }
            }
            else {
              FUN_019bb7e0(local_1a0,local_19c);
            }
          }
          iVar4 = iVar4 + 0xd0;
          iVar8 = iVar8 + -0xd0;
        } while (iVar8 != 0);
      }
      pcVar7 = (char *)0x80000000;
      uVar6 = 0;
      if (3 < DAT_01d51b00) {
        local_194 = (char *)0x1e;
        local_19c = (char *)0x1e;
        local_190 = &DAT_01c1de7c;
        local_198 = "boser::system_upgrade::upgrade";
        local_1a0 = "boser::system_upgrade::upgrade";
        FUN_0193b350("Using autoupgrade default!",0x35,4,&local_1a0);
      }
LAB_005fe2b0:
      FUN_005f9d30(&iStack_1ac);
      *param_1 = (int)pcVar7;
      FUN_01bed4e2(param_1 + 1,auStack_e8,0xb4);
      uVar3 = 1;
      *(undefined1 *)(param_1 + 0x2e) = uVar6;
      goto LAB_005fe2ec;
    }
  }
  *param_1 = -0x7fffffff;
  uVar3 = 3;
LAB_005fe2ec:
  *(undefined1 *)(param_2 + 0xf) = uVar3;
  return;
}

