// FUN_00e62880 @ 00e62880 size=296 calls_out=5 calls_in=0
// strings: 

void FUN_00e62880(char *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar3 = (int *)*puVar2;
    iVar1 = piVar3[2];
    if (*piVar3 == iVar1) {
      FUN_00edff4c(piVar3,iVar1,1,1,1);
      iVar1 = piVar3[2];
    }
    *(undefined1 *)(piVar3[1] + iVar1) = 0x2c;
    piVar3[2] = iVar1 + 1;
  }
  param_1[1] = '\x02';
  FUN_00e5d350(&local_20,*puVar2,&DAT_00418440,7);
  if ((char)local_20 != '\x04') {
    FUN_0157c4a0(local_20,local_1c);
    return;
  }
  piVar3 = (int *)*puVar2;
  iVar1 = piVar3[2];
  if (*piVar3 == iVar1) {
    FUN_00edff4c(piVar3,iVar1,1,1,1);
    iVar1 = piVar3[2];
  }
  *(undefined1 *)(piVar3[1] + iVar1) = 0x3a;
  piVar3[2] = iVar1 + 1;
  FUN_00ed11f0(param_2,puVar2);
  return;
}

