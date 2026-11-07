// FUN_00909194 @ 00909194 size=472 calls_out=6 calls_in=1
// strings: 

int FUN_00909194(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 local_38 [6];
  
  if (*param_2 != '\0') {
    local_38[0] = 10;
    iVar1 = FUN_0157c50c(local_38,0,0);
    return iVar1;
  }
  iVar1 = FUN_00947ca4(param_2,&DAT_00359465,0x19);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (*param_2 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
  }
  puVar4 = *(undefined4 **)(param_2 + 4);
  piVar2 = (int *)*puVar4;
  iVar1 = piVar2[2];
  if ((uint)(*piVar2 - iVar1) < 2) {
    FUN_00933680(piVar2,iVar1,2,1,1);
    iVar1 = piVar2[2];
  }
  piVar2[2] = iVar1 + 2;
  *(undefined2 *)(piVar2[1] + iVar1) = 0x203a;
  piVar2 = (int *)*puVar4;
  if (((param_3 & 1) == 0) || (0x7f7fffff < (param_1 & 0x7fffffff))) {
    iVar1 = piVar2[2];
    if ((uint)(*piVar2 - iVar1) < 4) {
      FUN_00933680(piVar2,iVar1,4,1,1);
      iVar1 = piVar2[2];
    }
    *(undefined4 *)(piVar2[1] + iVar1) = 0x6c6c756e;
    iVar1 = iVar1 + 4;
  }
  else {
    iVar1 = FUN_016d14cc(param_1,local_38);
    uVar3 = iVar1 - (int)local_38;
    iVar1 = piVar2[2];
    if ((uint)(*piVar2 - iVar1) < uVar3) {
      FUN_00933680(piVar2,iVar1,uVar3,1,1);
      iVar1 = piVar2[2];
    }
    FUN_016dd1aa(piVar2[1] + iVar1,local_38,uVar3);
    iVar1 = iVar1 + uVar3;
  }
  piVar2[2] = iVar1;
  *(undefined1 *)(puVar4 + 4) = 1;
  return 0;
}

