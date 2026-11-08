// FUN_0076b548 @ 0076b548 size=892 calls_out=8 calls_in=3
// strings: 

longlong FUN_0076b548(int param_1,undefined4 param_2,undefined1 param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  uint extraout_r1;
  uint extraout_r1_00;
  int *piVar8;
  int iVar9;
  ulonglong uVar10;
  uint *local_6c;
  uint *local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 local_5c;
  uint *local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_48;
  uint *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  
  local_40 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (local_40 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *(undefined1 *)(local_40 + 1) = 0;
  *local_40 = 0;
  local_28 = 0;
  local_30 = 0;
  local_34 = 1;
  local_38 = 0x80000000;
  local_44 = (uint *)0x1;
  local_48 = 1;
  local_3c = local_40;
  local_6c = (uint *)thunk_FUN_016d4a50(0x24);
  if (local_6c == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x24);
  }
  *local_6c = local_48;
  local_6c[1] = (uint)local_44;
  local_6c[2] = (uint)local_40;
  local_6c[3] = (uint)local_3c;
  local_6c[4] = local_38;
  local_6c[5] = local_34;
  local_6c[6] = local_30;
  local_6c[7] = uStack_2c;
  local_6c[8] = local_28;
  do {
    uVar6 = *local_6c;
    bVar2 = (bool)hasExclusiveAccess(local_6c);
  } while (!bVar2);
  *local_6c = uVar6 + 1;
  if ((int)uVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x76b8d0);
    (*pcVar1)();
  }
  local_50 = CONCAT31(local_50._1_3_,param_3);
  local_58 = local_6c;
  local_54 = param_2;
  if (param_1 != 0) {
    uVar6 = *(uint *)(param_1 + 0x10);
    puVar4 = (uint *)(param_1 + 0x10);
    DataMemoryBarrier(0xb);
    while (0x7fffffff < uVar6) {
      if ((~uVar6 & 0x7fffffff) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_0040888b,0x46,&DAT_0187b670);
      }
      uVar3 = *puVar4;
      if (*puVar4 == uVar6) {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(puVar4);
          if (bVar2) {
            *puVar4 = uVar6 + 1 | 0x80000000;
            DataMemoryBarrier(0xb);
            local_3c = (undefined4 *)local_50;
            local_48 = 0;
            local_44 = local_6c;
            local_40 = (undefined4 *)param_2;
            puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x10);
            if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0x10);
            }
            *puVar5 = local_48;
            puVar5[1] = local_44;
            puVar5[2] = local_40;
            puVar5[3] = local_3c;
            piVar8 = (int *)(param_1 + 8);
            DataMemoryBarrier(0xb);
            do {
              piVar7 = (int *)*piVar8;
              bVar2 = (bool)hasExclusiveAccess(piVar8);
            } while (!bVar2);
            *piVar8 = (int)puVar5;
            DataMemoryBarrier(0xb);
            *piVar7 = (int)puVar5;
            puVar4 = (uint *)(param_1 + 0x20);
            DataMemoryBarrier(0xb);
            do {
              uVar6 = *puVar4;
              bVar2 = (bool)hasExclusiveAccess(puVar4);
            } while (!bVar2);
            *puVar4 = uVar6 | 2;
            DataMemoryBarrier(0xb);
            if (uVar6 == 0) {
              iVar9 = *(int *)(param_1 + 0x18);
              *(undefined4 *)(param_1 + 0x18) = 0;
              DataMemoryBarrier(0xb);
              do {
                bVar2 = (bool)hasExclusiveAccess(puVar4);
              } while (!bVar2);
              *puVar4 = *puVar4 & 0xfffffffd;
              if (iVar9 != 0) {
                (**(code **)(iVar9 + 4))(*(undefined4 *)(param_1 + 0x1c));
              }
            }
            local_5c = 2;
            FUN_0076b9c8(&local_68);
            return CONCAT44(local_6c,1);
          }
          uVar3 = *puVar4;
        } while (*puVar4 == uVar6);
      }
      uVar6 = uVar3;
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    }
  }
  uStack_60 = local_50;
  local_5c = 1;
  local_68 = local_6c;
  uStack_64 = param_2;
  FUN_0076b9c8(&local_68);
  uVar6 = extraout_r1;
  if (local_6c != (uint *)0x0) {
    uVar6 = local_6c[4];
    DataMemoryBarrier(0xb);
    if ((int)uVar6 < 0) {
      puVar4 = local_6c + 4;
      DataMemoryBarrier(0xb);
      do {
        uVar6 = *puVar4 & 0x7fffffff;
        bVar2 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar2);
      *puVar4 = uVar6;
      DataMemoryBarrier(0xb);
    }
    if (local_6c != (uint *)0x0) {
      do {
        while( true ) {
          uVar10 = FUN_00cefe20(&local_6c);
          uVar6 = (uint)(uVar10 >> 0x20);
          if (((uint)uVar10 & 0xff) != 2) break;
          if (local_6c == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_0187bde8);
          }
          DataMemoryBarrier(0xb);
          if (local_6c[4] == 0) goto LAB_0076b830;
          FUN_016da3a8();
        }
      } while ((uVar10 & 1) != 0);
LAB_0076b830:
      if (local_6c != (uint *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          uVar6 = *local_6c;
          bVar2 = (bool)hasExclusiveAccess(local_6c);
        } while (!bVar2);
        *local_6c = uVar6 - 1;
        if (uVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078cf4c(local_6c);
          return (ulonglong)extraout_r1_00 << 0x20;
        }
      }
    }
  }
  return (ulonglong)uVar6 << 0x20;
}

