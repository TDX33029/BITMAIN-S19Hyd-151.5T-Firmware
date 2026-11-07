// FUN_0153880c @ 0153880c size=488 calls_out=6 calls_in=0
// strings: 

void FUN_0153880c(undefined4 *param_1,int param_2,undefined4 *param_3,int *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined2 *puVar3;
  int iVar4;
  uint *puVar5;
  uint local_90;
  uint local_8c;
  undefined1 auStack_84 [108];
  
  puVar5 = &local_90;
  if (*param_4 == -0x7ffffffb) {
    FUN_01527730(*param_3,param_4 + 1);
    *param_1 = 0x80000029;
    param_1[1] = param_2;
    param_1[2] = &DAT_018a7af8;
    return;
  }
  FUN_016dd1aa(&local_90,param_4,0x78);
  uVar2 = local_90;
  puVar3 = (undefined2 *)thunk_FUN_016d4a50(2);
  if (puVar3 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,2);
  }
  iVar4 = 1;
  param_1[1] = 1;
  param_1[3] = 1;
  if (0x80000000 < uVar2) {
    iVar4 = uVar2 + 0x7fffffff;
  }
  *param_1 = &DAT_80000013;
  uVar1 = (&UNK_0042266d)[iVar4];
  param_1[2] = puVar3;
  *puVar3 = 3;
  *(undefined1 *)(param_1 + 4) = uVar1;
  switch(iVar4) {
  case 0:
  case 3:
    goto switchD_015388c0_caseD_0;
  case 1:
    FUN_015396bc(auStack_84);
    local_8c = local_90;
    if (local_90 == 0x80000000) goto switchD_015388c0_caseD_0;
    break;
  case 2:
    if (local_8c == 0x80000000) goto switchD_015388c0_caseD_0;
    puVar5 = (uint *)((uint)&local_90 | 4);
    break;
  default:
    if (local_8c == 0x80000000) goto switchD_015388c0_caseD_0;
    puVar5 = (uint *)((uint)&local_90 | 4);
  }
  if (local_8c != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)((int)puVar5 + 4));
  }
switchD_015388c0_caseD_0:
  *(undefined1 *)(param_2 + 0x44) = 0;
  *(undefined1 *)(param_2 + 0x45) = 0;
  *(undefined1 *)(param_2 + 0x46) = 0;
  *(undefined1 *)(param_2 + 0x47) = 0;
  *(undefined1 *)(param_2 + 0x48) = 0;
  *(undefined1 *)(param_2 + 0x49) = 0;
  *(undefined1 *)(param_2 + 0x4a) = 0;
  *(undefined1 *)(param_2 + 0x4b) = 0;
  *(undefined1 *)(param_2 + 0x4c) = 0;
  *(undefined1 *)(param_2 + 0x4d) = 0;
  *(undefined1 *)(param_2 + 0x4e) = 0;
  *(undefined1 *)(param_2 + 0x4f) = 0;
  *(undefined1 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(param_2 + 0x51) = 0;
  *(undefined1 *)(param_2 + 0x52) = 0;
  *(undefined1 *)(param_2 + 0x53) = 0;
  *(undefined1 *)(param_2 + 0x54) = 0;
  *(undefined1 *)(param_2 + 0x55) = 0;
  *(undefined1 *)(param_2 + 0x56) = 0;
  *(undefined1 *)(param_2 + 0x57) = 0;
  *(undefined1 *)(param_2 + 0x58) = 0;
  *(undefined1 *)(param_2 + 0x59) = 0;
  *(undefined1 *)(param_2 + 0x5a) = 0;
  *(undefined1 *)(param_2 + 0x5b) = 0;
  *(undefined1 *)(param_2 + 0x5c) = 0;
  *(undefined1 *)(param_2 + 0x5d) = 0;
  *(undefined1 *)(param_2 + 0x5e) = 0;
  *(undefined1 *)(param_2 + 0x5f) = 0;
  *(undefined1 *)(param_2 + 0x60) = 0;
  *(undefined1 *)(param_2 + 0x61) = 0;
  *(undefined1 *)(param_2 + 0x62) = 0;
  *(undefined1 *)(param_2 + 99) = 0;
  *(undefined1 *)(param_2 + 100) = 0;
  *(undefined1 *)(param_2 + 0x65) = 0;
  *(undefined1 *)(param_2 + 0x66) = 0;
  *(undefined1 *)(param_2 + 0x67) = 0;
  *(undefined1 *)(param_2 + 0x68) = 0;
  *(undefined1 *)(param_2 + 0x69) = 0;
  *(undefined1 *)(param_2 + 0x6a) = 0;
  *(undefined1 *)(param_2 + 0x6b) = 0;
  *(undefined1 *)(param_2 + 0x6c) = 0;
  *(undefined1 *)(param_2 + 0x6d) = 0;
  *(undefined1 *)(param_2 + 0x6e) = 0;
  *(undefined1 *)(param_2 + 0x6f) = 0;
  *(undefined1 *)(param_2 + 0x70) = 0;
  *(undefined1 *)(param_2 + 0x71) = 0;
  *(undefined1 *)(param_2 + 0x72) = 0;
  *(undefined1 *)(param_2 + 0x73) = 0;
  thunk_FUN_016d3fb4(param_2);
  return;
}

