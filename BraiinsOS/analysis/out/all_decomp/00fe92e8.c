// FUN_00fe92e8 @ 00fe92e8 size=1120 calls_out=6 calls_in=2
// strings: 

void FUN_00fe92e8(undefined4 *param_1,int param_2,byte *param_3,undefined4 param_4,byte *param_5,
                 undefined4 param_6,uint param_7,int param_8)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  int local_30;
  byte *local_2c;
  int local_28;
  
  if (((param_3 < param_5) ||
      (iVar4 = thunk_FUN_016dd50a(param_4,param_2,param_5), param_3 <= param_5 + param_7)) ||
     (iVar4 != 0)) {
    *param_1 = 2;
    return;
  }
  if ((param_5 != (byte *)0x0) && (*(char *)(param_2 + 1) < -0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa8ac(param_2,param_3,1,param_3,&DAT_01881a38);
  }
  pbVar6 = param_5 + param_2;
  bVar3 = false;
  pbVar7 = pbVar6;
  pbVar10 = (byte *)0x0;
  do {
    pbVar9 = pbVar10;
    if (pbVar7 == param_3 + param_2) {
      pbVar10 = param_5;
      goto LAB_00fe9538;
    }
    pbVar5 = pbVar7 + 1;
    uVar11 = (uint)*pbVar7;
    if ((uint)(int)(char)*pbVar7 < 0x80000000) {
      pbVar10 = pbVar9 + 1;
LAB_00fe9378:
      uVar8 = (uint)(uVar11 - 0x30 < 10 || (uVar11 & 0x5f) - 0x41 < 0x1a);
      bVar2 = uVar11 == 0x5f;
    }
    else {
      if (uVar11 < 0xe0) {
        uVar11 = pbVar7[1] & 0x3f | (uVar11 & 0x1f) << 6;
        pbVar5 = pbVar7 + 2;
        iVar4 = (int)pbVar5 - (int)pbVar7;
joined_r0x00fe9440:
        pbVar10 = pbVar9 + iVar4;
      }
      else {
        uVar8 = pbVar7[2] & 0x3f | (pbVar7[1] & 0x3f) << 6;
        if (uVar11 < 0xf0) {
          uVar11 = uVar8 | (uVar11 & 0x1f) << 0xc;
          pbVar5 = pbVar7 + 3;
          iVar4 = (int)pbVar5 - (int)pbVar7;
          goto joined_r0x00fe9440;
        }
        pbVar5 = pbVar7 + 4;
        uVar11 = pbVar7[3] & 0x3f | uVar8 << 6 | (uVar11 & 7) << 0x12;
        pbVar10 = pbVar5 + ((int)pbVar9 - (int)pbVar7);
      }
      if (uVar11 < 0x80) goto LAB_00fe9378;
      bVar2 = false;
      if (uVar11 < 0xaa) {
LAB_00fe94a0:
        uVar8 = 0;
      }
      else {
        iVar4 = FUN_00fb7558(uVar11);
        uVar8 = 1;
        if (iVar4 == 0) {
          if (uVar11 < 0xb2) goto LAB_00fe94a0;
          uVar8 = FUN_00fb7a34(uVar11);
        }
      }
    }
    pbVar7 = pbVar5;
  } while (bVar2 || uVar8 != 0);
  pbVar10 = pbVar9 + (int)param_5;
  if (pbVar9 != (byte *)0x0) {
    if (pbVar10 != (byte *)0x0) {
      if (pbVar10 < param_3) {
        if ((char)pbVar10[param_2] < -0x40) goto LAB_00fe94e4;
      }
      else if (param_3 != pbVar10) {
LAB_00fe94e4:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(param_2,param_3,pbVar10,param_3,&DAT_01881a48);
      }
    }
    bVar3 = true;
    if (param_7 <= (uint)((int)param_3 - (int)pbVar10)) {
      iVar4 = thunk_FUN_016dd50a(param_6,pbVar10 + param_2);
      if (iVar4 == 0) {
        if ((pbVar10 < param_5) || ((param_5 != (byte *)0x0 && ((char)*pbVar6 < -0x40))))
        goto LAB_00fe9600;
        if (pbVar10 != (byte *)0x0) {
          if (pbVar10 < param_3) {
            if ((char)pbVar10[param_2] < -0x40) goto LAB_00fe9600;
          }
          else if (param_3 != pbVar10) {
LAB_00fe9600:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(param_2,param_3,param_5,pbVar10,&DAT_01881a88);
          }
        }
        param_1[4] = pbVar10 + param_7;
        param_1[2] = pbVar6;
        param_1[3] = pbVar9;
        *param_1 = 0;
        return;
      }
    }
  }
LAB_00fe9538:
  if (param_8 != 0) {
    if (param_3 <= pbVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(pbVar10,param_3,&DAT_01881a58);
    }
    bVar1 = pbVar10[param_2];
    if ((bVar1 == 0x2b || bVar1 == 0x2d) &&
       (FUN_00fe53bc(&local_30,param_2,param_3,pbVar10 + 1), local_30 != 0)) {
      if (local_2c != (byte *)0x0) {
        if (local_2c < param_3) {
          if ((char)local_2c[param_2] < -0x40) goto LAB_00fe95a4;
        }
        else if (param_3 != local_2c) {
LAB_00fe95a4:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(param_2,param_3,local_2c,param_3,&DAT_01881a68);
        }
      }
      if (((param_7 <= (uint)((int)param_3 - (int)local_2c)) &&
          (iVar4 = thunk_FUN_016dd50a(param_6,local_2c + param_2,param_7), iVar4 == 0)) &&
         (local_28 != 0 || bVar3)) {
        if ((pbVar10 < param_5) || ((param_5 != (byte *)0x0 && ((char)*pbVar6 < -0x40)))) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(param_2,param_3,param_5,pbVar10,&DAT_01881a78);
        }
        if (bVar1 == 0x2d) {
          local_28 = -local_28;
        }
        *param_1 = 1;
        param_1[1] = local_28;
        param_1[2] = pbVar6;
        param_1[3] = (int)pbVar10 - (int)param_5;
        param_1[4] = local_2c + param_7;
        return;
      }
    }
  }
  *param_1 = 2;
  return;
}

