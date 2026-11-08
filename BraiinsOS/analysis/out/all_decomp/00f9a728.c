// FUN_00f9a728 @ 00f9a728 size=440 calls_out=1 calls_in=0
// strings: 

void FUN_00f9a728(undefined4 *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 *local_2c;
  undefined1 *local_28;
  
  if (*(char *)(param_2 + 0x20) != '\0') {
    *param_1 = 0x80000001;
    return;
  }
  local_2c = (undefined4 *)(param_2 + 0x18);
  pbVar7 = (byte *)*local_2c;
  iVar3 = *(int *)(param_2 + 0x1c);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    pbVar6 = pbVar7;
    do {
      uVar4 = (uint)*pbVar6;
      pbVar2 = pbVar6 + 1;
      if (0x7fffffff < (uint)(int)(char)*pbVar6) {
        if (uVar4 < 0xe0) {
          uVar4 = pbVar6[1] & 0x3f | (uVar4 & 0x1f) << 6;
          pbVar2 = pbVar6 + 2;
        }
        else {
          uVar5 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
          if (uVar4 < 0xf0) {
            uVar4 = uVar5 | (uVar4 & 0x1f) << 0xc;
            pbVar2 = pbVar6 + 3;
          }
          else {
            uVar4 = pbVar6[3] & 0x3f | uVar5 << 6 | (uVar4 & 7) << 0x12;
            pbVar2 = pbVar6 + 4;
          }
        }
      }
      pbVar6 = pbVar2;
      if ((uVar4 - 9 < 0x18) && ((1 << (uVar4 - 9 & 0xff) & 0x80001fU) != 0)) goto LAB_00f9a894;
      if (0x7f < uVar4) {
        uVar5 = uVar4 >> 8;
        if (uVar5 < 0x20) {
          if (uVar5 == 0) {
            bVar1 = (&DAT_0041951b)[uVar4 & 0xff] & 1;
joined_r0x00f9a798:
            if (bVar1 != 0) {
LAB_00f9a894:
              local_28 = &LAB_00f9a8ec;
              FUN_00600d2c(&local_38,&DAT_00590e71,&local_2c);
              *param_1 = local_38;
              param_1[1] = uStack_34;
              param_1[2] = local_30;
              return;
            }
          }
          else if ((uVar5 == 0x16) && (uVar4 == 0x1680)) goto LAB_00f9a894;
        }
        else {
          if (uVar5 == 0x20) {
            bVar1 = (&DAT_0041951b)[uVar4 & 0xff] & 2;
            goto joined_r0x00f9a798;
          }
          if (uVar5 == 0x30 && uVar4 == 0x3000) goto LAB_00f9a894;
        }
      }
    } while (pbVar6 != pbVar7 + iVar3);
  }
  *param_1 = 0x80000000;
  param_1[1] = pbVar7;
  param_1[2] = iVar3;
  return;
}

