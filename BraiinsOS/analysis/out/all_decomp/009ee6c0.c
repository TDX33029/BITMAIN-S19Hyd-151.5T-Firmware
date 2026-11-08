// FUN_009ee6c0 @ 009ee6c0 size=260 calls_out=2 calls_in=11
// strings: 

void FUN_009ee6c0(int *param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_24;
  undefined4 *local_20;
  code *local_1c;
  
  uVar3 = *(uint *)(*param_1 + 0x38);
  puVar2 = (uint *)(*param_1 + 0x38);
  DataMemoryBarrier(0xb);
  do {
    if ((uVar3 & 3) == 2) {
      local_24 = 2;
      local_1c = FUN_00facc48;
      local_20 = &local_24;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0041504f,&local_20,&DAT_018ae754);
    }
    uVar6 = (uVar3 & 0x3fffffff) >> 2;
    uVar4 = uVar3 & 3 ^ 1;
    uVar5 = uVar3 & 0xc0000000 | 3;
    uVar7 = uVar6 ^ 1;
    if (uVar4 != 0 || uVar7 != 0) {
      uVar5 = uVar6 * 4 - 4 | uVar3 & 0xc0000003;
    }
    uVar6 = *puVar2;
    if (*puVar2 == uVar3) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
        if (bVar1) {
          *puVar2 = uVar5;
          DataMemoryBarrier(0xb);
          if (uVar4 == 0 && uVar7 == 0) {
            FUN_009ebe80(param_1[1],param_1[2]);
            return;
          }
          return;
        }
        uVar6 = *puVar2;
      } while (*puVar2 == uVar3);
    }
    uVar3 = uVar6;
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
  } while( true );
}

