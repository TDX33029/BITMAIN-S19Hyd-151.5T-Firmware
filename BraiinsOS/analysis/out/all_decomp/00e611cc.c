// FUN_00e611cc @ 00e611cc size=428 calls_out=5 calls_in=4
// strings: tuning_started

undefined4
FUN_00e611cc(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  puVar3 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar4 = (int *)*puVar3;
    iVar2 = piVar4[2];
    if (*piVar4 == iVar2) {
      FUN_00edff4c(piVar4,iVar2,1,1,1);
      iVar2 = piVar4[2];
    }
    *(undefined1 *)(piVar4[1] + iVar2) = 0x2c;
    piVar4[2] = iVar2 + 1;
  }
  param_1[1] = '\x02';
  FUN_00e5d350(&local_28,*puVar3,"tuning_started",0xe);
  if ((char)local_28 != '\x04') {
    uVar1 = FUN_0157c4a0(local_28,local_24);
    return uVar1;
  }
  piVar4 = (int *)*puVar3;
  iVar2 = piVar4[2];
  if (*piVar4 == iVar2) {
    FUN_00edff4c(piVar4,iVar2,1,1,1);
    iVar2 = piVar4[2];
  }
  *(undefined1 *)(piVar4[1] + iVar2) = 0x3a;
  piVar4[2] = iVar2 + 1;
  piVar4 = (int *)*puVar3;
  if (param_5 != &DAT_3b9aca00) {
    FUN_00efb6cc(param_3,param_4,param_5);
    return 0;
  }
  iVar2 = piVar4[2];
  if ((uint)(*piVar4 - iVar2) < 4) {
    FUN_00edff4c(piVar4,iVar2,4,1,1);
    iVar2 = piVar4[2];
  }
  *(undefined4 *)(piVar4[1] + iVar2) = 0x6c6c756e;
  piVar4[2] = iVar2 + 4;
  return 0;
}

