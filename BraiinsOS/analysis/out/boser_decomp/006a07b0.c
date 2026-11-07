// FUN_006a07b0 @ 006a07b0 size=656 calls_out=3 calls_in=1
// strings: internal error: entered unreachable code

void FUN_006a07b0(uint *param_1,uint *param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,byte param_7)

{
  byte bVar1;
  undefined1 uVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  code *pcVar8;
  int extraout_r1;
  int extraout_r1_00;
  int iVar9;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  uint local_48;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  
  local_48 = (uint)(byte)param_2[2];
  pcVar8 = *(code **)(param_5 + 0xc);
  pcVar10 = *(code **)(param_5 + 0x10);
  pcVar3 = *(code **)(param_5 + 0x18);
  uVar6 = (uint)(byte)*param_2;
LAB_006a07f8:
  do {
    uVar12 = uVar6 & 0xff;
    uVar4 = uVar6 - 4;
    if (uVar12 < 4) {
      uVar4 = 4;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar4 & 0xff) {
    case 0:
      FUN_012c2334(param_6);
      if (!(extraout_r1 == 0 && (param_7 & 1) == 0)) {
        (*pcVar10)(&local_30,param_4,param_6,param_3);
        uVar11 = local_2c;
        uVar4 = local_30;
        if ((local_30 & 0xff) == 4) {
          if (local_30._1_1_ == '\x01') {
            uVar4 = 5;
            break;
          }
        }
        else {
          if ((param_7 & 1) == 0) {
            if (uVar12 < 4) {
              FUN_0069d8a4(uVar6,param_2[1]);
            }
            goto LAB_006a0924;
          }
          FUN_0069d8a4(local_30 & 0xff,local_2c);
        }
LAB_006a0a14:
        if (*(int *)(param_3 + 8) != *(int *)(param_3 + 4)) {
          uVar2 = 5;
          goto LAB_006a0a24;
        }
        goto switchD_006a0814_caseD_2;
      }
      local_48 = 0;
      uVar4 = 5;
      *(byte *)(param_2 + 2) = 0;
      param_7 = 0;
      break;
    case 1:
      (*pcVar3)(&local_38,param_4,param_3);
      uVar11 = local_34;
      uVar4 = local_38;
      if ((char)local_38 != '\x04') {
        if (uVar12 < 4) {
          FUN_0069d8a4(uVar6,param_2[1]);
        }
LAB_006a0924:
        uVar6 = uVar4;
        iVar5 = *(int *)(param_3 + 8);
        *param_2 = uVar6;
        param_2[1] = uVar11;
        if (iVar5 != 0) goto switchD_006a0814_caseD_2;
        goto LAB_006a07f8;
      }
      uVar4 = local_38 >> 8 & 0xff;
      if ((uVar4 & local_48) == 0) {
        uVar4 = uVar4 + 5;
      }
      else {
        (*pcVar8)(&local_30,param_4);
        uVar11 = local_2c;
        uVar4 = local_30;
        if ((char)local_30 != '\x04') {
          if (uVar12 < 4) {
            FUN_0069d8a4(uVar6,param_2[1]);
          }
          goto LAB_006a0924;
        }
        uVar4 = 7;
        param_7 = 1;
      }
      break;
    case 2:
      goto switchD_006a0814_caseD_2;
    case 3:
      FUN_012c2334(param_6);
      uVar4 = 6;
      bVar1 = extraout_r1_00 != 0 & param_7;
      if (extraout_r1_00 != 0) {
        uVar4 = 4;
        param_7 = bVar1;
      }
      else {
        bVar7 = param_7 ^ 1;
        param_7 = bVar1;
        if ((bVar7 & 1) == 0) goto LAB_006a0a14;
      }
      break;
    case 4:
      uVar6 = *param_2;
      uVar4 = param_2[1];
      *param_2 = 6;
      param_2[1] = 0;
      if ((uVar6 & 0xfc) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c05b48);
      }
      *param_1 = uVar6;
      param_1[1] = uVar4;
      return;
    }
    if (uVar12 < 4) {
      FUN_0069d8a4(uVar6,param_2[1]);
    }
    iVar5 = *(int *)(param_3 + 4);
    iVar9 = *(int *)(param_3 + 8);
    *(byte *)param_2 = (byte)uVar4;
    uVar6 = uVar4;
    if (iVar9 == iVar5) {
switchD_006a0814_caseD_2:
      uVar2 = 4;
LAB_006a0a24:
      *(undefined1 *)param_1 = uVar2;
      return;
    }
  } while( true );
}

