// FUN_0116bf00 @ 0116bf00 size=2040 calls_out=10 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint * FUN_0116bf00(int *param_1,char *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  undefined4 uVar27;
  undefined4 *puVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  uint uVar34;
  int iVar35;
  undefined4 uVar36;
  code *pcVar37;
  code *pcVar38;
  int *piVar39;
  uint uVar40;
  uint uVar41;
  uint *puVar42;
  uint *puVar43;
  int iVar44;
  int iVar45;
  uint uVar46;
  undefined8 uVar47;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  int local_28;
  
  if (*param_2 != '\x05') {
    return (uint *)&DAT_00000001;
  }
  local_78 = *(uint *)(param_2 + 4);
  local_84 = 0;
  local_8c = 0;
  local_6c = 0;
  local_7c = 0;
  uVar31 = param_1[0x1f];
  local_74 = *(uint *)(param_2 + 8);
  local_60 = *(undefined4 *)(param_2 + 0xc);
  if (local_78 == 0) {
    local_60 = 0;
  }
  piVar39 = (int *)param_1[0x1e];
  uVar8 = param_1[4];
  uVar9 = param_1[5];
  uVar10 = param_1[6];
  uVar11 = param_1[7];
  iVar12 = param_1[8];
  iVar13 = param_1[9];
  iVar14 = param_1[10];
  iVar15 = param_1[0xb];
  uVar16 = param_1[0x10];
  uVar17 = param_1[0x11];
  uVar18 = param_1[0x12];
  uVar19 = param_1[0x13];
  iVar20 = param_1[0x14];
  iVar21 = param_1[0x15];
  iVar22 = param_1[0x16];
  iVar23 = param_1[0x17];
  uVar24 = param_1[0xd];
  iVar25 = param_1[0xf];
  iVar32 = *param_1;
  iVar29 = param_1[0xc];
  uVar26 = param_1[1];
  iVar3 = param_1[3];
  local_80 = (uint)(local_78 != 0);
  local_88 = 4;
  local_70 = local_80;
  local_68 = local_78;
  local_64 = local_74;
LAB_0116c07c:
  do {
    uVar47 = FUN_00f45584(&local_80);
    uVar27 = (undefined4)((ulonglong)uVar47 >> 0x20);
    iVar45 = (int)uVar47;
    if (iVar45 == 0) {
      local_78 = local_8c;
      local_74 = local_88 + local_84 * 4;
      local_80 = local_88;
      local_7c = local_88;
      puVar7 = (uint *)thunk_FUN_016d4a50(0x10);
      if (puVar7 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x10);
      }
      *puVar7 = local_80;
      puVar7[1] = local_7c;
      puVar7[2] = local_78;
      puVar7[3] = local_74;
      return puVar7;
    }
    iVar33 = *(int *)(iVar45 + 4);
    iVar44 = *(int *)(iVar45 + 8);
    if (iVar3 != 0) {
      local_48 = iVar12;
      local_44 = iVar13;
      local_40 = iVar14;
      local_3c = iVar15;
      local_38 = uVar10;
      uStack_34 = uVar11;
      local_30 = uVar8;
      uStack_2c = uVar9;
      FUN_011df94c(&local_48,iVar33,iVar44);
      uVar30 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 | (uStack_34 >> 0x10 & 0xff) << 8
               | uStack_34 >> 0x18;
      lVar1 = (ulonglong)uVar30 * 0xb36a80d2;
      uVar34 = (uint)lVar1;
      uVar4 = local_38 ^ 0xff;
      uVar30 = (uVar4 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
               local_38 >> 0x18) * -0x4c957f2e +
               uVar30 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
      uVar40 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 | (uStack_2c >> 0x10 & 0xff) << 8
               | uStack_2c >> 0x18;
      uVar5 = (uVar30 * 0x1000000 | (uVar30 >> 8 & 0xff) << 0x10 | (uVar30 >> 0x10 & 0xff) << 8 |
              uVar30 >> 0x18) ^ (uint)((ulonglong)uVar4 * 0x2df45158);
      lVar1 = (ulonglong)uVar40 * (ulonglong)uVar5;
      uVar30 = (uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 | (uVar34 >> 0x10 & 0xff) << 8 |
               uVar34 >> 0x18) ^
               uStack_34 * 0x2df45158 +
               uVar4 * 0x2d7f954c + (int)((ulonglong)uVar4 * 0x2df45158 >> 0x20);
      uVar4 = uVar30 << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 | (uVar30 >> 0x10 & 0xff) << 8 |
              uVar30 >> 0x18;
      lVar2 = (ulonglong)~local_30 * (ulonglong)uVar4;
      uVar34 = (uint)lVar2;
      uVar4 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
              uVar5 >> 0x18) * ~local_30 + uVar4 * ~uStack_2c + (int)((ulonglong)lVar2 >> 0x20);
      uVar4 = (uVar4 * 0x1000000 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
              uVar4 >> 0x18) ^ (uint)lVar1;
      uVar34 = (uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 | (uVar34 >> 0x10 & 0xff) << 8 |
               uVar34 >> 0x18) ^
               uVar30 * uVar40 +
               uVar5 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                        (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
               (int)((ulonglong)lVar1 >> 0x20);
      iVar35 = 0;
      uVar30 = uVar34;
      if ((uVar5 & 0x20) != 0) {
        uVar30 = uVar4;
        uVar4 = uVar34;
      }
      uVar30 = uVar4 << (uVar5 & 0x1f) | (uVar30 >> 1) >> (~uVar5 & 0x1f);
      uVar4 = uVar30 >> 0x19;
      while( true ) {
        uVar30 = uVar26 & uVar30;
        uVar34 = *(uint *)(iVar32 + uVar30);
        uVar5 = uVar34 ^ uVar4 * 0x1010101;
        for (uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5
            ) {
          uVar40 = uVar30 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                           (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                   uVar26;
          iVar6 = iVar32 + -0x20 + uVar40 * -0x20;
          if (iVar44 == *(int *)(iVar6 + 8)) {
            uVar36 = *(undefined4 *)(iVar6 + 4);
            iVar6 = thunk_FUN_016dd50a(iVar33,uVar36,iVar44);
            if (iVar6 == 0) {
              local_58 = 0x80000000;
              local_54 = uVar36;
              local_50 = iVar44;
              local_4c = param_3;
              uVar47 = FUN_011cf8a8(iVar32 + -0x14 + uVar40 * -0x20,uVar27,&local_58,param_4,param_5
                                   );
              FUN_011590bc(&local_8c,(int)uVar47,(int)((ulonglong)uVar47 >> 0x20));
              if (iVar25 == 0) goto LAB_0116c07c;
              uVar36 = *(undefined4 *)(iVar45 + 4);
              iVar45 = *(int *)(iVar45 + 8);
              local_48 = iVar20;
              local_44 = iVar21;
              local_40 = iVar22;
              local_3c = iVar23;
              local_38 = uVar18;
              uStack_34 = uVar19;
              local_30 = uVar16;
              uStack_2c = uVar17;
              FUN_011df94c(&local_48,uVar36,iVar45);
              uVar4 = local_38 ^ 0xff;
              uVar30 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                       (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
              lVar1 = (ulonglong)uVar30 * 0xb36a80d2;
              uVar5 = (uint)lVar1;
              uVar34 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                       uVar5 >> 0x18) ^
                       uStack_34 * 0x2df45158 +
                       uVar4 * 0x2d7f954c + (int)((ulonglong)uVar4 * 0x2df45158 >> 0x20);
              uVar40 = uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 | (uVar34 >> 0x10 & 0xff) << 8
                       | uVar34 >> 0x18;
              uVar41 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                       (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
              lVar2 = (ulonglong)~local_30 * (ulonglong)uVar40;
              uVar46 = (uint)lVar2;
              iVar33 = 0;
              uVar30 = (uVar4 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 |
                        (local_38 >> 0x10 & 0xff) << 8 | local_38 >> 0x18) * -0x4c957f2e +
                       uVar30 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
              uVar5 = (uVar30 * 0x1000000 | (uVar30 >> 8 & 0xff) << 0x10 |
                       (uVar30 >> 0x10 & 0xff) << 8 | uVar30 >> 0x18) ^
                      (uint)((ulonglong)uVar4 * 0x2df45158);
              uVar4 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                      uVar5 >> 0x18) * ~local_30 +
                      uVar40 * ~uStack_2c + (int)((ulonglong)lVar2 >> 0x20);
              lVar1 = (ulonglong)uVar41 * (ulonglong)uVar5;
              uVar4 = (uVar4 * 0x1000000 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8
                      | uVar4 >> 0x18) ^ (uint)lVar1;
              uVar34 = (uVar46 << 0x18 | (uVar46 >> 8 & 0xff) << 0x10 | (uVar46 >> 0x10 & 0xff) << 8
                       | uVar46 >> 0x18) ^
                       uVar34 * uVar41 +
                       uVar5 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                                (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                       (int)((ulonglong)lVar1 >> 0x20);
              uVar30 = uVar34;
              if ((uVar5 & 0x20) != 0) {
                uVar30 = uVar4;
                uVar4 = uVar34;
              }
              uVar30 = uVar4 << (uVar5 & 0x1f) | (uVar30 >> 1) >> (~uVar5 & 0x1f);
              uVar4 = uVar30 >> 0x19;
              goto LAB_0116c444;
            }
          }
        }
        if ((uVar34 & 0x80808080 & uVar34 << 1) != 0) break;
        iVar35 = iVar35 + 4;
        uVar30 = uVar30 + iVar35;
      }
    }
    if (uVar31 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0116c544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar39 = (int *)(*(code *)(&DAT_0116c548 + *(int *)(&DAT_0116c548 + *piVar39 * 4)))();
      return (uint *)piVar39;
    }
    local_48 = -0x80000000;
    local_44 = iVar33;
    local_40 = iVar44;
    local_3c = param_3;
    uVar47 = FUN_011cf8a8(param_1 + 0x18,uVar27,&local_48,param_4,param_5);
    FUN_011590bc(&local_8c,(int)uVar47,(int)((ulonglong)uVar47 >> 0x20));
  } while( true );
LAB_0116c444:
  uVar30 = uVar24 & uVar30;
  uVar34 = *(uint *)(iVar29 + uVar30);
  uVar5 = uVar34 ^ uVar4 * 0x1010101;
  uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
  while( true ) {
    if (uVar5 == 0) goto LAB_0116c4cc;
    uVar40 = uVar30 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                     (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar24;
    iVar44 = iVar29 + -0x14 + uVar40 * -0x14;
    if ((iVar45 == *(int *)(iVar44 + 8)) &&
       (iVar44 = thunk_FUN_016dd50a(uVar36,*(undefined4 *)(iVar44 + 4),iVar45), iVar44 == 0)) break;
    uVar5 = uVar5 - 1 & uVar5;
  }
  iVar45 = iVar29 + uVar40 * -0x14;
  puVar42 = *(uint **)(iVar45 + -8);
  iVar45 = *(int *)(iVar45 + -4);
  puVar7 = puVar42;
  while (puVar7 != puVar42 + iVar45) {
    puVar43 = puVar7 + 1;
    uVar4 = *puVar7;
    if (uVar31 <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar4,uVar31,&DAT_01889080);
    }
    uVar47 = FUN_011cf8a8(piVar39 + uVar4 * 10 + 5,uVar27,&local_58,param_4,param_5);
    puVar28 = (undefined4 *)((ulonglong)uVar47 >> 0x20);
    uVar36 = (undefined4)uVar47;
    pcVar37 = (code *)puVar28[3];
    pcVar38 = (code *)puVar28[4];
    while (iVar33 = (*pcVar37)(uVar36), uVar4 = local_84, iVar33 != 0) {
      local_28 = iVar33;
      if (local_84 == local_8c) {
        (*pcVar38)(&local_48,uVar36);
        iVar44 = local_48 + 1;
        if (local_48 == -1) {
          iVar44 = -1;
        }
        FUN_011cf828(&local_8c,uVar4,iVar44,4,4);
      }
      *(int *)(local_88 + uVar4 * 4) = iVar33;
      local_84 = uVar4 + 1;
    }
    if ((code *)*puVar28 != (code *)0x0) {
      (*(code *)*puVar28)(uVar36);
    }
    puVar7 = puVar43;
    if (puVar28[1] != 0) {
      thunk_FUN_016d3fb4(uVar36);
    }
  }
  goto LAB_0116c07c;
LAB_0116c4cc:
  if ((uVar34 & 0x80808080 & uVar34 << 1) != 0) goto LAB_0116c07c;
  iVar33 = iVar33 + 4;
  uVar30 = uVar30 + iVar33;
  goto LAB_0116c444;
}

