// FUN_00e61c24 @ 00e61c24 size=556 calls_out=4 calls_in=2
// strings: 

undefined4 FUN_00e61c24(char *param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar5 = (int *)*puVar4;
    iVar2 = piVar5[2];
    if (*piVar5 == iVar2) {
      FUN_00edff4c(piVar5,iVar2,1,1,1);
      iVar2 = piVar5[2];
    }
    *(undefined1 *)(piVar5[1] + iVar2) = 0x2c;
    piVar5[2] = iVar2 + 1;
  }
  param_1[1] = '\x02';
  FUN_00e5d350(&local_28,*puVar4,param_2,param_3);
  if ((char)local_28 != '\x04') {
    uVar3 = FUN_0157c4a0(local_28,local_24);
    return uVar3;
  }
  piVar5 = (int *)*puVar4;
  iVar2 = piVar5[2];
  if (*piVar5 == iVar2) {
    FUN_00edff4c(piVar5,iVar2,1,1,1);
    iVar2 = piVar5[2];
  }
  *(undefined1 *)(piVar5[1] + iVar2) = 0x3a;
  piVar5[2] = iVar2 + 1;
  piVar5 = (int *)*puVar4;
  if (param_4 == 2) {
    iVar2 = piVar5[2];
    if ((uint)(*piVar5 - iVar2) < 4) {
      FUN_00edff4c(piVar5,iVar2,4,1,1);
      iVar2 = piVar5[2];
    }
    iVar1 = piVar5[1];
    uVar3 = 0x6c6c756e;
  }
  else {
    if ((param_4 & 1) == 0) {
      iVar2 = piVar5[2];
      if ((uint)(*piVar5 - iVar2) < 5) {
        FUN_00edff4c(piVar5,iVar2,5,1,1);
        iVar2 = piVar5[2];
      }
      iVar1 = piVar5[1];
      piVar5[2] = iVar2 + 5;
      *(undefined4 *)(iVar1 + iVar2) = 0x736c6166;
      *(undefined1 *)((undefined4 *)(iVar1 + iVar2) + 1) = 0x65;
      return 0;
    }
    iVar2 = piVar5[2];
    if ((uint)(*piVar5 - iVar2) < 4) {
      FUN_00edff4c(piVar5,iVar2,4,1,1);
      iVar2 = piVar5[2];
    }
    iVar1 = piVar5[1];
    uVar3 = 0x65757274;
  }
  *(undefined4 *)(iVar1 + iVar2) = uVar3;
  piVar5[2] = iVar2 + 4;
  return 0;
}

