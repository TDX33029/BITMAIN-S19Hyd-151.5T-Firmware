// FUN_01ac96dc @ 01ac96dc size=256 calls_out=1 calls_in=8
// strings: 

undefined8 FUN_01ac96dc(int *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if (*param_1 == 1) {
    puVar2 = (uint *)(param_1 + 1);
  }
  else {
    if (param_1[2] == 0) {
      uVar4 = param_1[0xc];
      iVar6 = param_1[5];
      uVar7 = param_1[6];
      if (uVar4 != 0) {
        if (uVar4 < uVar7) {
          if (-0x41 < *(char *)(iVar6 + uVar4)) goto LAB_01ac97cc;
        }
        else if (uVar7 == uVar4) goto LAB_01ac97cc;
        puVar1 = &DAT_01d2fcf8;
        uVar5 = uVar7;
        goto LAB_01ac97ac;
      }
LAB_01ac97cc:
      iVar6 = iVar6 + uVar4;
      iVar3 = uVar7 - uVar4;
      goto LAB_01ac97d4;
    }
    puVar2 = (uint *)(param_1 + 3);
  }
  iVar6 = param_1[5];
  uVar7 = param_1[6];
  uVar4 = param_1[0xc];
  uVar5 = *puVar2;
  if (uVar5 < uVar4) goto LAB_01ac97a0;
  if (uVar4 != 0) {
    if (uVar4 < uVar7) {
      if (-0x41 < *(char *)(iVar6 + uVar4)) goto LAB_01ac9780;
    }
    else if (uVar4 == uVar7) goto LAB_01ac9780;
    goto LAB_01ac97a0;
  }
LAB_01ac9780:
  if (uVar5 != 0) {
    if (uVar5 < uVar7) {
      if (*(char *)(iVar6 + uVar5) < -0x40) {
LAB_01ac97a0:
        puVar1 = (undefined *)0x1d2fa58;
LAB_01ac97ac:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(iVar6,uVar7,uVar4,uVar5,puVar1);
      }
    }
    else if (uVar5 != uVar7) goto LAB_01ac97a0;
  }
  iVar6 = iVar6 + uVar4;
  iVar3 = uVar5 - uVar4;
LAB_01ac97d4:
  return CONCAT44(iVar3,iVar6);
}

