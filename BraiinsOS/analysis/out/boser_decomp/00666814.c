// FUN_00666814 @ 00666814 size=256 calls_out=6 calls_in=12
// strings: 

void FUN_00666814(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iStack_2c;
  int iStack_28;
  uint local_24;
  
  iVar3 = param_3 + 1;
  if (param_3 == 0xfffffffe || iVar3 < -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00664730();
  }
  iVar1 = FUN_01298504(iVar3,1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,iVar3);
  }
  FUN_01bed4e2(iVar1,param_2,param_3);
  if (param_3 < 8) {
    uVar2 = 0;
    if (param_3 != 0) {
      do {
        if (*(char *)(param_2 + uVar2) == '\0') goto LAB_006668c8;
        uVar2 = uVar2 + 1;
      } while (param_3 != uVar2);
    }
  }
  else {
    uVar4 = FUN_01307168(0,param_2,param_3);
    uVar2 = (uint)(uVar4 >> 0x20);
    if ((uVar4 & 1) != 0) {
LAB_006668c8:
      param_1[3] = uVar2;
      goto LAB_006668f8;
    }
  }
  iStack_2c = iVar3;
  iStack_28 = iVar1;
  local_24 = param_3;
  uVar5 = FUN_006647b4(&iStack_2c);
  param_3 = (uint)((ulonglong)uVar5 >> 0x20);
  iVar1 = (int)uVar5;
  iVar3 = -0x80000000;
LAB_006668f8:
  *param_1 = iVar3;
  param_1[1] = iVar1;
  param_1[2] = param_3;
  return;
}

