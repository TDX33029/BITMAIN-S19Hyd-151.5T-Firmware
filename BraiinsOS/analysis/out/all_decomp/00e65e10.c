// FUN_00e65e10 @ 00e65e10 size=524 calls_out=6 calls_in=6
// strings: 

undefined4
FUN_00e65e10(uint param_1,char *param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 local_40;
  undefined4 local_3c;
  
  if (*param_2 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  puVar3 = *(undefined4 **)(param_2 + 4);
  if (param_2[1] != '\x01') {
    piVar5 = (int *)*puVar3;
    iVar2 = piVar5[2];
    if (*piVar5 == iVar2) {
      FUN_00edff4c(piVar5,iVar2,1,1,1);
      iVar2 = piVar5[2];
    }
    *(undefined1 *)(piVar5[1] + iVar2) = 0x2c;
    piVar5[2] = iVar2 + 1;
  }
  param_2[1] = '\x02';
  FUN_00e5d350(&local_40,*puVar3,param_3,param_4);
  if ((char)local_40 != '\x04') {
    uVar1 = FUN_0157c4a0(local_40,local_3c);
    return uVar1;
  }
  piVar5 = (int *)*puVar3;
  iVar2 = piVar5[2];
  if (*piVar5 == iVar2) {
    FUN_00edff4c(piVar5,iVar2,1,1,1);
    iVar2 = piVar5[2];
  }
  *(undefined1 *)(piVar5[1] + iVar2) = 0x3a;
  piVar5[2] = iVar2 + 1;
  piVar5 = (int *)*puVar3;
  if (((param_5 & 1) == 0) || (0x7f7fffff < (param_1 & 0x7fffffff))) {
    iVar2 = piVar5[2];
    if ((uint)(*piVar5 - iVar2) < 4) {
      FUN_00edff4c(piVar5,iVar2,4,1,1);
      iVar2 = piVar5[2];
    }
    *(undefined4 *)(piVar5[1] + iVar2) = 0x6c6c756e;
    iVar2 = iVar2 + 4;
  }
  else {
    iVar2 = FUN_016d14cc(param_1,&local_40);
    uVar4 = iVar2 - (int)&local_40;
    iVar2 = piVar5[2];
    if ((uint)(*piVar5 - iVar2) < uVar4) {
      FUN_00edff4c(piVar5,iVar2,uVar4,1,1);
      iVar2 = piVar5[2];
    }
    FUN_016dd1aa(piVar5[1] + iVar2,&local_40,uVar4);
    iVar2 = iVar2 + uVar4;
  }
  piVar5[2] = iVar2;
  return 0;
}

