// FUN_0193b5a8 @ 0193b5a8 size=492 calls_out=8 calls_in=2
// strings: 

undefined8 FUN_0193b5a8(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int local_88;
  int *local_80;
  int *local_7c;
  undefined4 local_78;
  int *local_74;
  int local_70 [2];
  uint local_68 [3];
  char local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_78 = *param_2;
  local_80 = (int *)param_2[1];
  piVar3 = local_80 + param_2[2] * 3;
  local_7c = local_80;
  local_74 = piVar3;
  if (param_2[2] == 0) {
    local_88 = 0;
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    local_88 = 0;
    piVar8 = local_80;
    do {
      piVar9 = piVar8 + 3;
      iVar11 = *piVar8;
      if (iVar11 == -0x7fffffff) goto LAB_0193b768;
      iVar10 = piVar8[1];
      FUN_01aeffc4(local_70,iVar10,piVar8[2]);
      iVar1 = local_54;
      iVar4 = local_58;
      if (local_70[0] == 1) {
        uVar2 = 4;
        if ((int)local_68[0] < 0) {
          uVar2 = local_68[0] ^ 0x80000000;
        }
        if (uVar2 == 0x1b) {
          puVar7 = (undefined4 *)(local_54 + 4);
          for (iVar5 = local_50; iVar5 != 0; iVar5 = iVar5 + -1) {
            FUN_0134aee0(puVar7[-1],*puVar7,4,4);
            puVar7 = puVar7 + 3;
          }
          FUN_0134aee0(iVar4,iVar1,4,0xc);
        }
        else if (uVar2 == 4) {
          if ((local_5c == '\0') && (local_58 != -0x80000000)) {
            FUN_0134bd64(local_58,local_54);
          }
          FUN_006a41c0(local_68);
        }
        local_88 = local_88 + 1;
      }
      else {
        FUN_01938c94(&local_48,(uint)local_70 | 4);
        iVar4 = param_1[2];
        if (iVar4 == *param_1) {
          FUN_01ac589c(param_1);
        }
        puVar7 = (undefined4 *)(param_1[1] + iVar4 * 0x24);
        *puVar7 = local_48;
        puVar7[1] = uStack_44;
        puVar7[2] = uStack_40;
        puVar7[3] = uStack_3c;
        puVar7[4] = local_38;
        puVar7[5] = uStack_34;
        puVar7[6] = uStack_30;
        puVar7[7] = uStack_2c;
        puVar7[8] = uStack_28;
        param_1[2] = iVar4 + 1;
        FUN_0193b978((uint)local_70 | 4);
        iVar6 = iVar6 + 1;
      }
      if (iVar11 != -0x80000000) {
        FUN_0134bd64(iVar11,iVar10);
      }
      piVar8 = piVar9;
    } while (piVar9 != piVar3);
    piVar9 = piVar3;
LAB_0193b768:
    local_7c = piVar9;
  }
  FUN_0192f318(&local_80);
  return CONCAT44(local_88,iVar6);
}

