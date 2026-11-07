// FUN_00e6269c @ 00e6269c size=476 calls_out=4 calls_in=3
// strings: 

undefined4 FUN_00e6269c(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
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
    iVar3 = piVar5[2];
    if (*piVar5 == iVar3) {
      FUN_00edff4c(piVar5,iVar3,1,1,1);
      iVar3 = piVar5[2];
    }
    *(undefined1 *)(piVar5[1] + iVar3) = 0x2c;
    piVar5[2] = iVar3 + 1;
  }
  param_1[1] = '\x02';
  FUN_00e5d350(&local_28,*puVar4,param_2,param_3);
  if ((char)local_28 != '\x04') {
    uVar2 = FUN_0157c4a0(local_28,local_24);
    return uVar2;
  }
  piVar5 = (int *)*puVar4;
  iVar3 = piVar5[2];
  if (*piVar5 == iVar3) {
    FUN_00edff4c(piVar5,iVar3,1,1,1);
    iVar3 = piVar5[2];
  }
  *(undefined1 *)(piVar5[1] + iVar3) = 0x3a;
  piVar5[2] = iVar3 + 1;
  piVar5 = (int *)*puVar4;
  if ((param_4 & 1) == 0) {
    iVar3 = piVar5[2];
    if ((uint)(*piVar5 - iVar3) < 5) {
      FUN_00edff4c(piVar5,iVar3,5,1,1);
      iVar3 = piVar5[2];
    }
    iVar1 = piVar5[1];
    piVar5[2] = iVar3 + 5;
    *(undefined4 *)(iVar1 + iVar3) = 0x736c6166;
    *(undefined1 *)((undefined4 *)(iVar1 + iVar3) + 1) = 0x65;
    return 0;
  }
  iVar3 = piVar5[2];
  if ((uint)(*piVar5 - iVar3) < 4) {
    FUN_00edff4c(piVar5,iVar3,4,1,1);
    iVar3 = piVar5[2];
  }
  *(undefined4 *)(piVar5[1] + iVar3) = 0x65757274;
  piVar5[2] = iVar3 + 4;
  return 0;
}

