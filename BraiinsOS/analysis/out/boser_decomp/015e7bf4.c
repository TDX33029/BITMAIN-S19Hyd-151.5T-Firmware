// FUN_015e7bf4 @ 015e7bf4 size=832 calls_out=9 calls_in=1
// strings: dns_sd::dns_cache

undefined8 FUN_015e7bf4(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  uint *puVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  uint *puVar15;
  int *piVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined8 uVar22;
  int *local_74;
  int *local_70;
  int local_6c;
  int *local_68;
  undefined1 *local_64;
  int *local_60;
  code *local_5c;
  int *local_58;
  uint local_54;
  int *local_50;
  uint local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  iVar4 = (**(code **)(param_3 + 0x10))(param_2);
  uVar20 = *(uint *)(iVar4 + 8);
  uVar21 = *(uint *)(iVar4 + 0xc);
  uVar18 = *(uint *)*param_1;
  uVar19 = ((uint *)*param_1)[1];
  if (!(uVar19 <= uVar21 && (uint)(uVar20 <= uVar18) <= uVar19 - uVar21)) {
    uVar22 = (**(code **)(param_3 + 0x1c))(param_2);
    iVar4 = (int)uVar22;
    (**(code **)((int)((ulonglong)uVar22 >> 0x20) + 0xc))(&local_58,iVar4);
    if (!((local_58 != (int *)0xfd1f1978 || local_50 != (int *)0x901dc7f5) ||
         (local_54 != 0x4f0c4dfb || local_4c != 0xd152ef85))) {
      piVar16 = (int *)param_1[1];
      local_6c = iVar4;
      if (4 < DAT_01d51b00) {
        local_60 = &local_6c;
        local_48 = (undefined4 *)&DAT_01cfd818;
        local_4c = 0x12;
        local_54 = 0x12;
        local_64 = &LAB_0193a90c;
        local_5c = FUN_015de8d4;
        local_50 = (int *)0x4b3ea3;
        local_58 = (int *)0x4b3ea3;
        local_68 = piVar16;
        FUN_015fb650(&DAT_00578f91,&local_68,5,&local_58);
      }
      iVar5 = *piVar16;
      uVar17 = 0;
      piVar16 = *(int **)(iVar5 + 8);
      if (-1 < (int)piVar16) {
        iVar8 = param_1[2];
        uVar9 = *(undefined4 *)(iVar5 + 4);
        if (piVar16 == (int *)0x0) {
          puVar6 = (undefined1 *)0x1;
          local_74 = (int *)0x0;
        }
        else {
          uVar17 = 1;
          puVar6 = (undefined1 *)FUN_01298504(piVar16,1);
          local_74 = piVar16;
          if (puVar6 == (undefined1 *)0x0) goto LAB_015e7e8c;
        }
        FUN_01bed4e2(puVar6,uVar9,piVar16);
        local_68 = local_74;
        local_64 = puVar6;
        local_60 = piVar16;
        FUN_015dae2c(&local_58,iVar8,&local_68);
        uVar17 = local_44;
        puVar3 = local_48;
        uVar2 = local_4c;
        piVar14 = local_50;
        uVar1 = local_54;
        piVar16 = local_58;
        local_70 = local_58;
        if (local_50 != (int *)0x80000000) {
          uVar22 = thunk_FUN_01bee35a(local_44,0x2c0);
          puVar15 = (uint *)((int)uVar22 + (int)((ulonglong)uVar22 >> 0x20));
          if ((char)puVar15[4] == '\0') {
            FUN_019ae6ac(&local_58);
            *puVar15 = (uint)local_58;
            puVar15[1] = local_54;
            puVar15[2] = (uint)local_50;
            puVar15[3] = local_4c;
            *(undefined1 *)(puVar15 + 4) = 1;
          }
          uVar10 = *puVar15;
          uVar11 = puVar15[1];
          uVar12 = puVar15[2];
          puVar7 = (uint *)((uint)&local_58 | 4);
          uVar13 = puVar15[3];
          *puVar15 = uVar10 + 1;
          puVar15[1] = uVar11 + (0xfffffffe < uVar10);
          *puVar7 = uVar2;
          puVar7[1] = (uint)puVar3;
          local_58 = piVar14;
          local_48 = &DAT_0056d238;
          local_44 = 0;
          uStack_40 = 0;
          uStack_3c = 0;
          puVar7[7] = uVar10;
          puVar7[9] = uVar12;
          puVar7[8] = uVar11;
          puVar7[10] = uVar13;
          local_70 = (int *)FUN_015d2e84(uVar17,uVar13,piVar16,uVar1,&local_58);
        }
        piVar16 = *(int **)(iVar4 + 0x48);
        uVar17 = 0;
        if (-1 < (int)piVar16) {
          uVar9 = *(undefined4 *)(iVar4 + 0x44);
          if (piVar16 == (int *)0x0) {
            iVar4 = 1;
            piVar14 = (int *)0x0;
          }
          else {
            uVar17 = 1;
            iVar4 = FUN_01298504(piVar16,1);
            piVar14 = piVar16;
            if (iVar4 == 0) goto LAB_015e7e8c;
          }
          FUN_01bed4e2(iVar4,uVar9,piVar16);
          local_58 = piVar14;
          local_54 = iVar4;
          local_50 = piVar16;
          FUN_015dcc90(local_70 + -8,&local_58);
          goto LAB_015e7ef8;
        }
      }
LAB_015e7e8c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar17,piVar16);
    }
  }
LAB_015e7ef8:
  return CONCAT44(uVar19 - (uVar21 + (uVar20 > uVar18)),
                  (uint)(uVar19 <= uVar21 && (uint)(uVar20 <= uVar18) <= uVar19 - uVar21));
}

