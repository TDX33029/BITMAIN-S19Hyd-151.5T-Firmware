// FUN_00eac2e8 @ 00eac2e8 size=152 calls_out=2 calls_in=2
// strings: 

void FUN_00eac2e8(int param_1)

{
  char cVar1;
  uint uVar2;
  uint local_20;
  uint local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  uint *local_10;
  undefined1 *local_c;
  
  local_18 = (undefined1 *)&local_20;
  local_1c = *(uint *)(param_1 + 0x60);
  if (local_1c != 0) {
    uVar2 = 0;
    do {
      cVar1 = *(char *)(*(int *)(param_1 + 0x5c) + uVar2);
      if (cVar1 != '\r' && cVar1 != '\n') {
        local_20 = uVar2;
        if (local_1c < uVar2) {
          local_10 = &local_1c;
          local_c = &LAB_01a6a304;
          local_14 = &LAB_01a6a304;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_18,&DAT_01d2bbe0);
        }
        goto LAB_00eac338;
      }
      uVar2 = uVar2 + 1;
    } while (local_1c != uVar2);
    uVar2 = local_1c;
LAB_00eac338:
    FUN_01283ef4((int *)(param_1 + 0x5c),uVar2);
  }
  return;
}

