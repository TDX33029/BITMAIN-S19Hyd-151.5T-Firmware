// FUN_012c66e0 @ 012c66e0 size=388 calls_out=4 calls_in=1
// strings: 

void FUN_012c66e0(uint *param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined1 extraout_r2;
  undefined1 uVar4;
  undefined4 extraout_r2_00;
  uint unaff_r4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined1 local_3d;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  
  iVar9 = *param_2;
  uVar6 = param_2[1];
  uVar1 = param_2[2];
  uVar8 = param_2[3];
  iVar7 = param_2[4];
  iVar5 = param_2[5];
  local_3d = 0;
  do {
    uVar4 = (undefined1)param_3;
    if ((uVar1 != uVar8) || (1 < uVar6)) {
      local_34 = uVar8;
      if (uVar8 <= uVar1) {
        local_34 = 0;
        local_3c = iVar9;
        local_38 = uVar6;
        local_30 = iVar7;
        FUN_019ba410(&local_2c,iVar5,&local_3c);
        param_2[2] = 0;
        param_2[3] = local_34;
        param_2[4] = local_30;
        if ((char)local_2c != '\x04') {
          uVar1 = local_2c & 0xff;
          uVar2 = local_28;
          unaff_r4 = local_2c;
          iVar7 = local_30;
          uVar8 = local_34;
          goto LAB_012c67b8;
        }
        uVar1 = 0;
        uVar4 = extraout_r2;
      }
      uVar2 = (uint)(local_34 != uVar1);
      if (local_34 != uVar1) {
        uVar4 = *(undefined1 *)(iVar9 + uVar1);
      }
      if (local_34 != uVar1) {
        local_3d = uVar4;
      }
      uVar8 = uVar1 + uVar2;
      if (local_34 < uVar1 + uVar2) {
        uVar8 = local_34;
      }
      param_2[2] = uVar8;
switchD_012c67c0_caseD_4:
      if (uVar2 == 0) {
        uVar4 = 5;
      }
      else {
        *(undefined1 *)((int)param_1 + 1) = local_3d;
        uVar4 = 4;
      }
      *(undefined1 *)param_1 = uVar4;
      return;
    }
    param_2[2] = 0;
    param_2[3] = 0;
    uVar2 = FUN_01bf0424(iVar5,&local_3d,1);
    if (uVar2 == 0xffffffff) {
      puVar3 = (uint *)FUN_01be3244();
      uVar2 = *puVar3;
      uVar1 = 0;
    }
    else {
      uVar1 = 4;
    }
    unaff_r4 = unaff_r4 & 0xffffff00 | uVar1;
    uVar8 = 0;
LAB_012c67b8:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar1) {
    case 0:
      if (uVar2 != 4) {
LAB_012c6810:
        *param_1 = unaff_r4;
        param_1[1] = uVar2;
        return;
      }
      break;
    case 1:
      if ((unaff_r4 & 0xff00) != 0x2300) goto LAB_012c6810;
      break;
    default:
      if (*(char *)(uVar2 + 8) != '#') goto LAB_012c6810;
      break;
    case 4:
      goto switchD_012c67c0_caseD_4;
    }
    FUN_0069d8a4(unaff_r4);
    uVar1 = 0;
    param_3 = extraout_r2_00;
  } while( true );
}

