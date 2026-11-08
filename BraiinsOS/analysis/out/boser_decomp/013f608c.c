// FUN_013f608c @ 013f608c size=1092 calls_out=15 calls_in=4
// strings: 

int * FUN_013f608c(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,uint param_7)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  uint local_6c;
  uint local_68;
  int *local_64;
  uint *local_5c;
  char local_58;
  uint **local_54;
  undefined1 *local_50;
  undefined4 *local_4c;
  uint local_48;
  uint **local_44;
  uint local_40;
  undefined4 local_3c;
  undefined1 local_38;
  int local_34;
  uint *local_30;
  uint local_2c;
  uint local_28;
  
  FUN_0069e2f4(&local_34,param_1[2] + 8);
  puVar2 = local_30;
  if (local_34 == 1) {
    if ((char)local_2c != '\x02') {
      local_58 = (char)local_2c;
      local_54 = &local_5c;
      local_5c = local_30;
      local_50 = &LAB_014071e4;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_00590e5f,&local_54,&DAT_01cf35a0);
    }
    FUN_01656cb0(&local_54,param_1[2] + 8);
    FUN_00a97e8c(local_50,(uint)local_4c & 0xff);
    local_64 = (int *)0x0;
  }
  else {
    puVar15 = param_1 + 3;
    uVar11 = local_2c & 0xff;
    bVar18 = true;
    uVar16 = param_7 & 0xff;
    bVar10 = false;
    do {
      while( true ) {
        local_64 = (int *)(*puVar15 & 0xfffffffc);
        if (local_64 != (int *)0x0) {
          if (!bVar18) {
            FUN_013f6a60(param_7 & 0xfffffffc);
            thunk_FUN_01be4678(param_7 & 0xfffffffc);
          }
          goto LAB_013f61c4;
        }
        uVar13 = param_1[1];
        if (uVar16 == 0) {
          uVar13 = uVar13 << 1;
        }
        else if (uVar16 == 1) {
          uVar13 = uVar13 >> 1;
        }
        if (!bVar10) {
          FUN_013f51d0(&local_54,param_1[4] + 1,uVar13);
          param_7 = FUN_014035f4(&local_54);
        }
        if (*puVar15 == 0) break;
        ClearExclusiveLocal();
        bVar10 = true;
        bVar18 = false;
      }
      DataMemoryBarrier(0xb);
      bVar10 = true;
      bVar1 = (bool)hasExclusiveAccess(puVar15);
      if (bVar1) {
        *puVar15 = param_7;
      }
      bVar18 = false;
    } while (!bVar1);
    DataMemoryBarrier(0xb);
    local_64 = (int *)(param_7 & 0xfffffffc);
LAB_013f61c4:
    iVar4 = param_1[1];
    if (iVar4 != 0) {
      puVar14 = (uint *)*param_1;
      uVar5 = *param_2;
      puVar15 = puVar14;
      do {
        puVar6 = puVar15 + 1;
        bVar18 = false;
        bVar10 = false;
LAB_013f6204:
        do {
          uVar16 = *puVar15;
          if ((uVar16 & 1) != 0) goto LAB_013f6408;
          uVar17 = uVar16 & 0xfffffff8;
          uVar13 = uVar16 & 0xfffffffa | 4;
          if (!bVar18) {
            if (uVar17 != 0) {
              uVar8 = FUN_01adafd4(param_3,param_4,param_5,param_6,*(undefined4 *)(uVar17 + 0x24),
                                   *(undefined4 *)(uVar17 + 0x28));
              iVar12 = local_64[1];
              uVar8 = iVar12 - 1U & uVar8;
              if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar8,0,&DAT_01cf3570);
              }
              local_38 = 1;
              local_3c = 0;
              local_54 = (uint **)*local_64;
              local_44 = local_54 + uVar8;
              local_50 = (undefined1 *)iVar12;
              local_4c = param_2;
              local_48 = uVar8;
              local_40 = uVar8;
LAB_013f62f8:
              FUN_013f4d28(&local_34,&local_54);
              uVar3 = local_28;
              uVar8 = local_2c;
              puVar7 = local_30;
              bVar18 = false;
              if ((local_34 == 1) && (local_30 != (uint *)0x0)) {
                uVar9 = local_28 & 0xfffffff8;
                if (uVar9 == 0) {
                  if ((uVar16 & 2) == 0) goto LAB_013f6370;
                }
                else if (local_28 != uVar13) goto code_r0x013f6338;
              }
              goto LAB_013f63ac;
            }
            bVar18 = false;
            goto LAB_013f63ac;
          }
          if (uVar16 < 8) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_00475d4e,0x2c,&DAT_01cf3590);
          }
          if ((uint)local_64[1] <= local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(local_68,local_64[1],&DAT_01cf3580);
          }
          puVar7 = (uint *)(*local_64 + local_68 * 4);
          uVar17 = local_6c;
          while (bVar18 = true, (uVar17 & 4) != 0) {
            if (*puVar7 == uVar17) {
              DataMemoryBarrier(0xb);
              bVar1 = (bool)hasExclusiveAccess(puVar7);
              if (bVar1) {
                *puVar7 = uVar13;
                DataMemoryBarrier(0xb);
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            uVar17 = *puVar7;
          }
LAB_013f63ac:
          if (*puVar15 != uVar16) {
            ClearExclusiveLocal();
            goto LAB_013f6204;
          }
          DataMemoryBarrier(0xb);
          bVar1 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar1);
        *puVar15 = 1;
        DataMemoryBarrier(0xb);
        if (((7 < uVar16) && ((uVar16 & 2) != 0)) && (!bVar10)) {
          FUN_013f4dd8(uVar5,uVar16);
        }
LAB_013f6408:
        puVar15 = puVar6;
      } while (puVar6 != puVar14 + iVar4);
    }
    FUN_0131a5fc(param_2);
    FUN_00a97e8c(puVar2,uVar11);
  }
  return local_64;
code_r0x013f6338:
  if ((*(int *)(uVar9 + 0x28) == *(int *)(uVar17 + 0x28)) &&
     (iVar12 = thunk_FUN_01bed842(*(undefined4 *)(uVar9 + 0x24),*(undefined4 *)(uVar17 + 0x24)),
     iVar12 == 0)) {
    if ((uVar3 & 4) == 0) goto LAB_013f63ac;
LAB_013f6370:
    if (*puVar7 == uVar3) {
      DataMemoryBarrier(0xb);
      bVar18 = (bool)hasExclusiveAccess(puVar7);
      if (bVar18) {
        *puVar7 = uVar13;
        bVar18 = true;
        DataMemoryBarrier(0xb);
        bVar10 = true;
        local_68 = uVar8;
        local_6c = uVar13;
        goto LAB_013f63ac;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    local_38 = 1;
  }
  goto LAB_013f62f8;
}

