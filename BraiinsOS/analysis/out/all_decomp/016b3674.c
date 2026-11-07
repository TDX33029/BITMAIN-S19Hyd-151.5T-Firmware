// FUN_016b3674 @ 016b3674 size=268 calls_out=1 calls_in=4
// strings: 

undefined8 FUN_016b3674(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (*param_1 == 1) {
    puVar1 = (uint *)(param_1 + 1);
  }
  else {
    if (param_1[2] == 0) {
      uVar3 = param_1[0xc];
      iVar4 = param_1[5];
      uVar2 = param_1[6];
      if (uVar3 != 0) {
        if (uVar3 < uVar2) {
          if (*(char *)(iVar4 + uVar3) < -0x40) {
LAB_016b3704:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(iVar4,uVar2,uVar3,uVar2,&DAT_018af080);
          }
        }
        else if (uVar2 != uVar3) goto LAB_016b3704;
      }
      return CONCAT44(uVar2 - uVar3,iVar4 + uVar3);
    }
    puVar1 = (uint *)(param_1 + 3);
  }
  iVar4 = param_1[5];
  uVar5 = param_1[6];
  uVar2 = param_1[0xc];
  uVar3 = *puVar1;
  if (uVar3 < uVar2) goto LAB_016b3740;
  if (uVar2 != 0) {
    if (uVar2 < uVar5) {
      if (*(char *)(iVar4 + uVar2) < -0x40) goto LAB_016b3740;
    }
    else if (uVar2 != uVar5) goto LAB_016b3740;
  }
  if (uVar3 != 0) {
    if (uVar3 < uVar5) {
      if (*(char *)(iVar4 + uVar3) < -0x40) {
LAB_016b3740:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(iVar4,uVar5,uVar2,uVar3,&DAT_018aedb8);
      }
    }
    else if (uVar3 != uVar5) goto LAB_016b3740;
  }
  return CONCAT44(uVar3 - uVar2,iVar4 + uVar2);
}

