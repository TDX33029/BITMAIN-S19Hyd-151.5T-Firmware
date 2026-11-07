// FUN_00f7f580 @ 00f7f580 size=356 calls_out=6 calls_in=1
// strings: 

undefined4 FUN_00f7f580(undefined4 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint unaff_r8;
  int local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  uint local_24;
  
  uVar2 = FUN_019ec670(param_2);
  if ((uVar2 & 0xff) == 2) {
    uVar2 = 0;
  }
  else {
    FUN_019edbc4(0);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    unaff_r8 = (uVar2 & 0xffffff) >> 0x10;
    uVar2 = (uVar2 & 0xffffff) >> 8;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 5)) {
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c19e44);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c19e44);
  case 3:
    goto switchD_00f7f5dc_caseD_3;
  case 4:
    goto switchD_00f7f5dc_caseD_4;
  }
  do {
    *(undefined1 *)(param_1 + 1) = 0;
switchD_00f7f5dc_caseD_3:
    iVar3 = *(int *)*param_1;
    if (*(int *)(iVar3 + 0xa0) == 0) {
LAB_00f7f708:
      uVar2 = 0;
      uVar1 = 1;
      uVar4 = 0;
      goto LAB_00f7f710;
    }
    local_3c = *(uint *)(iVar3 + 0x88);
    DataMemoryBarrier(0xb);
    *(undefined1 *)(param_1 + 1) = 1;
    local_40 = iVar3 + 0x88;
    local_3c = local_3c >> 2;
    local_28 = 0;
    local_30 = 0;
    local_34 = 0;
    local_38 = 0;
    local_24 = local_24 & 0xffffff00;
    if (*(int *)(*(int *)*param_1 + 0xa0) == 0) {
      FUN_019ede44(&local_40);
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_00f7f708;
    }
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[2] = local_40;
    param_1[3] = local_3c;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = uStack_2c;
    param_1[8] = 0;
    param_1[9] = local_24;
switchD_00f7f5dc_caseD_4:
    iVar3 = FUN_019e0cbc(param_1 + 2,param_2);
    if (iVar3 != 0) {
      uVar4 = 1;
      uVar1 = 4;
LAB_00f7f710:
      *(undefined1 *)((int)param_1 + 5) = uVar1;
      FUN_019edbc4(uVar2,unaff_r8);
      return uVar4;
    }
    FUN_019ede44(param_1 + 2);
  } while( true );
}

