// FUN_01aceee8 @ 01aceee8 size=396 calls_out=5 calls_in=3
// strings: 

void FUN_01aceee8(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5
                 ,undefined4 param_6)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int unaff_r9;
  undefined4 uVar4;
  undefined8 uVar5;
  int local_28;
  undefined4 local_24;
  
  local_24 = param_6;
  local_28 = param_5;
  puVar1 = (undefined1 *)FUN_01ac9ff4(&local_28);
  uVar5 = CONCAT44(local_24,local_28);
  if (puVar1 == &DAT_00110000) {
    iVar3 = 0;
    iVar2 = 8;
    *param_1 = 0;
  }
  else {
    if (puVar1 == (undefined1 *)0x3f) {
      unaff_r9 = param_2[2];
      iVar2 = unaff_r9;
      if (*param_2 == unaff_r9) {
        FUN_01af7b44(param_2,unaff_r9,1,1,1);
        iVar2 = param_2[2];
      }
      *(undefined1 *)(param_2[1] + iVar2) = 0x3f;
      param_2[2] = unaff_r9 + 1;
      uVar5 = FUN_01acb374(param_2,param_3,param_4,local_28,local_24);
      if ((int)uVar5 == 0) {
        iVar3 = 0;
        *param_1 = 1;
        param_1[1] = unaff_r9;
        iVar2 = 8;
        goto LAB_01aceff4;
      }
      uVar4 = 1;
    }
    else {
      if (puVar1 != (undefined1 *)0x23) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(&DAT_00532817,0x43,&DAT_01d2fc68);
      }
      uVar4 = 0;
    }
    iVar3 = param_2[2];
    iVar2 = iVar3;
    if (*param_2 == iVar3) {
      FUN_01af7b44(param_2,iVar3,1,1,1);
      iVar2 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + iVar2) = 0x23;
    param_2[2] = iVar3 + 1;
    FUN_01acb6f8(param_2,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    *param_1 = uVar4;
    param_1[2] = 1;
    iVar2 = 0xc;
    param_1[1] = unaff_r9;
  }
LAB_01aceff4:
  *(int *)((int)param_1 + iVar2) = iVar3;
  return;
}

