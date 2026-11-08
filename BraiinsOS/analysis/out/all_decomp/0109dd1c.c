// FUN_0109dd1c @ 0109dd1c size=472 calls_out=5 calls_in=1
// strings: 

void FUN_0109dd1c(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  
  pcVar4 = (char *)(param_2 + 4);
  if (*pcVar4 == '\0') {
    bVar6 = (bool)hasExclusiveAccess(pcVar4);
    if (!bVar6) goto LAB_0109de94;
    *pcVar4 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0109de94:
    FUN_01280da8(pcVar4);
  }
  FUN_0128236c(pcVar4);
  uVar5 = *(uint *)(param_2 + 8);
  FUN_01282570(pcVar4);
  if (*pcVar4 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar6 = (bool)hasExclusiveAccess(pcVar4);
      if (bVar6) {
        *pcVar4 = '\0';
        goto LAB_0109dd98;
      }
    } while (*pcVar4 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar4);
LAB_0109dd98:
  if (uVar5 == 0) {
    return;
  }
  uVar1 = uVar5 & 0xfffffffc;
  switch(uVar5 & 3) {
  case 0:
    iVar2 = *(int *)(uVar1 + 8);
    if ((iVar2 == 0) && (param_1[3] != uVar1)) goto switchD_0109ddb0_caseD_3;
    break;
  case 1:
    iVar2 = *(int *)(uVar1 + 8);
    if ((iVar2 == 0) && (param_1[9] != uVar1)) goto switchD_0109ddb0_caseD_3;
    param_1 = param_1 + 6;
    break;
  case 2:
    iVar2 = *(int *)(uVar1 + 8);
    if ((iVar2 == 0) && (param_1[0xf] != uVar1)) goto switchD_0109ddb0_caseD_3;
    uVar5 = param_1[0x10];
    param_1 = param_1 + 0xc;
    goto joined_r0x0109de30;
  case 3:
switchD_0109ddb0_caseD_3:
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018842bc);
  }
  uVar5 = param_1[4];
joined_r0x0109de30:
  if (uVar5 != uVar1) {
    uVar3 = *param_1;
    bVar6 = uVar3 == 1;
    if (bVar6) {
      uVar3 = param_1[1];
    }
    if (bVar6 && uVar3 == uVar1) {
      uVar3 = *(uint *)(uVar3 + 4);
      *param_1 = 1;
      param_1[1] = uVar3;
      uVar3 = *(uint *)(uVar1 + 4);
    }
    else {
      uVar3 = *(uint *)(uVar1 + 4);
    }
    if (iVar2 == 0) {
      param_1[3] = uVar3;
      *(undefined4 *)(uVar1 + 4) = 0;
    }
    else {
      if (uVar3 == 0) {
        return;
      }
      *(uint *)(iVar2 + 4) = uVar3;
      uVar3 = *(uint *)(uVar1 + 4);
      *(undefined4 *)(uVar1 + 4) = 0;
    }
    if (uVar3 != 0) {
      *(undefined4 *)(uVar3 + 8) = *(undefined4 *)(uVar1 + 8);
      if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_01883dc0);
      }
      *(uint *)(uVar1 + 8) = uVar5;
      param_1[4] = uVar1;
      *(uint *)(uVar5 + 4) = uVar1;
      return;
    }
  }
  return;
}

