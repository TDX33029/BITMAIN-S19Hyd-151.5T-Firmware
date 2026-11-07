// FUN_01306b44 @ 01306b44 size=324 calls_out=5 calls_in=4
// strings: 

void FUN_01306b44(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_38;
  int iStack_34;
  int iStack_30;
  undefined1 local_29;
  undefined4 local_28;
  
  uVar1 = *(uint *)(param_2 + 0xc);
  if (*(uint *)(param_2 + 8) < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,*(uint *)(param_2 + 8),&DAT_01890988);
  }
  if (uVar1 != 0) {
    iVar4 = *(int *)(param_2 + 4);
    iVar3 = uVar1 * 0x50;
    do {
      uVar2 = *(uint *)(param_3 + 0x18);
      uVar1 = *(uint *)(param_3 + 0x1c);
      if (uVar2 - uVar1 < 5) {
        local_28 = 0;
        local_29 = 10;
        FUN_01328914(&local_38,param_3,&local_29,1);
        if (local_38 != 4) goto LAB_01306c54;
      }
      else {
        if (uVar2 < uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar1,uVar2,uVar2,&DAT_0188fa90);
        }
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 10;
        *(uint *)(param_3 + 0x1c) = uVar1 + 1;
      }
      FUN_01328ef8(&local_38,param_3,*(undefined4 *)(iVar4 + 0x4c));
      if ((local_38 != 4) || (FUN_01307a84(&local_38,iVar4,param_3), local_38 != 4))
      goto LAB_01306c54;
      iVar4 = iVar4 + 0x50;
      iVar3 = iVar3 + -0x50;
    } while (iVar3 != 0);
  }
  FUN_01328b10(&local_38,param_3,*(undefined4 *)(param_2 + 0x10));
  if (local_38 == 4) {
    *param_1 = 4;
    return;
  }
LAB_01306c54:
  *param_1 = local_38;
  param_1[1] = iStack_34;
  param_1[2] = iStack_30;
  return;
}

