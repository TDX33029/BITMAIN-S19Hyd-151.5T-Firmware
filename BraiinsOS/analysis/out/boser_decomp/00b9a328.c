// FUN_00b9a328 @ 00b9a328 size=688 calls_out=7 calls_in=1
// strings: Bosminer.get_root_hub | internal error: entered unreachable code

void FUN_00b9a328(uint *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined1 auStack_e60 [712];
  uint local_b98;
  uint local_b94;
  uint local_b90;
  uint uStack_b8c;
  uint uStack_b88;
  uint uStack_b84;
  undefined1 auStack_b80 [712];
  uint local_8b8;
  uint local_8b4;
  uint local_8b0;
  uint uStack_8ac;
  uint uStack_8a8;
  uint uStack_8a4;
  undefined4 local_8a0;
  undefined4 uStack_89c;
  undefined4 uStack_898;
  undefined4 uStack_894;
  undefined4 uStack_890;
  undefined4 uStack_88c;
  undefined1 auStack_5d8 [712];
  uint local_310;
  uint uStack_30c;
  uint uStack_308;
  uint uStack_304;
  undefined1 auStack_300 [712];
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x59e)) {
  case 0:
    cVar4 = *(char *)(param_2 + 0x59d);
    uVar2 = *(undefined4 *)(param_2 + 0x598);
    *(undefined1 *)(param_2 + 0x59c) = 1;
    FUN_019cfcf0(&local_8b8);
    *(undefined1 *)(param_2 + 0x59c) = 0;
    if (cVar4 == '\x03') {
      cVar4 = '\x02';
    }
    *(char *)(param_2 + 0x24) = cVar4;
    *(char **)(param_2 + 0x58) = "Bosminer.get_root_hub";
    *(undefined4 *)(param_2 + 0x5c) = 0x15;
    *(undefined1 **)(param_2 + 0x20) = &DAT_80000004;
    *(uint *)(param_2 + 0x60) = local_8b8;
    *(uint *)(param_2 + 100) = local_8b4;
    *(uint *)(param_2 + 0x68) = local_8b0;
    *(uint *)(param_2 + 0x6c) = uStack_8ac;
    *(uint *)(param_2 + 0x70) = uStack_8a8;
    *(uint *)(param_2 + 0x74) = uStack_8a4;
    *(undefined4 *)(param_2 + 0x78) = local_8a0;
    *(undefined4 *)(param_2 + 0x7c) = uStack_89c;
    *(undefined4 *)(param_2 + 0x80) = uStack_898;
    *(undefined4 *)(param_2 + 0x84) = uStack_894;
    *(undefined4 *)(param_2 + 0x88) = uStack_890;
    *(undefined4 *)(param_2 + 0x8c) = uStack_88c;
    *(undefined1 *)(param_2 + 0x590) = 0;
    *(undefined1 *)(param_2 + 0x97) = 0;
    *(undefined4 *)(param_2 + 0x90) = uVar2;
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
switchD_00b9a40c_caseD_3:
      puVar3 = (undefined1 *)(param_2 + 0x590);
      FUN_00b9a97c(&local_8b8,param_2 + 0x2c8,param_3);
      if (local_8b8 == 0x1e && local_8b4 == 0) {
        uVar1 = 3;
        *puVar3 = 3;
        *param_1 = 5;
        param_1[1] = 0;
      }
      else {
        local_310 = local_8b0;
        uStack_30c = uStack_8ac;
        uStack_308 = uStack_8a8;
        uStack_304 = uStack_8a4;
        FUN_01bed4e2(auStack_5d8,&local_8a0,0x2c8);
        FUN_00b9a8cc(param_2 + 0x2c8);
        if (local_8b8 == 0x1d && local_8b4 == 0) {
          local_8b4 = 0;
          local_8b8 = 4;
          local_38 = local_310;
          uStack_34 = uStack_30c;
          uStack_30 = uStack_308;
          uStack_2c = uStack_304;
          *puVar3 = 1;
        }
        else {
          FUN_01bed4e2(auStack_b80,auStack_5d8,0x2c8);
          local_b90 = local_310;
          uStack_b8c = uStack_30c;
          uStack_b88 = uStack_308;
          uStack_b84 = uStack_304;
          local_b94 = local_8b4;
          local_b98 = local_8b8;
          if (local_8b4 != 0 || local_8b4 < (3 < local_8b8)) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1f170);
          }
          local_38 = local_310;
          uStack_34 = uStack_30c;
          uStack_30 = uStack_308;
          uStack_2c = uStack_304;
          FUN_01bed4e2(auStack_300,auStack_5d8,0x2c8);
          *puVar3 = 1;
          FUN_01bed4e2(auStack_e60,auStack_300,0x2c8);
        }
        *(undefined1 *)(param_2 + 0x59c) = 0;
        *param_1 = local_8b8;
        param_1[1] = local_8b4;
        param_1[2] = local_38;
        param_1[3] = uStack_34;
        param_1[4] = uStack_30;
        param_1[5] = uStack_2c;
        FUN_01bed4e2(param_1 + 6,auStack_e60,0x2c8);
        uVar1 = 1;
      }
      *(undefined1 *)(param_2 + 0x59e) = uVar1;
      return;
    }
  }
  FUN_01bed4e2(param_2 + 0x2c8,param_2,0x2c8);
  goto switchD_00b9a40c_caseD_3;
}

