// FUN_00e73678 @ 00e73678 size=1104 calls_out=8 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00e73678(uint *param_1,undefined4 param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  int iVar22;
  undefined4 *puVar23;
  int iVar24;
  uint uVar25;
  int unaff_r4;
  uint uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  uint *puVar31;
  undefined4 local_328;
  undefined4 local_324;
  uint local_320;
  uint uStack_31c;
  uint uStack_318;
  uint uStack_314;
  uint uStack_310;
  undefined4 local_308;
  uint local_304;
  uint local_300;
  uint local_2fc;
  uint uStack_2f8;
  uint uStack_2f4;
  uint uStack_2f0;
  uint uStack_2ec;
  undefined1 auStack_190 [360];
  undefined4 uStack_28;
  
  local_328 = param_2;
  FUN_00f16f58(&local_308);
  uVar26 = local_300;
  uVar25 = local_304;
  uVar30 = local_308;
  if (local_308 == 0x80000000) {
    *param_1 = 2;
    param_1[1] = 0;
    param_1[2] = local_304;
    return;
  }
  local_324 = 8;
  FUN_00ea971c(&local_308,param_2);
  uVar16 = local_300;
  uVar11 = local_304;
  uVar28 = local_308;
  if (local_308 == 0x80000001) {
    *param_1 = 2;
    param_1[1] = 0;
    param_1[2] = local_304;
    goto joined_r0x00e736f8;
  }
  FUN_00ea971c(&local_308,param_2);
  uVar17 = local_300;
  uVar12 = local_304;
  uVar4 = local_308;
  if (local_308 == 0x80000001) {
    *param_1 = 2;
    param_1[1] = 0;
    param_1[2] = local_304;
  }
  else {
    FUN_00ea971c(&local_308,param_2);
    uVar18 = local_300;
    uVar13 = local_304;
    uVar5 = local_308;
    if (local_308 == 0x80000001) {
      *param_1 = 2;
      param_1[1] = 0;
      param_1[2] = local_304;
    }
    else {
      FUN_00ea971c(&local_308,param_2);
      uVar19 = local_300;
      uVar14 = local_304;
      uVar6 = local_308;
      if (local_308 == 0x80000001) {
        *param_1 = 2;
        param_1[1] = 0;
        param_1[2] = local_304;
      }
      else {
        FUN_00e76970(&local_308,param_2);
        if ((char)local_308 == '\0') {
          uVar8 = local_308._1_1_;
          FUN_00e76970(&local_308,param_2);
          if ((char)local_308 == '\x01') goto LAB_00e73868;
          uVar9 = local_308._1_1_;
          local_324 = 2;
          FUN_00e76970(&local_308,param_2);
          if ((char)local_308 == '\x01') goto LAB_00e73868;
          uVar10 = local_308._1_1_;
          FUN_00f146ac(&local_308,&local_328);
          uVar20 = local_300;
          uVar15 = local_304;
          uVar7 = local_308;
          if (local_308 != 3 || local_304 != 0) {
            local_320 = local_2fc;
            uStack_31c = uStack_2f8;
            uStack_318 = uStack_2f4;
            uStack_314 = uStack_2f0;
            uStack_310 = uStack_2ec;
            if (local_308 == 2 && local_304 == 0) {
              uVar21 = 8;
            }
            else {
              FUN_00f148c8(&local_308,&local_328);
              if (local_308 == 4 && local_304 == 0) goto LAB_00e7386c;
              FUN_016dd1aa(auStack_190,&local_2fc,0x16c);
              if (local_308 != 3 || local_304 != 0) {
                FUN_016dd1aa(param_1 + 0xb,auStack_190,0x16c);
                param_1[0x6e] = uVar17;
                param_1[0x6f] = uVar5;
                param_1[0x70] = uVar13;
                param_1[0x71] = uVar18;
                param_1[0x72] = uVar6;
                param_1[0x73] = uVar14;
                param_1[0x74] = uVar19;
                param_1[0x67] = uVar25;
                param_1[0x6b] = uVar16;
                param_1[0x6c] = uVar4;
                param_1[0x66] = uVar30;
                param_1[0x68] = uVar26;
                param_1[0x69] = uVar28;
                param_1[0x6a] = uVar11;
                param_1[0x6d] = uVar12;
                param_1[3] = local_320;
                param_1[4] = uStack_31c;
                param_1[5] = uStack_318;
                param_1[6] = uStack_314;
                param_1[7] = uStack_310;
                *(undefined1 *)((int)param_1 + 0x1d6) = uVar10;
                *(undefined1 *)((int)param_1 + 0x1d5) = uVar9;
                *(undefined1 *)(param_1 + 0x75) = uVar8;
                param_1[8] = local_308;
                param_1[9] = local_304;
                param_1[10] = local_300;
                *param_1 = uVar7;
                param_1[1] = uVar15;
                param_1[2] = uVar20;
                return;
              }
              uVar21 = 9;
            }
            local_300 = FUN_00e94830(uVar21,&DAT_0187c514,&DAT_018ab990);
          }
        }
        else {
LAB_00e73868:
          local_300 = local_304;
        }
LAB_00e7386c:
        *param_1 = 2;
        param_1[1] = 0;
        param_1[2] = local_300;
        if ((uVar6 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(uVar14);
        }
      }
      if ((uVar5 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(uVar13);
      }
    }
    if ((uVar4 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(uVar12);
    }
  }
  if ((uVar28 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(uVar11);
  }
joined_r0x00e736f8:
  if (uVar30 == 0) {
    return;
  }
  if (uVar25 == 0) {
    return;
  }
  iVar22 = FUN_016d3bc8();
  uVar30 = *(byte *)(uVar25 - 3) & 0x1f;
  if (((*(byte *)(iVar22 + 0x14) & 0x1f) != 0) ||
     (uVar26 = *(uint *)(iVar22 + 0x14) & 0xfffff000, iVar24 = uVar26 - 0x10, uVar26 == 0)) {
    iVar24 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar22 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar26 = (uint)(*(byte *)(uVar25 - 3) >> 5);
  iVar29 = *(int *)(iVar22 + 8) + 0x10;
  iVar27 = iVar24 * uVar30 + iVar24 + -4;
  iVar24 = iVar29 + iVar27;
  if (4 < uVar26) {
    if (uVar26 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar26 = *(uint *)(iVar24 + -4);
    if (uVar26 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar24 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if (iVar24 - uVar25 < uVar26) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar24 - uVar26) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar29 + iVar27) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar22 + 0x14);
  uVar26 = 1 << uVar30;
  *(undefined1 *)(uVar25 - 3) = 0xff;
  *(undefined2 *)(uVar25 - 2) = 0;
  do {
    uVar28 = *(uint *)(iVar22 + 0x10);
    uVar25 = *(uint *)(iVar22 + 0xc) | uVar28;
    if ((uVar26 & uVar25) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar28 == 0) || (uVar25 + uVar26 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar22,uVar30);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar23 = (undefined4 *)FUN_016d2bc8();
      uVar21 = *puVar23;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar23 = uVar21;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar22 + 0x10) = uVar26 + uVar28;
      return;
    }
    puVar31 = (uint *)(iVar22 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar31);
      uVar25 = *puVar31;
      if (uVar28 != uVar25) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar31);
    } while (!bVar3);
    *puVar31 = uVar26 + uVar28;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar28 == uVar25) {
      return;
    }
  } while( true );
}

