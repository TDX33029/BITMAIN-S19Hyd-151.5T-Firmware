// FUN_013dff54 @ 013dff54 size=612 calls_out=5 calls_in=1
// strings: 

void FUN_013dff54(uint *param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  char cVar12;
  
  uVar7 = param_1[2];
  if (uVar7 == 0) {
    if (*param_1 == 0) {
      FUN_014017b4(param_1);
    }
    *(undefined1 *)(param_1 + 3) = 1;
    param_1[2] = 1;
    *(undefined2 *)param_1[1] = 0xff00;
    return;
  }
  pcVar1 = (char *)param_1[1];
  cVar12 = *pcVar1;
  if (cVar12 == '\0') {
    uVar9 = 1;
    uVar3 = uVar7;
    if (uVar7 == 1) goto LAB_013e00a8;
  }
  else {
    if (uVar7 == *param_1) {
      FUN_014017b4(param_1);
      pcVar1 = (char *)param_1[1];
    }
    param_1[2] = uVar7 + 1;
    pcVar1[uVar7 * 2] = '\0';
    (pcVar1 + uVar7 * 2)[1] = cVar12 + -1;
    uVar3 = uVar7 + 1;
    if (uVar7 == 1) {
      uVar9 = 2;
      goto LAB_013e00a8;
    }
  }
  uVar6 = 0;
  do {
    uVar8 = uVar3 + uVar6;
    if (uVar8 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar6,uVar8,&DAT_0189df70);
    }
    uVar4 = (byte)pcVar1[uVar6 * 2 + 1] + 1;
    if ((uVar4 & 0xffffff00) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_0189dfe0);
    }
    uVar9 = uVar6 + 1;
    if (uVar8 <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar9,uVar8,&DAT_0189df80);
    }
    if ((byte)pcVar1[uVar6 * 2 + 2] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_0189dfd0);
    }
    uVar2 = (byte)pcVar1[uVar6 * 2 + 2] - 1;
    uVar5 = uVar4 & 0xff;
    uVar11 = uVar2 & 0xff;
    cVar12 = (char)uVar2;
    cVar10 = cVar12;
    if (uVar5 < uVar11) {
      cVar10 = (char)uVar4;
    }
    if (uVar5 >= uVar11 && uVar5 != uVar11) {
      cVar12 = (char)uVar4;
    }
    if (uVar8 == *param_1) {
      FUN_014017b4(param_1);
      pcVar1 = (char *)param_1[1];
    }
    param_1[2] = uVar8 + 1;
    pcVar1[uVar6 * 2 + uVar3 * 2] = cVar10;
    (pcVar1 + uVar6 * 2 + uVar3 * 2)[1] = cVar12;
    uVar6 = uVar9;
  } while (uVar7 - 1 != uVar9);
  uVar9 = uVar3 + uVar9;
LAB_013e00a8:
  uVar3 = uVar7 - 1;
  if (uVar9 <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar3,uVar9,&DAT_0189df60);
  }
  cVar12 = pcVar1[uVar3 * 2 + 1];
  if (cVar12 == -1) {
    uVar3 = uVar9;
  }
  else {
    if (uVar9 == *param_1) {
      FUN_014017b4(param_1);
    }
    uVar3 = uVar9 + 1;
    param_1[2] = uVar3;
    pcVar1 = (char *)(param_1[1] + uVar9 * 2);
    *pcVar1 = cVar12 + '\x01';
    pcVar1[1] = -1;
  }
  if (uVar3 < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar7,uVar3,&DAT_018af198);
  }
  param_1[2] = 0;
  if (uVar3 != uVar7) {
    FUN_016dd52c(param_1[1],param_1[1] + uVar7 * 2,(uVar3 - uVar7) * 2);
    param_1[2] = uVar3 - uVar7;
  }
  return;
}

