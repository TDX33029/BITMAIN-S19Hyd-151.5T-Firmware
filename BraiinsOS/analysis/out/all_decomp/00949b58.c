// FUN_00949b58 @ 00949b58 size=320 calls_out=5 calls_in=1
// strings: 

int FUN_00949b58(char *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = FUN_00947ca4();
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
    FUN_00933680(piVar3,iVar1,2,1,1);
    iVar1 = piVar3[2];
  }
  piVar3[2] = iVar1 + 2;
  iVar2 = *param_4;
  *(undefined2 *)(piVar3[1] + iVar1) = 0x203a;
  if (iVar2 == -0x80000000) {
    piVar3 = (int *)*puVar4;
    iVar1 = piVar3[2];
    if ((uint)(*piVar3 - iVar1) < 4) {
      FUN_00933680(piVar3,iVar1,4,1,1);
      iVar1 = piVar3[2];
    }
    *(undefined4 *)(piVar3[1] + iVar1) = 0x6c6c756e;
    piVar3[2] = iVar1 + 4;
  }
  else {
    FUN_00947e44(&local_18,*puVar4,param_4[1],param_4[2]);
    if ((char)local_18 != '\x04') {
      iVar1 = FUN_0157c4a0(local_18,local_14);
      return iVar1;
    }
  }
  *(undefined1 *)(puVar4 + 4) = 1;
  return 0;
}

