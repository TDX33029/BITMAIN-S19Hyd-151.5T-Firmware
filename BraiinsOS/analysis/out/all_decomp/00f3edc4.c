// FUN_00f3edc4 @ 00f3edc4 size=296 calls_out=4 calls_in=0
// strings: 

int FUN_00f3edc4(char *param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  iVar2 = FUN_00f3ddb8(param_1,param_2,7);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
  }
  puVar3 = *(undefined4 **)(param_1 + 4);
  piVar4 = (int *)*puVar3;
  iVar2 = piVar4[2];
  if ((uint)(*piVar4 - iVar2) < 2) {
    FUN_00f411dc(piVar4,iVar2,2,1,1);
    iVar2 = piVar4[2];
  }
  piVar4[2] = iVar2 + 2;
  cVar1 = *param_3;
  *(undefined2 *)(piVar4[1] + iVar2) = 0x203a;
  if (cVar1 == '\x06') {
    piVar4 = (int *)*puVar3;
    iVar2 = piVar4[2];
    if ((uint)(*piVar4 - iVar2) < 4) {
      FUN_00f411dc(piVar4,iVar2,4,1,1);
      iVar2 = piVar4[2];
    }
    *(undefined4 *)(piVar4[1] + iVar2) = 0x6c6c756e;
    piVar4[2] = iVar2 + 4;
  }
  else {
    iVar2 = FUN_00f3e04c(param_3,puVar3);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  *(undefined1 *)(puVar3 + 4) = 1;
  return 0;
}

