// FUN_00ecff68 @ 00ecff68 size=416 calls_out=5 calls_in=1
// strings: experimental_config

int FUN_00ecff68(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*param_1 != '\0') {
    local_28 = 10;
    iVar2 = FUN_0157c50c(&local_28,0,0);
    return iVar2;
  }
  puVar3 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar4 = (int *)*puVar3;
    iVar2 = piVar4[2];
    if (*piVar4 == iVar2) {
      FUN_00edff4c(piVar4,iVar2,1,1,1);
      iVar2 = piVar4[2];
    }
    *(undefined1 *)(piVar4[1] + iVar2) = 0x2c;
    piVar4[2] = iVar2 + 1;
  }
  param_1[1] = '\x02';
  FUN_00e5d350(&local_28,*puVar3,"experimental_config",0x13);
  if ((char)local_28 != '\x04') {
    iVar2 = FUN_0157c4a0(local_28,local_24);
    return iVar2;
  }
  piVar4 = (int *)*puVar3;
  iVar2 = piVar4[2];
  if (*piVar4 == iVar2) {
    FUN_00edff4c(piVar4,iVar2,1,1,1);
    iVar2 = piVar4[2];
  }
  cVar1 = *param_2;
  *(undefined1 *)(piVar4[1] + iVar2) = 0x3a;
  piVar4[2] = iVar2 + 1;
  if (cVar1 == '\x06') {
    piVar4 = (int *)*puVar3;
    iVar2 = piVar4[2];
    if ((uint)(*piVar4 - iVar2) < 4) {
      FUN_00edff4c(piVar4,iVar2,4,1,1);
      iVar2 = piVar4[2];
    }
    *(undefined4 *)(piVar4[1] + iVar2) = 0x6c6c756e;
    piVar4[2] = iVar2 + 4;
    return 0;
  }
  iVar2 = FUN_00e5c920(param_2,puVar3);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  return iVar2;
}

