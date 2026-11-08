// FUN_00a49bec @ 00a49bec size=348 calls_out=4 calls_in=3
// strings: failed to write frame to transportii

void FUN_00a49bec(uint *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint unaff_r8;
  uint uVar5;
  uint *local_230 [128];
  uint local_30;
  uint local_2c;
  uint local_28;
  
  while( true ) {
    uVar5 = *(uint *)(param_2 + 0x38);
    if (uVar5 == 0) {
      uVar2 = 4;
      goto LAB_00a49cf0;
    }
    iVar3 = 0;
    do {
      local_230[iVar3 * 2] = (uint *)0x1;
      iVar4 = iVar3 + 1;
      local_230[iVar3 * 2 + 1] = (uint *)0x0;
      iVar3 = iVar4;
    } while (iVar4 != 0x40);
    local_230[0] = *(uint **)(param_2 + 0x34);
    local_230[1] = (uint *)uVar5;
    FUN_019dd050(&local_30,param_2,param_3,local_230,1);
    uVar1 = local_2c;
    if ((char)local_30 == '\x05') break;
    if ((local_30 & 0xff) == 4) {
      local_28 = local_2c;
      if (uVar5 < local_2c) {
        local_230[2] = &local_30;
        local_230[3] = (uint *)&LAB_01a6a304;
        local_230[1] = (uint *)&LAB_01a6a304;
        local_230[0] = &local_28;
        local_30 = uVar5;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_005ac267,local_230,&DAT_01d2bbe0);
      }
      FUN_01283ef4(param_2 + 0x34,local_2c);
      uVar5 = unaff_r8 << 8 | 4;
    }
    else {
      if ((local_30 & 0xff) == 5) break;
      unaff_r8 = local_30 >> 8;
      uVar5 = local_30;
    }
    if ((uVar5 & 0xff) != 4) {
      *param_1 = uVar5;
      param_1[1] = uVar1;
      return;
    }
    if (uVar1 == 0) {
      FUN_019a18a8(param_1,0x17,"failed to write frame to transportii",0x22);
      return;
    }
  }
  uVar2 = 5;
LAB_00a49cf0:
  *(undefined1 *)param_1 = uVar2;
  return;
}

