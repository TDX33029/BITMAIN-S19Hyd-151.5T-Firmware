// FUN_00d97eb0 @ 00d97eb0 size=532 calls_out=1 calls_in=6
// strings: 

void FUN_00d97eb0(undefined4 *param_1,uint *param_2,int param_3,uint param_4,int param_5,
                 uint param_6,int param_7)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_28;
  
  uVar6 = param_2[5];
  uVar4 = (param_6 - 1) + uVar6;
  if (param_4 <= uVar4) {
LAB_00d98038:
    param_2[5] = param_4;
    *param_1 = 0;
    return;
  }
  uVar8 = param_2[2];
  local_28 = param_2[7];
LAB_00d97f20:
  uVar3 = *(byte *)(param_3 + uVar4) & 0x3f;
  uVar4 = *param_2 >> uVar3 | param_2[1] << (0x20 - uVar3 & 0xff);
  if (-1 < (int)(uVar3 - 0x20)) {
    uVar4 = param_2[1] >> (uVar3 - 0x20 & 0xff);
  }
  if ((uVar4 & 1) != 0) {
    uVar4 = uVar8;
    if (uVar8 < local_28) {
      uVar4 = local_28;
    }
    if (param_7 != 0) {
      uVar4 = uVar8;
    }
    uVar3 = param_6;
    if (param_6 < uVar4) {
      uVar3 = uVar4;
    }
    uVar5 = uVar4;
LAB_00d97f78:
    if (uVar3 != uVar5) goto code_r0x00d97f80;
    uVar4 = local_28;
    uVar3 = uVar8;
    if (param_7 != 0) {
      uVar4 = 0;
    }
    do {
      if (uVar3 <= uVar4) {
        param_2[5] = uVar6 + param_6;
        if (param_7 == 0) {
          param_2[7] = 0;
        }
        param_1[1] = uVar6;
        param_1[2] = uVar6 + param_6;
        *param_1 = 1;
        return;
      }
      uVar3 = uVar3 - 1;
      if (param_6 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar3,param_6,&DAT_018aeb10);
      }
      uVar5 = uVar3 + uVar6;
      if (param_4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar5,param_4,&DAT_018aeb20);
      }
    } while (*(char *)(param_5 + uVar3) == *(char *)(param_3 + uVar5));
    uVar6 = param_2[4] + uVar6;
    uVar4 = param_6 - param_2[4];
    goto LAB_00d9801c;
  }
  uVar6 = uVar6 + param_6;
  uVar4 = 0;
  param_2[5] = uVar6;
  goto joined_r0x00d98030;
code_r0x00d97f80:
  uVar7 = uVar6 + uVar5;
  if (param_4 <= uVar7) {
    uVar8 = uVar4 + uVar6;
    if (uVar4 + uVar6 < param_4) {
      uVar8 = param_4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar8,param_4,&DAT_018aeb30);
  }
  pcVar1 = (char *)(param_3 + uVar6 + uVar5);
  pcVar2 = (char *)(param_5 + uVar5);
  uVar5 = uVar5 + 1;
  if (*pcVar2 != *pcVar1) goto code_r0x00d97fa0;
  goto LAB_00d97f78;
code_r0x00d97fa0:
  uVar6 = (uVar7 - uVar8) + 1;
  uVar4 = 0;
LAB_00d9801c:
  param_2[5] = uVar6;
joined_r0x00d98030:
  if (param_7 == 0) {
    param_2[7] = uVar4;
    local_28 = uVar4;
  }
  uVar4 = (param_6 - 1) + uVar6;
  if (param_4 <= uVar4) goto LAB_00d98038;
  goto LAB_00d97f20;
}

