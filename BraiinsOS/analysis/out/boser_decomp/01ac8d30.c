// FUN_01ac8d30 @ 01ac8d30 size=224 calls_out=2 calls_in=5
// strings: 

void FUN_01ac8d30(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x34)) {
  case 0:
    uVar1 = 3;
    break;
  case 1:
    uVar4 = *(uint *)(param_2 + 0x28);
    uVar5 = *(uint *)(param_2 + 0x2c);
    iVar2 = *(int *)(param_2 + 0x14);
    uVar6 = *(uint *)(param_2 + 0x18);
    if (uVar5 < uVar4) goto LAB_01ac8dec;
    if (uVar4 != 0) {
      if (uVar4 < uVar6) {
        if (*(char *)(iVar2 + uVar4) < -0x40) goto LAB_01ac8dec;
      }
      else if (uVar4 != uVar6) goto LAB_01ac8dec;
    }
    if (uVar5 != 0) {
      if (uVar5 < uVar6) {
        if (*(char *)(iVar2 + uVar5) < -0x40) {
LAB_01ac8dec:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(iVar2,uVar6,uVar4,uVar5,0x1d2fa58);
        }
      }
      else if (uVar5 != uVar6) goto LAB_01ac8dec;
    }
    *(uint *)(param_1 + 4) = iVar2 + uVar4;
    *(uint *)(param_1 + 8) = uVar5 - uVar4;
    uVar1 = 0;
    break;
  case 2:
    uVar3 = *(undefined4 *)(param_2 + 0x35);
    *param_1 = 1;
    *(undefined4 *)(param_1 + 1) = uVar3;
    return;
  case 3:
    FUN_01bed4e2(param_1 + 1,param_2 + 0x35,0x10);
    uVar1 = 2;
  }
  *param_1 = uVar1;
  return;
}

