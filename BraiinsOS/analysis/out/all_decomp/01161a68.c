// FUN_01161a68 @ 01161a68 size=1724 calls_out=12 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint * FUN_01161a68(int *param_1,char *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 *puVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  undefined4 uVar25;
  code *pcVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  uint *puVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  code *pcVar34;
  int iVar35;
  uint *puVar36;
  uint *puVar37;
  uint *puVar38;
  uint uVar39;
  undefined8 uVar40;
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
  uint local_2c;
  int local_28;
  
  if (*param_2 != '\x05') {
    return (uint *)&DAT_00000001;
  }
  local_78 = *(uint *)(param_2 + 4);
  local_74 = *(uint *)(param_2 + 8);
  local_60 = *(undefined4 *)(param_2 + 0xc);
  if (local_78 == 0) {
    local_60 = 0;
  }
  local_84 = 0;
  local_8c = 0;
  local_6c = 0;
  local_7c = 0;
  uVar21 = param_1[0x16];
  local_80 = (uint)(local_78 != 0);
  puVar30 = (uint *)param_1[0x15];
  iVar22 = *param_1;
  local_88 = 4;
  uVar7 = param_1[4];
  uVar8 = param_1[5];
  uVar9 = param_1[6];
  uVar10 = param_1[7];
  iVar11 = param_1[8];
  iVar12 = param_1[9];
  iVar13 = param_1[10];
  iVar14 = param_1[0xb];
  iVar15 = param_1[0x12];
  iVar20 = param_1[0x13];
  uVar16 = param_1[1];
  iVar3 = param_1[3];
  local_70 = local_80;
  local_68 = local_78;
  local_64 = local_74;
LAB_01161b94:
  do {
    uVar40 = FUN_00f45584(&local_80);
    uVar17 = (undefined4)((ulonglong)uVar40 >> 0x20);
    iVar32 = (int)uVar40;
    if (iVar32 == 0) {
      local_78 = local_8c;
      local_74 = local_88 + local_84 * 4;
      local_80 = local_88;
      local_7c = local_88;
      puVar30 = (uint *)thunk_FUN_016d4a50(0x10);
      if (puVar30 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x10);
      }
      *puVar30 = local_80;
      puVar30[1] = local_7c;
      puVar30[2] = local_78;
      puVar30[3] = local_74;
      return puVar30;
    }
    iVar35 = *(int *)(iVar32 + 4);
    iVar27 = *(int *)(iVar32 + 8);
    if (iVar20 != 0) {
      iVar29 = iVar20 << 5;
      iVar31 = iVar15;
      do {
        if (*(int *)(iVar31 + 8) == iVar27) {
          uVar25 = *(undefined4 *)(iVar31 + 4);
          iVar4 = thunk_FUN_016dd50a(uVar25,iVar35,iVar27);
          if (iVar4 == 0) {
            local_58 = 0x80000000;
            local_54 = uVar25;
            local_50 = iVar27;
            local_4c = param_3;
            uVar40 = FUN_011cf8a8(iVar31 + 0xc,uVar17,&local_58,param_4,param_5);
            FUN_011590bc(&local_8c,(int)uVar40,(int)((ulonglong)uVar40 >> 0x20));
            if (iVar3 == 0) goto LAB_01161b94;
            uVar25 = *(undefined4 *)(iVar32 + 4);
            iVar32 = *(int *)(iVar32 + 8);
            local_48 = iVar11;
            local_44 = iVar12;
            local_40 = iVar13;
            local_3c = iVar14;
            local_38 = uVar9;
            uStack_34 = uVar10;
            local_30 = uVar7;
            local_2c = uVar8;
            FUN_011df94c(&local_48,uVar25,iVar32);
            uVar5 = local_38 ^ 0xff;
            uVar33 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                     (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
            lVar1 = (ulonglong)uVar33 * 0xb36a80d2;
            uVar23 = (uint)lVar1;
            uVar18 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
                     uVar23 >> 0x18) ^
                     uStack_34 * 0x2df45158 +
                     uVar5 * 0x2d7f954c + (int)((ulonglong)uVar5 * 0x2df45158 >> 0x20);
            uVar28 = uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
                     uVar18 >> 0x18;
            uVar24 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 |
                     (local_2c >> 0x10 & 0xff) << 8 | local_2c >> 0x18;
            lVar2 = (ulonglong)~local_30 * (ulonglong)uVar28;
            uVar39 = (uint)lVar2;
            uVar23 = (uVar5 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 |
                      (local_38 >> 0x10 & 0xff) << 8 | local_38 >> 0x18) * -0x4c957f2e +
                     uVar33 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
            iVar27 = 0;
            uVar33 = (uVar23 * 0x1000000 | (uVar23 >> 8 & 0xff) << 0x10 |
                      (uVar23 >> 0x10 & 0xff) << 8 | uVar23 >> 0x18) ^
                     (uint)((ulonglong)uVar5 * 0x2df45158);
            uVar5 = (uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
                    uVar33 >> 0x18) * ~local_30 +
                    uVar28 * ~local_2c + (int)((ulonglong)lVar2 >> 0x20);
            lVar1 = (ulonglong)uVar24 * (ulonglong)uVar33;
            uVar5 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                    uVar5 >> 0x18) ^ (uint)lVar1;
            uVar18 = (uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
                     uVar39 >> 0x18) ^
                     uVar18 * uVar24 +
                     uVar33 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                               (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                     (int)((ulonglong)lVar1 >> 0x20);
            uVar23 = uVar18;
            if ((uVar33 & 0x20) != 0) {
              uVar23 = uVar5;
              uVar5 = uVar18;
            }
            uVar23 = uVar5 << (uVar33 & 0x1f) | (uVar23 >> 1) >> (~uVar33 & 0x1f);
            uVar5 = uVar23 >> 0x19;
            goto LAB_01161d9c;
          }
        }
        iVar31 = iVar31 + 0x20;
        iVar29 = iVar29 + -0x20;
      } while (iVar29 != 0);
    }
    if (uVar21 != 0) {
      uVar7 = *puVar30;
      iVar3 = 4;
      if (2 < uVar7) {
        iVar3 = uVar7 - 3;
      }
                    /* WARNING: Could not recover jumptable at 0x01161eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar6 = (int *)(*(code *)(&DAT_01161eb0 + *(int *)(&DAT_01161eb0 + iVar3 * 4)))();
      return (uint *)piVar6;
    }
    local_48 = -0x80000000;
    local_44 = iVar35;
    local_40 = iVar27;
    local_3c = param_3;
    uVar40 = FUN_011cf8a8(param_1 + 0xc,uVar17,&local_48,param_4,param_5);
    FUN_011590bc(&local_8c,(int)uVar40,(int)((ulonglong)uVar40 >> 0x20));
  } while( true );
LAB_01161d9c:
  uVar23 = uVar16 & uVar23;
  uVar18 = *(uint *)(iVar22 + uVar23);
  uVar33 = uVar18 ^ uVar5 * 0x1010101;
  uVar33 = ~uVar33 & 0x80808080 & uVar33 + 0xfefefeff;
  while( true ) {
    if (uVar33 == 0) goto LAB_01161e28;
    uVar24 = uVar23 + ((uint)LZCOUNT(uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 |
                                     (uVar33 >> 0x10 & 0xff) << 8 | uVar33 >> 0x18) >> 3) & uVar16;
    iVar35 = iVar22 + -0x14 + uVar24 * -0x14;
    if ((iVar32 == *(int *)(iVar35 + 8)) &&
       (iVar35 = thunk_FUN_016dd50a(uVar25,*(undefined4 *)(iVar35 + 4),iVar32), iVar35 == 0)) break;
    uVar33 = uVar33 - 1 & uVar33;
  }
  iVar32 = iVar22 + uVar24 * -0x14;
  puVar36 = *(uint **)(iVar32 + -8);
  iVar32 = *(int *)(iVar32 + -4);
  puVar37 = puVar36;
  while (puVar37 != puVar36 + iVar32) {
    puVar38 = puVar37 + 1;
    uVar5 = *puVar37;
    if (uVar21 <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar5,uVar21,&DAT_01889080);
    }
    uVar40 = FUN_011cf8a8(puVar30 + uVar5 * 0x19 + 0x14,uVar17,&local_58,param_4,param_5);
    puVar19 = (undefined4 *)((ulonglong)uVar40 >> 0x20);
    uVar25 = (undefined4)uVar40;
    pcVar26 = (code *)puVar19[3];
    pcVar34 = (code *)puVar19[4];
    while (iVar27 = (*pcVar26)(uVar25), uVar5 = local_84, iVar27 != 0) {
      local_28 = iVar27;
      if (local_84 == local_8c) {
        (*pcVar34)(&local_48,uVar25);
        iVar35 = local_48 + 1;
        if (local_48 == -1) {
          iVar35 = -1;
        }
        FUN_011cf828(&local_8c,uVar5,iVar35,4,4);
      }
      *(int *)(local_88 + uVar5 * 4) = iVar27;
      local_84 = uVar5 + 1;
    }
    if ((code *)*puVar19 != (code *)0x0) {
      (*(code *)*puVar19)(uVar25);
    }
    puVar37 = puVar38;
    if (puVar19[1] != 0) {
      thunk_FUN_016d3fb4(uVar25);
    }
  }
  goto LAB_01161b94;
LAB_01161e28:
  if ((uVar18 & 0x80808080 & uVar18 << 1) != 0) goto LAB_01161b94;
  iVar27 = iVar27 + 4;
  uVar23 = uVar23 + iVar27;
  goto LAB_01161d9c;
}

