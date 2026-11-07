// FUN_00fe46fc @ 00fe46fc size=624 calls_out=1 calls_in=1
// strings: 

void FUN_00fe46fc(undefined4 *param_1,uint *param_2,int param_3,uint param_4,int param_5,
                 uint param_6,int param_7)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  uint uVar14;
  uint local_28;
  
  uVar12 = param_2[6];
  uVar11 = uVar12 - param_6;
  if (param_4 <= uVar11) {
LAB_00fe48e0:
    param_2[6] = 0;
    *param_1 = 0;
    return;
  }
  uVar14 = param_2[3];
  local_28 = param_2[8];
  uVar6 = param_6;
  if (param_6 < uVar14) {
    uVar6 = uVar14;
  }
LAB_00fe4790:
  uVar3 = *(byte *)(param_3 + uVar11) & 0x3f;
  uVar7 = *param_2 >> uVar3 | param_2[1] << (0x20 - uVar3 & 0xff);
  if (-1 < (int)(uVar3 - 0x20)) {
    uVar7 = param_2[1] >> (uVar3 - 0x20 & 0xff);
  }
  uVar3 = param_6;
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar14;
    if (local_28 < uVar14) {
      uVar7 = local_28;
    }
    if (param_7 != 0) {
      uVar7 = uVar14;
    }
    uVar8 = uVar7;
LAB_00fe47e0:
    if (uVar8 != 0) goto code_r0x00fe47e8;
    uVar3 = uVar14 + uVar11;
    uVar7 = local_28;
    if (param_7 != 0) {
      uVar7 = param_6;
    }
    if (uVar7 <= uVar14) {
      uVar7 = uVar14;
    }
    iVar9 = uVar7 - uVar14;
    iVar5 = uVar6 - uVar14;
    pcVar13 = (char *)(param_5 + uVar14);
    do {
      if (iVar9 == 0) {
        param_2[6] = uVar11;
        if (param_7 == 0) {
          param_2[8] = param_6;
        }
        param_1[1] = uVar11;
        param_1[2] = uVar12;
        *param_1 = 1;
        return;
      }
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar6,param_6,&DAT_018a93bc);
      }
      if (param_4 <= uVar3) {
        uVar12 = uVar14 + uVar11;
        if (uVar14 + uVar11 < param_4) {
          uVar12 = param_4;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar12,param_4,&DAT_018a93cc);
      }
      pcVar1 = (char *)(param_3 + uVar3);
      iVar9 = iVar9 + -1;
      cVar2 = *pcVar13;
      iVar5 = iVar5 + -1;
      uVar3 = uVar3 + 1;
      pcVar13 = pcVar13 + 1;
    } while (cVar2 == *pcVar1);
    uVar12 = uVar12 - param_2[4];
    param_2[6] = uVar12;
    uVar3 = param_2[4];
    goto joined_r0x00fe4834;
  }
  param_2[6] = uVar11;
  uVar12 = uVar11;
  goto joined_r0x00fe4834;
code_r0x00fe47e8:
  uVar4 = uVar8 - 1;
  if (param_6 <= uVar7 - 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar4,param_6,&DAT_018a93dc);
  }
  uVar10 = (uVar11 - 1) + uVar8;
  if (param_4 <= uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar10,param_4,&DAT_018a93ec);
  }
  pcVar13 = (char *)(param_3 + -1 + uVar11 + uVar8);
  pcVar1 = (char *)(param_5 + -1 + uVar8);
  uVar8 = uVar4;
  if (*pcVar1 != *pcVar13) goto code_r0x00fe4814;
  goto LAB_00fe47e0;
code_r0x00fe4814:
  uVar12 = (uVar4 + uVar12) - uVar14;
  param_2[6] = uVar12;
joined_r0x00fe4834:
  if (param_7 == 0) {
    param_2[8] = uVar3;
    local_28 = uVar3;
  }
  uVar11 = uVar12 - param_6;
  if (param_4 <= uVar11) goto LAB_00fe48e0;
  goto LAB_00fe4790;
}

