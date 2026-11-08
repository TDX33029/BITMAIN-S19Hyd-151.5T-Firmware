// FUN_00e613cc @ 00e613cc size=444 calls_out=6 calls_in=0
// strings: WEP_SHARED | WPA_1_2 | WPA_2_3 | WPA_2

void FUN_00e613cc(undefined1 *param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  if (param_4 < 0) {
LAB_00e613e0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar5,param_4);
  }
  if (param_4 == 0) {
    iVar1 = 1;
    iVar2 = 0;
  }
  else {
    uVar5 = 1;
    iVar1 = FUN_01298504(param_4,1);
    iVar2 = param_4;
    if (iVar1 == 0) goto LAB_00e613e0;
  }
  FUN_01bed4e2(iVar1,param_3,param_4);
  if (*param_2 != -0x80000000) {
    FUN_019bb7e0(*param_2,param_2[1]);
  }
  *param_2 = iVar2;
  param_2[1] = iVar1;
  param_2[2] = param_4;
  switch(param_4) {
  case 3:
    iVar2 = thunk_FUN_01bed842(param_3,"WEP",3);
    if (iVar2 == 0) {
      uVar4 = 1;
      goto LAB_00e61574;
    }
    uVar4 = 3;
    uVar5 = 3;
    pcVar3 = "WPA";
    goto LAB_00e61554;
  case 4:
    if (*param_3 == 0x454e4f4e) {
      uVar4 = 0;
      param_1[1] = 0;
      goto LAB_00e6157c;
    }
    break;
  case 5:
    uVar4 = 5;
    uVar5 = 5;
    pcVar3 = "WPA_2";
LAB_00e61554:
    iVar2 = thunk_FUN_01bed842(param_3,pcVar3,uVar5);
    if (iVar2 == 0) {
      param_1[1] = uVar4;
LAB_00e61578:
      uVar4 = 0;
      goto LAB_00e6157c;
    }
    break;
  case 7:
    iVar2 = thunk_FUN_01bed842(param_3,"WPA_1_2",7);
    if (iVar2 == 0) {
      uVar4 = 4;
    }
    else {
      iVar2 = thunk_FUN_01bed842(param_3,"WPA_2_3",7);
      if (iVar2 != 0) break;
      uVar4 = 6;
    }
LAB_00e61574:
    param_1[1] = uVar4;
    goto LAB_00e61578;
  case 10:
    iVar2 = thunk_FUN_01bed842(param_3,"WEP_SHARED",10);
    if (iVar2 == 0) {
      uVar4 = 2;
      goto LAB_00e61574;
    }
  }
  uVar5 = FUN_01265080(param_3,param_4,&DAT_01c18af4,7);
  *(undefined4 *)(param_1 + 4) = uVar5;
  uVar4 = 1;
LAB_00e6157c:
  *param_1 = uVar4;
  return;
}

