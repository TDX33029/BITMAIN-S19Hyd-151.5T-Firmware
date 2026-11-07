// FUN_009f6070 @ 009f6070 size=408 calls_out=3 calls_in=1
// strings: reasonpoll_readyConnection

int FUN_009f6070(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint local_34;
  undefined4 *local_30;
  undefined4 local_2c [3];
  
  piVar2 = (int *)*param_2;
  iVar1 = piVar2[2];
  if (*piVar2 == iVar1) {
    FUN_009f4d18(piVar2,iVar1,1,1,1);
    iVar1 = piVar2[2];
  }
  uVar3 = *(undefined4 *)(param_1 + 4);
  uVar4 = *(undefined4 *)(param_1 + 8);
  *(undefined1 *)(piVar2[1] + iVar1) = 0x7b;
  piVar2[2] = iVar1 + 1;
  local_34 = CONCAT22(local_34._2_2_,0x100);
  local_30 = param_2;
  iVar1 = FUN_009e6fd4(&local_34,&DAT_00568e58,4,uVar3,uVar4);
  if (iVar1 == 0) {
    if ((char)local_34 != '\0') {
LAB_009f6198:
      local_2c[0] = 10;
      iVar1 = FUN_0157c50c(local_2c,0,0);
      return iVar1;
    }
    iVar1 = FUN_009e6fd4(&local_34,"reasonpoll_readyConnection",6,*(undefined4 *)(param_1 + 0x10),
                         *(undefined4 *)(param_1 + 0x14));
    if (iVar1 == 0) {
      if ((char)local_34 != '\0') goto LAB_009f6198;
      iVar1 = FUN_009e6fd4(&local_34,&DAT_0056863c,4,*(undefined4 *)(param_1 + 0x1c),
                           *(undefined4 *)(param_1 + 0x20));
      if (iVar1 == 0) {
        iVar1 = 0;
        if (((local_34 & 0xff00) != 0) && ((local_34 & 1) == 0)) {
          piVar2 = (int *)*local_30;
          iVar1 = piVar2[2];
          if (*piVar2 == iVar1) {
            FUN_009f4d18(piVar2,iVar1,1,1,1);
            iVar1 = piVar2[2];
          }
          *(undefined1 *)(piVar2[1] + iVar1) = 0x7d;
          piVar2[2] = iVar1 + 1;
          return 0;
        }
      }
    }
  }
  return iVar1;
}

