// FUN_00feb774 @ 00feb774 size=212 calls_out=3 calls_in=1
// strings: 

void FUN_00feb774(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int local_30;
  int local_2c;
  undefined4 *local_28;
  undefined *local_24;
  
  iVar2 = *param_2;
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      local_28 = (undefined4 *)param_2[1];
      local_24 = (undefined *)param_2[2];
      local_2c = 0x6400000;
      local_30 = 1;
      uVar5 = FUN_00fad4fc(&local_30);
    }
    else {
      iVar3 = param_2[1];
      iVar4 = param_2[2];
      local_28 = (undefined4 *)thunk_FUN_01be5118(8);
      if (local_28 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      *local_28 = 1;
      local_28[1] = 0x6400000;
      local_24 = &DAT_01c21f34;
      local_30 = iVar3;
      local_2c = iVar4;
      piVar1 = (int *)thunk_FUN_01be5118(0x10);
      if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x10);
      }
      uVar5 = CONCAT44(&DAT_01c21f48,piVar1);
      *piVar1 = local_30;
      piVar1[1] = local_2c;
      piVar1[2] = (int)local_28;
      piVar1[3] = (int)local_24;
    }
    *(undefined8 *)(param_1 + 1) = uVar5;
  }
  *param_1 = iVar2;
  return;
}

