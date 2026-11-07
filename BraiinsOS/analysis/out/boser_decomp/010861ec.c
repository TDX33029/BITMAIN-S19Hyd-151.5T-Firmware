// FUN_010861ec @ 010861ec size=988 calls_out=15 calls_in=2
// strings: autoupgrade | Using autoupgrade default! | boser::system_upgrade::upgrade | boser::system_upgrade::upgrade | Autoupgrade cron entry found! | boser::system_upgrade::upgrade

void FUN_010861ec(int *param_1,int *param_2,undefined4 param_3)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined1 uVar6;
  int iVar7;
  int local_1ac;
  int local_1a8;
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
    iVar3 = *param_2 + 0x18;
    param_2[1] = iVar3;
    *(undefined1 *)(param_2 + 0xe) = 0;
LAB_01086268:
    iVar3 = *(int *)(iVar3 + 4);
    *(undefined1 *)(param_2 + 0xd) = 0;
    iVar3 = iVar3 + 8;
    param_2[2] = iVar3;
LAB_01086280:
    param_2[3] = iVar3;
    *(undefined1 *)(param_2 + 0xc) = 0;
LAB_01086294:
    *(undefined1 *)(param_2 + 0xb) = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 1;
    param_2[10] = 1;
    param_2[4] = iVar3 + 4;
    param_2[5] = 0;
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
      iVar3 = param_2[1];
      goto LAB_01086268;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1f0b0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1f0b0);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0xd]) {
    case '\0':
      iVar3 = param_2[2];
      goto LAB_01086280;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d2b3d0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d2b3d0);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0xc]) {
    case '\0':
      iVar3 = param_2[3];
      goto LAB_01086294;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d2b3e0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d2b3e0);
    }
  }
  bVar2 = FUN_019f9bc4(param_2 + 4,param_3);
  if (bVar2 == 2) {
    *(undefined1 *)(param_2 + 0xc) = 3;
    *(undefined1 *)(param_2 + 0xd) = 3;
    *(undefined1 *)(param_2 + 0xe) = 3;
  }
  else {
    FUN_0193c3cc(param_2 + 4);
    if ((bVar2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b3f0);
    }
    iVar3 = param_2[3];
    *(undefined1 *)(param_2 + 0xc) = 1;
    *(undefined1 *)(param_2 + 0xd) = 1;
    FUN_01959dc4(&local_1a0,iVar3 + 0x18);
    local_194 = local_19c + (int)local_198 * 4;
    local_198 = local_1a0;
    local_1a0 = local_19c;
    FUN_00ded1a0(&local_30,&local_1a0);
    FUN_019f8c54(iVar3 + 4,1);
    *(undefined1 *)(param_2 + 0xe) = 1;
    if (local_30 != -0x80000000) {
      local_1a8 = local_2c;
      local_1ac = local_30;
      local_1a4 = local_28;
      if (local_28 != 0) {
        iVar7 = local_28 * 0xd0;
        iVar3 = local_2c;
        do {
          if ((*(int *)(iVar3 + 0xc4) != -0x80000000) &&
             (FUN_006666fc(&local_1a0,*(undefined4 *)(iVar3 + 200),*(undefined4 *)(iVar3 + 0xcc)),
             pcVar1 = local_19c, pcVar5 = local_1a0, local_1a0 != (char *)0x80000000)) {
            if (local_198 == (char *)0xb) {
              iVar4 = thunk_FUN_01bed842(local_19c,"autoupgrade",0xb);
              FUN_019bb7e0(pcVar5,pcVar1);
              if (iVar4 == 0) {
                if (3 < DAT_01d51b00) {
                  local_194 = (char *)0x1e;
                  local_19c = (char *)0x1e;
                  local_190 = &DAT_01c1de6c;
                  local_198 = "boser::system_upgrade::upgrade";
                  local_1a0 = "boser::system_upgrade::upgrade";
                  FUN_0193b350("Autoupgrade cron entry found!",0x3b,4,&local_1a0);
                }
                FUN_01086750(&local_1a0,iVar3);
                pcVar5 = local_1a0;
                FUN_01bed4e2(auStack_e8,&local_19c,0xb4);
                uVar6 = 1;
                goto LAB_010864ac;
              }
            }
            else {
              FUN_019bb7e0(local_1a0,local_19c);
            }
          }
          iVar3 = iVar3 + 0xd0;
          iVar7 = iVar7 + -0xd0;
        } while (iVar7 != 0);
      }
      pcVar5 = (char *)0x80000000;
      uVar6 = 0;
      if (3 < DAT_01d51b00) {
        local_194 = (char *)0x1e;
        local_19c = (char *)0x1e;
        local_190 = &DAT_01c1de7c;
        local_198 = "boser::system_upgrade::upgrade";
        local_1a0 = "boser::system_upgrade::upgrade";
        FUN_0193b350("Using autoupgrade default!",0x35,4,&local_1a0);
      }
LAB_010864ac:
      FUN_005f9d30(&local_1ac);
      *param_1 = (int)pcVar5;
      FUN_01bed4e2(param_1 + 1,auStack_e8,0xb4);
      *(undefined1 *)(param_1 + 0x2e) = uVar6;
      uVar6 = 1;
      goto LAB_010864d4;
    }
  }
  *param_1 = -0x7fffffff;
  uVar6 = 3;
LAB_010864d4:
  *(undefined1 *)(param_2 + 0xf) = uVar6;
  return;
}

