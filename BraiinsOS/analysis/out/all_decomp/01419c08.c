// FUN_01419c08 @ 01419c08 size=320 calls_out=4 calls_in=1
// strings: 

void FUN_01419c08(undefined1 *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_1a0;
  int local_19c;
  undefined1 auStack_198 [184];
  undefined1 auStack_e0 [188];
  
  if (*param_2 != 1) {
    *param_1 = 9;
    return;
  }
  uVar3 = param_2[1];
  if (uVar3 < *(uint *)(param_3 + 8)) {
    uVar4 = param_2[2];
    uVar5 = *(uint *)(param_3 + 0x10);
    puVar1 = (uint *)(*(int *)(param_3 + 4) + uVar3 * 0xc0);
    uVar2 = *puVar1;
    FUN_016dd1aa(auStack_e0,puVar1 + 1,0xbc);
    *puVar1 = 2;
    puVar1[1] = uVar5;
    if (uVar2 != 2) {
      FUN_016dd1aa((uint)&local_1a0 | 4,auStack_e0,0xbc);
      *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + -1;
      *(uint *)(param_3 + 0x10) = uVar3;
      if (uVar3 == uVar4) {
        if (uVar2 != 0) {
          local_1a0 = uVar2;
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00408f82,0x25,&DAT_018a58dc);
        }
        *param_2 = 0;
      }
      else {
        local_1a0 = 0;
        if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018a58cc);
        }
        *param_2 = 1;
        param_2[1] = local_19c;
      }
      local_1a0 = 0;
      FUN_016dd1aa(param_1,auStack_198,0xb8);
      return;
    }
    FUN_016dd1aa(puVar1 + 1,auStack_e0,0xbc);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8(&DAT_00412edc,0xb,&DAT_018a58bc);
}

