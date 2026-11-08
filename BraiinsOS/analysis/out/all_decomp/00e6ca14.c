// FUN_00e6ca14 @ 00e6ca14 size=352 calls_out=5 calls_in=1
// strings: 

int FUN_00e6ca14(char *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 local_24 [3];
  
  if (*param_1 != '\0') {
    local_24[0] = 10;
    iVar1 = FUN_0157c50c(local_24,0,0);
    return iVar1;
  }
  iVar1 = FUN_00e5b230(param_1,param_2,0xb);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
  }
  piVar3 = *(int **)(param_1 + 4);
  piVar2 = (int *)*piVar3;
  iVar1 = piVar2[2];
  if ((uint)(*piVar2 - iVar1) < 2) {
    FUN_00edff4c(piVar2,iVar1,2,1,1);
    iVar1 = piVar2[2];
  }
  piVar2[2] = iVar1 + 2;
  *(undefined2 *)(piVar2[1] + iVar1) = 0x203a;
  piVar2 = (int *)*piVar3;
  if ((param_3 & 1) == 0) {
    iVar1 = piVar2[2];
    if ((uint)(*piVar2 - iVar1) < 4) {
      FUN_00edff4c(piVar2,iVar1,4,1,1);
      iVar1 = piVar2[2];
    }
    *(undefined4 *)(piVar2[1] + iVar1) = 0x6c6c756e;
    piVar2[2] = iVar1 + 4;
  }
  else {
    FUN_00efe9e0();
  }
  *(undefined1 *)(piVar3 + 4) = 1;
  return 0;
}

