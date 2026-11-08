// FUN_00a7b034 @ 00a7b034 size=232 calls_out=4 calls_in=2
// strings: 

void FUN_00a7b034(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int *local_40;
  int *local_3c;
  undefined4 uStack_38;
  int *local_34;
  int local_2c;
  int local_28;
  int iStack_24;
  
  iVar1 = *(int *)(param_2 + 0x20);
  uVar6 = *(undefined4 *)(param_2 + 0x10);
  piVar5 = *(int **)(param_2 + 0x14);
  uVar4 = *(uint *)(param_2 + 0x18);
  if ((iVar1 != 0) && (iVar3 = iVar1 * 4 + 4, iVar1 + iVar3 != -5)) {
    thunk_FUN_01be4678(*(int *)(param_2 + 0x1c) - iVar3);
  }
  iVar1 = uVar4 * 4;
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar4 = uVar4 - (uVar4 >> 1);
  }
  FUN_006c7a24(param_1 + 0x10,uVar4);
  piVar2 = piVar5;
  local_40 = piVar5;
  local_3c = piVar5;
  uStack_38 = uVar6;
  local_34 = piVar5 + iVar1;
  do {
    if (piVar2 == piVar5 + iVar1) {
LAB_00a7b108:
      local_3c = piVar2;
      FUN_009632d0(&local_40);
      return;
    }
    if (*piVar2 == -0x80000000) {
      piVar2 = piVar2 + 4;
      goto LAB_00a7b108;
    }
    iStack_24 = piVar2[2];
    local_28 = piVar2[1];
    local_2c = *piVar2;
    FUN_006dd1ec(param_1,&local_2c);
    piVar2 = piVar2 + 4;
  } while( true );
}

