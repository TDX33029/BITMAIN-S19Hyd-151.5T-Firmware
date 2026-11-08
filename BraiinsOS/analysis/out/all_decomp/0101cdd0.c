// FUN_0101cdd0 @ 0101cdd0 size=988 calls_out=8 calls_in=3
// strings: assertion failed: N::next(&stream).is_none()

void FUN_0101cdd0(int param_1,undefined4 **param_2,int *param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 ***pppuVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  bool bVar11;
  undefined4 **local_8c;
  int **local_88;
  undefined4 uStack_84;
  uint local_80;
  int local_7c;
  int local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 ***local_68;
  undefined4 local_64;
  uint local_60;
  int iStack_5c;
  int local_58;
  undefined4 uStack_54;
  int local_50;
  undefined4 uStack_4c;
  undefined4 ***local_48;
  undefined4 local_44;
  undefined4 *local_40;
  undefined4 ***local_3c;
  undefined4 ***local_38;
  undefined *local_34;
  int local_30;
  undefined4 ***local_2c;
  undefined4 ***local_28;
  
  local_60 = 2;
  local_50 = DAT_018da8c0;
  local_8c = param_2;
  if (DAT_018dd947 == '\0') {
    if (*(int *)(DAT_018da8c0 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018a48f4);
    }
    local_38 = &local_8c;
    local_3c = &local_88;
    local_48 = &local_3c;
    local_40 = (undefined4 *)(DAT_018da8c0 + 0x1c);
    local_88 = (int **)*local_40;
    local_78 = 0;
    uStack_84 = *(undefined4 *)(DAT_018da8c0 + 0x20);
    local_80 = *(undefined4 *)(DAT_018da8c0 + 0x24);
    local_7c = *(undefined4 *)(DAT_018da8c0 + 0x28);
    local_44 = 1;
    local_34 = &DAT_018a4904;
    FUN_01694880(&local_68,&local_48);
  }
  local_88 = (int **)local_68;
  uStack_84 = local_64;
  local_80 = local_60;
  local_7c = iStack_5c;
  local_78 = local_58;
  uStack_74 = uStack_54;
  iStack_70 = local_50;
  uStack_6c = uStack_4c;
  if (local_60 != 2) {
    if ((local_60 & 1) != 0) {
      iStack_5c = iStack_5c + (*(int *)(local_58 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_58 + 0x30))(iStack_5c,&local_88);
  }
  iVar10 = *(int *)(param_1 + 0x4c);
  if (!SCARRY4(iVar10,(int)local_8c)) {
    *(int *)(param_1 + 0x4c) = iVar10 + (int)local_8c;
    iVar10 = iVar10 + (int)local_8c;
  }
  if (0 < iVar10) {
    iVar7 = *param_3;
    local_68 = &local_38;
    do {
      if (*(int *)(param_1 + 0x14) != 1) break;
      local_3c = *(undefined4 ****)(param_1 + 0x18);
      pppuVar4 = *(undefined4 ****)(param_1 + 0x20);
      local_38 = *(undefined4 ****)(param_1 + 0x1c);
      bVar11 = local_3c == pppuVar4;
      if (bVar11) {
        pppuVar4 = *(undefined4 ****)(param_1 + 0x24);
      }
      if (bVar11 && local_38 == pppuVar4) {
        pppuVar4 = *(undefined4 ****)(iVar7 + 0x38);
        if (((local_3c < pppuVar4) &&
            (piVar5 = (int *)(*(int *)(iVar7 + 0x34) + (int)local_3c * 0xf8),
            *piVar5 != 3 || piVar5[1] != 0)) && ((undefined4 ***)piVar5[0x35] == local_38)) {
          if (piVar5[0x1e] != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464("assertion failed: N::next(&stream).is_none()",0x2c,&DAT_018a6b70);
          }
          *(undefined4 *)(param_1 + 0x14) = 0;
          goto LAB_0101d008;
        }
LAB_0101d18c:
        puVar3 = &DAT_01882550;
        goto LAB_0101d194;
      }
      if (((*(undefined4 ****)(iVar7 + 0x38) <= local_3c) ||
          (piVar5 = (int *)(*(int *)(iVar7 + 0x34) + (int)local_3c * 0xf8),
          *piVar5 == 3 && piVar5[1] == 0)) || ((undefined4 ***)piVar5[0x35] != local_38)) {
LAB_0101d180:
        puVar3 = &DAT_01882560;
LAB_0101d194:
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00599806,&local_68,puVar3);
      }
      iVar8 = piVar5[0x1f];
      iVar6 = piVar5[0x20];
      uVar2 = piVar5[0x1e];
      piVar5[0x1e] = 0;
      if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018a6b60);
      }
      pppuVar4 = *(undefined4 ****)(iVar7 + 0x38);
      *(undefined4 *)(param_1 + 0x14) = 1;
      *(int *)(param_1 + 0x18) = iVar8;
      *(int *)(param_1 + 0x1c) = iVar6;
LAB_0101d008:
      if (((pppuVar4 <= local_3c) ||
          (piVar5 = (int *)(*(int *)(iVar7 + 0x34) + (int)local_3c * 0xf8),
          *piVar5 == 3 && piVar5[1] == 0)) || ((undefined4 ***)piVar5[0x35] != local_38))
      goto LAB_0101d180;
      *(undefined1 *)((int)piVar5 + 0xea) = 0;
      local_30 = iVar7;
      local_2c = local_3c;
      local_28 = local_38;
      if (((*(undefined4 ****)(iVar7 + 0x38) <= local_3c) ||
          (piVar5 = (int *)(*(int *)(iVar7 + 0x34) + (int)local_3c * 0xf8),
          *piVar5 == 3 && piVar5[1] == 0)) || ((undefined4 ***)piVar5[0x35] != local_38))
      goto LAB_0101d18c;
      cVar1 = *(byte *)(piVar5 + 8) - 6;
      if (*(byte *)(piVar5 + 8) < 6) {
        cVar1 = '\x06';
      }
      bVar11 = cVar1 == '\x05' || cVar1 == '\x03';
      if (cVar1 == '\x05' || cVar1 == '\x03') {
        bVar11 = *(char *)((int)piVar5 + 0x21) == '\x01';
      }
      if ((bVar11) || (piVar5[0x38] != 0)) {
        puVar9 = (undefined1 *)piVar5[6];
        FUN_0101d22c(param_1,&local_30);
        FUN_0102e068(param_4,&local_30,puVar9 != &DAT_3b9aca00);
        iVar10 = *(int *)(param_1 + 0x4c);
      }
    } while (0 < iVar10);
  }
  if (local_80 != 2) {
    iVar10 = local_7c;
    if ((local_80 & 1) != 0) {
      iVar10 = local_7c + (*(int *)(local_78 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_78 + 0x34))(iVar10,&local_88);
  }
  FUN_005c3320(&local_88);
  return;
}

