// FUN_00e5b0a0 @ 00e5b0a0 size=392 calls_out=5 calls_in=3
// strings: 

int FUN_00e5b0a0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
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
  puVar3 = *(undefined4 **)(param_1 + 4);
  piVar2 = (int *)*puVar3;
  iVar1 = piVar2[2];
  if ((uint)(*piVar2 - iVar1) < 2) {
    FUN_00edff4c(piVar2,iVar1,2,1,1);
    iVar1 = piVar2[2];
  }
  piVar2[2] = iVar1 + 2;
  *(undefined2 *)(piVar2[1] + iVar1) = 0x203a;
  piVar2 = (int *)*puVar3;
  iVar1 = piVar2[2];
  if (*piVar2 == iVar1) {
    FUN_00edff4c(piVar2,iVar1,1,1,1);
    iVar1 = piVar2[2];
  }
  *(undefined1 *)(piVar2[1] + iVar1) = 0x22;
  piVar2[2] = iVar1 + 1;
  local_20 = CONCAT31(local_20._1_3_,4);
  FUN_00e57bb4(&local_20,piVar2,param_4,param_5);
  if ((char)local_20 != '\x04') {
    iVar1 = FUN_0157c4a0(local_20,local_1c);
    return iVar1;
  }
  iVar1 = piVar2[2];
  if (*piVar2 == iVar1) {
    FUN_00edff4c(piVar2,iVar1,1,1,1);
    iVar1 = piVar2[2];
  }
  *(undefined1 *)(piVar2[1] + iVar1) = 0x22;
  piVar2[2] = iVar1 + 1;
  *(undefined1 *)(puVar3 + 4) = 1;
  return 0;
}

