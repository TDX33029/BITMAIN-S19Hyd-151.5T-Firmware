// FUN_01ac9018 @ 01ac9018 size=460 calls_out=5 calls_in=6
// strings: 

undefined4 FUN_01ac9018(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte local_34 [8];
  uint local_2c;
  uint local_28;
  uint local_24;
  
  if ((char)param_1[0xd] == '\0') {
    return 1;
  }
  FUN_01ac8d30(local_34,param_1);
  uVar1 = (uint)local_34[0];
  uVar4 = uVar1;
  if (uVar1 == 0) {
    uVar4 = local_2c;
  }
  if (uVar1 == 0 && uVar4 == 0) {
    return 1;
  }
  uVar1 = param_1[8];
  piVar2 = (int *)param_1[5];
  uVar4 = param_1[6];
  if (uVar1 != 0) {
    if (uVar1 < uVar4) {
      if (*(char *)((int)piVar2 + uVar1) < -0x40) {
LAB_01ac907c:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(piVar2,uVar4,0,uVar1,&DAT_01d2fde8);
      }
    }
    else if (uVar1 != uVar4) goto LAB_01ac907c;
    if ((uVar1 == 4) && (*piVar2 == 0x656c6966)) {
      return 1;
    }
  }
  uVar6 = param_1[9];
  if (uVar4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar6,uVar4,0x1d2fa18);
  }
  if (*(char *)((int)piVar2 + uVar6) != ':') {
    return 0;
  }
  uVar7 = param_1[10] - 1;
  if (uVar4 <= uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar7,uVar4,0x1d2fa18);
  }
  if (uVar1 + 3 == uVar6) {
    uVar7 = param_1[10];
  }
  FUN_01ad077c(local_34,param_1 + 4,uVar6,uVar7,0x1d2f9a8);
  if ((local_28 <= local_24) && (uVar4 = *(uint *)(local_2c + 8), local_24 <= uVar4)) {
    *(uint *)(local_2c + 8) = local_28;
    if (local_24 == local_28) {
      if (uVar4 == local_24) goto LAB_01ac9168;
    }
    else {
      if (uVar4 == local_24) goto LAB_01ac9168;
      FUN_01bed864(*(int *)(local_2c + 4) + local_28,*(int *)(local_2c + 4) + local_24,
                   uVar4 - local_24);
    }
    *(uint *)(local_2c + 8) = (uVar4 - local_24) + local_28;
  }
LAB_01ac9168:
  iVar3 = uVar7 - uVar6;
  iVar5 = param_1[0xc] - iVar3;
  param_1[0xc] = iVar5;
  if (*param_1 == 1) {
    iVar5 = param_1[1];
  }
  if (*param_1 == 1) {
    param_1[1] = iVar5 - iVar3;
  }
  param_1[10] = param_1[10] - iVar3;
  param_1[0xb] = param_1[0xb] - iVar3;
  if (param_1[2] == 1) {
    param_1[3] = param_1[3] - iVar3;
  }
  return 0;
}

