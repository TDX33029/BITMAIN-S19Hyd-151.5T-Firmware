// FUN_0140d6f0 @ 0140d6f0 size=596 calls_out=1 calls_in=4
// strings: 

void FUN_0140d6f0(undefined4 *param_1,uint *param_2,int param_3,uint param_4,int param_5,
                 uint param_6,int param_7)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  uint local_28;
  
  uVar13 = param_2[6];
  uVar12 = uVar13 - param_6;
  if (param_4 <= uVar12) {
LAB_0140d8c0:
    uVar6 = 0;
    param_2[6] = 0;
LAB_0140d8ec:
    *param_1 = uVar6;
    return;
  }
  uVar15 = param_2[3];
  local_28 = param_2[8];
  uVar7 = param_6;
  if (param_6 < uVar15) {
    uVar7 = uVar15;
  }
LAB_0140d76c:
  uVar3 = *(byte *)(param_3 + uVar12) & 0x3f;
  uVar8 = *param_2 >> uVar3 | param_2[1] << (0x20 - uVar3 & 0xff);
  if (-1 < (int)(uVar3 - 0x20)) {
    uVar8 = param_2[1] >> (uVar3 - 0x20 & 0xff);
  }
  uVar3 = param_6;
  if ((uVar8 & 1) == 0) {
    param_2[6] = uVar12;
    uVar13 = uVar12;
  }
  else {
    uVar8 = uVar15;
    if (local_28 < uVar15) {
      uVar8 = local_28;
    }
    if (param_7 != 0) {
      uVar8 = uVar15;
    }
    uVar9 = uVar8;
    do {
      if (uVar9 == 0) {
        uVar3 = uVar15 + uVar12;
        uVar8 = local_28;
        if (param_7 != 0) {
          uVar8 = param_6;
        }
        if (uVar8 <= uVar15) {
          uVar8 = uVar15;
        }
        iVar10 = uVar8 - uVar15;
        iVar5 = uVar7 - uVar15;
        pcVar14 = (char *)(param_5 + uVar15);
        goto LAB_0140d854;
      }
      uVar4 = uVar9 - 1;
      if (param_6 <= uVar8 - 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar4,param_6,&DAT_01d272a4);
      }
      uVar11 = (uVar12 - 1) + uVar9;
      if (param_4 <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar11,param_4,&DAT_01d272b4);
      }
      pcVar14 = (char *)(param_3 + -1 + uVar12 + uVar9);
      pcVar1 = (char *)(param_5 + -1 + uVar9);
      uVar9 = uVar4;
    } while (*pcVar1 == *pcVar14);
    uVar13 = (uVar4 + uVar13) - uVar15;
    param_2[6] = uVar13;
  }
  goto joined_r0x0140d8a8;
  while( true ) {
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar7,param_6,&DAT_01d27284);
    }
    if (param_4 <= uVar3) {
      uVar13 = uVar15 + uVar12;
      if (uVar15 + uVar12 < param_4) {
        uVar13 = param_4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar13,param_4,&DAT_01d27294);
    }
    pcVar1 = (char *)(param_3 + uVar3);
    iVar10 = iVar10 + -1;
    cVar2 = *pcVar14;
    iVar5 = iVar5 + -1;
    uVar3 = uVar3 + 1;
    pcVar14 = pcVar14 + 1;
    if (cVar2 != *pcVar1) break;
LAB_0140d854:
    if (iVar10 == 0) {
      param_2[6] = uVar12;
      uVar6 = 1;
      if (param_7 == 0) {
        param_2[8] = param_6;
      }
      param_1[1] = uVar12;
      param_1[2] = uVar13;
      goto LAB_0140d8ec;
    }
  }
  uVar13 = uVar13 - param_2[4];
  param_2[6] = uVar13;
  uVar3 = param_2[4];
joined_r0x0140d8a8:
  if (param_7 == 0) {
    param_2[8] = uVar3;
    local_28 = uVar3;
  }
  uVar12 = uVar13 - param_6;
  if (param_4 <= uVar12) goto LAB_0140d8c0;
  goto LAB_0140d76c;
}

