// FUN_00e65a20 @ 00e65a20 size=320 calls_out=5 calls_in=4
// strings: 

undefined4
FUN_00e65a20(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar3 = (int *)*puVar4;
    iVar2 = piVar3[2];
    if (*piVar3 == iVar2) {
      FUN_00edff4c(piVar3,iVar2,1,1,1);
      iVar2 = piVar3[2];
    }
    *(undefined1 *)(piVar3[1] + iVar2) = 0x2c;
    piVar3[2] = iVar2 + 1;
  }
  param_1[1] = '\x02';
  FUN_00e5d350(&local_30,*puVar4,param_2,param_3);
  if ((char)local_30 != '\x04') {
    uVar1 = FUN_0157c4a0(local_30,local_2c);
    return uVar1;
  }
  piVar3 = (int *)*puVar4;
  iVar2 = piVar3[2];
  if (*piVar3 == iVar2) {
    FUN_00edff4c(piVar3,iVar2,1,1,1);
    iVar2 = piVar3[2];
  }
  *(undefined1 *)(piVar3[1] + iVar2) = 0x3a;
  piVar3[2] = iVar2 + 1;
  FUN_00efb6cc(param_5,param_6,param_7,*puVar4);
  return 0;
}

