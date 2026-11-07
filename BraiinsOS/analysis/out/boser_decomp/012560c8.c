// FUN_012560c8 @ 012560c8 size=788 calls_out=11 calls_in=1
// strings: use_config_fallbackstruct ModelDetectionstruct PerformanceScalingV2struct PerformanceScalingV3

void FUN_012560c8(int *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined1 uVar7;
  bool bVar8;
  uint *local_78;
  uint *local_74;
  uint *local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  uint uStack_2c;
  undefined1 uStack_25;
  
  uVar2 = 0x15;
  if ((int)*param_2 < 0) {
    uVar2 = *param_2 ^ 0x80000000;
  }
  if (uVar2 == 0x14) {
    uVar2 = param_2[2];
    uVar6 = param_2[3];
    if (uVar6 == 0) {
      uVar4 = 0;
      FUN_0123c028(param_1,0,&DAT_01c24944,&DAT_01d064b8);
      local_38 = uVar2;
      if (*param_1 != 2) {
        return;
      }
    }
    else {
      FUN_0123e104(&local_68,uVar2);
      if (local_68 != 2) {
        FUN_01bed4e2((int)param_1 + 5,(int)&local_64 + 1,0x2b);
        *(undefined1 *)(param_1 + 1) = (undefined1)local_64;
        *param_1 = local_68;
        return;
      }
      uVar4 = 1;
      *(undefined1 *)(param_1 + 1) = (undefined1)local_64;
      local_38 = uVar2 + 0x10;
    }
    iStack_34 = uVar2 + uVar6 * 0x10;
    local_30 = uVar4;
    FUN_01223e04(&local_68,&local_38);
  }
  else {
    if (uVar2 != 0x15) {
      FUN_01222458(param_1,param_2,&uStack_25,&DAT_01c247b4);
      return;
    }
    local_78 = (uint *)param_2[1];
    local_6c = 0;
    local_74 = local_78 + param_2[2] * 8;
    local_70 = (uint *)0x0;
    if (param_2[2] == 0) {
      uVar7 = 2;
    }
    else {
      bVar8 = true;
      do {
        puVar3 = local_78 + 8;
        local_70 = local_78 + 4;
        local_6c = local_6c + 1;
        uVar2 = 0x15;
        if ((int)*local_78 < 0) {
          uVar2 = *local_78 ^ 0x80000000;
        }
        switch(uVar2) {
        case 1:
          if ((char)local_78[1] != '\0') {
            uStack_2c = 0;
LAB_01256288:
            local_38 = CONCAT31(local_38._1_3_,1);
            local_78 = puVar3;
            FUN_0123bf08(&local_68,&local_38,&DAT_01cfa484,&DAT_01d064b8);
            goto LAB_0125621c;
          }
          break;
        default:
          puVar1 = local_78;
          local_78 = puVar3;
          FUN_01222458(&local_68,puVar1,&uStack_25,&DAT_01c248b4);
          goto LAB_0125621c;
        case 4:
          if (local_78[2] != 0 || local_78[3] != 0) {
            uStack_2c = local_78[3];
            goto LAB_01256288;
          }
          break;
        case 0xc:
          uVar2 = local_78[2];
          uVar6 = local_78[3];
          goto LAB_0125620c;
        case 0xd:
          uVar2 = local_78[1];
          uVar6 = local_78[2];
LAB_0125620c:
          local_78 = puVar3;
          FUN_0125855c(&local_68,uVar2,uVar6);
LAB_0125621c:
          iVar5 = local_68;
          if (local_68 != 2) {
            FUN_01bed4e2((int)param_1 + 5,(int)&local_64 + 1,0x2b);
            *(undefined1 *)(param_1 + 1) = (undefined1)local_64;
            goto LAB_0125639c;
          }
          goto LAB_01256228;
        case 0xe:
          uVar2 = local_78[2];
          uVar6 = local_78[3];
          goto LAB_012561e0;
        case 0xf:
          uVar2 = local_78[1];
          uVar6 = local_78[2];
LAB_012561e0:
          local_78 = puVar3;
          FUN_01258404(&local_68,uVar2,uVar6);
          goto LAB_0125621c;
        }
        local_68 = 2;
        local_78 = puVar3;
LAB_01256228:
        if (!bVar8) {
          FUN_0123c090(param_1,
                       "use_config_fallbackstruct ModelDetectionstruct PerformanceScalingV2struct PerformanceScalingV3"
                       ,0x13);
          if (*param_1 != 2) {
            return;
          }
          goto LAB_01256330;
        }
        FUN_012227b0(&local_68,&local_78);
        iVar5 = local_68;
        if (local_68 != 2) {
          FUN_01bed4e2((int)param_1 + 5,(int)&local_64 + 1,0x2b);
          *(undefined1 *)(param_1 + 1) = (undefined1)local_64;
LAB_0125639c:
          *param_1 = iVar5;
          return;
        }
        bVar8 = false;
        uVar7 = (undefined1)local_64;
      } while (local_78 != local_74);
    }
    *(undefined1 *)(param_1 + 1) = uVar7;
LAB_01256330:
    FUN_01223db8(&local_68,&local_78);
  }
  if (local_68 == 2) {
    *param_1 = 2;
  }
  else {
    *param_1 = local_68;
    param_1[1] = local_64;
    param_1[2] = iStack_60;
    param_1[3] = iStack_5c;
    param_1[4] = iStack_58;
    param_1[5] = iStack_54;
    param_1[6] = local_50;
    param_1[7] = iStack_4c;
    param_1[8] = iStack_48;
    param_1[9] = iStack_44;
    param_1[10] = iStack_40;
    param_1[0xb] = iStack_3c;
  }
  return;
}

