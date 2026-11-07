// FUN_00a42464 @ 00a42464 size=324 calls_out=4 calls_in=0
// strings: 

void FUN_00a42464(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_130;
  int local_12c;
  undefined1 auStack_104 [60];
  uint local_c8;
  int local_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_68;
  int local_64;
  int local_60;
  
  iVar2 = *param_2;
  if ((char)param_2[0x1c] != '\0') {
    FUN_01a56a10(&local_68,param_2);
    if (iVar2 == 2) {
      iVar1 = 0x10;
    }
    else if ((iVar2 != 1) || (iVar1 = 8, 1 < (uint)param_2[0x17])) goto LAB_00a424f4;
    FUN_01a4c14c(&local_c8,*(undefined4 *)((int)param_2 + iVar1 + 0x14),
                 *(undefined4 *)((int)param_2 + iVar1 + 0x18),&DAT_01c0e844,1);
    if (local_c8 != 2) {
      local_130 = local_c4;
      local_12c = iStack_c0;
      if ((local_c8 & 1) == 0) {
        local_12c = local_60;
        local_130 = local_64;
        if (local_68 == 2) goto LAB_00a424f4;
      }
      else {
        local_68 = 1;
      }
      param_1[1] = local_130;
      param_1[2] = local_12c;
      param_1[3] = iStack_bc;
      param_1[4] = iStack_b8;
      param_1[5] = iStack_b4;
      param_1[6] = local_b0;
      param_1[7] = iStack_ac;
      param_1[8] = iStack_a8;
      param_1[9] = iStack_a4;
      param_1[10] = iStack_a0;
      param_1[0xb] = iStack_9c;
      *param_1 = local_68;
      if (iVar2 != 1) {
        FUN_00b383b0(param_2);
        return;
      }
      if (param_2[0x17] == 6) {
        FUN_01272c30();
        return;
      }
      iVar2 = 6;
      if (1 < (uint)param_2[0x17]) {
        iVar2 = param_2[0x17] - 2;
      }
      switch(iVar2) {
      case 0:
        FUN_00b3846c();
        return;
      case 1:
      case 2:
        goto LAB_01233318;
      case 3:
        iVar2 = param_2[2];
        if ((iVar2 != -0x7ffffffd) && (-1 < iVar2)) {
          FUN_019bb7e0(iVar2,param_2[3]);
        }
        FUN_00a25e80(param_2 + 5);
        return;
      case 4:
        FUN_01272c30();
        return;
      case 5:
        FUN_00b384a0();
        return;
      default:
        FUN_00b38440();
        return;
      }
    }
  }
LAB_00a424f4:
  FUN_01a56a10(auStack_104,param_2);
                    /* WARNING: Could not recover jumptable at 0x00a42508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_00a4250c + *(int *)(&LAB_00a4250c + iVar2 * 4)))();
  return;
LAB_01233318:
  iVar2 = param_2[10];
  if ((iVar2 != -0x7ffffffd) && (-1 < iVar2)) {
    FUN_019bb7e0(iVar2,param_2[0xb]);
  }
  FUN_00a25e80(param_2 + 2);
  return;
}

