// FUN_009bd02c @ 009bd02c size=364 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_009bd02c(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  uint local_24;
  uint *local_20;
  code *local_1c;
  
  uVar8 = *param_2;
  iVar7 = param_2[1];
  iVar9 = *(int *)*param_1;
  local_1c = FUN_00faaf34;
  local_20 = (uint *)&DAT_005694b0;
  iVar2 = FUN_00fa948c(uVar8,iVar7,&DAT_00584e74,&local_20);
  uVar6 = 1;
  if (iVar2 == 0) {
    uVar10 = thunk_FUN_016de0ee(0,0x1b0);
    iVar2 = (int)uVar10 + (int)((ulonglong)uVar10 >> 0x20);
    if ((*(char *)(iVar2 + 8) != '\x01') && (iVar2 = FUN_00a30258(iVar2,0), iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_015f853c(&DAT_018ae900);
    }
    uVar4 = *(uint *)(iVar2 + 4);
    uVar3 = *(uint *)(iVar9 + (uVar4 & 0xff) * 4);
    DataMemoryBarrier(0xb);
    if (uVar3 != 0) {
      uVar5 = uVar4;
      do {
        if ((uVar3 & 1) == 0) {
          if (*(uint *)(uVar3 + 0xc) == uVar4) {
            local_20 = &local_24;
            local_1c = FUN_009cbab0;
            local_24 = uVar3;
            iVar2 = FUN_00fa948c(uVar8,iVar7,&DAT_00594982,&local_20);
            if (iVar2 != 0) {
              return 1;
            }
            goto LAB_009bd144;
          }
          break;
        }
        uVar1 = uVar5 & 0xffff;
        uVar5 = uVar5 >> 8;
        uVar3 = *(uint *)((uVar3 & 0xfffffffe) + (uVar1 >> 8) * 4);
        DataMemoryBarrier(0xb);
      } while (uVar3 != 0);
    }
    iVar2 = (**(code **)(iVar7 + 0xc))(uVar8,&DAT_00568af8,4);
    if (iVar2 == 0) {
LAB_009bd144:
      local_1c = FUN_00faaf34;
      local_20 = (uint *)&DAT_00567d18;
      uVar6 = FUN_00fa948c(uVar8,iVar7,&DAT_00590e71,&local_20);
    }
  }
  return uVar6;
}

