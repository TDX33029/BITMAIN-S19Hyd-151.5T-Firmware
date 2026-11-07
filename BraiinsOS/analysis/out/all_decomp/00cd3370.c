// FUN_00cd3370 @ 00cd3370 size=768 calls_out=12 calls_in=3
// strings: secs_since_epoch | nanos_since_epoch

int FUN_00cd3370(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint local_48;
  int *local_44;
  undefined4 local_40;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 auStack_24 [4];
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  piVar3 = *(int **)(param_1 + 4);
  piVar1 = (int *)*piVar3;
  if (param_1[1] != '\x01') {
    iVar2 = piVar1[2];
    if (*piVar1 == iVar2) {
      FUN_00d653ec(piVar1,iVar2,1,1,1);
      iVar2 = piVar1[2];
    }
    *(undefined1 *)(piVar1[1] + iVar2) = 0x2c;
    piVar1[2] = piVar1[2] + 1;
    piVar1 = (int *)*piVar3;
  }
  param_1[1] = '\x02';
  FUN_00cd2b24(&local_38,piVar1,param_2,param_3);
  if ((char)local_38 != '\x04') {
    iVar2 = FUN_0157c4a0(local_38,local_34);
    return iVar2;
  }
  piVar1 = (int *)*piVar3;
  iVar2 = piVar1[2];
  if (*piVar1 == iVar2) {
    FUN_00d653ec(piVar1,iVar2,1,1,1);
    iVar2 = piVar1[2];
  }
  *(undefined1 *)(piVar1[1] + iVar2) = 0x3a;
  piVar1[2] = piVar1[2] + 1;
  local_44 = (int *)0x0;
  local_48 = 0;
  local_40 = 0;
  FUN_015f3c24(&local_38,param_4,&local_48);
  if ((local_38 & 1) != 0) {
    iVar2 = thunk_FUN_016d4a50(0x28);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x28);
    }
    FUN_016dd1aa(iVar2,&DAT_003594c0,0x28);
    iVar2 = FUN_0157ba88(auStack_24 + 8);
    return iVar2;
  }
  piVar1 = (int *)*piVar3;
  iVar2 = piVar1[2];
  if (*piVar1 == iVar2) {
    FUN_00d653ec(piVar1,iVar2,1,1,1);
    iVar2 = piVar1[2];
  }
  *(undefined1 *)(piVar1[1] + iVar2) = 0x7b;
  piVar1[2] = iVar2 + 1;
  local_48 = 0x100;
  local_44 = piVar3;
  iVar2 = FUN_00cd411c(&local_48,"secs_since_epoch",0x10,0x7b,local_30,local_2c);
  if (iVar2 == 0) {
    if ((char)local_48 == '\x01') {
      local_38 = 10;
      iVar2 = FUN_0157c50c(&local_38,0,0);
      return iVar2;
    }
    iVar2 = FUN_00cd3a98(&local_48,"nanos_since_epoch",0x11,local_28);
    if (iVar2 == 0) {
      if (((local_48 & 0xff00) != 0) && ((local_48 & 1) == 0)) {
        piVar1 = (int *)*local_44;
        iVar2 = piVar1[2];
        if (*piVar1 == iVar2) {
          FUN_00d653ec(piVar1,iVar2,1,1,1);
          iVar2 = piVar1[2];
        }
        *(undefined1 *)(piVar1[1] + iVar2) = 0x7d;
        piVar1[2] = iVar2 + 1;
      }
      return 0;
    }
  }
  return iVar2;
}

