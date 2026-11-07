// FUN_012bbe08 @ 012bbe08 size=404 calls_out=1 calls_in=1
// strings: 

void FUN_012bbe08(undefined4 *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 uVar8;
  undefined4 local_38;
  byte *local_34;
  int local_30;
  undefined4 *local_2c;
  undefined1 *local_28;
  
  if (*(char *)(param_2 + 0x20) == '\0') {
    local_2c = (undefined4 *)(param_2 + 0x18);
    pbVar7 = (byte *)*local_2c;
    uVar8 = 0x80000000;
    iVar3 = *(int *)(param_2 + 0x1c);
    if (iVar3 != 0) {
      pbVar5 = pbVar7;
      do {
        pbVar6 = pbVar5 + 1;
        uVar4 = (uint)*pbVar5;
        if (0x7fffffff < (uint)(int)(char)*pbVar5) {
          if (uVar4 < 0xe0) {
            uVar4 = pbVar5[1] & 0x3f | (uVar4 & 0x1f) << 6;
            pbVar6 = pbVar5 + 2;
          }
          else {
            uVar2 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
            if (uVar4 < 0xf0) {
              uVar4 = uVar2 | (uVar4 & 0x1f) << 0xc;
              pbVar6 = pbVar5 + 3;
            }
            else {
              pbVar6 = pbVar5 + 4;
              uVar4 = pbVar5[3] & 0x3f | uVar2 << 6 | (uVar4 & 7) << 0x12;
            }
          }
        }
        if ((uVar4 - 9 < 0x18) && ((1 << (uVar4 - 9 & 0xff) & 0x80001fU) != 0)) {
LAB_012bbf54:
          local_28 = &LAB_012bbfa8;
          FUN_00664898(&local_38,&DAT_00590e5f,&local_2c);
          iVar3 = local_30;
          pbVar7 = local_34;
          uVar8 = local_38;
          break;
        }
        if (0x7f < uVar4) {
          uVar2 = uVar4 >> 8;
          if (uVar2 < 0x20) {
            if (uVar2 == 0) {
              bVar1 = (&DAT_00533bcd)[uVar4 & 0xff] & 1;
joined_r0x012bbf44:
              if (bVar1 != 0) goto LAB_012bbf54;
            }
            else if ((uVar2 == 0x16) && (uVar4 == 0x1680)) goto LAB_012bbf54;
          }
          else {
            if (uVar2 == 0x20) {
              bVar1 = (&DAT_00533bcd)[uVar4 & 0xff] & 2;
              goto joined_r0x012bbf44;
            }
            if (uVar2 == 0x30 && uVar4 == 0x3000) goto LAB_012bbf54;
          }
        }
        pbVar5 = pbVar6;
      } while (pbVar6 != pbVar7 + iVar3);
    }
    *param_1 = uVar8;
    param_1[1] = pbVar7;
    param_1[2] = iVar3;
  }
  else {
    *param_1 = 0x80000001;
  }
  return;
}

