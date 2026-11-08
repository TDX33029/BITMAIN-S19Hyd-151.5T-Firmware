// FUN_00948104 @ 00948104 size=192 calls_out=4 calls_in=1
// strings: 

int FUN_00948104(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  iVar1 = FUN_00947ca4();
  if (iVar1 != 0) {
    return iVar1;
  }
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
  }
  puVar2 = *(undefined4 **)(param_1 + 4);
  piVar3 = (int *)*puVar2;
  iVar1 = piVar3[2];
  if ((uint)(*piVar3 - iVar1) < 2) {
    FUN_00933680(piVar3,iVar1,2,1,1);
    iVar1 = piVar3[2];
  }
  piVar3[2] = iVar1 + 2;
  *(undefined2 *)(piVar3[1] + iVar1) = 0x203a;
  iVar1 = FUN_009481cc(param_4,puVar2);
  if (iVar1 == 0) {
    *(undefined1 *)(puVar2 + 4) = 1;
    iVar1 = 0;
  }
  return iVar1;
}

