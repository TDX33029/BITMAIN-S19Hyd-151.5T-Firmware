// FUN_012f2b0c @ 012f2b0c size=200 calls_out=2 calls_in=5
// strings: `Some` base string must exist when converting indexed str to str! (This is a module invariant.)

undefined8 FUN_012f2b0c(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_1[2];
  if (*param_1 == -0x7fffffff) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("`Some` base string must exist when converting indexed str to str! (This is a module invariant.)"
                   ,0x5f,&DAT_01ce4244);
    }
    uVar2 = param_1[1];
    iVar1 = *(int *)(param_2 + 4);
    uVar4 = *(uint *)(param_2 + 8);
    if (uVar3 < uVar2) goto LAB_012f2b90;
    if (uVar2 != 0) {
      if (uVar2 < uVar4) {
        if (*(char *)(iVar1 + uVar2) < -0x40) goto LAB_012f2b90;
      }
      else if (uVar2 != uVar4) goto LAB_012f2b90;
    }
    if (uVar3 != 0) {
      if (uVar3 < uVar4) {
        if (*(char *)(iVar1 + uVar3) < -0x40) {
LAB_012f2b90:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(iVar1,uVar4,uVar2,uVar3,&DAT_01ce4254);
        }
      }
      else if (uVar3 != uVar4) goto LAB_012f2b90;
    }
    iVar1 = iVar1 + uVar2;
    uVar3 = uVar3 - uVar2;
  }
  else {
    iVar1 = param_1[1];
  }
  return CONCAT44(uVar3,iVar1);
}

