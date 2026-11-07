// FUN_00cd4894 @ 00cd4894 size=536 calls_out=6 calls_in=1
// strings: 

undefined4 FUN_00cd4894(uint param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 local_38;
  undefined4 local_34;
  
  if (*param_2 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  piVar5 = *(int **)(param_2 + 4);
  piVar2 = (int *)*piVar5;
  if (param_2[1] != '\x01') {
    iVar3 = piVar2[2];
    if (*piVar2 == iVar3) {
      FUN_00d653ec(piVar2,iVar3,1,1,1);
      iVar3 = piVar2[2];
    }
    *(undefined1 *)(piVar2[1] + iVar3) = 0x2c;
    piVar2[2] = piVar2[2] + 1;
    piVar2 = (int *)*piVar5;
  }
  param_2[1] = '\x02';
  FUN_00cd2b24(&local_38,piVar2,param_3,param_4);
  if ((char)local_38 != '\x04') {
    uVar1 = FUN_0157c4a0(local_38,local_34);
    return uVar1;
  }
  piVar2 = (int *)*piVar5;
  iVar3 = piVar2[2];
  if (*piVar2 == iVar3) {
    FUN_00d653ec(piVar2,iVar3,1,1,1);
    iVar3 = piVar2[2];
  }
  *(undefined1 *)(piVar2[1] + iVar3) = 0x3a;
  piVar2[2] = piVar2[2] + 1;
  piVar5 = (int *)*piVar5;
  if ((param_1 & 0x7fffffff) < 0x7f800000) {
    iVar3 = FUN_016d14cc(param_1,&local_38);
    uVar4 = iVar3 - (int)&local_38;
    iVar3 = piVar5[2];
    if ((uint)(*piVar5 - iVar3) < uVar4) {
      FUN_00d653ec(piVar5,iVar3,uVar4,1,1);
      iVar3 = piVar5[2];
    }
    FUN_016dd1aa(piVar5[1] + iVar3,&local_38,uVar4);
    iVar3 = piVar5[2] + uVar4;
  }
  else {
    iVar3 = piVar5[2];
    if ((uint)(*piVar5 - iVar3) < 4) {
      FUN_00d653ec(piVar5,iVar3,4,1,1);
      iVar3 = piVar5[2];
    }
    *(undefined4 *)(piVar5[1] + iVar3) = 0x6c6c756e;
    iVar3 = piVar5[2] + 4;
  }
  piVar5[2] = iVar3;
  return 0;
}

