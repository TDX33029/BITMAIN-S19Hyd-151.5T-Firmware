// FUN_01abcfcc @ 01abcfcc size=200 calls_out=2 calls_in=0
// strings: 

void FUN_01abcfcc(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined4 local_28;
  undefined4 local_24;
  
  piVar4 = (int *)*param_1;
  iVar1 = *piVar4;
  iVar3 = piVar4[1];
  local_2c = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00570eb8,8);
  local_2b = 0;
  local_30 = param_2;
  if (iVar3 != 0) {
    piVar2 = (int *)(iVar1 + 4);
    do {
      if (*piVar2 != 0) {
        (**(code **)(piVar2[1] + 0xc))(*piVar2,piVar2[-1],&local_30,&DAT_01d2e8a0);
      }
      piVar2 = piVar2 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_24 = *(undefined4 *)(piVar4[2] + 0xc);
  local_28 = *(undefined4 *)(piVar4[2] + 8);
  FUN_01302c38(&local_30,&DAT_00570600,8,&local_28,FUN_01aac074);
  FUN_01302e1c();
  return;
}

