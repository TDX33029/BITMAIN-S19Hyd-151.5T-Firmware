// FUN_01aa68cc @ 01aa68cc size=368 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01aa68cc(uint param_1,uint param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  
  iVar1 = param_3[2];
  if (iVar1 != 0) {
    uVar2 = param_3[3];
    if (uVar2 < param_2) {
      iVar1 = *param_3;
      uVar6 = param_3[1];
      param_2 = param_2 - uVar2;
      uVar4 = param_1 - uVar2;
      if (param_2 < uVar4) goto LAB_01aa6a14;
      if (param_1 != uVar2) {
        if (uVar4 < uVar6) {
          if (*(char *)(iVar1 + uVar4) < -0x40) goto LAB_01aa6a14;
        }
        else if (uVar4 != uVar6) goto LAB_01aa6a14;
      }
      if (param_2 < uVar6) {
        if (*(char *)(iVar1 + param_2) < -0x40) {
LAB_01aa6a14:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(iVar1,uVar6,uVar4,param_2,&DAT_01d2e44c);
        }
      }
      else if (param_2 != uVar6) goto LAB_01aa6a14;
      iVar1 = iVar1 + uVar4;
      iVar3 = param_2 - uVar4;
      goto LAB_01aa6a34;
    }
    if (((param_2 < param_1) ||
        (((param_1 != 0 && (param_1 < uVar2)) && (*(char *)(iVar1 + param_1) < -0x40)))) ||
       (((param_2 != 0 && (param_2 < uVar2)) && (*(char *)(iVar1 + param_2) < -0x40)))) {
      puVar5 = &DAT_01d2e45c;
      goto LAB_01aa69dc;
    }
    goto LAB_01aa69ec;
  }
  iVar1 = *param_3;
  uVar2 = param_3[1];
  if (param_2 < param_1) goto LAB_01aa69d4;
  if (param_1 != 0) {
    if (param_1 < uVar2) {
      if (-0x41 < *(char *)(iVar1 + param_1)) goto LAB_01aa69b4;
    }
    else if (param_1 == uVar2) goto LAB_01aa69b4;
    goto LAB_01aa69d4;
  }
LAB_01aa69b4:
  if (param_2 != 0) {
    if (param_2 < uVar2) {
      if (*(char *)(iVar1 + param_2) < -0x40) {
LAB_01aa69d4:
        puVar5 = &DAT_01d2e46c;
LAB_01aa69dc:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(iVar1,uVar2,param_1,param_2,puVar5);
      }
    }
    else if (param_2 != uVar2) goto LAB_01aa69d4;
  }
LAB_01aa69ec:
  iVar1 = iVar1 + param_1;
  iVar3 = param_2 - param_1;
LAB_01aa6a34:
  return CONCAT44(iVar3,iVar1);
}

