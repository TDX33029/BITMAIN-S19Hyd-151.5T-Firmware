// FUN_00e63084 @ 00e63084 size=372 calls_out=4 calls_in=2
// strings: cause | PsuFailure | Thermal

undefined4 FUN_00e63084(char *param_1,uint param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  puVar5 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar4 = (int *)*puVar5;
    iVar1 = piVar4[2];
    if (*piVar4 == iVar1) {
      FUN_00edff4c(piVar4,iVar1,1,1,1);
      iVar1 = piVar4[2];
    }
    *(undefined1 *)(piVar4[1] + iVar1) = 0x2c;
    piVar4[2] = iVar1 + 1;
  }
  param_1[1] = '\x02';
  FUN_00e5d350(&local_20,*puVar5,"cause",5);
  if ((char)local_20 != '\x04') {
    uVar3 = FUN_0157c4a0(local_20,local_1c);
    return uVar3;
  }
  piVar4 = (int *)*puVar5;
  iVar1 = piVar4[2];
  if (*piVar4 == iVar1) {
    FUN_00edff4c(piVar4,iVar1,1,1,1);
    iVar1 = piVar4[2];
  }
  *(undefined1 *)(piVar4[1] + iVar1) = 0x3a;
  piVar4[2] = iVar1 + 1;
  if ((param_2 & 1) == 0) {
    uVar3 = 7;
    pcVar2 = "Thermal";
  }
  else {
    uVar3 = 10;
    pcVar2 = "PsuFailure";
  }
  FUN_00e5d350(&local_20,*puVar5,pcVar2,uVar3);
  if ((char)local_20 == '\x04') {
    return 0;
  }
  uVar3 = FUN_0157c4a0(local_20,local_1c);
  return uVar3;
}

