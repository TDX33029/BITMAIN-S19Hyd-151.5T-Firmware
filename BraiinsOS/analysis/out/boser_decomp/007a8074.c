// FUN_007a8074 @ 007a8074 size=208 calls_out=7 calls_in=4
// strings: 

void FUN_007a8074(int *param_1)

{
  int iVar1;
  int unaff_r7;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  int local_2c;
  uint local_28;
  undefined4 local_24;
  
  FUN_019a5900(&local_2c,&DAT_003e11e0,0x19);
  if (local_2c == -0x80000000) {
    FUN_0069263c(local_28 & 0xff,local_24);
    *param_1 = -0x80000000;
    return;
  }
  lVar4 = FUN_013245a0(local_28,local_24);
  iVar2 = (int)((ulonglong)lVar4 >> 0x20);
  if (iVar2 == 0) {
    *param_1 = -0x80000000;
LAB_007a8134:
    FUN_0134bd64(local_2c,local_28);
    return;
  }
  if (lVar4 < 0) {
    uVar3 = 0;
    iVar2 = unaff_r7;
  }
  else {
    uVar3 = 1;
    iVar1 = FUN_01298504(iVar2,1);
    if (iVar1 != 0) {
      FUN_01bed4e2(iVar1,(int)lVar4,iVar2);
      *param_1 = iVar2;
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      goto LAB_007a8134;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar3,iVar2);
}

