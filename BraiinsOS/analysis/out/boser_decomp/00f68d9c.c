// FUN_00f68d9c @ 00f68d9c size=420 calls_out=6 calls_in=2
// strings: internal error: entered unreachable code

void FUN_00f68d9c(uint *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 auStack_b80 [712];
  uint local_8b8;
  uint local_8b4;
  uint local_8b0;
  uint uStack_8ac;
  uint uStack_8a8;
  uint uStack_8a4;
  undefined1 auStack_8a0 [712];
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
  
  iVar2 = param_2 + 0x2c8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x590)) {
  case 0:
    FUN_01bed4e2(iVar2,param_2,0x2c8);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1f170);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1f170);
  }
  FUN_00f68f9c(&local_8b8,iVar2,param_3);
  if (local_8b8 == 0x1e && local_8b4 == 0) {
    *param_1 = 5;
    param_1[1] = 0;
    uVar1 = 3;
  }
  else {
    local_310 = local_8b0;
    uStack_30c = uStack_8ac;
    uStack_308 = uStack_8a8;
    uStack_304 = uStack_8a4;
    FUN_01bed4e2(auStack_5d8,auStack_8a0,0x2c8);
    FUN_00b9a8cc(iVar2);
    if (local_8b8 == 0x1d && local_8b4 == 0) {
      local_8b4 = 0;
      local_8b8 = 4;
      local_38 = local_310;
      uStack_34 = uStack_30c;
      uStack_30 = uStack_308;
      uStack_2c = uStack_304;
    }
    else {
      FUN_01bed4e2(auStack_b80,auStack_5d8,0x2c8);
      if (local_8b4 != 0 || local_8b4 < (3 < local_8b8)) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1f170);
      }
      local_38 = local_310;
      uStack_34 = uStack_30c;
      uStack_30 = uStack_308;
      uStack_2c = uStack_304;
      FUN_01bed4e2(auStack_300,auStack_5d8,0x2c8);
    }
    *param_1 = local_8b8;
    param_1[1] = local_8b4;
    param_1[2] = local_38;
    param_1[3] = uStack_34;
    param_1[4] = uStack_30;
    param_1[5] = uStack_2c;
    FUN_01bed4e2(param_1 + 6,auStack_300,0x2c8);
    uVar1 = 1;
  }
  *(undefined1 *)(param_2 + 0x590) = uVar1;
  return;
}

