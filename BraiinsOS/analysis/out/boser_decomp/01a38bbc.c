// FUN_01a38bbc @ 01a38bbc size=116 calls_out=1 calls_in=0
// strings: 

void FUN_01a38bbc(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int *piVar4;
  code *pcVar5;
  int local_10;
  int local_c;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 0x14) == -0x7fffffff) {
    pcVar5 = FUN_01a2f5d0;
    puVar2 = &DAT_0052c2af;
    piVar4 = &local_c;
    uVar3 = 3;
    local_c = iVar1;
  }
  else {
    puVar2 = &DAT_0052e42c;
    pcVar5 = FUN_01a2f3bc;
    piVar4 = &local_10;
    uVar3 = 2;
    local_10 = iVar1;
  }
  FUN_013032f4(param_2,puVar2,uVar3,piVar4,pcVar5);
  return;
}

