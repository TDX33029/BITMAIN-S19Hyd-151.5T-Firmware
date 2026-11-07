// FUN_00f2fe50 @ 00f2fe50 size=328 calls_out=6 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f2fe50(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((0xbfffffff < param_3) ||
     ((iVar2 = (param_3 / 3) * 4, param_3 != (param_3 / 3) * 3 && (iVar2 = iVar2 + 4, iVar2 == 0))))
  {
                    /* WARNING: Subroutine does not return */
    FUN_015be724(&DAT_0035bce4,0x2d,&DAT_0187e7d8,param_3 * -0x55555555);
  }
  uVar3 = 0;
  if (iVar2 < 0) {
LAB_00f2fe98:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar3,iVar2);
  }
  if (iVar2 == 0) {
    iVar1 = 1;
    iVar4 = 0;
  }
  else {
    uVar3 = 1;
    iVar1 = FUN_016d38c8(iVar2,1);
    iVar4 = iVar2;
    if (iVar1 == 0) goto LAB_00f2fe98;
  }
  FUN_0062eb34(param_2,param_3,iVar1,iVar2);
  FUN_00fab1e0(&local_34,iVar1,iVar2);
  if (local_34 != 0) {
    uStack_28 = iStack_30;
    uStack_24 = iStack_2c;
    iStack_30 = iVar1;
    iStack_2c = iVar2;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0035bd11,0xc,&local_34,&DAT_0187e6b0);
  }
  *param_1 = iVar4;
  param_1[1] = iVar1;
  param_1[2] = iVar2;
  return;
}

