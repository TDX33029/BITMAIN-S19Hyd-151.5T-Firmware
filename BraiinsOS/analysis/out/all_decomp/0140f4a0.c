// FUN_0140f4a0 @ 0140f4a0 size=896 calls_out=7 calls_in=3
// strings: 

void FUN_0140f4a0(int param_1,undefined4 param_2,int *param_3)

{
  uint ****ppppuVar1;
  int *piVar2;
  uint **ppuVar3;
  uint ****ppppuVar4;
  int iVar5;
  bool bVar6;
  undefined4 *****local_1d0;
  uint **local_1cc;
  undefined *local_1c8;
  int local_1c4;
  int local_1c0;
  undefined4 uStack_1bc;
  int iStack_1b8;
  undefined4 uStack_1b4;
  undefined4 *****local_1b0;
  uint **local_1ac;
  undefined4 *local_1a8;
  uint *local_1a4;
  uint ****local_1a0;
  uint **local_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 ****local_e8;
  code *local_e4;
  uint local_e0;
  int iStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  int local_d0;
  undefined4 uStack_cc;
  uint local_2c;
  undefined4 ***local_28;
  
  local_d0 = DAT_018d8a48;
  local_e0 = 2;
  if (DAT_018dd947 == '\0') {
    if (*(int *)(DAT_018d8a48 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018a48b4);
    }
    local_1a8 = (undefined4 *)(DAT_018d8a48 + 0x1c);
    local_1a0 = (uint ****)*local_1a8;
    local_19c = *(uint ***)(DAT_018d8a48 + 0x20);
    uStack_198 = *(undefined4 *)(DAT_018d8a48 + 0x24);
    uStack_194 = *(undefined4 *)(DAT_018d8a48 + 0x28);
    local_190 = 0;
    local_2c = param_3[1];
    local_28 = (undefined4 ***)param_3[2];
    if (((*(uint *)(*param_3 + 0x38) <= local_2c) ||
        (piVar2 = (int *)(*(int *)(*param_3 + 0x34) + local_2c * 0xf8),
        *piVar2 == 3 && piVar2[1] == 0)) ||
       (local_1a4 = (uint *)(piVar2 + 0x35), (undefined4 ***)*local_1a4 != local_28)) {
      local_1d0 = (undefined4 *****)&local_28;
      local_1cc = (uint **)FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00599806,&local_1d0,&DAT_01882550);
    }
    local_1cc = &local_1a4;
    local_1d0 = &local_1a0;
    local_1b0 = &local_1d0;
    local_1ac = (uint **)0x1;
    local_1c8 = &DAT_018a4200;
    FUN_01694880(&local_e8,&local_1b0);
  }
  local_1d0 = (undefined4 *****)local_e8;
  local_1cc = (uint **)local_e4;
  local_1c8 = (undefined *)local_e0;
  local_1c4 = iStack_dc;
  local_1c0 = local_d8;
  uStack_1bc = uStack_d4;
  iStack_1b8 = local_d0;
  uStack_1b4 = uStack_cc;
  if (local_e0 != 2) {
    if ((local_e0 & 1) != 0) {
      iStack_dc = iStack_dc + (*(int *)(local_d8 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_d8 + 0x30))(iStack_dc,&local_1d0);
  }
  iVar5 = *param_3;
  ppppuVar4 = (uint ****)param_3[1];
  ppuVar3 = (uint **)param_3[2];
  while( true ) {
    local_1b0 = (undefined4 *****)ppppuVar4;
    local_1ac = ppuVar3;
    if (((*(uint *****)(iVar5 + 0x38) <= ppppuVar4) ||
        (piVar2 = (int *)(*(int *)(iVar5 + 0x34) + (int)ppppuVar4 * 0xf8),
        *piVar2 == 3 && piVar2[1] == 0)) || ((uint **)piVar2[0x35] != ppuVar3)) {
      local_e4 = FUN_0101a4ac;
      local_e8 = (undefined4 ****)&local_1ac;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00599806,&local_e8,&DAT_01882560);
    }
    FUN_01419c08(&local_1a0,piVar2 + 0x1b,param_2);
    if ((char)local_1a0 == '\t') break;
    FUN_016dd1aa(&local_e8,&local_1a0,0xb8);
    FUN_0140f8a8(&local_e8);
  }
  local_e8 = (undefined4 ****)&local_19c;
  local_1a0 = ppppuVar4;
  local_19c = ppuVar3;
  if (((*(uint *****)(iVar5 + 0x38) <= ppppuVar4) ||
      (piVar2 = (int *)(*(int *)(iVar5 + 0x34) + (int)ppppuVar4 * 0xf8),
      *piVar2 == 3 && piVar2[1] == 0)) ||
     (((uint **)piVar2[0x35] != ppuVar3 ||
      (((piVar2[0x38] = 0, *(uint *****)(iVar5 + 0x38) <= ppppuVar4 ||
        (piVar2 = (int *)(*(int *)(iVar5 + 0x34) + (int)ppppuVar4 * 0xf8),
        *piVar2 == 3 && piVar2[1] == 0)) || ((uint **)piVar2[0x35] != ppuVar3)))))) {
    local_e4 = FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00599806,&local_e8,&DAT_01882560);
  }
  ppppuVar1 = *(uint *****)(param_1 + 0x3c);
  piVar2[0x37] = 0;
  bVar6 = ppppuVar1 == (uint ****)0x1;
  if (bVar6) {
    ppppuVar1 = *(uint *****)(param_1 + 0x40);
  }
  if ((bVar6 && ppppuVar4 == ppppuVar1) && (ppuVar3 == *(uint ***)(param_1 + 0x44))) {
    *(undefined4 *)(param_1 + 0x3c) = 2;
  }
  if (local_1c8 != (undefined *)0x2) {
    iVar5 = local_1c4;
    if (((uint)local_1c8 & 1) != 0) {
      iVar5 = local_1c4 + (*(int *)(local_1c0 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_1c0 + 0x34))(iVar5,&local_1d0);
  }
  FUN_005c3320(&local_1d0);
  return;
}

