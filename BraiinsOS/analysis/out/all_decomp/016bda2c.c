// FUN_016bda2c @ 016bda2c size=332 calls_out=4 calls_in=2
// strings: 

void FUN_016bda2c(uint *param_1)

{
  uint uVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  uint *puVar5;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_24;
  int *local_20;
  code *local_1c;
  
  puVar5 = &local_38;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  DataMemoryBarrier(0xb);
  pcVar3 = DAT_018dd98c;
  if (DAT_018dd98c == (code *)0x0) {
    pcVar3 = (code *)FUN_0100f390();
  }
  if (pcVar3 == (code *)0xffffffff) {
    local_24 = FUN_0100f050(&local_38,0x10);
joined_r0x016bdb00:
    if (local_24 != 0) {
LAB_016bdb44:
      local_20 = &local_24;
      local_1c = FUN_0100ef9c;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00571935,&local_20,&DAT_018af1d8);
    }
  }
  else {
    uVar4 = 0x10;
    do {
      uVar1 = (*pcVar3)(puVar5,uVar4,0);
      if ((int)uVar1 < 1) {
        if (uVar1 != 0xffffffff) goto LAB_016bdb40;
        piVar2 = (int *)FUN_016d2bc8();
        local_24 = 0x10001;
        if (0 < *piVar2) {
          local_24 = -*piVar2;
        }
        if (local_24 != -4) goto joined_r0x016bdb00;
      }
      else {
        if (uVar4 < uVar1) {
LAB_016bdb40:
          local_24 = 0x10002;
          goto LAB_016bdb44;
        }
        puVar5 = (uint *)((int)puVar5 + uVar1);
        uVar4 = uVar4 - uVar1;
      }
    } while (uVar4 != 0);
  }
  param_1[3] = local_38 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
               local_38 >> 0x18;
  *param_1 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
             local_2c >> 0x18;
  param_1[2] = local_34 << 0x18 | ((local_34 & 0xff00) >> 8) << 0x10 |
               ((local_34 & 0xff0000) >> 0x10) << 8 | (local_34 & 0x3fffffff | 0x80000000) >> 0x18;
  param_1[1] = local_30 << 0x18 | ((local_30 & 0xf00 | 0x4000) >> 8) << 0x10 |
               (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18;
  return;
}

