// FUN_00d59ee4 @ 00d59ee4 size=332 calls_out=5 calls_in=1
// strings: tuning_duration

void FUN_00d59ee4(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_01878150);
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
  FUN_00cd2b24(&local_28,piVar1,"tuning_duration",0xf);
  if ((char)local_28 != '\x04') {
    FUN_0157c4a0(local_28,local_24);
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
  FUN_00c4d5d0(param_3,param_4,param_5,piVar3);
  return;
}

