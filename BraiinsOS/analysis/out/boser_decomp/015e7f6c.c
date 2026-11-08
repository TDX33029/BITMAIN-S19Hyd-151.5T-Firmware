// FUN_015e7f6c @ 015e7f6c size=732 calls_out=10 calls_in=1
// strings: dns_sd::dns_cache

undefined8 FUN_015e7f6c(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  longlong lVar21;
  undefined4 *local_70;
  undefined4 local_68;
  undefined4 *local_64;
  code *local_60;
  undefined4 *local_5c;
  char *local_58;
  uint local_54;
  char *local_50;
  uint local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  iVar5 = (**(code **)(param_3 + 0x10))(param_2);
  uVar18 = *(uint *)(iVar5 + 8);
  uVar12 = *(uint *)(iVar5 + 0xc);
  uVar16 = *(uint *)*param_1;
  uVar17 = ((uint *)*param_1)[1];
  if (uVar12 < uVar17 || uVar17 - uVar12 < (uint)(uVar18 <= uVar16)) {
    uVar20 = (**(code **)(param_3 + 0x1c))(param_2);
    uVar6 = (undefined4)uVar20;
    (**(code **)((int)((ulonglong)uVar20 >> 0x20) + 0xc))(&local_58,uVar6);
    if ((local_58 == (char *)0xda8c4f1e && local_50 == (char *)0x19da2243) &&
        (local_54 == 0xb2415d58 && local_4c == 0xc983ed0b)) {
      local_68 = uVar6;
      if (4 < DAT_01d51b00) {
        local_64 = &local_68;
        local_4c = 0x12;
        local_54 = 0x12;
        local_50 = "m";
        local_58 = "m";
        local_48 = (undefined4 *)&DAT_01cfd808;
        local_60 = FUN_015de048;
        FUN_015fb650(&DAT_005aeb96,&local_64,5,&local_58);
      }
      iVar5 = param_1[1];
      lVar21 = (**(code **)(param_3 + 0x3c))(param_2);
      local_5c = (undefined4 *)((ulonglong)lVar21 >> 0x20);
      uVar14 = 0;
      if (lVar21 < 0) {
LAB_015e80b0:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar14,local_5c);
      }
      if (local_5c == (undefined4 *)0x0) {
        iVar7 = 1;
        local_70 = (undefined4 *)0x0;
      }
      else {
        uVar14 = 1;
        iVar7 = FUN_01298504(local_5c,1);
        local_70 = local_5c;
        if (iVar7 == 0) goto LAB_015e80b0;
      }
      FUN_01bed4e2(iVar7,(int)lVar21,local_5c);
      local_64 = local_70;
      local_60 = (code *)iVar7;
      FUN_015dae2c(&local_58,iVar5,&local_64);
      uVar14 = local_44;
      puVar4 = local_48;
      uVar3 = local_4c;
      pcVar2 = local_50;
      uVar1 = local_54;
      pcVar9 = local_58;
      if (local_50 != (char *)0x80000000) {
        uVar20 = thunk_FUN_01bee35a(local_44,0x2c0);
        puVar15 = (uint *)((int)uVar20 + (int)((ulonglong)uVar20 >> 0x20));
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
        uVar13 = puVar15[2];
        puVar8 = (uint *)((uint)&local_58 | 4);
        uVar19 = puVar15[3];
        *puVar15 = uVar10 + 1;
        puVar15[1] = uVar11 + (0xfffffffe < uVar10);
        local_58 = pcVar2;
        *puVar8 = uVar3;
        puVar8[1] = (uint)puVar4;
        local_48 = &DAT_0056d238;
        local_44 = 0;
        uStack_40 = 0;
        uStack_3c = 0;
        puVar8[7] = uVar10;
        puVar8[8] = uVar11;
        puVar8[9] = uVar13;
        puVar8[10] = uVar19;
        pcVar9 = (char *)FUN_015d2e84(uVar14,uVar13,pcVar9,uVar1,&local_58);
      }
      FUN_015df854(&local_58,uVar6);
      FUN_015dbe44(pcVar9 + -0x20,&local_58);
    }
  }
  return CONCAT44(uVar17 - (uVar12 + (uVar18 > uVar16)),
                  (uint)(uVar17 <= uVar12 && (uint)(uVar18 <= uVar16) <= uVar17 - uVar12));
}

