// FUN_00e5b230 @ 00e5b230 size=560 calls_out=5 calls_in=33
// strings: 

undefined4 FUN_00e5b230(char *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  puVar6 = *(undefined4 **)(param_1 + 4);
  piVar5 = (int *)*puVar6;
  if (param_1[1] == '\x01') {
    iVar1 = piVar5[2];
    if (*piVar5 == iVar1) {
      FUN_00edff4c(piVar5,iVar1,1,1,1);
      iVar1 = piVar5[2];
    }
    iVar2 = iVar1 + 1;
    *(undefined1 *)(piVar5[1] + iVar1) = 10;
    uVar3 = puVar6[1];
    uVar4 = puVar6[2];
    iVar1 = puVar6[3];
    piVar5[2] = iVar2;
  }
  else {
    iVar1 = piVar5[2];
    if ((uint)(*piVar5 - iVar1) < 2) {
      FUN_00edff4c(piVar5,iVar1,2,1,1);
      iVar1 = piVar5[2];
    }
    iVar2 = iVar1 + 2;
    *(undefined2 *)(piVar5[1] + iVar1) = 0xa2c;
    uVar3 = puVar6[1];
    uVar4 = puVar6[2];
    iVar1 = puVar6[3];
    piVar5[2] = iVar2;
  }
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    if ((uint)(*piVar5 - iVar2) < uVar4) {
      FUN_00edff4c(piVar5,iVar2,uVar4,1,1);
      iVar2 = piVar5[2];
    }
    FUN_016dd1aa(piVar5[1] + iVar2,uVar3,uVar4);
    iVar2 = iVar2 + uVar4;
    piVar5[2] = iVar2;
  }
  piVar5 = (int *)*puVar6;
  param_1[1] = '\x02';
  iVar1 = piVar5[2];
  if (*piVar5 == iVar1) {
    FUN_00edff4c(piVar5,iVar1,1,1,1);
    iVar1 = piVar5[2];
  }
  *(undefined1 *)(piVar5[1] + iVar1) = 0x22;
  piVar5[2] = iVar1 + 1;
  local_30 = CONCAT31(local_30._1_3_,4);
  FUN_00e57bb4(&local_30,piVar5,param_2,param_3);
  if ((char)local_30 != '\x04') {
    uVar3 = FUN_0157c4a0(local_30,local_2c);
    return uVar3;
  }
  iVar1 = piVar5[2];
  if (*piVar5 == iVar1) {
    FUN_00edff4c(piVar5,iVar1,1,1,1);
    iVar1 = piVar5[2];
  }
  *(undefined1 *)(piVar5[1] + iVar1) = 0x22;
  piVar5[2] = iVar1 + 1;
  return 0;
}

