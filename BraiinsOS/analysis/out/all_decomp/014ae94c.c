// FUN_014ae94c @ 014ae94c size=216 calls_out=4 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014ae94c(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int unaff_r6;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = (**(code **)(param_1[4] + 0xc))(param_1[3]);
  if (*param_1 == -0x80000000) {
    iVar3 = -0x80000000;
  }
  else {
    unaff_r6 = param_1[2];
    uVar1 = 0;
    if (unaff_r6 < 0) {
LAB_014ae990:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar1,unaff_r6);
    }
    iVar4 = param_1[1];
    if (unaff_r6 == 0) {
      param_1 = (int *)&DAT_00000001;
      iVar3 = 0;
    }
    else {
      param_1 = (int *)thunk_FUN_016d4a50(unaff_r6);
      if (param_1 == (int *)0x0) {
        uVar1 = 1;
        goto LAB_014ae990;
      }
      iVar3 = unaff_r6;
    }
    FUN_016dd1aa(param_1,iVar4,unaff_r6);
  }
  piVar2 = (int *)thunk_FUN_016d4a50(0x14);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  *piVar2 = iVar3;
  piVar2[1] = (int)param_1;
  piVar2[2] = unaff_r6;
  *(undefined8 *)(piVar2 + 3) = uVar5;
  return;
}

