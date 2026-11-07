// FUN_01605b78 @ 01605b78 size=972 calls_out=4 calls_in=2
// strings: 

void FUN_01605b78(undefined4 *param_1,int *param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_01606284(&local_48,param_3,param_4);
  if ((char)local_48 != '3') {
    *param_1 = local_48;
    param_1[1] = uStack_44;
    param_1[2] = uStack_40;
    param_1[3] = uStack_3c;
    param_1[4] = local_38;
    param_1[5] = uStack_34;
    param_1[6] = uStack_30;
    param_1[7] = uStack_2c;
    param_1[8] = uStack_28;
    return;
  }
  pbVar6 = param_3 + 1;
  puVar2 = (undefined1 *)(uint)*param_3;
  if ((uint)(int)(char)*param_3 < 0x80000000) {
joined_r0x01605c10:
    if (puVar2 == (undefined1 *)0x5f) goto LAB_01605c40;
LAB_01605e48:
    if (puVar2 < (undefined1 *)0x80) {
      bVar1 = (&DAT_00415d00)[(int)puVar2];
    }
    else {
      pbVar3 = &DAT_0041121f;
      if (puVar2 < (undefined1 *)0x32400) {
        pbVar3 = &DAT_00415b58 + ((uint)puVar2 >> 9);
      }
      bVar1 = (byte)(&DAT_00416540)[(((uint)puVar2 & 0x1ff) >> 3) + (uint)*pbVar3 * 0x20] >>
              ((uint)puVar2 & 7) & 1;
    }
    if (bVar1 != 0) goto LAB_01605c40;
  }
  else {
    if (puVar2 < (undefined1 *)0xe0) {
      puVar2 = (undefined1 *)(param_3[1] & 0x3f | ((uint)puVar2 & 0x1f) << 6);
      pbVar6 = param_3 + 2;
      goto joined_r0x01605c10;
    }
    uVar5 = param_3[2] & 0x3f | (param_3[1] & 0x3f) << 6;
    if ((undefined1 *)0xef < puVar2) {
      puVar2 = (undefined1 *)(param_3[3] & 0x3f | uVar5 << 6 | ((uint)puVar2 & 7) << 0x12);
      if (puVar2 != &DAT_00110000) {
        pbVar6 = param_3 + 4;
        goto joined_r0x01605c10;
      }
      goto LAB_01605ea8;
    }
    puVar2 = (undefined1 *)(uVar5 | ((uint)puVar2 & 0x1f) << 0xc);
    pbVar6 = param_3 + 3;
    if (puVar2 != (undefined1 *)0x5f) goto LAB_01605e48;
LAB_01605c40:
    if (pbVar6 != param_3 + param_4) {
      do {
        pbVar3 = pbVar6 + 1;
        puVar2 = (undefined1 *)(uint)*pbVar6;
        if ((uint)(int)(char)*pbVar6 < 0x80000000) {
LAB_01605c70:
          if ((&DAT_004164c0)[(int)puVar2] != '\x01') goto LAB_01605ea8;
        }
        else {
          if (puVar2 < (undefined1 *)0xe0) {
            puVar2 = (undefined1 *)(pbVar6[1] & 0x3f | ((uint)puVar2 & 0x1f) << 6);
            pbVar3 = pbVar6 + 2;
            if (puVar2 < &DAT_00000080) goto LAB_01605c70;
          }
          else {
            uVar5 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
            if (puVar2 < (undefined1 *)0xf0) {
              puVar2 = (undefined1 *)(uVar5 | ((uint)puVar2 & 0x1f) << 0xc);
              pbVar3 = pbVar6 + 3;
            }
            else {
              puVar2 = (undefined1 *)(pbVar6[3] & 0x3f | uVar5 << 6 | ((uint)puVar2 & 7) << 0x12);
              if (puVar2 == &DAT_00110000) break;
              pbVar3 = pbVar6 + 4;
            }
            if (puVar2 < (undefined1 *)0x80) goto LAB_01605c70;
          }
          pbVar6 = &DAT_0041121f;
          if (puVar2 < (undefined1 *)0xe0200) {
            pbVar6 = &DAT_00415d80 + ((uint)puVar2 >> 9);
          }
          if (((byte)(&DAT_00416540)[(((uint)puVar2 & 0x1ff) >> 3) + (uint)*pbVar6 * 0x20] >>
               ((uint)puVar2 & 7) & 1) == 0) goto LAB_01605ea8;
        }
        pbVar6 = pbVar3;
      } while (pbVar3 != param_3 + param_4);
    }
    if (param_4 == 6) {
      iVar4 = thunk_FUN_016dd50a(&DAT_00410f36,param_3,6);
      if (((iVar4 != 0) && (iVar4 = thunk_FUN_016dd50a(&DAT_00410f3c,param_3,6), iVar4 != 0)) &&
         (iVar4 = thunk_FUN_016dd50a(&DAT_00410f42,param_3,6), iVar4 != 0)) {
        iVar4 = thunk_FUN_016dd50a(&DAT_00410f48,param_3,6);
        goto joined_r0x01605e30;
      }
    }
    else if (param_4 == 5) {
      iVar4 = thunk_FUN_016dd50a(&DAT_00414fdc,param_3,5);
joined_r0x01605e30:
      if (iVar4 != 0) goto LAB_01605ed8;
    }
    else if ((param_4 != 4) ||
            (((*(int *)param_3 != 0x65757274 && (*(int *)param_3 != 0x656d6f53)) &&
             (*(int *)param_3 != 0x656e6f4e)))) goto LAB_01605ed8;
  }
LAB_01605ea8:
  iVar4 = param_2[2];
  if ((uint)(*param_2 - iVar4) < 2) {
    FUN_016225b8(param_2,iVar4,2);
    iVar4 = param_2[2];
  }
  *(undefined2 *)(param_2[1] + iVar4) = 0x2372;
  param_2[2] = param_2[2] + 2;
LAB_01605ed8:
  iVar4 = param_2[2];
  if ((uint)(*param_2 - iVar4) < param_4) {
    FUN_016225b8(param_2,iVar4,param_4);
    iVar4 = param_2[2];
  }
  FUN_016dd1aa(param_2[1] + iVar4,param_3,param_4);
  iVar4 = param_2[2];
  *(undefined1 *)param_1 = 0x33;
  param_2[2] = iVar4 + param_4;
  return;
}

