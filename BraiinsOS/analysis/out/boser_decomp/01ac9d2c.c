// FUN_01ac9d2c @ 01ac9d2c size=260 calls_out=2 calls_in=6
// strings: 

undefined8 FUN_01ac9d2c(int param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  uVar4 = *(uint *)(param_1 + 0x20);
  iVar7 = *(int *)(param_1 + 0x14);
  uVar8 = *(uint *)(param_1 + 0x18);
  if (uVar4 != 0) {
    if (uVar4 < uVar8) {
      if (*(char *)(iVar7 + uVar4) < -0x40) {
LAB_01ac9d60:
        puVar1 = &DAT_01d2fcf8;
        uVar3 = uVar8;
        goto LAB_01ac9d74;
      }
    }
    else if (uVar8 != uVar4) goto LAB_01ac9d60;
  }
  iVar5 = 1;
  iVar6 = 0;
  if ((uVar8 - uVar4 < 3) || (iVar2 = thunk_FUN_01bed842(&DAT_005327c5,iVar7 + uVar4,3), iVar2 != 0)
     ) goto LAB_01ac9e20;
  uVar3 = *(uint *)(param_1 + 0x24);
  uVar4 = uVar4 + 3;
  if (uVar3 <= uVar4) goto LAB_01ac9e20;
  if (uVar4 == 0) {
LAB_01ac9dec:
    if (uVar3 < uVar8) {
      if (-0x41 < *(char *)(iVar7 + uVar3)) {
LAB_01ac9e18:
        iVar5 = iVar7 + uVar4;
        iVar6 = uVar3 - uVar4;
LAB_01ac9e20:
        return CONCAT44(iVar6,iVar5);
      }
    }
    else if (uVar3 == uVar8) goto LAB_01ac9e18;
  }
  else if (uVar4 < uVar8) {
    if (-0x41 < *(char *)(iVar7 + uVar4)) goto LAB_01ac9dec;
  }
  else if (uVar4 == uVar8) goto LAB_01ac9dec;
  puVar1 = (undefined *)0x1d2fa58;
LAB_01ac9d74:
                    /* WARNING: Subroutine does not return */
  FUN_012fb514(iVar7,uVar8,uVar4,uVar3,puVar1);
}

