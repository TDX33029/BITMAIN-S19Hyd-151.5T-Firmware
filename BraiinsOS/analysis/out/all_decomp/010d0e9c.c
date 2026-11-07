// FUN_010d0e9c @ 010d0e9c size=752 calls_out=8 calls_in=0
// strings: I2C: no ACK received

/* WARNING: Removing unreachable block (ram,0x010d105c) */

void FUN_010d0e9c(undefined1 *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined4 local_30;
  int *local_2c;
  int local_28;
  
  FUN_010d0854(&local_30);
  if ((char)local_30 == '\x01') {
    uVar14 = (**(code **)(*local_2c + 8))();
    puVar1 = (undefined8 *)thunk_FUN_016d4a50(0xc);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    *puVar1 = uVar14;
    *(undefined1 *)(puVar1 + 1) = 0x28;
    *(undefined8 **)(param_1 + 4) = puVar1;
    *param_1 = 3;
    return;
  }
  if (local_30._1_1_ == '\0') {
    *param_1 = 4;
    return;
  }
  uVar11 = param_2[8];
  uVar12 = param_2[9];
  puVar2 = (undefined4 *)(**(code **)(uVar12 + 0x10))(uVar11);
  if ((puVar2 == (undefined4 *)0x0) &&
     (puVar2 = (undefined4 *)(**(code **)(uVar12 + 0x14))(uVar11), puVar2 == (undefined4 *)0x0)) {
    uVar10 = *param_2;
    uVar8 = param_2[1];
    piVar5 = (int *)param_2[2];
    if ((uVar10 == 0 && uVar8 == 0) && piVar5 == (int *)0x0) {
      puVar2 = (undefined4 *)(**(code **)(uVar12 + 0x18))(uVar11);
      if (puVar2 == (undefined4 *)0x0) goto LAB_010d0f4c;
    }
    else {
      piVar6 = piVar5;
      uVar7 = uVar10;
      uVar9 = uVar8;
LAB_010d1018:
      do {
        local_30 = 0x7fffffff;
        if (uVar7 < 0x7fffffff) {
          local_30 = uVar7;
        }
        if (uVar9 != 0) {
          local_30 = 0x7fffffff;
        }
        bVar13 = uVar7 < local_30;
        uVar7 = uVar7 - local_30;
        uVar9 = uVar9 - bVar13;
        local_2c = piVar6;
        iVar3 = FUN_016e041a(&local_30,&local_30);
        piVar6 = (int *)0x0;
        if (iVar3 == -1) {
          piVar6 = (int *)FUN_016d2bc8();
          local_28 = *piVar6;
          if (local_28 != 4) goto LAB_010d1170;
          bVar13 = CARRY4(uVar7,local_30);
          uVar7 = uVar7 + local_30;
          uVar9 = uVar9 + ((int)local_30 >> 0x1f) + (uint)bVar13;
          local_28 = 4;
          piVar6 = local_2c;
          if (0 < (int)local_2c) goto LAB_010d1018;
        }
      } while (uVar7 != 0 || uVar9 != 0);
      puVar2 = (undefined4 *)(**(code **)(uVar12 + 0x18))(uVar11);
      if (puVar2 == (undefined4 *)0x0) {
        do {
          local_30 = 0x7fffffff;
          if (uVar10 < 0x7fffffff) {
            local_30 = uVar10;
          }
          if (uVar8 != 0) {
            local_30 = 0x7fffffff;
          }
          bVar13 = uVar10 < local_30;
          uVar10 = uVar10 - local_30;
          uVar8 = uVar8 - bVar13;
          local_2c = piVar5;
          iVar3 = FUN_016e041a(&local_30,&local_30);
          piVar5 = (int *)0x0;
          if (iVar3 == -1) {
            piVar5 = (int *)FUN_016d2bc8();
            local_28 = *piVar5;
            if (local_28 != 4) {
LAB_010d1170:
                    /* WARNING: Subroutine does not return */
              FUN_015f3600(&local_28,&DAT_005688c0,0,&DAT_018aadd0);
            }
            bVar13 = CARRY4(uVar10,local_30);
            uVar10 = uVar10 + local_30;
            uVar8 = uVar8 + ((int)local_30 >> 0x1f) + (uint)bVar13;
            local_28 = 4;
            piVar5 = local_2c;
          }
        } while ((0 < (int)piVar5) || (uVar10 != 0 || uVar8 != 0));
        goto LAB_010d0f4c;
      }
    }
  }
  (**(code **)*puVar2)();
LAB_010d0f4c:
  iVar3 = thunk_FUN_016d4a50(0x14);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x14);
  }
  FUN_016dd1aa(iVar3,"I2C: no ACK received",0x14);
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *puVar2 = 0x14;
  puVar2[1] = iVar3;
  puVar2[2] = 0x14;
  puVar4 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined1 *)(puVar4 + 2) = 0x28;
  *(undefined4 **)(param_1 + 4) = puVar4;
  *param_1 = 3;
  *puVar4 = puVar2;
  puVar4[1] = &DAT_01885414;
  return;
}

