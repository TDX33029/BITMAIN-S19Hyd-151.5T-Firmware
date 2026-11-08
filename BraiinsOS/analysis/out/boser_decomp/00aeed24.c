// FUN_00aeed24 @ 00aeed24 size=360 calls_out=11 calls_in=8
// strings: 

void FUN_00aeed24(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  
  FUN_009c98e8(&local_30);
  if (local_30 == 1) {
    uVar5 = CONCAT44(local_2c,1);
  }
  else {
    uVar5 = FUN_00736cb4(local_28,local_24);
  }
  piVar2 = (int *)(uVar5 >> 0x20);
  piVar3 = (int *)&DAT_80000000;
  piVar1 = piVar2;
  if ((uVar5 & 1) == 0) {
    if ((int *)param_2[1] < piVar2) {
      FUN_019a18a8((uint)&local_30 | 4,0x25,1,0);
      local_30 = -0x80000000;
      piVar1 = (int *)thunk_FUN_01be5118(0xc);
      if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0xc);
      }
      *piVar1 = local_30;
      piVar1[1] = local_2c;
      piVar1[2] = local_28;
      piVar3 = (int *)&DAT_80000000;
    }
    else {
      iVar4 = *param_2;
      *param_2 = (int)(iVar4 + (int)piVar2);
      param_2[1] = param_2[1] - (int)piVar2;
      piVar3 = (int *)0x0;
      if ((longlong)uVar5 < 0) {
LAB_00aeede0:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(piVar3,piVar2);
      }
      if (piVar2 == (int *)0x0) {
        piVar1 = (int *)&DAT_00000001;
      }
      else {
        piVar3 = (int *)&DAT_00000001;
        piVar1 = (int *)FUN_01298504(piVar2,1);
        if (piVar1 == (int *)0x0) goto LAB_00aeede0;
        piVar3 = piVar2;
      }
      FUN_01bed4e2(piVar1,iVar4,piVar2);
      FUN_012fbd94(&local_30,piVar1,piVar2);
      if (local_30 == 1) {
        local_30 = -0x7fffffff;
        piVar2 = (int *)FUN_0073696c(&local_30);
        FUN_019bb7e0(piVar3,piVar1);
        piVar3 = (int *)&DAT_80000000;
        piVar1 = piVar2;
      }
      else {
        param_1[2] = piVar2;
      }
    }
  }
  *param_1 = piVar3;
  param_1[1] = piVar1;
  return;
}

