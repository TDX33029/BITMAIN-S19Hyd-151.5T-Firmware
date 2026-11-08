// FUN_016a4f80 @ 016a4f80 size=368 calls_out=1 calls_in=18
// strings: 

void FUN_016a4f80(int *param_1,int *param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 local_1c;
  undefined4 *local_18;
  code *local_14;
  
  uVar3 = (param_3 & 0x3fffffff) >> 0x16;
  if (uVar3 < (uint)param_2[1]) {
    iVar8 = *(int *)(*param_2 + uVar3 * 4);
    DataMemoryBarrier(0xb);
    if (iVar8 != 0) {
      uVar3 = 0x20 - LZCOUNT((param_3 & 0x3fffff) + 0x20 >> 6);
      if (uVar3 < *(uint *)(iVar8 + 0xc)) {
        piVar5 = (int *)(*(int *)(iVar8 + 8) + uVar3 * 0x14);
        if ((*piVar5 != 0) && (uVar3 = (param_3 & 0x3fffff) - piVar5[4], uVar3 < (uint)piVar5[1])) {
          iVar7 = *piVar5 + uVar3 * 0x40;
          puVar4 = (uint *)(iVar7 + 0x38);
          uVar3 = *(uint *)(iVar7 + 0x38);
          DataMemoryBarrier(0xb);
          while( true ) {
            if ((uVar3 & 3) == 2) {
              local_1c = 2;
              local_14 = FUN_00facc48;
              local_18 = &local_1c;
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_0041504f,&local_18,&DAT_018ae754);
            }
            uVar6 = (uVar3 & 0x3fffffff) >> 2;
            if (((0x3fffffff < (uVar3 ^ param_3)) || ((uVar3 & 3) != 0)) || (0xffffffd < uVar6))
            break;
            uVar2 = *puVar4;
            if (*puVar4 == uVar3) {
              DataMemoryBarrier(0xb);
              do {
                bVar1 = (bool)hasExclusiveAccess(puVar4);
                if (bVar1) {
                  *puVar4 = uVar3 & 0xc0000000 | (uVar6 + 1) * 4;
                  DataMemoryBarrier(0xb);
                  *param_1 = iVar7;
                  param_1[1] = iVar8;
                  param_1[2] = param_3;
                  return;
                }
                uVar2 = *puVar4;
              } while (*puVar4 == uVar3);
            }
            uVar3 = uVar2;
            ClearExclusiveLocal();
            DataMemoryBarrier(0xb);
          }
        }
      }
    }
  }
  *param_1 = 0;
  return;
}

