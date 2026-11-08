// FUN_00fb63d8 @ 00fb63d8 size=1532 calls_out=7 calls_in=4
// strings: 

void FUN_00fb63d8(undefined2 *param_1,uint *param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  uint3 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  ulonglong uVar16;
  uint local_348;
  uint local_344;
  uint local_340;
  uint local_338;
  undefined4 local_334;
  uint local_330;
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
  uVar7 = local_330;
  uVar11 = local_334;
  uVar10 = local_338;
  if (local_327 == 2) {
    if (param_3 == 3) {
      uVar5 = (uint3)*param_2 & 0xdfdfdf;
      if (uVar5 != 0x464e49) {
        if (uVar5 != 0x4e414e) goto LAB_00fb655c;
        dVar15 = NAN;
        goto LAB_00fb6574;
      }
    }
    else if ((param_3 != 8) ||
            ((*param_2 & 0xdfdfdfdf) != 0x49464e49 || (param_2[1] & 0xdfdfdfdf) != 0x5954494e)) {
LAB_00fb655c:
      *(undefined1 *)((int)param_1 + 1) = 1;
      *(undefined1 *)param_1 = 1;
      return;
    }
    dVar15 = INFINITY;
LAB_00fb6574:
    if (cVar1 == '-') {
      dVar15 = -dVar15;
    }
    *(double *)(param_1 + 4) = dVar15;
    *(undefined1 *)param_1 = 0;
    return;
  }
  uVar8 = local_334 - (local_338 < 0x26);
  if (((uVar8 + 1 < (uint)(0xffffffc3 < local_338 - 0x26)) &&
      (local_32c < 0x200000 || 0x200000 - local_32c < (uint)(local_330 == 0))) &&
     ((local_327 & 1) == 0)) {
    if ((int)-(local_334 + (0x16 < local_338)) < 0 ==
        (SBORROW4(0,local_334) != SBORROW4(-local_334,(uint)(0x16 < local_338)))) {
      dVar14 = (double)FUN_01845f30(local_330,local_32c);
      if ((int)local_334 < 0) {
        dVar15 = dVar14 / *(double *)(&DAT_00369ad8 + local_338 * -8);
        dVar14 = -dVar15;
        goto LAB_00fb68f0;
      }
      dVar15 = *(double *)(&DAT_00369ad8 + local_338 * 8);
    }
    else {
      lVar3 = (ulonglong)local_330 * (ulonglong)*(uint *)(&DAT_00362494 + local_338 * 8);
      lVar4 = (ulonglong)*(uint *)(&DAT_00362490 + local_338 * 8) * (ulonglong)local_330;
      iVar12 = (int)lVar4;
      uVar6 = (uint)((ulonglong)lVar4 >> 0x20);
      lVar4 = (ulonglong)*(uint *)(&DAT_00362490 + local_338 * 8) * (ulonglong)local_32c;
      uVar9 = (int)lVar4 + (int)lVar3;
      uVar8 = uVar6 + uVar9;
      if ((((local_32c != 0 && *(uint *)(&DAT_00362494 + local_338 * 8) != 0 ||
            (int)((ulonglong)lVar4 >> 0x20) != 0) || (int)((ulonglong)lVar3 >> 0x20) != 0) ||
           CARRY4(uVar6,uVar9)) || (0x1fffff < uVar8 && (uint)(iVar12 == 0) <= 0x200000 - uVar8))
      goto LAB_00fb6640;
      dVar15 = (double)FUN_01845f30(iVar12,uVar8,0x200000 - (uVar8 + (iVar12 != 0)));
      dVar14 = 1e+22;
    }
    dVar15 = dVar15 * dVar14;
    dVar14 = -dVar15;
    goto LAB_00fb68f0;
  }
LAB_00fb6640:
  FUN_00fb6a00(&local_348,uVar8,local_338,local_334,local_330,local_32c);
  if (((local_327 & 1) == 0) || ((int)local_340 < 0)) {
    if ((int)local_340 < 0) goto LAB_00fb66cc;
  }
  else {
    iVar12 = local_32c + (0xfffffffe < uVar7);
    FUN_00fb6a00(&local_338,iVar12,uVar10,uVar11,uVar7 + 1,iVar12);
    uVar7 = local_348 ^ local_338 | local_344 ^ local_334;
    uVar10 = local_344 ^ local_334;
    uVar11 = uVar7;
    if (uVar7 == 0) {
      uVar10 = local_340;
      uVar11 = local_330;
    }
    bVar13 = local_340 != uVar11;
    local_340 = uVar10;
    local_348 = local_338;
    local_344 = local_334;
    if (uVar7 != 0 || bVar13) {
LAB_00fb66cc:
      FUN_00fb50a0(&local_338,param_2,param_3);
      local_340 = 0;
      if (local_338 == 0) {
LAB_00fb68d4:
        local_348 = 0;
        local_344 = 0;
      }
      else {
        local_348 = 0;
        local_344 = 0;
        if ((-0x145 < (int)local_334) && (local_340 = 0x7ff, (int)local_334 < 0x136)) {
          iVar12 = 0;
          if (0 < (int)local_334) {
            do {
              uVar10 = 0x3c;
              if (local_334 < 0x13) {
                uVar10 = (uint)(byte)(&DAT_0035fc78)[local_334];
              }
              FUN_00fb4cf0(&local_338,uVar10);
              if ((int)local_334 < -0x7ff) {
                local_340 = 0;
                goto LAB_00fb68c0;
              }
              iVar12 = uVar10 + iVar12;
            } while (0 < (int)local_334);
          }
          do {
            if (local_334 == 0) {
              if (4 < (local_330 & 0xff)) break;
              uVar10 = 1;
              if ((local_330 & 0xff) < 2) {
                uVar10 = 2;
              }
            }
            else {
              uVar10 = 0x3c;
              if (-local_334 < 0x13) {
                uVar10 = (uint)(byte)(&DAT_0035fc78)[-local_334];
              }
            }
            FUN_00fb49b4(&local_338,uVar10);
            if (0x7ff < (int)local_334) goto LAB_00fb68d4;
            iVar12 = iVar12 - uVar10;
          } while ((int)local_334 < 1);
          uVar10 = iVar12 - 1;
          if ((int)uVar10 < -0x3fe) {
            do {
              uVar11 = -uVar10 - 0x3fe;
              if (0x3b < uVar11) {
                uVar11 = 0x3c;
              }
              FUN_00fb4cf0(&local_338,uVar11);
              uVar10 = uVar11 + uVar10;
            } while (uVar10 < 0xfffffc02);
          }
          if ((int)(uVar10 + 0x3ff) < 0x7ff) {
            FUN_00fb49b4(&local_338,0x35);
            if ((local_338 == 0) || ((int)local_334 < 0)) {
              local_340 = uVar10 + 0x3fe;
              goto LAB_00fb68d4;
            }
            if (local_334 < 0x13) {
              uVar11 = 0;
              if (local_334 == 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = 0;
                uVar8 = 0;
                do {
                  uVar16 = (ulonglong)uVar11;
                  uVar11 = (uint)(uVar16 * 10);
                  uVar7 = (int)(uVar16 * 10 >> 0x20) + uVar7 * 10;
                  if (uVar8 < local_338) {
                    bVar13 = CARRY4(uVar11,(uint)*(byte *)((int)&local_330 + uVar8));
                    uVar11 = uVar11 + *(byte *)((int)&local_330 + uVar8);
                    uVar7 = uVar7 + bVar13;
                  }
                  uVar8 = uVar8 + 1;
                } while (local_334 != uVar8);
              }
              if (local_334 < local_338) {
                if (local_334 + 1 == local_338 && *(byte *)((int)&local_330 + local_334) == 5) {
                  if (local_30 == '\0') {
                    bVar2 = 0;
                    if (local_334 != 0) {
                      bVar2 = *(byte *)((int)&local_334 + local_334 + 3);
                    }
                    if (local_334 == 0 || (bVar2 & 1) == 0) goto LAB_00fb698c;
                  }
                }
                else if (*(byte *)((int)&local_330 + local_334) < 5) goto LAB_00fb698c;
                bVar13 = 0xfffffffe < uVar11;
                uVar11 = uVar11 + 1;
                uVar7 = uVar7 + bVar13;
              }
LAB_00fb698c:
              uVar16 = CONCAT44(uVar7,uVar11);
              if (0x1fffff < uVar7) goto LAB_00fb6994;
            }
            else {
LAB_00fb6994:
              FUN_00fb4cf0(&local_338,1);
              uVar16 = FUN_00fb4fb8(&local_338);
              local_348 = 0;
              local_344 = 0;
              if (0x7fe < (int)(uVar10 + 0x400)) goto LAB_00fb68e0;
              uVar10 = uVar10 + 1;
            }
            local_348 = (uint)uVar16;
            iVar12 = 0x3ff;
            if (uVar16 < 0x10000000000000) {
              iVar12 = 0x3fe;
            }
            local_340 = iVar12 + uVar10;
            local_344 = (uint)(uVar16 >> 0x20) & 0xfffff;
          }
          else {
LAB_00fb68c0:
            local_348 = 0;
            local_344 = 0;
          }
        }
      }
    }
  }
LAB_00fb68e0:
  local_344 = local_344 | local_340 << 0x14;
  dVar15 = (double)CONCAT44(local_344,local_348);
  dVar14 = -(double)CONCAT44(local_344,local_348);
LAB_00fb68f0:
  if (cVar1 == '-') {
    dVar15 = dVar14;
  }
  *(undefined1 *)param_1 = 0;
  *(double *)(param_1 + 4) = dVar15;
  return;
}

