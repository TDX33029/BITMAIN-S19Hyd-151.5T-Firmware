// FUN_00c0309c @ 00c0309c size=460 calls_out=5 calls_in=1
// strings: tuning_duration

int FUN_00c0309c(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*param_1 != '\0') {
    local_30 = 10;
    iVar2 = FUN_0157c50c(&local_30,0,0);
    return iVar2;
  }
  piVar3 = *(int **)(param_1 + 4);
  piVar1 = (int *)*piVar3;
  if (param_1[1] != '\x01') {
    iVar2 = piVar1[2];
    if (*piVar1 == iVar2) {
      FUN_00d653ec(piVar1,iVar2,1,1,1);
      iVar2 = piVar1[2];
    }
    *(undefined1 *)(piVar1[1] + iVar2) = 0x2c;
    piVar1[2] = piVar1[2] + 1;
    piVar1 = (int *)*piVar3;
  }
  param_1[1] = '\x02';
  FUN_00cd2b24(&local_30,piVar1,"tuning_duration",0xf);
  if ((char)local_30 != '\x04') {
    iVar2 = FUN_0157c4a0(local_30,local_2c);
    return iVar2;
  }
  piVar1 = (int *)*piVar3;
  iVar2 = piVar1[2];
  if (*piVar1 == iVar2) {
    FUN_00d653ec(piVar1,iVar2,1,1,1);
    iVar2 = piVar1[2];
  }
  *(undefined1 *)(piVar1[1] + iVar2) = 0x3a;
  piVar1[2] = piVar1[2] + 1;
  if (param_5 == &DAT_3b9aca00) {
    piVar3 = (int *)*piVar3;
    iVar2 = piVar3[2];
    if ((uint)(*piVar3 - iVar2) < 4) {
      FUN_00d653ec(piVar3,iVar2,4,1,1);
      iVar2 = piVar3[2];
    }
    *(undefined4 *)(piVar3[1] + iVar2) = 0x6c6c756e;
    piVar3[2] = piVar3[2] + 4;
    return 0;
  }
  iVar2 = FUN_00c4d5d0(param_3,param_4,param_5,piVar3);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  return iVar2;
}

