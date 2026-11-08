// FUN_015d0d38 @ 015d0d38 size=300 calls_out=5 calls_in=1
// strings: .local. | .local. | The part of the hostname before '.local.' cannot be empty | Hostname length must be <= 255 bytes

void FUN_015d0d38(undefined4 *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int local_20;
  uint uStack_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  
  local_20 = param_2;
  uStack_1c = param_3;
  if ((param_3 < 7) || (iVar1 = thunk_FUN_01bed842(".local.",param_2 + param_3 + -7,7), iVar1 != 0))
  {
    local_14 = &LAB_018a13b8;
    local_18 = (undefined1 *)&local_20;
    FUN_00664898(param_1 + 1,&DAT_00573df4,&local_18);
    uVar2 = 2;
LAB_015d0da4:
    *param_1 = uVar2;
  }
  else {
    if (param_3 == 7) {
      iVar1 = thunk_FUN_01bed842(param_2,".local.",7);
      if (iVar1 != 0) {
LAB_015d0e44:
        uVar2 = 4;
        goto LAB_015d0da4;
      }
      uVar2 = 0x39;
      iVar1 = thunk_FUN_01be5118(0x39);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x39);
      }
      uVar4 = 0x39;
      pcVar3 = "The part of the hostname before \'.local.\' cannot be empty";
    }
    else {
      if (param_3 < 0x100) goto LAB_015d0e44;
      uVar2 = 0x24;
      iVar1 = thunk_FUN_01be5118(0x24);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x24);
      }
      uVar4 = 0x24;
      pcVar3 = "Hostname length must be <= 255 bytes";
    }
    FUN_01bed4e2(iVar1,pcVar3,uVar4);
    param_1[1] = uVar2;
    *param_1 = 2;
    param_1[2] = iVar1;
    param_1[3] = uVar2;
  }
  return;
}

