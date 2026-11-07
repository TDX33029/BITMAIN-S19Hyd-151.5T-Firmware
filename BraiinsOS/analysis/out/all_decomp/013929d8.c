// FUN_013929d8 @ 013929d8 size=1052 calls_out=1 calls_in=0
// strings: ByteClasses(

undefined4 FUN_013929d8(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined *puVar14;
  uint uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *local_3c;
  undefined *local_38;
  undefined **local_34;
  code *local_30;
  undefined **local_2c;
  undefined1 *local_28;
  
  iVar1 = param_2[1];
  uVar12 = (uint)*(byte *)(param_1 + 0xff);
  uVar10 = *param_2;
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0xc);
  if (uVar12 == 0xff) {
                    /* WARNING: Could not recover jumptable at 0x01392dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (*UNRECOVERED_JUMPTABLE)(uVar10,"ByteClasses({singletons})",0x19);
    return uVar10;
  }
  iVar2 = (*UNRECOVERED_JUMPTABLE)(uVar10,"ByteClasses(",0xc);
  if (iVar2 == 0) {
    puVar16 = (undefined *)0x0;
    uVar13 = 0;
    iVar2 = 0;
    uVar5 = 0;
    do {
      iVar7 = 1;
      uVar8 = uVar12 * 0x10000 + 0x10001 >> 8;
      if (uVar5 + 1 != uVar12 + 2) {
        iVar7 = 0;
        if (uVar12 + 2 <= uVar5) goto LAB_01392dc0;
        uVar8 = uVar5;
      }
      if (iVar7 == 2) {
LAB_01392dc0:
        uVar10 = (*UNRECOVERED_JUMPTABLE)(uVar10,&DAT_00418e07,1);
        return uVar10;
      }
      if ((iVar2 != 0) && (iVar3 = (*UNRECOVERED_JUMPTABLE)(uVar10,&DAT_0041950f,2), iVar3 != 0)) {
        return 1;
      }
      uVar15 = (uVar8 & 0xff) << 8;
      if (iVar7 != 0) {
        uVar15 = uVar8 & 0xffffff;
      }
      local_38 = (undefined *)(uVar15 >> 8);
      local_30 = FUN_007883b8;
      local_34 = &local_38;
      iVar3 = FUN_00fa948c(uVar10,iVar1,&DAT_00586748,&local_34);
      if (iVar3 != 0) {
        return 1;
      }
      uVar15 = 0;
      puVar4 = (undefined *)(uVar13 | 2);
LAB_01392b8c:
      if (iVar7 == 0) {
        uVar13 = uVar15;
        do {
          uVar6 = uVar13;
          uVar15 = uVar13;
          if (uVar13 < 0x101) {
            uVar6 = 0x100;
          }
          do {
            uVar9 = uVar15;
            if (uVar6 == uVar9) {
              uVar15 = uVar6;
              if (uVar13 < 0x101) {
                uVar15 = 0x101;
              }
              goto joined_r0x01392c58;
            }
            uVar15 = uVar9 + 1;
          } while ((uint)*(byte *)(param_1 + uVar9) != (uVar8 & 0xff));
          uVar6 = (uint)puVar4 & 0xff;
          uVar13 = uVar9 >> 8;
          if (uVar6 == 2) {
            puVar4 = (undefined *)(uVar13 << 0x10 | (uVar9 & 0xff) << 8);
            uVar11 = uVar9 & 0xff;
          }
          else {
            uVar11 = ((uint)puVar16 & 0xffff) >> 8;
            if (((uint)puVar16 & 1) != 0) {
              uVar11 = (uint)puVar16 >> 0x10;
            }
            uVar11 = uVar11 + 1;
            if (uVar11 != (uVar9 & 0xff)) goto LAB_01392d58;
          }
          puVar16 = (undefined *)(uVar11 << 8 | uVar13 << 0x10);
          uVar13 = uVar15;
        } while( true );
      }
      if (uVar15 < 0x101) {
        uVar6 = (uint)puVar4 & 0xff;
        if (uVar6 == 2) {
          puVar16 = &DAT_01000001;
          puVar17 = &DAT_01000001;
          puVar14 = &UNK_01000002;
          uVar15 = 0x101;
          uVar6 = 1;
          puVar4 = &DAT_01000001;
          goto LAB_01392c68;
        }
        uVar13 = 0x100;
        uVar9 = 0;
        uVar11 = 1;
        uVar15 = 0x101;
        goto LAB_01392d38;
      }
joined_r0x01392c58:
      uVar6 = (uint)puVar4 & 0xff;
      uVar13 = (uint)puVar4 & 0xffffff00;
      if (uVar6 != 2) {
        puVar14 = (undefined *)(uVar13 | 2);
        puVar17 = puVar16;
        goto LAB_01392c68;
      }
      iVar7 = (*UNRECOVERED_JUMPTABLE)(uVar10,&DAT_00418ec5,1);
      iVar2 = iVar2 + 1;
      uVar5 = uVar5 + 1;
    } while (iVar7 == 0);
  }
  return 1;
LAB_01392d58:
  uVar11 = 0;
LAB_01392d38:
  puVar17 = (undefined *)(uVar11 | (uVar9 & 0xff) << 8 | uVar13 << 0x10);
  puVar14 = (undefined *)(uVar13 << 0x10 | (uVar9 & 0xff) << 8 | uVar11);
LAB_01392c68:
  local_3c = (undefined *)((uint)puVar4 & 0xffffff00 | uVar6);
  local_38 = puVar16;
  if (uVar6 == ((uint)puVar16 & 0xff)) {
    if (((uint)puVar16 & 1) == 0) {
      if (((uint)puVar4 >> 8 & 0xff) == ((uint)puVar16 >> 8 & 0xff)) goto LAB_01392cb4;
    }
    else if (((uint)puVar4 ^ (uint)puVar16) < 0x10000) {
LAB_01392cb4:
      local_34 = &local_3c;
      local_30 = (code *)&LAB_01392e20;
      iVar3 = FUN_00fa948c(uVar10,iVar1,&DAT_00590e71,&local_34);
      goto joined_r0x01392ce4;
    }
  }
  local_2c = &local_38;
  local_34 = &local_3c;
  local_28 = &LAB_01392e20;
  local_30 = (code *)&LAB_01392e20;
  iVar3 = FUN_00fa948c(uVar10,iVar1,&DAT_00574871,&local_34);
joined_r0x01392ce4:
  puVar4 = puVar14;
  puVar16 = puVar17;
  if (iVar3 != 0) {
    return 1;
  }
  goto LAB_01392b8c;
}

