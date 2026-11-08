// FUN_017f1138 @ 017f1138 size=320 calls_out=4 calls_in=2
// strings: assertion failed: slot.next.is_none() | invalid key

void FUN_017f1138(undefined1 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
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
  uVar4 = param_2[1];
  if (uVar4 < *(uint *)(param_3 + 8)) {
    uVar1 = param_2[2];
    uVar5 = *(uint *)(param_3 + 0x10);
    puVar3 = (uint *)(*(int *)(param_3 + 4) + uVar4 * 0xc0);
    uVar2 = *puVar3;
    FUN_01bed4e2(auStack_e0,puVar3 + 1,0xbc);
    *puVar3 = 2;
    puVar3[1] = uVar5;
    if (uVar2 != 2) {
      FUN_01bed4e2((uint)&local_1a0 | 4,auStack_e0,0xbc);
      *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + -1;
      *(uint *)(param_3 + 0x10) = uVar4;
      if (uVar4 == uVar1) {
        if (uVar2 != 0) {
          local_1a0 = uVar2;
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: slot.next.is_none()",0x25,&DAT_01d1d034);
        }
        *param_2 = 0;
      }
      else {
        local_1a0 = 0;
        if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d1d024);
        }
        *param_2 = 1;
        param_2[1] = local_19c;
      }
      local_1a0 = 0;
      FUN_01bed4e2(param_1,auStack_198,0xb8);
      return;
    }
    FUN_01bed4e2(puVar3 + 1,auStack_e0,0xbc);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0130739c("invalid key",0xb,&DAT_01d1d014);
}

