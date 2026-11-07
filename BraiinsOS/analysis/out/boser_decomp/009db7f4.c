// FUN_009db7f4 @ 009db7f4 size=216 calls_out=2 calls_in=0
// strings: 

void FUN_009db7f4(int param_1,undefined4 param_2)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(param_1 + 8);
  FUN_009c9810(param_2,param_2,iVar4,0);
  FUN_01ac6d2c(param_2,iVar3,iVar3 + iVar4);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x14);
  FUN_009c9810(param_2,extraout_r1,iVar4,0);
  FUN_01ac6d2c(param_2,iVar3,iVar3 + iVar4);
  if (*(int *)(param_1 + 0x18) == -0x80000000) {
    puVar2 = &local_23;
    local_23 = 0;
    puVar1 = &local_22;
  }
  else {
    local_21 = 1;
    puVar2 = *(undefined1 **)(param_1 + 0x1c);
    iVar3 = *(int *)(param_1 + 0x20);
    FUN_01ac6d2c(param_2,&local_21,(int)register0x00000054 + -0x20);
    FUN_009c9810(param_2,extraout_r1_00,iVar3,0);
    puVar1 = puVar2 + iVar3;
  }
  FUN_01ac6d2c(param_2,puVar2,puVar1);
  local_22 = *(undefined1 *)(param_1 + 0x24);
  FUN_01ac6d2c(param_2,&local_22,&local_21);
  return;
}

