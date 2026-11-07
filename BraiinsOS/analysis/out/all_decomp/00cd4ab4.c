// FUN_00cd4ab4 @ 00cd4ab4 size=700 calls_out=5 calls_in=2
// strings: 

int FUN_00cd4ab4(char *param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_28;
  undefined4 local_24;
  
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
  FUN_00cd2b24(&local_28,piVar1,param_2,8);
  if ((char)local_28 != '\x04') {
    iVar2 = FUN_0157c4a0(local_28,local_24);
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
  piVar1 = (int *)*piVar3;
  iVar2 = piVar1[2];
  if (*piVar1 == iVar2) {
    FUN_00d653ec(piVar1,iVar2,1,1,1);
    iVar2 = piVar1[2];
  }
  *(undefined1 *)(piVar1[1] + iVar2) = 0x5b;
  iVar2 = piVar1[2] + 1;
  piVar1[2] = iVar2;
  if (param_4 == 0) {
    if (*piVar1 == iVar2) {
      FUN_00d653ec(piVar1,iVar2,1,1,1);
      iVar2 = piVar1[2];
    }
    *(undefined1 *)(piVar1[1] + iVar2) = 0x5d;
    piVar1[2] = piVar1[2] + 1;
    return 0;
  }
  iVar2 = FUN_00d5a118(param_3,piVar3);
  if (iVar2 == 0) {
    param_4 = param_4 * 0x18;
    do {
      param_4 = param_4 + -0x18;
      param_3 = param_3 + 0x18;
      piVar1 = (int *)*piVar3;
      iVar2 = piVar1[2];
      if (param_4 == 0) {
        if (*piVar1 == iVar2) {
          FUN_00d653ec(piVar1,iVar2,1,1,1);
          iVar2 = piVar1[2];
        }
        *(undefined1 *)(piVar1[1] + iVar2) = 0x5d;
        piVar1[2] = piVar1[2] + 1;
        return 0;
      }
      if (*piVar1 == iVar2) {
        FUN_00d653ec(piVar1,iVar2,1,1,1);
        iVar2 = piVar1[2];
      }
      *(undefined1 *)(piVar1[1] + iVar2) = 0x2c;
      piVar1[2] = piVar1[2] + 1;
      iVar2 = FUN_00d5a118(param_3,piVar3);
    } while (iVar2 == 0);
  }
  return iVar2;
}

