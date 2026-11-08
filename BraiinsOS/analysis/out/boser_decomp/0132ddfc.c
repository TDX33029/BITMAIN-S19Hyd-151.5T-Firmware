// FUN_0132ddfc @ 0132ddfc size=1060 calls_out=6 calls_in=2
// strings: 

void FUN_0132ddfc(undefined4 *param_1,int param_2,byte *param_3,undefined4 param_4,byte *param_5,
                 undefined4 param_6,uint param_7,int param_8)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  int local_30;
  byte *local_2c;
  int local_28;
  
  if (((param_3 < param_5) ||
      (iVar4 = thunk_FUN_01bed842(param_4,param_2,param_5), param_3 <= param_5 + param_7)) ||
     (iVar4 != 0)) {
    *param_1 = 2;
    return;
  }
  if ((param_5 != (byte *)0x0) && (*(char *)(param_2 + 1) < -0x40)) {
    local_2c = (byte *)0x1;
    puVar7 = &DAT_01ce63ec;
    pbVar10 = param_3;
    goto LAB_0132e1ec;
  }
  pbVar9 = param_5 + param_2;
  bVar3 = false;
  pbVar10 = pbVar9;
  pbVar12 = (byte *)0x0;
  do {
    pbVar11 = pbVar12;
    if (pbVar10 == param_3 + param_2) {
      pbVar10 = param_5;
      goto LAB_0132e024;
    }
    pbVar5 = pbVar10 + 1;
    uVar13 = (uint)*pbVar10;
    if ((char)*pbVar10 < '\0') {
      if (uVar13 < 0xe0) {
        uVar13 = pbVar10[1] & 0x3f | (uVar13 & 0x1f) << 6;
        pbVar5 = pbVar10 + 2;
      }
      else {
        uVar6 = pbVar10[2] & 0x3f | (pbVar10[1] & 0x3f) << 6;
        if (uVar13 < 0xf0) {
          uVar13 = uVar6 | (uVar13 & 0x1f) << 0xc;
          pbVar5 = pbVar10 + 3;
        }
        else {
          pbVar5 = pbVar10 + 4;
          uVar13 = pbVar10[3] & 0x3f | uVar6 << 6 | (uVar13 & 7) << 0x12;
        }
      }
      pbVar12 = pbVar5 + ((int)pbVar11 - (int)pbVar10);
      if (uVar13 < 0x80) goto LAB_0132df14;
      bVar2 = false;
      if (uVar13 < 0xaa) {
LAB_0132df94:
        uVar6 = 0;
      }
      else {
        iVar4 = FUN_0130743c(uVar13);
        uVar6 = 1;
        if (iVar4 == 0) {
          if (uVar13 < 0xb2) goto LAB_0132df94;
          uVar6 = FUN_013077ac(uVar13);
        }
      }
    }
    else {
      pbVar12 = pbVar11 + 1;
LAB_0132df14:
      uVar6 = (uint)(uVar13 - 0x30 < 10 || (uVar13 & 0x5f) - 0x41 < 0x1a);
      bVar2 = uVar13 == 0x5f;
    }
    pbVar10 = pbVar5;
  } while (bVar2 || uVar6 != 0);
  pbVar10 = pbVar11 + (int)param_5;
  if (pbVar11 != (byte *)0x0) {
    if (pbVar10 != (byte *)0x0) {
      if (pbVar10 < param_3) {
        if ((char)pbVar10[param_2] < -0x40) goto LAB_0132dfd8;
      }
      else if (param_3 != pbVar10) {
LAB_0132dfd8:
        puVar7 = &DAT_01ce63fc;
        local_2c = pbVar10;
        pbVar10 = param_3;
        goto LAB_0132e1ec;
      }
    }
    bVar3 = true;
    if (param_7 <= (uint)((int)param_3 - (int)pbVar10)) {
      iVar4 = thunk_FUN_01bed842(param_6,pbVar10 + param_2);
      if (iVar4 == 0) {
        if ((pbVar10 < param_5) || ((param_5 != (byte *)0x0 && ((char)*pbVar9 < -0x40))))
        goto LAB_0132e0e4;
        if (pbVar10 != (byte *)0x0) {
          if (pbVar10 < param_3) {
            if ((char)pbVar10[param_2] < -0x40) goto LAB_0132e0e4;
          }
          else if (param_3 != pbVar10) {
LAB_0132e0e4:
            puVar7 = &DAT_01ce643c;
            local_2c = param_5;
            goto LAB_0132e1ec;
          }
        }
        param_1[4] = pbVar10 + param_7;
        uVar8 = 0;
        param_1[2] = pbVar9;
        param_1[3] = pbVar11;
        goto LAB_0132e130;
      }
    }
  }
LAB_0132e024:
  if (param_8 != 0) {
    if (param_3 <= pbVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(pbVar10,param_3,&DAT_01ce640c);
    }
    bVar1 = pbVar10[param_2];
    if ((bVar1 == 0x2b || bVar1 == 0x2d) &&
       (FUN_0132b9b0(&local_30,param_2,param_3,pbVar10 + 1), local_30 != 0)) {
      if (local_2c != (byte *)0x0) {
        if (local_2c < param_3) {
          if ((char)local_2c[param_2] < -0x40) goto LAB_0132e090;
        }
        else if (param_3 != local_2c) {
LAB_0132e090:
          puVar7 = &DAT_01ce641c;
          pbVar10 = param_3;
          goto LAB_0132e1ec;
        }
      }
      if ((param_7 <= (uint)((int)param_3 - (int)local_2c)) &&
         (iVar4 = thunk_FUN_01bed842(param_6,local_2c + param_2,param_7), iVar4 == 0)) {
        if (local_28 == 0 && !bVar3) {
          uVar8 = 2;
        }
        else {
          if (bVar1 == 0x2d) {
            local_28 = -local_28;
          }
          if ((pbVar10 < param_5) || ((param_5 != (byte *)0x0 && ((char)*pbVar9 < -0x40)))) {
            puVar7 = &DAT_01ce642c;
            local_2c = param_5;
LAB_0132e1ec:
                    /* WARNING: Subroutine does not return */
            FUN_012fb514(param_2,param_3,local_2c,pbVar10,puVar7);
          }
          param_1[4] = local_2c + param_7;
          uVar8 = 1;
          param_1[1] = local_28;
          param_1[2] = pbVar9;
          param_1[3] = (int)pbVar10 - (int)param_5;
        }
        *param_1 = uVar8;
        return;
      }
    }
  }
  uVar8 = 2;
LAB_0132e130:
  *param_1 = uVar8;
  return;
}

