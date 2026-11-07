// FUN_00fb5b54 @ 00fb5b54 size=1472 calls_out=7 calls_in=0
// strings: 

void FUN_00fb5b54(undefined2 *param_1,uint *param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  uint3 uVar7;
  uint uVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined *puVar14;
  bool bVar15;
  float fVar16;
  undefined8 uVar17;
  uint local_348;
  uint local_344;
  undefined *local_340;
  uint local_338;
  undefined4 local_334;
  undefined *local_330;
  uint local_32c;
  byte local_327;
  char local_30;
  
  if (param_3 == 0) {
    *param_1 = 1;
    return;
  }
  cVar1 = (char)*param_2;
  if (cVar1 == '-' || cVar1 == '+') {
    param_3 = param_3 + -1;
    if (param_3 == 0) {
      *param_1 = 0x101;
      return;
    }
    param_2 = (uint *)((int)param_2 + 1);
  }
  FUN_00fb5528(&local_338);
  puVar6 = local_330;
  uVar12 = local_334;
  uVar13 = local_338;
  if (local_327 == 2) {
    if (param_3 == 3) {
      uVar7 = (uint3)*param_2 & 0xdfdfdf;
      if (uVar7 != 0x464e49) {
        if (uVar7 != 0x4e414e) goto LAB_00fb5cdc;
        fVar16 = NAN;
        goto LAB_00fb5cf4;
      }
    }
    else if ((param_3 != 8) ||
            ((*param_2 & 0xdfdfdfdf) != 0x49464e49 || (param_2[1] & 0xdfdfdfdf) != 0x5954494e)) {
LAB_00fb5cdc:
      *(undefined1 *)((int)param_1 + 1) = 1;
      *(undefined1 *)param_1 = 1;
      return;
    }
    fVar16 = INFINITY;
LAB_00fb5cf4:
    if (cVar1 == '-') {
      fVar16 = -fVar16;
    }
    *(float *)(param_1 + 2) = fVar16;
    *(undefined1 *)param_1 = 0;
    return;
  }
  iVar10 = local_334 - (local_338 < 0x12);
  if (((iVar10 + 1U < (uint)(0xffffffe3 < local_338 - 0x12)) &&
      (-local_32c < (uint)(local_330 < &DAT_01000001))) && ((local_327 & 1) == 0)) {
    if ((int)-(local_334 + (10 < local_338)) < 0 ==
        (SBORROW4(0,local_334) != SBORROW4(-local_334,(uint)(10 < local_338)))) {
      fVar16 = (float)FUN_0184589c(local_330,local_32c);
      if ((int)local_334 < 0) {
        fVar16 = fVar16 / *(float *)(&DAT_00369a98 + local_338 * -4);
      }
      else {
        fVar16 = *(float *)(&DAT_00369a98 + local_338 * 4) * fVar16;
      }
      goto LAB_00fb6028;
    }
    lVar4 = ZEXT48(local_330) * (ulonglong)*(uint *)(&DAT_003624f4 + local_338 * 8);
    lVar5 = (ulonglong)*(uint *)(&DAT_003624f0 + local_338 * 8) * ZEXT48(local_330);
    puVar14 = (undefined *)lVar5;
    uVar8 = (uint)((ulonglong)lVar5 >> 0x20);
    lVar5 = (ulonglong)*(uint *)(&DAT_003624f0 + local_338 * 8) * (ulonglong)local_32c;
    uVar11 = (int)lVar5 + (int)lVar4;
    iVar10 = uVar8 + uVar11;
    if (((((local_32c == 0 || *(uint *)(&DAT_003624f4 + local_338 * 8) == 0) &&
          (int)((ulonglong)lVar5 >> 0x20) == 0) && (int)((ulonglong)lVar4 >> 0x20) == 0) &&
         !CARRY4(uVar8,uVar11)) && ((uint)-iVar10 < (uint)(puVar14 < &DAT_01000001))) {
      fVar16 = (float)FUN_0184589c(puVar14,iVar10,-(iVar10 + (uint)(puVar14 >= &DAT_01000001)));
      fVar16 = fVar16 * 1e+10;
      goto LAB_00fb6028;
    }
  }
  FUN_00fb612c(&local_348,iVar10,local_338,local_334,local_330,local_32c);
  if (((local_327 & 1) == 0) || ((int)local_340 < 0)) {
    if ((int)local_340 < 0) goto LAB_00fb5e44;
    uVar13 = local_348;
  }
  else {
    iVar10 = local_32c + ((undefined *)0xfffffffe < puVar6);
    FUN_00fb612c(&local_338,iVar10,uVar13,uVar12,puVar6 + 1,iVar10);
    puVar9 = (undefined *)(local_348 ^ local_338 | local_344 ^ local_334);
    puVar6 = (undefined *)(local_348 ^ local_338);
    puVar14 = puVar9;
    if (puVar9 == (undefined *)0x0) {
      puVar6 = local_340;
      puVar14 = local_330;
    }
    bVar15 = local_340 != puVar14;
    local_340 = puVar6;
    uVar13 = local_338;
    if (puVar9 != (undefined *)0x0 || bVar15) {
LAB_00fb5e44:
      FUN_00fb50a0(&local_338,param_2,param_3);
      local_340 = (undefined *)0x0;
      if (local_338 == 0) {
LAB_00fb5fd4:
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        if ((-0x145 < (int)local_334) && (local_340 = (undefined *)0xff, (int)local_334 < 0x136)) {
          if (0 < (int)local_334) {
            do {
              uVar12 = 0x3c;
              if (local_334 < 0x13) {
                uVar12 = (uint)(byte)(&DAT_0035fc78)[local_334];
              }
              FUN_00fb4cf0(&local_338,uVar12);
              if ((int)local_334 < -0x7ff) {
                local_340 = (undefined *)0x0;
                goto LAB_00fb6018;
              }
              uVar13 = uVar12 + uVar13;
            } while (0 < (int)local_334);
          }
          do {
            if (local_334 == 0) {
              if (4 < ((uint)local_330 & 0xff)) break;
              uVar12 = 1;
              if (((uint)local_330 & 0xff) < 2) {
                uVar12 = 2;
              }
            }
            else {
              uVar12 = 0x3c;
              if (-local_334 < 0x13) {
                uVar12 = (uint)(byte)(&DAT_0035fc78)[-local_334];
              }
            }
            FUN_00fb49b4(&local_338,uVar12);
            if (0x7ff < (int)local_334) goto LAB_00fb5fd4;
            uVar13 = uVar13 - uVar12;
          } while ((int)local_334 < 1);
          uVar12 = uVar13 - 1;
          if (uVar13 == 0xffffff82 || (int)uVar12 < -0x7f) {
            do {
              uVar13 = -uVar12 - 0x7e;
              if (0x3b < uVar13) {
                uVar13 = 0x3c;
              }
              FUN_00fb4cf0(&local_338,uVar13);
              uVar12 = uVar13 + uVar12;
            } while (uVar12 < 0xffffff82);
          }
          uVar13 = 0;
          if ((int)(uVar12 + 0x7f) < 0xff) {
            FUN_00fb49b4(&local_338,0x18);
            if ((local_338 == 0) || ((int)local_334 < 0)) {
              local_340 = (undefined *)(uVar12 + 0x7e);
            }
            else {
              if (local_334 < 0x13) {
                if (local_334 == 0) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = 0;
                  uVar11 = 0;
                  do {
                    uVar3 = (ulonglong)uVar13;
                    uVar13 = (uint)(uVar3 * 10);
                    uVar8 = (int)(uVar3 * 10 >> 0x20) + uVar8 * 10;
                    if (uVar11 < local_338) {
                      bVar15 = CARRY4(uVar13,(uint)*(byte *)((int)&local_330 + uVar11));
                      uVar13 = uVar13 + *(byte *)((int)&local_330 + uVar11);
                      uVar8 = uVar8 + bVar15;
                    }
                    uVar11 = uVar11 + 1;
                  } while (local_334 != uVar11);
                }
                if (local_334 < local_338) {
                  if (local_334 + 1 == local_338 && *(byte *)((int)&local_330 + local_334) == 5) {
                    if (local_30 == '\0') {
                      bVar2 = 0;
                      if (local_334 != 0) {
                        bVar2 = *(byte *)((int)&local_334 + local_334 + 3);
                      }
                      if (local_334 == 0 || (bVar2 & 1) == 0) goto LAB_00fb60c4;
                    }
                  }
                  else if (*(byte *)((int)&local_330 + local_334) < 5) goto LAB_00fb60c4;
                  bVar15 = 0xfffffffe < uVar13;
                  uVar13 = uVar13 + 1;
                  uVar8 = uVar8 + bVar15;
                }
LAB_00fb60c4:
                uVar17 = CONCAT44(uVar8,uVar13);
                if (uVar8 != 0 || uVar8 < (0xffffff < uVar13)) goto LAB_00fb60d0;
              }
              else {
LAB_00fb60d0:
                FUN_00fb4cf0(&local_338,1);
                uVar17 = FUN_00fb4fb8(&local_338);
                uVar13 = 0;
                if (0xfe < (int)(uVar12 + 0x80)) goto LAB_00fb6020;
                uVar12 = uVar12 + 1;
              }
              uVar8 = (uint)((ulonglong)uVar17 >> 0x20);
              iVar10 = 0x7f;
              uVar13 = (uint)uVar17 & 0x7fffff;
              if (uVar8 == 0 && (0x7fffff < (uint)uVar17) <= uVar8) {
                iVar10 = 0x7e;
              }
              local_340 = (undefined *)(iVar10 + uVar12);
            }
          }
          else {
LAB_00fb6018:
            uVar13 = 0;
          }
        }
      }
    }
  }
LAB_00fb6020:
  fVar16 = (float)(uVar13 | (int)local_340 << 0x17);
LAB_00fb6028:
  *(undefined1 *)param_1 = 0;
  if (cVar1 == '-') {
    fVar16 = -fVar16;
  }
  *(float *)(param_1 + 2) = fVar16;
  return;
}

