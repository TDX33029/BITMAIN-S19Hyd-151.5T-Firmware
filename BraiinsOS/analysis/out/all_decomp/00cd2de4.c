// FUN_00cd2de4 @ 00cd2de4 size=316 calls_out=5 calls_in=2
// strings: measured_hashrate

void FUN_00cd2de4(char *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_20;
  undefined4 local_1c;
  
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
  FUN_00cd2b24(&local_20,piVar1,"measured_hashrate",0x11);
  if ((char)local_20 != '\x04') {
    FUN_0157c4a0(local_20,local_1c);
    return;
  }
  piVar1 = (int *)*piVar3;
  iVar2 = piVar1[2];
  if (*piVar1 == iVar2) {
    FUN_00d653ec(piVar1,iVar2,1,1,1);
    iVar2 = piVar1[2];
  }
  *(undefined1 *)(piVar1[1] + iVar2) = 0x3a;
  piVar1[2] = piVar1[2] + 1;
  FUN_00d42ef8(param_2,*piVar3);
  return;
}

