// FUN_013d9998 @ 013d9998 size=768 calls_out=5 calls_in=2
// strings: 

void FUN_013d9998(undefined2 *param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puStack_6c;
  uint uStack_68;
  uint **local_64;
  undefined2 *local_60;
  undefined2 local_5c [2];
  uint local_58 [16];
  
  puStack_6c = param_2;
  uStack_68 = param_3;
  if (0x3f < param_3) {
    local_5c[0] = 0xc;
    local_58[0] = param_3;
    goto LAB_013d9c0c;
  }
  if (param_3 == 0) goto LAB_013d9bd4;
  if (param_3 == 1) {
    if ((byte)*param_2 == 0x2a) {
      *(undefined1 *)(param_1 + 2) = 0x2a;
      param_1[1] = 1;
      FUN_01bed93e((int)param_1 + 5,0,0x17);
      *param_1 = 0;
      return;
    }
LAB_013d9a1c:
    uVar5 = param_3;
    do {
      if (uVar5 == 0) goto LAB_013d9a94;
      iVar2 = uVar5 - 1;
      uVar5 = uVar5 - 1;
    } while ((uint)(int)(char)*(byte *)((int)param_2 + iVar2) < 0x80000000);
  }
  else {
    if (param_3 < 4) goto LAB_013d9a1c;
    if ((*param_2 & 0x80808080) == 0) {
      uVar5 = ((uint)((int)param_2 + 3) & 0xfffffffc) - (int)param_2;
      if (uVar5 == 0) {
        uVar5 = 4;
      }
      for (; uVar5 < param_3 - 4; uVar5 = uVar5 + 4) {
        if ((*(uint *)((int)param_2 + uVar5) & 0x80808080) != 0) goto LAB_013d9bd4;
      }
      if ((*(uint *)((int)param_2 + (param_3 - 4)) & 0x80808080) == 0) {
LAB_013d9a94:
        if (param_3 == 0) goto LAB_013d9c68;
        bVar1 = (byte)*param_2;
        uVar5 = (uint)bVar1;
        if ((char)bVar1 < '\0') {
          uVar6 = *(byte *)((int)param_2 + 1) & 0x3f;
          if (uVar5 < 0xe0) {
            puVar3 = (undefined1 *)(uVar6 | (uVar5 & 0x1f) << 6);
LAB_013d9b1c:
            iVar2 = FUN_013d992c(puVar3,1,0);
            if (iVar2 == 0) goto LAB_013d9bd4;
            if (-1 < (char)bVar1) goto LAB_013d9b3c;
            if (uVar5 < 0xe0) {
              puVar7 = (uint *)((int)param_2 + 2);
            }
            else {
              if (0xef < uVar5) goto LAB_013d9c34;
              puVar7 = (uint *)((int)param_2 + 3);
            }
          }
          else {
            uVar6 = *(byte *)((int)param_2 + 2) & 0x3f | uVar6 << 6;
            if (uVar5 < 0xf0) {
              puVar3 = (undefined1 *)(uVar6 | (uVar5 & 0x1f) << 0xc);
              goto LAB_013d9b1c;
            }
            puVar3 = (undefined1 *)
                     (*(byte *)((int)param_2 + 3) & 0x3f | uVar6 << 6 | (uVar5 & 7) << 0x12);
            if (puVar3 != &DAT_00110000) goto LAB_013d9b1c;
LAB_013d9c34:
            if ((undefined1 *)
                ((*(byte *)((int)param_2 + 2) & 0x3f) << 6 |
                 (*(byte *)((int)param_2 + 1) & 0x3f) << 0xc | *(byte *)((int)param_2 + 3) & 0x3f |
                (uVar5 & 7) << 0x12) == &DAT_00110000) {
LAB_013d9c68:
              FUN_013d9ca0(param_1,param_2,param_3);
              return;
            }
            puVar7 = param_2 + 1;
          }
        }
        else {
          iVar2 = FUN_013d992c(uVar5,1,0);
          if (iVar2 == 0) goto LAB_013d9bd4;
LAB_013d9b3c:
          puVar7 = (uint *)((int)param_2 + 1);
        }
        do {
          if (puVar7 == (uint *)((int)param_2 + param_3)) goto LAB_013d9c68;
          puVar8 = (uint *)((int)puVar7 + 1);
          puVar3 = (undefined1 *)(uint)(byte)*puVar7;
          if (0x7fffffff < (uint)(int)(char)(byte)*puVar7) {
            uVar5 = *(byte *)((int)puVar7 + 1) & 0x3f;
            if (puVar3 < (undefined1 *)0xe0) {
              puVar3 = (undefined1 *)(uVar5 | ((uint)puVar3 & 0x1f) << 6);
              puVar8 = (uint *)((int)puVar7 + 2);
            }
            else {
              uVar5 = *(byte *)((int)puVar7 + 2) & 0x3f | uVar5 << 6;
              if (puVar3 < (undefined1 *)0xf0) {
                puVar3 = (undefined1 *)(uVar5 | ((uint)puVar3 & 0x1f) << 0xc);
                puVar8 = (uint *)((int)puVar7 + 3);
              }
              else {
                puVar3 = (undefined1 *)
                         (*(byte *)((int)puVar7 + 3) & 0x3f | uVar5 << 6 |
                         ((uint)puVar3 & 7) << 0x12);
                if (puVar3 == &DAT_00110000) goto LAB_013d9c68;
                puVar8 = puVar7 + 1;
              }
            }
          }
          iVar2 = FUN_013d992c(puVar3,0,0);
          puVar7 = puVar8;
        } while (iVar2 != 0);
      }
    }
  }
LAB_013d9bd4:
  local_64 = &puStack_6c;
  local_60 = &DAT_0132b6a0;
  FUN_00664898(local_58,&DAT_005a5dd2,&local_64);
  local_5c[0] = 0x11;
LAB_013d9c0c:
  uVar4 = FUN_013e649c(local_5c);
  *(undefined4 *)(param_1 + 2) = uVar4;
  *param_1 = 2;
  return;
}

