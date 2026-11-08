// FUN_014812e4 @ 014812e4 size=352 calls_out=4 calls_in=1
// strings: 

void FUN_014812e4(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_c0;
  undefined4 local_bc;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int *local_1c;
  
  local_a0 = thunk_FUN_016d4a50(0xa90);
  if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xa90);
  }
  *(undefined4 *)(local_a0 + 0xa80) = 0;
  *(undefined4 *)(local_a0 + 0xa84) = 0;
  *(undefined4 *)(local_a0 + 0xa88) = 0;
  *(undefined4 *)(local_a0 + 0xa8c) = 0;
  local_bc = 1;
  local_c0 = 1;
  local_3c = 1;
  local_48 = 0;
  local_60 = 0;
  local_78 = 0;
  local_80 = 0;
  local_9c = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_38 = 0;
  local_40 = 0;
  local_44 = 0;
  local_1c = (int *)0x0;
  local_50 = local_a0;
  local_4c = local_a0;
  iVar3 = FUN_016d51b0(&local_1c,0x20,0xa0);
  piVar2 = local_1c;
  if ((iVar3 != 0) || (local_1c == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(0x20,0xa0);
  }
  FUN_016dd1aa(local_1c,&local_c0,0xa0);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + 1;
  if (-1 < iVar3) {
    puVar4 = (uint *)thunk_FUN_016d4a50(0x18);
    if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x18);
    }
    *(undefined1 *)(puVar4 + 5) = 0;
    *puVar4 = 1;
    puVar4[1] = 1;
    puVar4[2] = 0;
    puVar4[3] = 0;
    do {
      uVar5 = *puVar4;
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = uVar5 + 1;
    uVar6 = uVar5;
    if (uVar5 < 0x80000000) {
      uVar6 = 0;
      *param_1 = puVar4;
    }
    if (-1 < (int)uVar5) {
      param_1[3] = piVar2;
      param_1[4] = puVar4;
      *(char *)(param_1 + 2) = (char)uVar6;
      param_1[1] = piVar2;
      return;
    }
  }
  software_udf(0xfdee,0x148141c);
  return;
}

