// FUN_006a0a74 @ 006a0a74 size=576 calls_out=8 calls_in=1
// strings: internal error: entered unreachable code

void FUN_006a0a74(uint *param_1,uint *param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int extraout_r1;
  int iVar5;
  int extraout_r1_00;
  int extraout_r1_01;
  uint uVar6;
  uint uVar7;
  undefined4 local_30;
  uint local_2c;
  
  uVar4 = (uint)(byte)*param_2;
  do {
    uVar6 = uVar4 & 0xff;
    uVar2 = uVar4 - 4;
    if (uVar6 < 4) {
      uVar2 = 4;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar2 & 0xff) {
    case 0:
      if (param_5 == 0) {
        uVar2 = 5;
        if (param_2[1] != 0) goto LAB_006a0be8;
        FUN_012c38d0(param_3);
        if (extraout_r1_01 != 0) goto switchD_006a0ab0_caseD_3;
      }
      else {
        FUN_012c2334(param_5);
        if (extraout_r1 == 0) {
          uVar2 = 6;
          goto LAB_006a0be8;
        }
        FUN_012c34c0(&local_30,param_4,param_5,param_3);
        uVar7 = local_2c;
        uVar2 = local_30;
        if ((char)local_30 != '\x04') {
          if (uVar6 < 4) {
            FUN_0069d8a4(uVar4,param_2[1]);
          }
          goto LAB_006a0bb4;
        }
        FUN_012c236c(param_5);
        param_2[1] = param_2[1] + extraout_r1_00;
      }
LAB_006a0c88:
      if (*(int *)(param_3 + 8) != *(int *)(param_3 + 4)) {
        uVar1 = 5;
        goto LAB_006a0c98;
      }
      goto switchD_006a0ab0_caseD_3;
    case 1:
      FUN_012c31f0(&local_30,param_4,param_3);
      uVar7 = local_2c;
      uVar2 = local_30;
      if ((char)local_30 != '\x04') {
        if (uVar6 < 4) {
          FUN_0069d8a4(uVar4,param_2[1]);
        }
        goto LAB_006a0bb4;
      }
      if (local_30._1_1_ != '\0') {
        if (uVar6 < 4) {
          FUN_0069d8a4(uVar4,param_2[1]);
        }
        param_2[1] = 0;
        *(byte *)param_2 = 4;
        goto LAB_006a0c88;
      }
      uVar2 = 5;
LAB_006a0be8:
      if (uVar6 < 4) {
        FUN_0069d8a4(uVar4,param_2[1]);
      }
      iVar3 = *(int *)(param_3 + 4);
      iVar5 = *(int *)(param_3 + 8);
      *(byte *)param_2 = (byte)uVar2;
      uVar4 = uVar2;
      if (iVar5 == iVar3) {
switchD_006a0ab0_caseD_3:
        uVar1 = 4;
LAB_006a0c98:
        *(undefined1 *)param_1 = uVar1;
        return;
      }
      break;
    case 2:
      FUN_012c36a8(&local_30,param_4,param_3);
      uVar7 = local_2c;
      uVar2 = local_30;
      if ((char)local_30 == '\x04') {
        uVar2 = local_30 >> 8 & 0xff | 6;
        goto LAB_006a0be8;
      }
      if (uVar6 < 4) {
        FUN_0069d8a4(uVar4,param_2[1]);
      }
LAB_006a0bb4:
      iVar3 = *(int *)(param_3 + 8);
      *param_2 = uVar2;
      param_2[1] = uVar7;
      if (iVar3 != 0) goto switchD_006a0ab0_caseD_3;
      uVar4 = uVar2;
      break;
    case 3:
      goto switchD_006a0ab0_caseD_3;
    case 4:
      uVar4 = *param_2;
      uVar2 = param_2[1];
      *param_2 = 7;
      param_2[1] = 0;
      if ((uVar4 & 0xfc) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c05b58);
      }
      *param_1 = uVar4;
      param_1[1] = uVar2;
      return;
    }
  } while( true );
}

