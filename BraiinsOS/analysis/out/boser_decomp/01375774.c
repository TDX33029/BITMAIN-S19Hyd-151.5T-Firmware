// FUN_01375774 @ 01375774 size=176 calls_out=4 calls_in=3
// strings: 

void FUN_01375774(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  uint local_28;
  uint local_24;
  
  uVar4 = *(uint *)(param_2 + 8);
  local_24 = *(uint *)(*param_1 + 4) ^ 0x7fffffff;
  if ((uint)param_1[1] < local_24) {
    local_24 = param_1[1];
  }
  local_28 = uVar4;
  if (param_3 < uVar4) {
    local_28 = param_3;
  }
  if (local_24 < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_01284540(&local_28);
  }
  iVar3 = *(int *)(param_2 + 4);
  while( true ) {
    uVar2 = uVar4;
    if (param_3 < uVar4) {
      uVar2 = param_3;
    }
    if (uVar2 == 0) break;
    uVar5 = FUN_013b1200(*param_1,param_1[1]);
    uVar1 = (uint)((ulonglong)uVar5 >> 0x20);
    if (uVar1 < uVar2) {
      uVar2 = uVar1;
    }
    FUN_01bed4e2((int)uVar5,iVar3,uVar2);
    FUN_013b1198(param_1,uVar2);
    uVar4 = uVar4 - uVar2;
    iVar3 = iVar3 + uVar2;
    param_3 = param_3 - uVar2;
    *(int *)(param_2 + 4) = iVar3;
    *(uint *)(param_2 + 8) = uVar4;
  }
  return;
}

