// FUN_010c0fb8 @ 010c0fb8 size=200 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_010c0fb8(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  int local_24;
  uint local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_14 = 0x45;
  uVar4 = 0;
  local_c = 0;
  local_10 = 0;
  local_18 = 0;
  FUN_010b246c(&local_24,param_1,&local_18);
  if (local_24 == 1) {
    if (*(uint *)(local_1c + 0x28) <= local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(local_20,*(uint *)(local_1c + 0x28),&DAT_01884ca0);
    }
    puVar3 = (uint *)(*(int *)(local_1c + 0x24) + local_20 * 0x34);
    if ((*puVar3 & 1) == 0) {
      iVar2 = local_20 * 0x34 + *(int *)(local_1c + 0x24) + 0xc;
    }
    else {
      uVar1 = puVar3[2];
      if (*(uint *)(local_1c + 0x34) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar1,*(uint *)(local_1c + 0x34),&DAT_01884c60);
      }
      iVar2 = *(int *)(local_1c + 0x30) + uVar1 * 0x24 + 0x10;
    }
    uVar4 = FUN_010c0690(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
  }
  return uVar4;
}

