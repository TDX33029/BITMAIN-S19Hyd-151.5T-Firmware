// FUN_00ecf880 @ 00ecf880 size=508 calls_out=5 calls_in=1
// strings: parent_uuid

undefined4 FUN_00ecf880(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*param_1 != '\0') {
    local_50 = 10;
    uVar5 = FUN_0157c50c(&local_50,0,0);
    return uVar5;
  }
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar3 = (int *)*puVar4;
    iVar2 = piVar3[2];
    if (*piVar3 == iVar2) {
      FUN_00edff4c(piVar3,iVar2,1,1,1);
      iVar2 = piVar3[2];
    }
    *(undefined1 *)(piVar3[1] + iVar2) = 0x2c;
    piVar3[2] = iVar2 + 1;
  }
  param_1[1] = '\x02';
  FUN_00e5d350(&local_50,*puVar4,"parent_uuid",0xb);
  if ((char)local_50 != '\x04') {
    uVar5 = FUN_0157c4a0(local_50,local_4c);
    return uVar5;
  }
  piVar3 = (int *)*puVar4;
  iVar2 = piVar3[2];
  if (*piVar3 == iVar2) {
    FUN_00edff4c(piVar3,iVar2,1,1,1);
    iVar2 = piVar3[2];
  }
  cVar1 = *param_2;
  *(undefined1 *)(piVar3[1] + iVar2) = 0x3a;
  piVar3[2] = iVar2 + 1;
  if (cVar1 != '\0') {
    uVar5 = *puVar4;
    local_24 = 0;
    local_28 = 0;
    local_2c = 0;
    FUN_00ed25b8(param_2 + 1,&local_50);
    FUN_00e5d350(&local_20,uVar5,&local_50,0x24);
    if ((char)local_20 == '\x04') {
      return 0;
    }
    uVar5 = FUN_0157c4a0(local_20,local_1c);
    return uVar5;
  }
  piVar3 = (int *)*puVar4;
  iVar2 = piVar3[2];
  if ((uint)(*piVar3 - iVar2) < 4) {
    FUN_00edff4c(piVar3,iVar2,4,1,1);
    iVar2 = piVar3[2];
  }
  *(undefined4 *)(piVar3[1] + iVar2) = 0x6c6c756e;
  piVar3[2] = iVar2 + 4;
  return 0;
}

