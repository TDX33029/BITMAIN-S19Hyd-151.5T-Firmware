// FUN_014fa08c @ 014fa08c size=288 calls_out=1 calls_in=2
// strings: 

void FUN_014fa08c(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  
  iVar5 = param_1[2];
  if (iVar5 != 0) {
    uVar1 = param_1[3];
    uVar3 = param_2 - uVar1;
    if (param_2 < uVar1) {
      if ((param_2 == 0) || (-0x41 < *(char *)(iVar5 + param_2))) {
        param_1[2] = iVar5 + param_2;
        param_1[3] = uVar1 - param_2;
        return;
      }
      puVar6 = &DAT_01cfa604;
      goto LAB_014fa1a0;
    }
    iVar5 = *param_1;
    uVar4 = param_1[1];
    param_1[2] = 0;
    if (param_2 != uVar1) {
      if (uVar3 < uVar4) {
        if (*(char *)(iVar5 + uVar3) < -0x40) {
LAB_014fa148:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(iVar5,uVar4,uVar3,uVar4,&DAT_01cfa5f4);
        }
      }
      else if (uVar4 != uVar3) goto LAB_014fa148;
    }
    iVar2 = uVar4 - uVar3;
    iVar5 = iVar5 + uVar3;
    goto LAB_014fa180;
  }
  iVar5 = *param_1;
  uVar1 = param_1[1];
  if (param_2 != 0) {
    if (param_2 < uVar1) {
      if (*(char *)(iVar5 + param_2) < -0x40) {
LAB_014fa104:
        puVar6 = &DAT_01cfa614;
LAB_014fa1a0:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(iVar5,uVar1,param_2,uVar1,puVar6);
      }
    }
    else if (uVar1 != param_2) goto LAB_014fa104;
  }
  iVar2 = uVar1 - param_2;
  iVar5 = iVar5 + param_2;
LAB_014fa180:
  *param_1 = iVar5;
  param_1[1] = iVar2;
  return;
}

