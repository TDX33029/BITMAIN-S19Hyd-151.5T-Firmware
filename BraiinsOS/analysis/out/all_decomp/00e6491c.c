// FUN_00e6491c @ 00e6491c size=388 calls_out=5 calls_in=1
// strings: 

undefined4 FUN_00e6491c(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar4 = (int *)*puVar2;
    iVar1 = piVar4[2];
    if (*piVar4 == iVar1) {
      FUN_00edff4c(piVar4,iVar1,1,1,1);
      iVar1 = piVar4[2];
    }
    *(undefined1 *)(piVar4[1] + iVar1) = 0x2c;
    piVar4[2] = iVar1 + 1;
  }
  param_1[1] = '\x02';
  FUN_00e5d350(&local_58,*puVar2,param_2,param_3);
  if ((char)local_58 != '\x04') {
    uVar3 = FUN_0157c4a0(local_58,local_54);
    return uVar3;
  }
  piVar4 = (int *)*puVar2;
  iVar1 = piVar4[2];
  if (*piVar4 == iVar1) {
    FUN_00edff4c(piVar4,iVar1,1,1,1);
    iVar1 = piVar4[2];
  }
  *(undefined1 *)(piVar4[1] + iVar1) = 0x3a;
  piVar4[2] = iVar1 + 1;
  uVar3 = *puVar2;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  FUN_00ed25b8(param_4,&local_58);
  FUN_00e5d350(&local_28,uVar3,&local_58,0x24);
  if ((char)local_28 == '\x04') {
    return 0;
  }
  uVar3 = FUN_0157c4a0(local_28,local_24);
  return uVar3;
}

