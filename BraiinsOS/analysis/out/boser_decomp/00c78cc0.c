// FUN_00c78cc0 @ 00c78cc0 size=648 calls_out=7 calls_in=1
// strings: Bosminer.get_root_hub | internal error: entered unreachable code

void FUN_00c78cc0(uint *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined1 auStack_ba8 [712];
  uint local_8e0;
  uint uStack_8dc;
  uint uStack_8d8;
  uint uStack_8d4;
  uint local_8d0;
  uint local_8cc;
  uint local_8c8;
  uint uStack_8c4;
  uint uStack_8c0;
  uint uStack_8bc;
  undefined1 auStack_8b8 [712];
  uint local_5f0;
  uint local_5ec;
  uint local_5e8;
  uint uStack_5e4;
  uint uStack_5e0;
  uint uStack_5dc;
  undefined4 local_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined1 auStack_310 [712];
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x59e)) {
  case 0:
    cVar3 = *(char *)(param_2 + 0x59d);
    uVar1 = *(undefined4 *)(param_2 + 0x598);
    *(undefined1 *)(param_2 + 0x59c) = 1;
    FUN_019cfcf0(&local_5f0);
    *(undefined1 *)(param_2 + 0x59c) = 0;
    if (cVar3 == '\x03') {
      cVar3 = '\x02';
    }
    *(char *)(param_2 + 0x24) = cVar3;
    *(char **)(param_2 + 0x58) = "Bosminer.get_root_hub";
    *(undefined4 *)(param_2 + 0x5c) = 0x15;
    *(undefined1 **)(param_2 + 0x20) = &DAT_80000004;
    *(uint *)(param_2 + 0x60) = local_5f0;
    *(uint *)(param_2 + 100) = local_5ec;
    *(uint *)(param_2 + 0x68) = local_5e8;
    *(uint *)(param_2 + 0x6c) = uStack_5e4;
    *(uint *)(param_2 + 0x70) = uStack_5e0;
    *(uint *)(param_2 + 0x74) = uStack_5dc;
    *(undefined4 *)(param_2 + 0x78) = local_5d8;
    *(undefined4 *)(param_2 + 0x7c) = uStack_5d4;
    *(undefined4 *)(param_2 + 0x80) = uStack_5d0;
    *(undefined4 *)(param_2 + 0x84) = uStack_5cc;
    *(undefined4 *)(param_2 + 0x88) = uStack_5c8;
    *(undefined4 *)(param_2 + 0x8c) = uStack_5c4;
    *(undefined1 *)(param_2 + 0x590) = 0;
    *(undefined1 *)(param_2 + 0x97) = 0;
    *(undefined4 *)(param_2 + 0x90) = uVar1;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c19d6c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c19d6c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x590)) {
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1f170);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1f170);
    case 3:
switchD_00c78da4_caseD_3:
      FUN_00c4306c(&local_5f0,param_2 + 0x2c8,param_3);
      if (local_5f0 == 0x1e && local_5ec == 0) {
        uVar2 = 3;
        *(undefined1 *)(param_2 + 0x590) = 3;
        *param_1 = 5;
        param_1[1] = 0;
      }
      else {
        local_48 = local_5e8;
        uStack_44 = uStack_5e4;
        uStack_40 = uStack_5e0;
        uStack_3c = uStack_5dc;
        FUN_01bed4e2(auStack_310,&local_5d8,0x2c8);
        FUN_00b9a8cc(param_2 + 0x2c8);
        if (local_5f0 == 0x1d && local_5ec == 0) {
          local_5ec = 0;
          local_5f0 = 4;
          local_38 = local_48;
          uStack_34 = uStack_44;
          uStack_30 = uStack_40;
          uStack_2c = uStack_3c;
        }
        else {
          FUN_01bed4e2(auStack_8b8,auStack_310,0x2c8);
          local_8c8 = local_48;
          uStack_8c4 = uStack_44;
          uStack_8c0 = uStack_40;
          uStack_8bc = uStack_3c;
          local_8cc = local_5ec;
          local_8d0 = local_5f0;
          if (local_5ec != 0 || local_5ec < (3 < local_5f0)) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1f170);
          }
          local_38 = local_48;
          uStack_34 = uStack_44;
          uStack_30 = uStack_40;
          uStack_2c = uStack_3c;
          FUN_01bed4e2(auStack_ba8,auStack_310,0x2c8);
        }
        uVar2 = 1;
        *(undefined1 *)(param_2 + 0x590) = 1;
        local_8e0 = local_38;
        uStack_8dc = uStack_34;
        uStack_8d8 = uStack_30;
        uStack_8d4 = uStack_2c;
        *(undefined1 *)(param_2 + 0x59c) = 0;
        *param_1 = local_5f0;
        param_1[1] = local_5ec;
        param_1[2] = local_38;
        param_1[3] = uStack_34;
        param_1[4] = uStack_30;
        param_1[5] = uStack_2c;
        FUN_01bed4e2(param_1 + 6,auStack_ba8,0x2c8);
      }
      *(undefined1 *)(param_2 + 0x59e) = uVar2;
      return;
    }
  }
  FUN_01bed4e2(param_2 + 0x2c8,param_2,0x2c8);
  goto switchD_00c78da4_caseD_3;
}

