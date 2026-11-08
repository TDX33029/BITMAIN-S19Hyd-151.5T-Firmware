// FUN_0104930c @ 0104930c size=976 calls_out=5 calls_in=1
// strings: 

void FUN_0104930c(undefined4 *param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint *puVar7;
  undefined1 *puVar8;
  bool bVar9;
  uint *local_88;
  uint uStack_84;
  undefined1 local_80 [18];
  undefined2 local_6e;
  undefined2 uStack_6c;
  undefined2 local_6a;
  undefined2 uStack_68;
  undefined2 local_66;
  undefined2 uStack_64;
  undefined1 *local_60;
  undefined2 local_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined4 local_56;
  undefined2 local_52;
  
  local_60 = (undefined1 *)&local_88;
  local_88 = param_2;
  uStack_84 = param_3;
  if (0x3f < param_3) {
    local_5c = (undefined2)param_3;
    uStack_5a = (undefined2)(param_3 >> 0x10);
    local_60._0_2_ = 0xc;
    iVar2 = thunk_FUN_016d4a50(0x44);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x44);
    }
    goto LAB_010496b0;
  }
  if (param_3 == 0) goto LAB_0104963c;
  if (param_3 == 1) {
    if ((byte)*param_2 == 0x2a) {
      param_1[1] = 0x2a;
      *param_1 = 0x10000;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      return;
    }
LAB_010493a4:
    if ((-1 < (char)*(byte *)((int)param_2 + (param_3 - 1))) &&
       ((param_3 - 1 == 0 ||
        ((-1 < (char)*(byte *)((int)param_2 + (param_3 - 2)) &&
         ((param_3 - 2 == 0 ||
          ((-1 < (char)*(byte *)((int)param_2 + (param_3 - 3)) && (param_3 - 3 == 0)))))))))) {
LAB_01049458:
      bVar1 = (byte)*param_2;
      puVar8 = (undefined1 *)(uint)bVar1;
      puVar6 = puVar8;
      if ((uint)(int)(char)bVar1 < 0x80000000) {
LAB_010494cc:
        puVar3 = puVar6 + -0x30;
        bVar9 = (undefined1 *)0x9 < puVar3;
        if (bVar9) {
          puVar3 = (undefined1 *)(((uint)puVar6 & 0x5f) - 0x41);
        }
        if (((bVar9 && (undefined1 *)0x19 < puVar3) &&
            (puVar6 != (undefined1 *)0x2a && puVar6 != (undefined1 *)0x2e)) &&
           (puVar6 != (undefined1 *)0x5f)) goto LAB_0104963c;
        if ((char)bVar1 < '\0') {
          if (puVar8 < (undefined1 *)0xe0) {
            puVar4 = (uint *)((int)param_2 + 2);
          }
          else {
            if ((undefined1 *)0xef < puVar8) goto LAB_01049514;
            puVar4 = (uint *)((int)param_2 + 3);
          }
        }
        else {
          puVar4 = (uint *)((int)param_2 + 1);
        }
      }
      else {
        uVar5 = *(byte *)((int)param_2 + 1) & 0x3f;
        if (puVar8 < (undefined1 *)0xe0) {
          puVar6 = (undefined1 *)(uVar5 | ((uint)puVar8 & 0x1f) << 6);
LAB_010494c4:
          if ((undefined1 *)0x7f < puVar6) goto LAB_0104963c;
          goto LAB_010494cc;
        }
        uVar5 = *(byte *)((int)param_2 + 2) & 0x3f | uVar5 << 6;
        if (puVar8 < (undefined1 *)0xf0) {
          puVar6 = (undefined1 *)(uVar5 | ((uint)puVar8 & 0x1f) << 0xc);
          goto LAB_010494c4;
        }
        puVar6 = (undefined1 *)
                 (*(byte *)((int)param_2 + 3) & 0x3f | uVar5 << 6 | ((uint)puVar8 & 7) << 0x12);
        if (puVar6 != &DAT_00110000) goto LAB_010494c4;
LAB_01049514:
        if ((undefined1 *)
            ((*(byte *)((int)param_2 + 2) & 0x3f) << 6 | (*(byte *)((int)param_2 + 1) & 0x3f) << 0xc
             | *(byte *)((int)param_2 + 3) & 0x3f | ((uint)puVar8 & 7) << 0x12) == &DAT_00110000) {
LAB_01049548:
          FUN_01049718(param_1);
          return;
        }
        puVar4 = param_2 + 1;
      }
      do {
        do {
          if (puVar4 == (uint *)((int)param_2 + param_3)) goto LAB_01049548;
          puVar6 = (undefined1 *)(uint)(byte)*puVar4;
          puVar7 = (uint *)((int)puVar4 + 1);
          if (0x7fffffff < (uint)(int)(char)(byte)*puVar4) {
            uVar5 = *(byte *)((int)puVar4 + 1) & 0x3f;
            if (puVar6 < (undefined1 *)0xe0) {
              puVar6 = (undefined1 *)(uVar5 | ((uint)puVar6 & 0x1f) << 6);
              puVar7 = (uint *)((int)puVar4 + 2);
            }
            else {
              uVar5 = *(byte *)((int)puVar4 + 2) & 0x3f | uVar5 << 6;
              if (puVar6 < (undefined1 *)0xf0) {
                puVar6 = (undefined1 *)(uVar5 | ((uint)puVar6 & 0x1f) << 0xc);
                puVar7 = (uint *)((int)puVar4 + 3);
                if (puVar6 < &DAT_00000080) goto LAB_0104960c;
                goto LAB_0104963c;
              }
              puVar6 = (undefined1 *)
                       (*(byte *)((int)puVar4 + 3) & 0x3f | uVar5 << 6 | ((uint)puVar6 & 7) << 0x12)
              ;
              if (puVar6 == &DAT_00110000) goto LAB_01049548;
              puVar7 = puVar4 + 1;
            }
            if ((undefined1 *)0x7f < puVar6) goto LAB_0104963c;
          }
LAB_0104960c:
          puVar4 = puVar7;
        } while (puVar6 + -0x30 < (undefined1 *)0xa);
        puVar8 = (undefined1 *)(((uint)puVar6 & 0x5f) - 0x41);
        bVar9 = puVar8 < (undefined1 *)0x1a;
        if (!bVar9) {
          puVar8 = puVar6 + -0x2d;
        }
      } while ((bVar9 || puVar8 < (undefined1 *)0x2) || (puVar6 == (undefined1 *)0x5f));
    }
  }
  else {
    if (param_3 < 4) goto LAB_010493a4;
    if ((*param_2 & 0x80808080) == 0) {
      uVar5 = ((uint)((int)param_2 + 3) & 0xfffffffc) - (int)param_2;
      if (uVar5 == 0) {
        uVar5 = 4;
      }
      for (; uVar5 < param_3 - 4; uVar5 = uVar5 + 4) {
        if ((*(uint *)((int)param_2 + uVar5) & 0x80808080) != 0) goto LAB_0104963c;
      }
      if ((*(uint *)((int)param_2 + (param_3 - 4)) & 0x80808080) != 0) goto LAB_0104963c;
      if (param_3 == 0) goto LAB_01049548;
      goto LAB_01049458;
    }
  }
LAB_0104963c:
  local_5c = 0xd360;
  uStack_5a = 0x157;
  FUN_00600d2c(local_80,&DAT_0057b706,&local_60);
  local_60._0_2_ = 0x11;
  local_66 = local_80._8_2_;
  uStack_64 = local_80._10_2_;
  local_6a = local_80._4_2_;
  uStack_68 = local_80._6_2_;
  local_56 = CONCAT22(local_66,uStack_68);
  local_6e = local_80._0_2_;
  uStack_6c = local_80._2_2_;
  uStack_5a = uStack_6c;
  uStack_58 = local_6a;
  local_5c = local_6e;
  local_52 = uStack_64;
  iVar2 = thunk_FUN_016d4a50(0x44);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x44);
  }
LAB_010496b0:
  FUN_016dd1aa(iVar2,&local_60,0x44);
  param_1[1] = iVar2;
  *(undefined2 *)param_1 = 2;
  return;
}

