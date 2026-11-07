// FUN_007a6f3c @ 007a6f3c size=516 calls_out=1 calls_in=4
// strings: 

void FUN_007a6f3c(undefined4 *param_1,uint *param_2,int param_3,uint param_4,int param_5,
                 uint param_6,int param_7)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_28;
  
  uVar7 = param_2[5];
  uVar5 = (param_6 - 1) + uVar7;
  if (param_4 <= uVar5) {
LAB_007a70bc:
    param_2[5] = param_4;
    uVar4 = 0;
LAB_007a70f0:
    *param_1 = uVar4;
    return;
  }
  uVar9 = param_2[2];
  local_28 = param_2[7];
LAB_007a6f94:
  uVar3 = *(byte *)(param_3 + uVar5) & 0x3f;
  uVar5 = *param_2 >> uVar3 | param_2[1] << (0x20 - uVar3 & 0xff);
  if (-1 < (int)(uVar3 - 0x20)) {
    uVar5 = param_2[1] >> (uVar3 - 0x20 & 0xff);
  }
  if ((uVar5 & 1) != 0) {
    uVar5 = uVar9;
    if (uVar9 < local_28) {
      uVar5 = local_28;
    }
    if (param_7 != 0) {
      uVar5 = uVar9;
    }
    uVar3 = param_6;
    if (param_6 < uVar5) {
      uVar3 = uVar5;
    }
    uVar6 = uVar5;
    do {
      if (uVar3 == uVar6) {
        uVar5 = local_28;
        uVar3 = uVar9;
        if (param_7 != 0) {
          uVar5 = 0;
        }
        goto LAB_007a7054;
      }
      uVar8 = uVar7 + uVar6;
      if (param_4 <= uVar8) {
        uVar9 = uVar5 + uVar7;
        if (uVar5 + uVar7 < param_4) {
          uVar9 = param_4;
        }
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar9,param_4,&DAT_01d2e38c);
      }
      pcVar1 = (char *)(param_3 + uVar7 + uVar6);
      pcVar2 = (char *)(param_5 + uVar6);
      uVar6 = uVar6 + 1;
    } while (*pcVar2 == *pcVar1);
    uVar7 = (uVar8 - uVar9) + 1;
    uVar5 = 0;
    goto LAB_007a7090;
  }
  uVar7 = uVar7 + param_6;
  uVar5 = 0;
  param_2[5] = uVar7;
  goto joined_r0x007a70a4;
  while( true ) {
    uVar3 = uVar3 - 1;
    if (param_6 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar3,param_6,&DAT_01d2e36c);
    }
    uVar6 = uVar3 + uVar7;
    if (param_4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar6,param_4,&DAT_01d2e37c);
    }
    if (*(char *)(param_5 + uVar3) != *(char *)(param_3 + uVar6)) break;
LAB_007a7054:
    if (uVar3 <= uVar5) {
      param_2[5] = uVar7 + param_6;
      if (param_7 == 0) {
        param_2[7] = 0;
      }
      uVar4 = 1;
      param_1[1] = uVar7;
      param_1[2] = uVar7 + param_6;
      goto LAB_007a70f0;
    }
  }
  uVar7 = param_2[4] + uVar7;
  uVar5 = param_6 - param_2[4];
LAB_007a7090:
  param_2[5] = uVar7;
joined_r0x007a70a4:
  if (param_7 == 0) {
    param_2[7] = uVar5;
    local_28 = uVar5;
  }
  uVar5 = (param_6 - 1) + uVar7;
  if (param_4 <= uVar5) goto LAB_007a70bc;
  goto LAB_007a6f94;
}

