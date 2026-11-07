// FUN_0102b338 @ 0102b338 size=1772 calls_out=10 calls_in=3
// strings: assertion failed: N::next(&stream).is_none()

/* WARNING: Type propagation algorithm not settling */

void FUN_0102b338(int param_1,int param_2,code ***param_3,undefined4 param_4)

{
  int iVar1;
  code ***pppcVar2;
  code ***pppcVar3;
  int *piVar4;
  code ***pppcVar5;
  undefined *puVar6;
  code **ppcVar7;
  bool bVar8;
  code **ppcVar9;
  code *pcVar10;
  code ***pppcVar11;
  code ***pppcVar12;
  code ***pppcVar13;
  code ***pppcVar14;
  int local_a8 [3];
  int local_9c [3];
  code ****local_90;
  code ***local_8c;
  code ***local_88;
  int local_84;
  int local_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  code ****local_70;
  code ***local_6c;
  code ***local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int local_58;
  undefined4 uStack_54;
  code ***local_50;
  code ***local_4c;
  code ***local_48;
  code ***local_40;
  code ***local_3c;
  code ****local_38;
  code *local_34;
  int local_30;
  code ***local_2c;
  code ***local_28;
  
  pppcVar14 = *(code ****)(param_1 + 0x38);
  pppcVar13 = *(code ****)(param_1 + 0x34);
  pppcVar2 = *(code ****)(param_1 + 0x2c);
  pppcVar3 = *(code ****)(param_1 + 0x30);
  if ((*(uint *)(param_1 + 0x28) & 1) != 0) {
    do {
      if (pppcVar2 == pppcVar13 && pppcVar3 == pppcVar14) {
        pppcVar5 = (code ***)param_3[0xe];
        local_50 = pppcVar13;
        local_4c = pppcVar14;
        if (pppcVar13 < pppcVar5) {
          ppcVar9 = param_3[0xd];
          ppcVar7 = ppcVar9 + (int)pppcVar13 * 0x3e;
          if ((*ppcVar7 != (code *)0x3 || ppcVar7[1] != (code *)0x0) &&
             ((code ***)ppcVar7[0x35] == pppcVar14)) {
            if (ppcVar7[0x27] == (code *)0x0) {
              bVar8 = false;
              *(undefined4 *)(param_1 + 0x28) = 0;
              pppcVar11 = pppcVar13;
              pppcVar12 = pppcVar14;
              goto LAB_0102b46c;
            }
            goto LAB_0102b964;
          }
        }
LAB_0102b990:
        puVar6 = &DAT_01882550;
        goto LAB_0102b9e0;
      }
      pppcVar5 = (code ***)param_3[0xe];
      if (pppcVar5 <= pppcVar2) {
LAB_0102b9d0:
        puVar6 = &DAT_01882560;
        local_50 = pppcVar2;
        local_4c = pppcVar3;
LAB_0102b9e0:
        local_8c = (code ***)FUN_0101a4ac;
        local_90 = &local_4c;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00599806,&local_90,puVar6);
      }
      ppcVar9 = param_3[0xd];
      ppcVar7 = ppcVar9 + (int)pppcVar2 * 0x3e;
      if ((*ppcVar7 == (code *)0x3 && ppcVar7[1] == (code *)0x0) ||
         ((code ***)ppcVar7[0x35] != pppcVar3)) goto LAB_0102b9d0;
      pcVar10 = ppcVar7[0x27];
      pppcVar11 = (code ***)ppcVar7[0x28];
      pppcVar12 = (code ***)ppcVar7[0x29];
      ppcVar7[0x27] = (code *)0x0;
      local_50 = pppcVar2;
      local_4c = pppcVar3;
      if (((uint)pcVar10 & 1) == 0) goto LAB_0102b958;
      bVar8 = true;
      *(undefined4 *)(param_1 + 0x28) = 1;
      *(code ****)(param_1 + 0x2c) = pppcVar11;
      *(code ****)(param_1 + 0x30) = pppcVar12;
LAB_0102b46c:
      if (pppcVar5 <= pppcVar2) goto LAB_0102b9d0;
      *(undefined1 *)((int)ppcVar9 + (int)pppcVar2 * 0xf8 + 0xef) = 0;
      local_70 = (code ****)param_3;
      local_6c = pppcVar2;
      local_68 = pppcVar3;
      local_50 = pppcVar2;
      local_4c = pppcVar3;
      if (((param_3[0xe] <= pppcVar2) ||
          (ppcVar7 = param_3[0xd] + (int)pppcVar2 * 0x3e,
          *ppcVar7 == (code *)0x3 && ppcVar7[1] == (code *)0x0)) ||
         ((code ***)ppcVar7[0x35] != pppcVar3)) goto LAB_0102b990;
      FUN_0102e068(param_4,&local_70,ppcVar7[6] != (code *)&DAT_3b9aca00);
      pppcVar2 = pppcVar11;
      pppcVar3 = pppcVar12;
    } while (bVar8);
  }
  while (FUN_0101aaac(local_a8,param_1 + 0x50,param_3), local_a8[0] != 0) {
    FUN_0102e068(param_4,local_a8,1);
  }
  if (param_2 != 0) {
    while (FUN_0101adf0(local_9c,param_1 + 0x3c,param_3), local_9c[0] != 0) {
      FUN_0102e068(param_4,local_9c,0);
    }
  }
  local_58 = DAT_018d80ac;
  local_68 = (code ***)0x2;
  if (DAT_018dd947 == '\0') {
    local_88 = (code ***)(DAT_018d80ac + 0x1c);
    local_8c = (code ***)0x0;
    local_90 = (code ****)0x4;
    FUN_01694880(&local_70,&local_90);
  }
  local_90 = local_70;
  local_8c = local_6c;
  local_88 = local_68;
  local_84 = iStack_64;
  local_80 = iStack_60;
  uStack_7c = uStack_5c;
  iStack_78 = local_58;
  uStack_74 = uStack_54;
  if (local_68 != (code ***)0x2) {
    if (((uint)local_68 & 1) != 0) {
      iStack_64 = iStack_64 + (*(int *)(iStack_60 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(iStack_60 + 0x30))(iStack_64,&local_90);
  }
  while (FUN_0101ac50(&local_50,param_1 + 0xcc,param_3), local_50 != (code ***)0x0) {
    local_68 = local_48;
    local_6c = local_4c;
    local_70 = (code ****)local_50;
    local_3c = local_48;
    local_40 = local_4c;
    if (((local_50[0xe] <= local_4c) ||
        (ppcVar7 = local_50[0xd] + (int)local_4c * 0x3e,
        *ppcVar7 == (code *)0x3 && ppcVar7[1] == (code *)0x0)) ||
       ((code ***)ppcVar7[0x35] != local_48)) {
      local_34 = FUN_0101a4ac;
      local_38 = &local_3c;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00599806,&local_38,&DAT_01882550);
    }
    FUN_0102e068(param_4,&local_70,ppcVar7[6] != (code *)&DAT_3b9aca00);
  }
  if (local_88 != (code ***)0x2) {
    iVar1 = local_84;
    if (((uint)local_88 & 1) != 0) {
      iVar1 = local_84 + (*(int *)(local_80 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_80 + 0x34))(iVar1,&local_90);
  }
  FUN_005c3320(&local_90);
  pppcVar13 = *(code ****)(param_1 + 200);
  pppcVar14 = *(code ****)(param_1 + 0xc4);
  pppcVar2 = *(code ****)(param_1 + 0xbc);
  pppcVar3 = *(code ****)(param_1 + 0xc0);
  if ((*(uint *)(param_1 + 0xb8) & 1) != 0) {
    do {
      if (pppcVar2 != pppcVar14 || pppcVar3 != pppcVar13) {
        pppcVar5 = (code ***)param_3[0xe];
        if (pppcVar2 < pppcVar5) {
          ppcVar9 = param_3[0xd];
          ppcVar7 = ppcVar9 + (int)pppcVar2 * 0x3e;
          if ((*ppcVar7 != (code *)0x3 || ppcVar7[1] != (code *)0x0) &&
             ((code ***)ppcVar7[0x35] == pppcVar3)) {
            pppcVar11 = (code ***)ppcVar7[0x19];
            pppcVar12 = (code ***)ppcVar7[0x1a];
            pcVar10 = ppcVar7[0x18];
            ppcVar7[0x18] = (code *)0x0;
            local_90 = (code ****)pppcVar2;
            local_8c = pppcVar3;
            if (((uint)pcVar10 & 1) == 0) {
LAB_0102b958:
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_018a6b60);
            }
            bVar8 = true;
            *(undefined4 *)(param_1 + 0xb8) = 1;
            *(code ****)(param_1 + 0xbc) = pppcVar11;
            *(code ****)(param_1 + 0xc0) = pppcVar12;
            goto LAB_0102b834;
          }
        }
LAB_0102b9fc:
        puVar6 = &DAT_01882560;
        local_90 = (code ****)pppcVar2;
        local_8c = pppcVar3;
        goto LAB_0102ba0c;
      }
      pppcVar5 = (code ***)param_3[0xe];
      local_90 = (code ****)pppcVar14;
      local_8c = pppcVar13;
      if (pppcVar5 <= pppcVar14) goto LAB_0102b97c;
      ppcVar9 = param_3[0xd];
      ppcVar7 = ppcVar9 + (int)pppcVar14 * 0x3e;
      if ((*ppcVar7 == (code *)0x3 && ppcVar7[1] == (code *)0x0) ||
         ((code ***)ppcVar7[0x35] != pppcVar13)) goto LAB_0102b97c;
      if (ppcVar7[0x18] != (code *)0x0) {
LAB_0102b964:
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: N::next(&stream).is_none()",0x2c,&DAT_018a6b70);
      }
      bVar8 = false;
      *(undefined4 *)(param_1 + 0xb8) = 0;
      pppcVar11 = pppcVar14;
      pppcVar12 = pppcVar13;
LAB_0102b834:
      if (pppcVar5 <= pppcVar2) goto LAB_0102b9fc;
      *(undefined1 *)((int)ppcVar9 + (int)pppcVar2 * 0xf8 + 0xe9) = 0;
      local_90 = (code ****)pppcVar2;
      local_8c = pppcVar3;
      if (((param_3[0xe] <= pppcVar2) ||
          (ppcVar7 = param_3[0xd] + (int)pppcVar2 * 0x3e,
          *ppcVar7 == (code *)0x3 && ppcVar7[1] == (code *)0x0)) ||
         ((code ***)ppcVar7[0x35] != pppcVar3)) goto LAB_0102b97c;
      local_70 = (code ****)param_3;
      local_6c = pppcVar2;
      local_68 = pppcVar3;
      FUN_0102e068(param_4,&local_70,ppcVar7[6] != (code *)&DAT_3b9aca00);
      pppcVar2 = pppcVar11;
      pppcVar3 = pppcVar12;
    } while (bVar8);
  }
  while( true ) {
    FUN_0101a90c(&local_30,param_1 + 0xe0,param_3);
    if (local_30 == 0) {
      return;
    }
    local_8c = local_28;
    local_90 = (code ****)local_2c;
    if (((*(code ****)(local_30 + 0x38) <= local_2c) ||
        (piVar4 = (int *)(*(int *)(local_30 + 0x34) + (int)local_2c * 0xf8),
        *piVar4 == 3 && piVar4[1] == 0)) || ((code ***)piVar4[0x35] != local_28)) break;
    FUN_0102e068(param_4,&local_30,(undefined1 *)piVar4[6] != &DAT_3b9aca00);
  }
LAB_0102b97c:
  puVar6 = &DAT_01882550;
LAB_0102ba0c:
  local_6c = (code ***)FUN_0101a4ac;
  local_70 = &local_8c;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_00599806,&local_70,puVar6);
}

