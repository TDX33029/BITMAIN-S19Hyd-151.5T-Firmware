// FUN_00a98c98 @ 00a98c98 size=420 calls_out=10 calls_in=3
// strings: 

void FUN_00a98c98(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  int local_40;
  undefined1 *local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  undefined1 *puStack_2c;
  int iStack_28;
  int local_20;
  undefined1 *local_1c;
  int local_18;
  
  FUN_009c98e8(&local_40);
  if (local_40 == 1) {
    uVar3 = CONCAT44(local_3c,1);
  }
  else {
    uVar3 = FUN_00736cb4(local_38,local_34);
  }
  piVar1 = (int *)(uVar3 >> 0x20);
  if ((uVar3 & 1) == 0) {
    if ((int *)param_2[1] < piVar1) {
      FUN_019a18a8((uint)&local_40 | 4,0x25,1,0);
      local_40 = -0x80000000;
      piVar1 = (int *)thunk_FUN_01be5118(0xc);
      if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0xc);
      }
      *piVar1 = local_40;
      piVar1[1] = (int)local_3c;
      piVar1[2] = local_38;
    }
    else {
      iVar2 = *param_2;
      *param_2 = iVar2 + (int)piVar1;
      param_2[1] = param_2[1] - (int)piVar1;
      FUN_012fbd94(&local_20,iVar2,piVar1);
      if (local_20 == 1) {
        local_3c = local_1c;
        local_40 = -0x7fffffff;
        piVar1 = &local_40;
        local_38 = local_18;
      }
      else {
        FUN_0128ee18(&local_40,local_1c,local_18);
        if (local_40 != 0) {
          *param_1 = local_40;
          param_1[1] = (int)local_3c;
          param_1[2] = local_38;
          return;
        }
        local_18 = 0;
        local_1c = &DAT_00000001;
        local_20 = 0;
        iVar2 = FUN_012900c0((uint)local_3c & 0xff,&local_20,&DAT_01c0ff80);
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533383,0x37,&local_30,&DAT_01c0ffb8,&DAT_01d30334);
        }
        piVar1 = &local_30;
        local_30 = local_20;
        puStack_2c = local_1c;
        iStack_28 = local_18;
      }
      piVar1 = (int *)FUN_0073696c(piVar1);
    }
  }
  *param_1 = 0;
  param_1[1] = (int)piVar1;
  return;
}

