// FUN_00680858 @ 00680858 size=1504 calls_out=13 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00680858(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *unaff_r4;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int *piVar12;
  bool bVar13;
  undefined1 *local_11c;
  undefined1 *local_c8;
  undefined1 *local_c4;
  undefined1 *local_c0;
  undefined1 *local_bc;
  undefined1 *local_b8;
  undefined1 *local_b4;
  undefined1 auStack_b0 [4];
  undefined1 *local_ac;
  undefined1 *local_a8;
  undefined1 *local_a4;
  undefined1 *local_a0;
  undefined1 *local_9c;
  undefined1 *local_98;
  undefined1 *local_94;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_84;
  undefined1 *local_80;
  undefined1 *local_7c;
  undefined1 *local_78;
  undefined1 *local_74;
  undefined1 *local_70;
  undefined1 *local_6c;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_5c;
  undefined1 *local_58;
  undefined1 *local_54;
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  
  piVar12 = (int *)(param_2 + 0x60);
  if (*piVar12 != 0) {
    piVar2 = (int *)FUN_00bdee68(piVar12,*param_3);
    if (piVar2 == (int *)0x0) {
LAB_0068091c:
      if ((*(char *)(param_2 + 100) == '\0') ||
         (iVar10 = FUN_01657fc4(param_2,*param_3), iVar10 != 0)) {
        *param_1 = 0x8000000f;
        return;
      }
      *param_1 = &DAT_8000000d;
      *(undefined1 *)(param_2 + 100) = 0;
      return;
    }
    iVar10 = *piVar2;
    if (*(int *)(iVar10 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01871438);
    }
    if (*(char *)(iVar10 + 0x4e) == '\0') {
      iVar7 = iVar10 + 0x3c;
      unaff_r4 = (undefined1 *)(iVar10 + 0xc);
      if (*(char *)(iVar10 + 0x4d) != '\x01') goto LAB_00680d0c;
      bVar1 = *(byte *)(iVar10 + 0x4c);
      do {
        if ((bVar1 & 1) != 0) {
          FUN_0111f29c(&local_48,iVar10 + 0x1c,iVar7);
          local_58 = local_40;
          local_54 = puStack_3c;
          local_50 = puStack_38;
          local_4c = local_34;
          if (local_48 == &DAT_8000000c) {
            if (((uint)local_44 & 1) == 0) {
              if (*(int *)(iVar10 + 0x40) != 0) {
                FUN_015e79d4((uint)auStack_b0 | 4,0x28,&DAT_004089b1,0x19);
                local_48 = (undefined1 *)0x80000000;
                local_11c = local_ac;
                goto LAB_00680ee8;
              }
              *(undefined1 *)(iVar10 + 0x4d) = 0;
              unaff_r4 = (undefined1 *)0x0;
              puVar11 = &DAT_8000000d;
            }
            else {
              puVar11 = &DAT_8000000c;
              local_a8 = local_40;
              local_a4 = puStack_3c;
              local_a0 = puStack_38;
              local_9c = local_34;
              local_11c = local_40;
              local_48 = puStack_38;
              local_44 = local_34;
              unaff_r4 = puStack_3c;
            }
            local_c8 = local_48;
            local_c4 = local_44;
            local_c0 = local_40;
            local_bc = puStack_3c;
            local_b8 = puStack_38;
            local_b4 = local_34;
          }
          else {
            local_11c = local_44;
            local_98 = local_30;
            local_94 = puStack_2c;
            local_90 = puStack_28;
            local_a8 = local_40;
            local_a4 = puStack_3c;
            local_a0 = puStack_38;
            local_9c = local_34;
LAB_00680ee8:
            *(undefined1 *)(iVar10 + 0x4e) = 1;
            local_b4 = local_90;
            local_b8 = local_94;
            local_bc = local_98;
            local_c8 = local_a4;
            local_c4 = local_a0;
            unaff_r4 = local_a8;
            local_c0 = local_9c;
            puVar11 = local_48;
          }
          goto LAB_006808c0;
        }
        FUN_0111f29c(&local_88,iVar10 + 0x1c,iVar7);
        if (local_88 != &DAT_8000000c) {
          local_11c = local_84;
          *(undefined1 *)(iVar10 + 0x4e) = 1;
          local_bc = local_70;
          local_b8 = local_6c;
          local_b4 = local_68;
          local_c8 = local_7c;
          local_c4 = local_78;
          unaff_r4 = local_80;
          local_c0 = local_74;
          puVar11 = local_88;
          goto LAB_006808c0;
        }
        if (((uint)local_84 & 1) != 0) {
          puVar11 = &DAT_8000000c;
          local_11c = local_80;
          local_c8 = local_78;
          local_c4 = local_74;
          unaff_r4 = local_7c;
          goto LAB_006808c0;
        }
        *(undefined1 *)(iVar10 + 0x4d) = 0;
LAB_00680d0c:
        if (*(int *)(iVar10 + 0x44) == *(int *)(iVar10 + 0x40)) {
          FUN_00f5f538(iVar7,1);
        }
        FUN_00753ed0(&local_60,unaff_r4,param_3,iVar7);
        if (((uint)local_60 & 0xff) != 4) {
          if (((uint)local_60 & 0xff) == 5) {
            puVar11 = (undefined1 *)0x8000000e;
          }
          else {
            puVar11 = (undefined1 *)0x80000000;
            local_11c = local_60;
            *(undefined1 *)(iVar10 + 0x4e) = 1;
            unaff_r4 = local_5c;
          }
          goto LAB_006808c0;
        }
        bVar1 = 0;
        if ((local_5c == (undefined1 *)0x0) && (bVar1 = 1, *(char *)(iVar10 + 0x4c) != '\0'))
        goto LAB_006808bc;
        *(undefined1 *)(iVar10 + 0x4d) = 1;
        *(byte *)(iVar10 + 0x4c) = bVar1;
      } while (*(char *)(iVar10 + 0x4e) == '\0');
    }
    *(undefined2 *)(iVar10 + 0x4d) = 0;
LAB_006808bc:
    puVar11 = &DAT_8000000d;
LAB_006808c0:
    DataMemoryBarrier(0xb);
    puVar3 = (undefined4 *)(*piVar2 + 0x50);
    do {
      piVar2 = (int *)*puVar3;
      bVar13 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar13);
    *puVar3 = 0;
    DataMemoryBarrier(0xb);
    if (piVar2 != (int *)&DAT_00000001) {
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00350078,0x16,&DAT_01871418);
      }
      (**(code **)(*piVar2 + 4))(piVar2[1]);
      thunk_FUN_016d3fb4(piVar2);
    }
    if (puVar11 == (undefined1 *)0x8000000e) goto LAB_0068091c;
    if (puVar11 != &DAT_8000000d) {
      local_44 = local_11c;
      puStack_3c = local_c8;
      puStack_38 = local_c4;
      local_34 = local_c0;
      local_30 = local_bc;
      puStack_2c = local_b8;
      puStack_28 = local_b4;
      local_48 = puVar11;
      local_40 = unaff_r4;
      FUN_0165a798(&local_88);
      uVar9 = *(uint *)(param_2 + 0x54);
      puVar5 = local_88 + *(uint *)(param_2 + 0x50);
      puVar4 = local_84 + CARRY4((uint)local_88,*(uint *)(param_2 + 0x50)) + uVar9;
      if ((int)uVar9 < 0 != (int)(((uint)local_84 ^ (uint)puVar4) & ~((uint)local_84 ^ uVar9)) < 0)
      {
LAB_00680b24:
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
      }
      puVar8 = local_80 + *(int *)(param_2 + 0x58);
      if (puVar8 < &DAT_3b9aca00) {
        puVar6 = puVar4;
      }
      else {
        bVar13 = (undefined1 *)0xfffffffe < puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar4 + bVar13;
        if ((int)(((uint)puVar4 ^ (uint)puVar6) & ~(uint)puVar4) < 0) goto LAB_00680b24;
        puVar4 = (undefined1 *)0xc4653600;
        puVar8 = puVar8 + -1000000000;
      }
      FUN_01653364(param_2,puVar4,puVar5,puVar6,puVar8,1);
      *(undefined1 *)(param_2 + 100) = 1;
      local_88 = local_11c;
      local_80 = local_c8;
      local_7c = local_c4;
      local_78 = local_c0;
      local_74 = local_bc;
      local_70 = local_b8;
      local_6c = local_b4;
      local_84 = unaff_r4;
      goto LAB_00680a3c;
    }
    piVar2 = (int *)*piVar12;
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar10 = *piVar2;
        bVar13 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar13);
      *piVar2 = iVar10 + -1;
      if (iVar10 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078da6c(piVar12);
      }
    }
    *piVar12 = 0;
  }
  puVar11 = (undefined1 *)0x8000000e;
LAB_00680a3c:
  *param_1 = puVar11;
  param_1[1] = local_88;
  param_1[2] = local_84;
  param_1[3] = local_80;
  param_1[4] = local_7c;
  param_1[5] = local_78;
  param_1[6] = local_74;
  param_1[7] = local_70;
  param_1[8] = local_6c;
  return;
}

