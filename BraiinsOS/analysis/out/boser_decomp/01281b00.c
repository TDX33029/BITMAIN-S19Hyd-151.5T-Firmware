// FUN_01281b00 @ 01281b00 size=1204 calls_out=9 calls_in=1
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_01281b00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  int unaff_r9;
  byte *unaff_r10;
  uint uVar11;
  ulonglong uVar12;
  int local_64;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  byte *local_44;
  int local_40;
  byte *local_30;
  int local_2c;
  
  local_60 = 0;
  local_54 = local_54 & 0xffff0000;
  local_5c = 0x1b6;
  local_58 = 1;
  FUN_019a581c(&local_48,&local_60,param_2,param_3);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(local_48 & 0xff) {
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    local_60 = FUN_01937230();
    local_4c = local_44;
    local_50 = 0;
    local_54 = 0;
    local_58 = 0;
    local_5c = 0x2000;
    local_64 = 0;
  }
LAB_01281b98:
  local_40 = 0;
  local_44 = &DAT_00000001;
  local_48 = 0;
  FUN_01446b7c(&local_30,&local_60,&local_48);
  if ((char)local_30 == '\x04') {
    if (local_2c == 0) {
      uVar11 = 0x80000001;
      goto LAB_01281c3c;
    }
    iVar5 = local_40;
    if ((((local_40 != 0) && (local_44[local_40 + -1] == 10)) && (iVar5 = local_40 + -1, iVar5 != 0)
        ) && (local_44[local_40 + -2] == 0xd)) {
      iVar5 = local_40 + -2;
    }
    local_40 = iVar5;
    unaff_r9 = local_40;
    unaff_r10 = local_44;
    uVar11 = local_48;
  }
  else {
    uVar11 = 0x80000000;
    unaff_r9 = local_2c;
    unaff_r10 = local_30;
LAB_01281c3c:
    FUN_0134bd64(local_48,local_44);
  }
  if (uVar11 == 0x80000000) {
    *param_1 = unaff_r10;
    param_1[1] = unaff_r9;
    if (local_5c != 0) {
      thunk_FUN_01be4678(local_60);
    }
    FUN_01bf01d6(local_4c);
  }
  else {
    if (uVar11 != 0x80000001) {
      pbVar4 = unaff_r10 + unaff_r9;
      pbVar6 = (byte *)0x0;
      pbVar3 = pbVar6;
      pbVar7 = unaff_r10;
      if (unaff_r9 == 0) {
        pbVar3 = (byte *)0x0;
        pbVar8 = unaff_r10;
LAB_01281ddc:
        do {
          do {
            pbVar7 = pbVar4;
            if (pbVar8 == pbVar7) goto LAB_01281d90;
            pbVar4 = pbVar7 + -1;
            uVar10 = (uint)(char)*pbVar4;
            if (0x7fffffff < uVar10) {
              pbVar4 = pbVar7 + -2;
              bVar1 = *pbVar4;
              if ((char)bVar1 < -0x40) {
                pbVar4 = pbVar7 + -3;
                bVar2 = *pbVar4;
                if ((char)bVar2 < -0x40) {
                  pbVar4 = pbVar7 + -4;
                  uVar9 = (int)(char)bVar2 & 0x3fU | (*pbVar4 & 7) << 6;
                }
                else {
                  uVar9 = bVar2 & 0xf;
                }
                uVar9 = (int)(char)bVar1 & 0x3fU | uVar9 << 6;
              }
              else {
                uVar9 = bVar1 & 0x1f;
              }
              uVar10 = uVar10 & 0x3f | uVar9 << 6;
            }
          } while ((uVar10 - 9 < 5) || (uVar10 == 0x20));
          if (uVar10 < 0x80) goto LAB_01281ee4;
          uVar9 = uVar10 >> 8;
          if (uVar9 < 0x20) {
            if (uVar9 == 0) {
              bVar1 = (&DAT_00533bcd)[uVar10 & 0xff] & 1;
joined_r0x01281ec4:
              if (bVar1 == 0) goto LAB_01281ee4;
            }
            else if ((uVar9 != 0x16) || (uVar10 != 0x1680)) goto LAB_01281ee4;
            goto LAB_01281ddc;
          }
          if (uVar9 == 0x20) {
            bVar1 = (&DAT_00533bcd)[uVar10 & 0xff] & 2;
            goto joined_r0x01281ec4;
          }
          if ((uVar9 != 0x30) || (uVar10 != 0x3000)) goto LAB_01281ee4;
        } while( true );
      }
      do {
        pbVar8 = pbVar7 + 1;
        uVar10 = (uint)*pbVar7;
        if (0x7fffffff < (uint)(int)(char)*pbVar7) {
          if (uVar10 < 0xe0) {
            uVar10 = pbVar7[1] & 0x3f | (uVar10 & 0x1f) << 6;
            pbVar8 = pbVar7 + 2;
          }
          else {
            uVar9 = pbVar7[2] & 0x3f | (pbVar7[1] & 0x3f) << 6;
            if (uVar10 < 0xf0) {
              uVar10 = uVar9 | (uVar10 & 0x1f) << 0xc;
              pbVar8 = pbVar7 + 3;
            }
            else {
              pbVar8 = pbVar7 + 4;
              uVar10 = pbVar7[3] & 0x3f | uVar9 << 6 | (uVar10 & 7) << 0x12;
            }
          }
        }
        pbVar6 = pbVar3 + ((int)pbVar8 - (int)pbVar7);
        if ((4 < uVar10 - 9) && (uVar10 != 0x20)) {
          if (uVar10 < 0x80) goto LAB_01281ddc;
          uVar9 = uVar10 >> 8;
          if (uVar9 < 0x20) {
            if (uVar9 == 0) {
              bVar1 = (&DAT_00533bcd)[uVar10 & 0xff] & 1;
joined_r0x01281d80:
              if (bVar1 == 0) goto LAB_01281ddc;
            }
            else if ((uVar9 != 0x16) || (uVar10 != 0x1680)) goto LAB_01281ddc;
          }
          else {
            if (uVar9 == 0x20) {
              bVar1 = (&DAT_00533bcd)[uVar10 & 0xff] & 2;
              goto joined_r0x01281d80;
            }
            if ((uVar9 != 0x30) || (uVar10 != 0x3000)) goto LAB_01281ddc;
          }
        }
        pbVar3 = pbVar6;
        pbVar7 = pbVar8;
      } while (pbVar8 != pbVar4);
      pbVar3 = (byte *)0x0;
      pbVar6 = (byte *)0x0;
      goto LAB_01281d90;
    }
    if (local_5c != 0) {
      thunk_FUN_01be4678(local_60);
    }
    FUN_01bf01d6(local_4c);
    *(undefined1 *)param_1 = 4;
    param_1[1] = local_64;
  }
  return;
LAB_01281ee4:
  pbVar6 = pbVar7 + ((int)pbVar6 - (int)pbVar8);
LAB_01281d90:
  uVar9 = (int)pbVar6 - (int)pbVar3;
  pbVar3 = unaff_r10 + (int)pbVar3;
  uVar10 = uVar9;
  do {
    uVar12 = FUN_01307268(0x20,pbVar3,uVar10);
    uVar10 = (uint)(uVar12 >> 0x20);
    if ((uVar12 & 1) == 0) break;
    if ((uVar10 < uVar9) && (pbVar3[uVar10] == 0x20)) {
      pbVar3 = pbVar3 + uVar10 + 1;
      uVar9 = uVar9 - (uVar10 + 1);
      break;
    }
  } while (uVar10 <= uVar9);
  FUN_01ae1d6c(&local_48,pbVar3,uVar9);
  if ((char)local_48 == '\0') {
    FUN_0127b22c(param_4,(uint)&local_48 | 1);
    local_64 = local_64 + 1;
  }
  FUN_0134bd64(uVar11,unaff_r10);
  goto LAB_01281b98;
}

