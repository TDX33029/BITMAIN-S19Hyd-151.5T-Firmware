// FUN_01ac9c00 @ 01ac9c00 size=284 calls_out=3 calls_in=6
// strings: 

int FUN_01ac9c00(int param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar4 = *(uint *)(param_1 + 0x20);
  iVar6 = *(int *)(param_1 + 0x14);
  uVar7 = *(uint *)(param_1 + 0x18);
  if (uVar4 != 0) {
    if (uVar4 < uVar7) {
      if (*(char *)(iVar6 + uVar4) < -0x40) {
LAB_01ac9c34:
        puVar1 = &DAT_01d2fcf8;
        uVar5 = uVar7;
        goto LAB_01ac9c44;
      }
    }
    else if (uVar7 != uVar4) goto LAB_01ac9c34;
  }
  if (uVar7 - uVar4 < 3) {
    return 0;
  }
  iVar2 = thunk_FUN_01bed842(&DAT_005327c5,iVar6 + uVar4,3);
  if (iVar2 != 0) {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 0x24);
  if (uVar3 == uVar7) {
    return 0;
  }
  if (uVar7 <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar3,uVar7,0x1d2fa18);
  }
  if (*(char *)(iVar6 + uVar3) != ':') {
    return 0;
  }
  uVar4 = uVar3 + 1;
  uVar5 = *(int *)(param_1 + 0x28) - 1;
  if ((uVar3 < uVar5) && ((uVar7 <= uVar4 || (-0x41 < *(char *)(iVar6 + uVar4))))) {
    if (uVar5 < uVar7) {
      if (-0x41 < *(char *)(iVar6 + uVar5)) {
LAB_01ac9d00:
        return iVar6 + uVar4;
      }
    }
    else if (uVar5 == uVar7) goto LAB_01ac9d00;
  }
  puVar1 = (undefined *)0x1d2fa58;
LAB_01ac9c44:
                    /* WARNING: Subroutine does not return */
  FUN_012fb514(iVar6,uVar7,uVar4,uVar5,puVar1);
}

