// FUN_00e61384 @ 00e61384 size=424 calls_out=4 calls_in=7
// strings: 

undefined4 FUN_00e61384(char *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
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
  if ((char)local_28 == '\x04') {
    piVar5 = (int *)*puVar4;
    iVar2 = piVar5[2];
    if (*piVar5 == iVar2) {
      FUN_00edff4c(piVar5,iVar2,1,1,1);
      iVar2 = piVar5[2];
    }
    iVar3 = *param_4;
    *(undefined1 *)(piVar5[1] + iVar2) = 0x3a;
    piVar5[2] = iVar2 + 1;
    if (iVar3 == -0x80000000) {
      piVar5 = (int *)*puVar4;
      iVar2 = piVar5[2];
      if ((uint)(*piVar5 - iVar2) < 4) {
        FUN_00edff4c(piVar5,iVar2,4,1,1);
        iVar2 = piVar5[2];
      }
      *(undefined4 *)(piVar5[1] + iVar2) = 0x6c6c756e;
      piVar5[2] = iVar2 + 4;
      return 0;
    }
    FUN_00e5d350(&local_28,*puVar4,param_4[1],param_4[2]);
    if ((char)local_28 == '\x04') {
      return 0;
    }
  }
  uVar1 = FUN_0157c4a0(local_28,local_24);
  return uVar1;
}

