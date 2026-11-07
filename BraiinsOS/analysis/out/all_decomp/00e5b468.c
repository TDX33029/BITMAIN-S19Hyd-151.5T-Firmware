// FUN_00e5b468 @ 00e5b468 size=472 calls_out=5 calls_in=3
// strings: 

int FUN_00e5b468(char *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = FUN_00e5b230();
  if (iVar1 != 0) {
    return iVar1;
  }
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
  }
  puVar4 = *(undefined4 **)(param_1 + 4);
  piVar3 = (int *)*puVar4;
  iVar1 = piVar3[2];
  if ((uint)(*piVar3 - iVar1) < 2) {
    FUN_00edff4c(piVar3,iVar1,2,1,1);
    iVar1 = piVar3[2];
  }
  piVar3[2] = iVar1 + 2;
  iVar2 = *param_4;
  *(undefined2 *)(piVar3[1] + iVar1) = 0x203a;
  piVar3 = (int *)*puVar4;
  if (iVar2 == -0x80000000) {
    iVar1 = piVar3[2];
    if ((uint)(*piVar3 - iVar1) < 4) {
      FUN_00edff4c(piVar3,iVar1,4,1,1);
      iVar1 = piVar3[2];
    }
    *(undefined4 *)(piVar3[1] + iVar1) = 0x6c6c756e;
    iVar1 = iVar1 + 4;
  }
  else {
    iVar5 = param_4[1];
    iVar2 = param_4[2];
    iVar1 = piVar3[2];
    if (*piVar3 == iVar1) {
      FUN_00edff4c(piVar3,iVar1,1,1,1);
      iVar1 = piVar3[2];
    }
    *(undefined1 *)(piVar3[1] + iVar1) = 0x22;
    piVar3[2] = iVar1 + 1;
    local_20 = CONCAT31(local_20._1_3_,4);
    FUN_00e57bb4(&local_20,piVar3,iVar5,iVar2);
    if ((char)local_20 != '\x04') {
      iVar1 = FUN_0157c4a0(local_20,local_1c);
      return iVar1;
    }
    iVar1 = piVar3[2];
    if (*piVar3 == iVar1) {
      FUN_00edff4c(piVar3,iVar1,1,1,1);
      iVar1 = piVar3[2];
    }
    *(undefined1 *)(piVar3[1] + iVar1) = 0x22;
    iVar1 = iVar1 + 1;
  }
  piVar3[2] = iVar1;
  *(undefined1 *)(puVar4 + 4) = 1;
  return 0;
}

