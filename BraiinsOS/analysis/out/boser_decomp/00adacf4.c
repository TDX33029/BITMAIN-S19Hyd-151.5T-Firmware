// FUN_00adacf4 @ 00adacf4 size=388 calls_out=10 calls_in=1
// strings: /sys/class/gpio/export | direction | value

void FUN_00adacf4(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  int local_34;
  code *local_30 [2];
  int iStack_28;
  
  local_48 = param_2;
  iVar1 = FUN_012fc81c(param_2,local_30);
  iVar3 = 10 - iVar1;
  if (iVar1 == 10) {
    iVar2 = 1;
    iVar4 = 0;
  }
  else {
    iVar2 = FUN_01298504(iVar3,1);
    iVar4 = iVar3;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,iVar3);
    }
  }
  FUN_01bed4e2(iVar2,(int)local_30 + iVar1,iVar3);
  FUN_019a63c0(local_30,"/sys/class/gpio/export",0x16,iVar2,iVar3);
  FUN_019bb7e0(iVar4,iVar2);
  if (((uint)local_30[0] & 0xff) != 4) {
    FUN_00abbc74(local_30);
  }
  local_30[1] = FUN_012fd02c;
  local_30[0] = (code *)&local_48;
  FUN_00664898(&local_44,&DAT_00573b94,local_30);
  FUN_019a66e4(local_30,local_40,local_3c,"direction",9);
  FUN_00a52038(&local_38,local_30,"out",3);
  if (((char)local_38 == '\x04') || ((local_38 & 0xff) == 4)) {
    FUN_019a66e4(local_30,local_40,local_3c,"value",5);
    *param_1 = (int)local_30[0];
    param_1[1] = (int)local_30[1];
    param_1[2] = iStack_28;
  }
  else {
    *param_1 = -0x80000000;
    param_1[1] = local_38;
    param_1[2] = local_34;
  }
  FUN_019bb7e0(local_44,local_40);
  return;
}

