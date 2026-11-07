// FUN_00f76948 @ 00f76948 size=340 calls_out=7 calls_in=1
// strings: 

undefined4 FUN_00f76948(int *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint unaff_r8;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar2 = FUN_019ec670(param_2);
  if ((uVar2 & 0xff) == 2) {
    uVar2 = 0;
  }
  else {
    FUN_019edbc4(0);
    if ((uVar2 & 1) != 0) {
      return 2;
    }
    unaff_r8 = (uVar2 & 0xffffff) >> 0x10;
    uVar2 = (uVar2 & 0xffffff) >> 8;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x11)) {
  case 0:
    *(undefined1 *)(param_1 + 4) = 0;
    *param_1 = param_1[2];
    param_1[1] = param_1[3];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d295f0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d295f0);
  case 4:
    goto switchD_00f769a4_caseD_4;
  }
  do {
    FUN_019ebea4(&local_40,*param_1);
    uVar5 = 1;
    *(undefined1 *)(param_1 + 4) = 1;
    DataMemoryBarrier(0xb);
    uVar4 = *(uint *)(*param_1 + 200) & 0xfffffffe;
    if (*(uint *)param_1[1] != uVar4) {
      uVar5 = 0;
      *(uint *)param_1[1] = uVar4;
LAB_00f76a98:
      FUN_019ede44(&local_40);
      uVar2 = 0;
      uVar1 = 1;
      *(undefined1 *)(param_1 + 4) = 0;
LAB_00f76ab8:
      *(undefined1 *)((int)param_1 + 0x11) = uVar1;
      FUN_019edbc4(uVar2,unaff_r8);
      return uVar5;
    }
    if ((*(uint *)(*param_1 + 200) & 1) != 0) goto LAB_00f76a98;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[5] = local_40;
    param_1[6] = iStack_3c;
    param_1[7] = iStack_38;
    param_1[8] = iStack_34;
    param_1[9] = local_30;
    param_1[10] = iStack_2c;
    param_1[0xb] = iStack_28;
    param_1[0xc] = iStack_24;
switchD_00f769a4_caseD_4:
    iVar3 = FUN_019e0cbc(param_1 + 5,param_2);
    if (iVar3 != 0) {
      uVar5 = 2;
      uVar1 = 4;
      goto LAB_00f76ab8;
    }
    FUN_019ede44(param_1 + 5);
    *(undefined1 *)(param_1 + 4) = 0;
  } while( true );
}

