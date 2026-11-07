// FUN_00e639d8 @ 00e639d8 size=520 calls_out=5 calls_in=0
// strings: reasonpoll_readyConnection

int FUN_00e639d8(char *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint local_20;
  undefined4 *local_1c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  puVar3 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar2 = (int *)*puVar3;
    iVar1 = piVar2[2];
    if (*piVar2 == iVar1) {
      FUN_00edff4c(piVar2,iVar1,1,1,1);
      iVar1 = piVar2[2];
    }
    *(undefined1 *)(piVar2[1] + iVar1) = 0x2c;
    piVar2[2] = iVar1 + 1;
  }
  param_1[1] = '\x02';
  FUN_00e5d350(&local_20,*puVar3,&DAT_00418440,7);
  if ((char)local_20 != '\x04') {
    iVar1 = FUN_0157c4a0(local_20,local_1c);
    return iVar1;
  }
  piVar2 = (int *)*puVar3;
  iVar1 = piVar2[2];
  if (*piVar2 == iVar1) {
    FUN_00edff4c(piVar2,iVar1,1,1,1);
    iVar1 = piVar2[2];
  }
  *(undefined1 *)(piVar2[1] + iVar1) = 0x3a;
  piVar2[2] = iVar1 + 1;
  piVar2 = (int *)*puVar3;
  iVar1 = piVar2[2];
  if (*piVar2 == iVar1) {
    FUN_00edff4c(piVar2,iVar1,1,1,1);
    iVar1 = piVar2[2];
  }
  *(undefined1 *)(piVar2[1] + iVar1) = 0x7b;
  piVar2[2] = iVar1 + 1;
  local_20 = CONCAT22(local_20._2_2_,0x100);
  local_1c = puVar3;
  iVar1 = FUN_00e647d0(&local_20,"reasonpoll_readyConnection",6,param_2,param_3);
  if (((iVar1 != 0) || ((local_20 & 0xff00) == 0)) || ((local_20 & 1) != 0)) {
    return iVar1;
  }
  piVar2 = (int *)*local_1c;
  iVar1 = piVar2[2];
  if (*piVar2 == iVar1) {
    FUN_00edff4c(piVar2,iVar1,1,1,1);
    iVar1 = piVar2[2];
  }
  *(undefined1 *)(piVar2[1] + iVar1) = 0x7d;
  piVar2[2] = iVar1 + 1;
  return 0;
}

