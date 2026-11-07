// FUN_00cd4d78 @ 00cd4d78 size=336 calls_out=5 calls_in=2
// strings: 

undefined4 FUN_00cd4d78(char *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  piVar4 = *(int **)(param_1 + 4);
  piVar2 = (int *)*piVar4;
  if (param_1[1] != '\x01') {
    iVar3 = piVar2[2];
    if (*piVar2 == iVar3) {
      FUN_00d653ec(piVar2,iVar3,1,1,1);
      iVar3 = piVar2[2];
    }
    *(undefined1 *)(piVar2[1] + iVar3) = 0x2c;
    piVar2[2] = piVar2[2] + 1;
    piVar2 = (int *)*piVar4;
  }
  param_1[1] = '\x02';
  FUN_00cd2b24(&local_28,piVar2,param_2,param_3);
  if ((char)local_28 != '\x04') {
    uVar1 = FUN_0157c4a0(local_28,local_24);
    return uVar1;
  }
  piVar2 = (int *)*piVar4;
  iVar3 = piVar2[2];
  if (*piVar2 == iVar3) {
    FUN_00d653ec(piVar2,iVar3,1,1,1);
    iVar3 = piVar2[2];
  }
  *(undefined1 *)(piVar2[1] + iVar3) = 0x3a;
  piVar2[2] = piVar2[2] + 1;
  FUN_00c52ba8(*piVar4);
  return 0;
}

