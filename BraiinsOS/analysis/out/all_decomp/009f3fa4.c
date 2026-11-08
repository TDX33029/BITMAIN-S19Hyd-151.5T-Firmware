// FUN_009f3fa4 @ 009f3fa4 size=452 calls_out=3 calls_in=1
// strings: 

void FUN_009f3fa4(uint *param_1,uint *param_2)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *local_34;
  code *local_30;
  uint local_2c;
  uint local_28;
  
  if (*param_2 != 0 || param_2[1] != 0) {
LAB_009f3fec:
    uVar7 = param_2[4];
    FUN_016a4f80(&local_34,uVar7,*param_2 - 1);
    if (local_34 != (uint *)0x0) {
      uVar4 = local_34[1];
      uVar9 = local_34[2];
      uVar8 = *local_34;
      uVar3 = param_2[3];
      uVar6 = local_34[3];
      *param_2 = uVar9;
      param_2[1] = uVar6;
      if ((uVar8 & param_2[2]) == 0 && (uVar4 & uVar3) == 0) {
        *param_1 = param_2[2];
        param_1[1] = uVar3;
        param_1[2] = (uint)local_34;
        param_1[3] = (uint)local_30;
        param_1[4] = local_2c;
        param_1[5] = uVar7;
        return;
      }
      puVar2 = local_34 + 0xe;
      DataMemoryBarrier(0xb);
      uVar7 = local_34[0xe];
      do {
        if ((uVar7 & 3) == 2) {
          local_28 = 2;
          local_30 = FUN_00facc48;
          local_34 = &local_28;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0041504f,&local_34,&DAT_018ae754);
        }
        uVar4 = (uVar7 & 0x3fffffff) >> 2;
        uVar5 = uVar7 & 3 ^ 1;
        uVar3 = uVar7 & 0xc0000000 | 3;
        uVar8 = uVar4 ^ 1;
        if (uVar5 != 0 || uVar8 != 0) {
          uVar3 = uVar4 * 4 - 4 | uVar7 & 0xc0000003;
        }
        uVar4 = *puVar2;
        if (uVar4 == uVar7) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(puVar2);
            if (bVar1) {
              *puVar2 = uVar3;
              DataMemoryBarrier(0xb);
              if (uVar5 == 0 && uVar8 == 0) {
                FUN_009ebe80();
              }
              if (uVar9 != 0 || uVar6 != 0) goto LAB_009f3fec;
              goto LAB_009f4104;
            }
            uVar4 = *puVar2;
          } while (uVar4 == uVar7);
        }
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        uVar7 = uVar4;
      } while( true );
    }
  }
LAB_009f4104:
  param_1[5] = 0;
  return;
}

