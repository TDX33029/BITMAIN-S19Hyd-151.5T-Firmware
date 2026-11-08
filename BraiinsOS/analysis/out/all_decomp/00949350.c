// FUN_00949350 @ 00949350 size=368 calls_out=3 calls_in=2
// strings: 

int FUN_00949350(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  iVar1 = FUN_00947ca4();
  if (iVar1 != 0) {
    return iVar1;
  }
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
  }
  puVar5 = *(undefined4 **)(param_1 + 4);
  piVar4 = (int *)*puVar5;
  iVar1 = piVar4[2];
  if ((uint)(*piVar4 - iVar1) < 2) {
    FUN_00933680(piVar4,iVar1,2,1,1);
    iVar1 = piVar4[2];
  }
  piVar4[2] = iVar1 + 2;
  *(undefined2 *)(piVar4[1] + iVar1) = 0x203a;
  piVar4 = (int *)*puVar5;
  if ((param_4 & 1) == 0) {
    iVar1 = piVar4[2];
    if ((uint)(*piVar4 - iVar1) < 5) {
      FUN_00933680(piVar4,iVar1,5,1,1);
      iVar1 = piVar4[2];
    }
    iVar3 = piVar4[1];
    *(undefined4 *)(iVar3 + iVar1) = 0x736c6166;
    iVar2 = iVar1 + 5;
    *(undefined1 *)((undefined4 *)(iVar3 + iVar1) + 1) = 0x65;
  }
  else {
    iVar2 = piVar4[2];
    if ((uint)(*piVar4 - iVar2) < 4) {
      FUN_00933680(piVar4,iVar2,4,1,1);
      iVar2 = piVar4[2];
    }
    *(undefined4 *)(piVar4[1] + iVar2) = 0x65757274;
    iVar2 = iVar2 + 4;
  }
  piVar4[2] = iVar2;
  *(undefined1 *)(puVar5 + 4) = 1;
  return 0;
}

