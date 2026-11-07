// FUN_0147c174 @ 0147c174 size=216 calls_out=2 calls_in=1
// strings: 

void FUN_0147c174(byte *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1[0x348] == 0) {
    if (*param_1 < 2) {
      iVar4 = 0x10;
      iVar5 = 0xc;
      iVar2 = 0x14;
      iVar3 = 8;
      goto LAB_0147c230;
    }
    piVar1 = *(int **)(param_1 + 4);
    (**(code **)(*piVar1 + 0x10))(piVar1 + 3,piVar1[1],piVar1[2]);
    iVar4 = 0x10;
    iVar5 = 0xc;
    iVar2 = 0x14;
    iVar3 = 8;
  }
  else {
    if (param_1[0x348] != 3) {
      return;
    }
    FUN_0147bf80(param_1 + 0x30);
    if (param_1[0x18] < 2) {
      iVar4 = 0x28;
      iVar5 = 0x24;
      iVar2 = 0x2c;
      iVar3 = 0x20;
      goto LAB_0147c230;
    }
    piVar1 = *(int **)(param_1 + 0x1c);
    (**(code **)(*piVar1 + 0x10))(piVar1 + 3,piVar1[1],piVar1[2]);
    iVar4 = 0x28;
    iVar5 = 0x24;
    iVar2 = 0x2c;
    iVar3 = 0x20;
  }
  thunk_FUN_016d3fb4(piVar1);
LAB_0147c230:
                    /* WARNING: Could not recover jumptable at 0x0147c248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + iVar3) + 0x10))
            (param_1 + iVar2,*(undefined4 *)(param_1 + iVar5),*(undefined4 *)(param_1 + iVar4));
  return;
}

