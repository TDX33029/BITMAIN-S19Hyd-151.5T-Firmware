// FUN_00c4d5d0 @ 00c4d5d0 size=344 calls_out=4 calls_in=2
// strings: nanos

int FUN_00c4d5d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  uint local_34;
  undefined4 *local_30;
  undefined4 local_2c [3];
  
  piVar2 = (int *)*param_4;
  iVar1 = piVar2[2];
  if (*piVar2 == iVar1) {
    FUN_00d653ec(piVar2,iVar1,1,1,1);
    iVar1 = piVar2[2];
  }
  *(undefined1 *)(piVar2[1] + iVar1) = 0x7b;
  piVar2[2] = iVar1 + 1;
  local_34 = 0x100;
  local_30 = param_4;
  iVar1 = FUN_00cd411c(&local_34,&DAT_005688f0,4,param_4,param_1,param_2);
  if (iVar1 == 0) {
    if ((char)local_34 == '\x01') {
      local_2c[0] = 10;
      iVar1 = FUN_0157c50c(local_2c,0,0);
      return iVar1;
    }
    iVar1 = FUN_00cd3a98(&local_34,"nanos",5,param_3);
    if (iVar1 == 0) {
      iVar1 = 0;
      if (((local_34 & 0xff00) != 0) && ((local_34 & 1) == 0)) {
        piVar2 = (int *)*local_30;
        iVar1 = piVar2[2];
        if (*piVar2 == iVar1) {
          FUN_00d653ec(piVar2,iVar1,1,1,1);
          iVar1 = piVar2[2];
        }
        *(undefined1 *)(piVar2[1] + iVar1) = 0x7d;
        piVar2[2] = iVar1 + 1;
        return 0;
      }
    }
  }
  return iVar1;
}

